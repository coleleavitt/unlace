__int64 __fastcall sub_3B1960(__int64 *a1, __int64 a2, _QWORD *a3)
{
  char **exception; // r12
  __int64 v4; // rdx
  char **v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r15
  _QWORD *v8; // rax
  void *v9; // r13
  __int64 v10; // rdi
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r12
  _BYTE *v27; // rcx
  unsigned int v28; // ebp
  _QWORD *v29; // rsi
  __int64 v30; // rax
  unsigned int *v31; // rax
  __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rcx
  __int64 i; // rbp
  __int64 v37; // rsi
  _QWORD *v38; // rsi
  unsigned int v39; // eax
  unsigned int v40; // r8d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  unsigned __int64 v46; // rax
  unsigned int v47; // ecx
  unsigned int *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // [rsp+0h] [rbp-B8h]
  unsigned int v51; // [rsp+0h] [rbp-B8h]
  unsigned int v53; // [rsp+10h] [rbp-A8h]
  __int64 v54[7]; // [rsp+20h] [rbp-98h] BYREF
  __m128i v55; // [rsp+58h] [rbp-60h]
  _QWORD *v56; // [rsp+68h] [rbp-50h]
  __int64 v57; // [rsp+70h] [rbp-48h]
  int v58; // [rsp+78h] [rbp-40h]

  v7 = *a1;
  v54[0] = *a1 + 32;
  v54[1] = a2;
  v54[2] = v7;
  v54[3] = 0;
  v54[4] = 0;
  v55 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v7 + 32), (__m128i)(unsigned __int64)(v7 + 32));
  v8 = (_QWORD *)sub_186B270(0x80u);
  v8[1] = 0;
  v9 = v8;
  v10 = *(_QWORD *)(v7 + 600);
  v8[3] = 0;
  v8[5] = 0;
  v8[7] = 0;
  v8[9] = 0;
  v8[11] = 0;
  v8[13] = 0;
  v8[15] = 0;
  v56 = v8;
  v57 = 8;
  v58 = 0;
  v11 = sub_182A670(v10, a2);
  v12 = *(unsigned int *)(v7 + 624);
  v13 = *(_QWORD *)(v7 + 616);
  v14 = v12 - 1;
  v12 *= 16;
  v15 = v13 + v12;
  v16 = 16LL * (v11 & v14);
  v17 = v13 + v16;
  if ( v16 != v12 )
  {
    v13 += v16;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v13 + 8);
      if ( v18 > 1 )
      {
        if ( v11 == *(_DWORD *)v13 && (unsigned __int8)sub_182A660(*(_QWORD *)(v7 + 608), *(_QWORD *)(v18 + 8), a2) )
        {
LABEL_26:
          v44 = *(_QWORD *)(v7 + 616) + 16LL * *(unsigned int *)(v7 + 624);
          if ( v13 == v44 )
          {
            v19 = *(_QWORD *)(v13 + 8);
          }
          else
          {
            while ( 1 )
            {
              v19 = *(_QWORD *)(v13 + 8);
              if ( v19 > 1 )
                break;
              if ( v13 + 16 == v44 )
              {
                v19 = *(_QWORD *)(v13 + 24);
                goto LABEL_9;
              }
              v13 += 16;
            }
          }
          goto LABEL_9;
        }
      }
      else if ( !v18 )
      {
LABEL_7:
        v13 = *(_QWORD *)(v7 + 616);
        goto LABEL_8;
      }
      v13 += 16;
      if ( v15 == v13 )
      {
        v13 = *(_QWORD *)(v7 + 616);
        break;
      }
    }
  }
  if ( v17 != v13 )
  {
    while ( 1 )
    {
      v46 = *(_QWORD *)(v13 + 8);
      if ( v46 > 1 )
      {
        if ( v11 == *(_DWORD *)v13 && (unsigned __int8)sub_182A660(*(_QWORD *)(v7 + 608), *(_QWORD *)(v46 + 8), a2) )
          goto LABEL_26;
      }
      else if ( !v46 )
      {
        goto LABEL_7;
      }
      v13 += 16;
      if ( v17 == v13 )
        goto LABEL_7;
    }
  }
LABEL_8:
  v19 = *(_QWORD *)(v13 + 16LL * *(unsigned int *)(v7 + 624) + 8);
LABEL_9:
  sub_186B220(v9);
  v20 = (_QWORD *)sub_186B270(0x18u);
  v20[1] = v19;
  v21 = v20 + 1;
  *v20 = 0x100000002LL;
  v22 = 1;
  while ( v22 )
  {
    v23 = (unsigned int)(v22 - 1);
    v24 = *(_QWORD *)(v7 + 640);
    v25 = v21[v23];
    *((_DWORD *)v21 - 1) = v23;
    --v22;
    v26 = *(unsigned int *)(v25 + 36);
    v27 = (_BYTE *)(v26 + v24);
    v28 = *(_DWORD *)(v25 + 36);
    if ( !*v27 )
    {
      v29 = (_QWORD *)*a3;
      if ( *a3 )
      {
        v30 = *((unsigned int *)v29 - 1);
        if ( (_DWORD)v30 == *((_DWORD *)v29 - 2) )
        {
          v47 = (unsigned int)(3 * v30 + 1) >> 1;
          if ( 4 * (int)v30 + 8 >= 4 * v47 + 8 || (unsigned int)v30 >= v47 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C7E7E(v54, "Overflow encountered when expanding vector", v4);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v54);
            sub_233E40((__int64)v54);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v51 = (unsigned int)(3 * v30 + 1) >> 1;
          v48 = (unsigned int *)sub_186B300(v29 - 1, 4 * v47 + 8);
          v29 = v48 + 2;
          *a3 = v48 + 2;
          *v48 = v51;
          v27 = (_BYTE *)(v26 + *(_QWORD *)(v7 + 640));
          v31 = &v48[v48[1] + 2];
        }
        else
        {
          v31 = (unsigned int *)v29 + v30;
        }
      }
      else
      {
        v49 = (_QWORD *)sub_186B270(0x10u);
        *v49 = 2;
        v29 = v49 + 1;
        v27 = (_BYTE *)(v26 + *(_QWORD *)(v7 + 640));
        *a3 = v49 + 1;
        v31 = (unsigned int *)(v49 + 1);
      }
      *v31 = v28;
      ++*((_DWORD *)v29 - 1);
      v32 = *(__int64 **)(v25 + 24);
      *v27 = 1;
      if ( v32 && (v33 = *((unsigned int *)v32 - 1), (_DWORD)v33) )
      {
        v34 = *v32;
        v35 = 8 * v33;
        for ( i = 0; ; v34 = *(_QWORD *)(*(_QWORD *)(v25 + 24) + i) )
        {
          v39 = *((_DWORD *)v21 - 1);
          if ( v39 == *((_DWORD *)v21 - 2) )
          {
            v40 = (3 * v39 + 1) >> 1;
            v41 = 8 * v40 + 8;
            if ( 8 * v39 + 8 >= (unsigned int)v41 || v39 >= v40 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_C7E7E(v54, "Overflow encountered when expanding vector", v6);
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v54);
              sub_233E40((__int64)v54);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v53 = (3 * v39 + 1) >> 1;
            v50 = v35;
            v42 = (unsigned int *)sub_186B300(v21 - 1, v41);
            v43 = v42[1];
            v21 = v42 + 2;
            v35 = v50;
            *v42 = v53;
            LODWORD(v42) = v43;
            v38 = &v21[v43];
            v22 = (_DWORD)v42 + 1;
          }
          else
          {
            v37 = v39;
            v22 = v39 + 1;
            v38 = &v21[v37];
          }
          i += 8;
          *v38 = v34;
          *((_DWORD *)v21 - 1) = v22;
          if ( v35 == i )
            break;
        }
      }
      else
      {
        v22 = *((_DWORD *)v21 - 1);
      }
    }
  }
  return sub_186B220(v21 - 1);
}

