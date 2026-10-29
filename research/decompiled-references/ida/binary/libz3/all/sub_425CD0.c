unsigned __int64 __fastcall sub_425CD0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned int *v3; // rax
  __int64 v4; // rcx
  unsigned int *v5; // r15
  __int64 v6; // r13
  unsigned int v7; // edi
  __int64 v8; // r9
  unsigned int v9; // esi
  unsigned __int64 *v10; // rbx
  unsigned __int64 *v11; // r13
  unsigned int v12; // esi
  __int64 v13; // r14
  unsigned __int64 *v14; // r10
  __int64 *v15; // rbp
  __int64 *v16; // r12
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 *v19; // rax
  unsigned __int64 *v20; // r11
  char *v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 *v23; // r12
  char *v24; // r14
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  unsigned __int64 *v28; // rsi
  unsigned __int64 *v29; // rbp
  unsigned __int64 v30; // rdx
  char *v31; // r12
  char *v32; // r12
  char *v33; // rbp
  __int64 v34; // rdi
  unsigned int v35; // eax
  __int64 *v36; // rsi
  __m128i v37; // xmm0
  __int64 v38; // rax
  unsigned __int64 result; // rax
  __int64 v40; // rdx
  __int64 *v41; // rdx
  unsigned int v42; // edi
  int v43; // edi
  unsigned int v44; // ebx
  unsigned int *v45; // rax
  __m128i v46; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+10h] [rbp-98h]
  __int64 v48; // [rsp+18h] [rbp-90h]
  __int64 v49; // [rsp+20h] [rbp-88h]
  unsigned int v50; // [rsp+2Ch] [rbp-7Ch]
  _QWORD *v51; // [rsp+30h] [rbp-78h]
  unsigned __int64 *v52; // [rsp+38h] [rbp-70h]
  __int64 v53; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v54[10]; // [rsp+58h] [rbp-50h] BYREF

  v51 = (_QWORD *)a1;
  v46.m128i_i64[0] = a2;
  v3 = (unsigned int *)sub_4252D0(a1, a2);
  v4 = a2;
  v5 = v3;
  v6 = v3[2];
  v7 = v3[4];
  v8 = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  LODWORD(v3) = v3[3];
  v9 = 2 * v6;
  v54[0] = 0;
  v50 = 2 * v6;
  v53 = v8;
  if ( 3 * (int)v6 < 4 * (v7 + (unsigned int)v3) )
  {
    v48 = v46.m128i_i64[0];
    v46.m128i_i64[0] = v8;
    v47 = 16LL * v9;
    v19 = (unsigned __int64 *)sub_186B270(v47);
    v8 = v46.m128i_i64[0];
    v4 = v48;
    v10 = v19;
    v20 = (unsigned __int64 *)((char *)v19 + v47);
    if ( v9 )
    {
      if ( (v47 & 0x10) == 0 || (*(_OWORD *)v19 = 0, v19 += 2, v20 != v19) )
      {
        do
        {
          *(_OWORD *)v19 = 0;
          v19 += 4;
          *((_OWORD *)v19 - 1) = 0;
        }
        while ( v20 != v19 );
      }
    }
    v21 = *(char **)v5;
    v11 = v20;
    v22 = v5[2];
    v23 = (unsigned __int64 *)(*(_QWORD *)v5 + 8LL);
    v24 = (char *)(*(_QWORD *)v5 + 16 * v22);
    v46.m128i_i32[0] = v50 - 1;
    if ( v21 == v24 )
    {
LABEL_37:
      if ( v24 )
      {
        if ( (_DWORD)v22 )
        {
          v32 = v24;
          v33 = &v24[16 * v22];
          do
          {
            while ( 1 )
            {
              v34 = *((_QWORD *)v32 + 1);
              if ( !v34 )
                break;
              v32 += 16;
              v49 = v4;
              v48 = v8;
              sub_186B220((void *)(v34 - 8));
              v8 = v48;
              v4 = v49;
              if ( v33 == v32 )
                goto LABEL_42;
            }
            v32 += 16;
          }
          while ( v32 != v33 );
        }
LABEL_42:
        v49 = v4;
        v48 = v8;
        sub_186B220(v24);
        v8 = v48;
        v4 = v49;
      }
      v35 = v50;
      *(_QWORD *)v5 = v10;
      v7 = 0;
      v5[4] = 0;
      v5[2] = v35;
      goto LABEL_3;
    }
    while ( 1 )
    {
      v26 = *(v23 - 1);
      if ( v26 <= 1 )
      {
LABEL_25:
        v25 = v23 + 2;
        if ( v24 == (char *)(v23 + 1) )
          goto LABEL_36;
        goto LABEL_26;
      }
      v27 = 16LL * (unsigned int)(*(_DWORD *)(v26 + 12) & v46.m128i_i32[0]);
      v28 = &v10[(unsigned __int64)v27 / 8];
      if ( v47 == v27 )
      {
LABEL_44:
        if ( v10 == v28 )
        {
LABEL_65:
          v52 = v20;
          v49 = v4;
          v48 = v8;
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v29 = v10;
        while ( *v29 )
        {
          v29 += 2;
          if ( v28 == v29 )
            goto LABEL_65;
        }
        *v29 = v26;
        if ( v23 == v29 + 1 )
          goto LABEL_25;
        v30 = v29[1];
        if ( v30 )
          goto LABEL_34;
      }
      else
      {
        v29 = &v10[(unsigned __int64)v27 / 8];
        while ( *v29 )
        {
          v29 += 2;
          if ( v20 == v29 )
            goto LABEL_44;
        }
        *v29 = v26;
        if ( v23 == v29 + 1 )
          goto LABEL_25;
        v30 = v29[1];
        if ( v30 )
        {
LABEL_34:
          v52 = v20;
          v49 = v4;
          v48 = v8;
          sub_186B220((void *)(v30 - 8));
          v20 = v52;
          v4 = v49;
          v8 = v48;
        }
      }
      v29[1] = 0;
      v29[1] = *v23;
      v25 = v23 + 2;
      v31 = (char *)(v23 + 1);
      *((_QWORD *)v31 - 1) = 0;
      if ( v24 == v31 )
      {
LABEL_36:
        v22 = v5[2];
        v24 = *(char **)v5;
        goto LABEL_37;
      }
LABEL_26:
      v23 = v25;
    }
  }
  v10 = *(unsigned __int64 **)v5;
  v46.m128i_i32[0] = v6 - 1;
  v47 = 16 * v6;
  v11 = &v10[2 * v6];
LABEL_3:
  v12 = *(_DWORD *)(v8 + 12);
  v13 = 16LL * (v12 & v46.m128i_i32[0]);
  v14 = &v10[(unsigned __int64)v13 / 8];
  if ( v13 == v47 )
  {
    v16 = nullptr;
    while ( 1 )
    {
LABEL_14:
      if ( v14 == v10 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v18 = *v10;
      if ( *v10 > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v12 && v8 == v18 )
        {
          v36 = (__int64 *)v10[1];
          v15 = (__int64 *)v10;
          goto LABEL_72;
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( v16 )
            v5[4] = v7 - 1;
          else
            v16 = (__int64 *)v10;
          *v16 = v8;
          v36 = (__int64 *)v16[1];
          if ( v54 != v16 + 1 )
          {
            if ( v36 )
              goto LABEL_57;
            goto LABEL_58;
          }
          goto LABEL_86;
        }
        v16 = (__int64 *)v10;
      }
      v10 += 2;
    }
  }
  v15 = (__int64 *)&v10[(unsigned __int64)v13 / 8];
  v16 = nullptr;
  while ( 1 )
  {
    v17 = *v15;
    if ( (unsigned __int64)*v15 <= 1 )
      break;
    if ( *(_DWORD *)(v17 + 12) == v12 && v8 == v17 )
    {
      v36 = (__int64 *)v15[1];
      goto LABEL_72;
    }
LABEL_7:
    v15 += 2;
    if ( v11 == (unsigned __int64 *)v15 )
      goto LABEL_14;
  }
  if ( v17 )
  {
    v16 = v15;
    goto LABEL_7;
  }
  if ( v16 )
    v5[4] = v7 - 1;
  else
    v16 = v15;
  *v16 = v8;
  v36 = (__int64 *)v16[1];
  if ( v54 != v16 + 1 )
  {
    if ( !v36 )
      goto LABEL_58;
LABEL_57:
    v46.m128i_i64[0] = v4;
    sub_186B220(v36 - 1);
    v4 = v46.m128i_i64[0];
LABEL_58:
    v16[1] = 0;
    ++v5[3];
    v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
LABEL_59:
    v47 = v4;
    v46 = v37;
    v38 = sub_186B270(0x18u);
    v4 = v47;
    v37 = _mm_load_si128(&v46);
    *(_QWORD *)v38 = 2;
    v16[1] = v38 + 8;
    *(_QWORD *)(v38 + 8) = v4;
    *(_DWORD *)(v38 + 4) = 1;
LABEL_60:
    result = v51[2];
    if ( result )
    {
      if ( !*(_BYTE *)v51 )
        result = *(_QWORD *)(result + 24);
      if ( result == v4 )
      {
        *(__m128i *)(v4 + 24) = v37;
      }
      else
      {
        v40 = *(_QWORD *)(result + 24);
        *(_QWORD *)(v4 + 24) = v40;
        *(_QWORD *)(v40 + 32) = v4;
        *(_QWORD *)(result + 24) = v4;
        *(_QWORD *)(v4 + 32) = result;
      }
    }
    else
    {
      result = (unsigned __int64)v51;
      v51[2] = v4;
      *(__m128i *)(v4 + 24) = v37;
    }
    return result;
  }
LABEL_86:
  ++v5[3];
  v15 = v16;
LABEL_72:
  v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
  if ( !v36 )
  {
    v16 = v15;
    goto LABEL_59;
  }
  result = *((unsigned int *)v36 - 1);
  v41 = &v36[result];
  v42 = *((_DWORD *)v36 - 1);
  if ( v41 == v36 )
  {
LABEL_78:
    if ( v42 == *((_DWORD *)v36 - 2) )
    {
      v44 = (3 * v42 + 1) >> 1;
      if ( 8 * v42 + 8 >= 8 * v44 + 8 || v42 >= v44 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v53, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v53);
        sub_233E40((__int64)&v53);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v47 = v4;
      v46 = v37;
      v45 = (unsigned int *)sub_186B300(v36 - 1, 8 * v44 + 8);
      v37 = _mm_load_si128(&v46);
      v4 = v47;
      v36 = (__int64 *)(v45 + 2);
      v15[1] = (__int64)(v45 + 2);
      *v45 = v44;
      result = v45[1];
      v41 = &v36[result];
      v43 = result + 1;
    }
    else
    {
      v43 = v42 + 1;
    }
    *v41 = v4;
    *((_DWORD *)v36 - 1) = v43;
    if ( v43 == 1 )
      goto LABEL_60;
    *(_BYTE *)(v4 + 48) = 1;
  }
  else
  {
    result = (unsigned __int64)v36;
    while ( *(_QWORD *)result != v4 )
    {
      result += 8LL;
      if ( (__int64 *)result == v41 )
        goto LABEL_78;
    }
  }
  return result;
}

