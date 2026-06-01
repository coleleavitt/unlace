__int64 *__fastcall sub_97E170(__int64 a1, int a2)
{
  char **v2; // r12
  char **exception; // r12
  unsigned int v4; // ebp
  int *v5; // rbx
  __int64 v6; // rdx
  int v7; // r12d
  __int64 v8; // rax
  int *v9; // rax
  __int64 v10; // r15
  int v11; // r12d
  __int64 v12; // r12
  int v13; // eax
  unsigned int v14; // ebp
  _QWORD *v15; // rax
  __m128i v16; // xmm0
  _QWORD *v17; // r13
  __int64 v18; // rbp
  __int64 v19; // r14
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r12
  char v27; // al
  __int64 *result; // rax
  __int64 v29; // rbp
  __int64 v30; // r12
  __int64 v31; // r12
  __int64 v32; // rdi
  unsigned int v33; // r14d
  size_t v34; // rsi
  unsigned int *v35; // rax
  _QWORD *v36; // rax
  unsigned int v37; // ebp
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  unsigned int v42; // [rsp+Ch] [rbp-BCh]
  unsigned int v43; // [rsp+18h] [rbp-B0h]
  _QWORD *v44; // [rsp+18h] [rbp-B0h]
  __int64 v45[4]; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v46; // [rsp+50h] [rbp-78h] BYREF
  char v47; // [rsp+58h] [rbp-70h]
  int v48; // [rsp+5Ch] [rbp-6Ch]
  __int64 v49; // [rsp+60h] [rbp-68h]
  int v50; // [rsp+68h] [rbp-60h]
  __int64 v51; // [rsp+70h] [rbp-58h]
  int v52; // [rsp+78h] [rbp-50h]
  __int64 v53; // [rsp+80h] [rbp-48h]
  unsigned int v54; // [rsp+88h] [rbp-40h]

  v4 = 0;
  v5 = nullptr;
  v6 = *(_QWORD *)(a1 + 736);
  ++*(_DWORD *)(a1 + 948);
  v42 = 2 * a2 + 1;
  if ( v6 )
  {
    while ( v4 < *(_DWORD *)(v6 - 4) )
    {
      v7 = 2 * *(_DWORD *)(*(_QWORD *)(a1 + 880) + 4LL * *(unsigned int *)(v6 + 4LL * v4));
      if ( v5 )
      {
        v8 = (unsigned int)*(v5 - 1);
        if ( (_DWORD)v8 == *(v5 - 2) )
        {
          v33 = (unsigned int)(3 * v8 + 1) >> 1;
          v34 = 4 * v33 + 8;
          if ( 4 * (int)v8 + 8 >= (unsigned int)v34 || (unsigned int)v8 >= v33 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v46, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v46);
            sub_233E40((__int64)&v46);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v35 = (unsigned int *)sub_186B300(v5 - 2, v34);
          v5 = (int *)(v35 + 2);
          *v35 = v33;
          v6 = *(_QWORD *)(a1 + 736);
          v9 = (int *)&v35[v35[1] + 2];
        }
        else
        {
          v9 = &v5[v8];
        }
      }
      else
      {
        v36 = (_QWORD *)sub_186B270(0x10u);
        *v36 = 2;
        v9 = (int *)(v36 + 1);
        v6 = *(_QWORD *)(a1 + 736);
        v5 = v9;
      }
      *v9 = v7;
      ++v4;
      ++*(v5 - 1);
      if ( !v6 )
      {
        v10 = *(_QWORD *)(a1 + 16);
LABEL_8:
        v6 = (unsigned int)*(v5 - 1);
        goto LABEL_9;
      }
    }
    v10 = *(_QWORD *)(a1 + 16);
    if ( v5 )
      goto LABEL_8;
    v6 = 0;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
  }
LABEL_9:
  v11 = *(_DWORD *)(a1 + 8);
  sub_B72D60(&v46, v10, v6, v5, 0, 0);
  v52 = v11;
  v53 = 0;
  v46 = (__int64 *)&off_1C57938;
  v54 = v42;
  sub_B733F0(&v46, v10);
  v12 = sub_180C100(v10 + 8400, 64);
  *(_BYTE *)(v12 + 8) = v47 & 3 | *(_BYTE *)(v12 + 8) & 0xFC;
  *(_DWORD *)(v12 + 12) = v48;
  *(_QWORD *)(v12 + 16) = v49;
  *(_DWORD *)(v12 + 24) = v50;
  *(_QWORD *)(v12 + 32) = v51;
  *(_QWORD *)v12 = qword_1C6E7C8;
  v13 = v52;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 40) = v13;
  if ( !v53 )
  {
    *(_QWORD *)v12 = &off_1C57938;
    *(_DWORD *)(v12 + 56) = v54;
    goto LABEL_19;
  }
  v14 = *(_DWORD *)(v53 - 4);
  v43 = *(_DWORD *)(v53 - 8);
  v15 = (_QWORD *)sub_186B270(16LL * v43 + 8);
  v16 = _mm_cvtsi32_si128(v43);
  v17 = v15 + 1;
  v44 = v15 + 1;
  *v15 = _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(v14)).m128i_u64[0];
  *(_QWORD *)(v12 + 48) = v15 + 1;
  v18 = v53;
  if ( !v53 || (v19 = v53 + 16LL * *(unsigned int *)(v53 - 4), v53 == v19) )
  {
    *(_QWORD *)v12 = &off_1C57938;
    *(_DWORD *)(v12 + 56) = v54;
  }
  else
  {
    do
    {
      sub_15D0E50(v17, v18);
      v18 += 16;
      v17 += 2;
    }
    while ( v19 != v18 );
    v44 = *(_QWORD **)(v12 + 48);
    *(_QWORD *)v12 = &off_1C57938;
    *(_DWORD *)(v12 + 56) = v54;
    if ( !v44 )
      goto LABEL_19;
  }
  if ( *((_DWORD *)v44 - 1) )
  {
    v20 = *(_QWORD **)(v10 + 8600);
    if ( v20 )
    {
      v21 = *((_DWORD *)v20 - 1);
      if ( v21 == *((_DWORD *)v20 - 2) )
      {
        v37 = (3 * v21 + 1) >> 1;
        v38 = 8 * v37 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v38 || v21 >= v37 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v45, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v45);
          sub_233E40((__int64)v45);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v39 = (unsigned int *)sub_186B300(v20 - 1, v38);
        v40 = v39[1];
        v20 = v39 + 2;
        *(_QWORD *)(v10 + 8600) = v39 + 2;
        *v39 = v37;
        LODWORD(v39) = v40;
        v24 = &v20[v40];
        v23 = (_DWORD)v39 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v20[v22];
      }
    }
    else
    {
      v41 = (_QWORD *)sub_186B270(0x18u);
      v20 = v41 + 1;
      *v41 = 2;
      v23 = 1;
      *(_QWORD *)(v10 + 8600) = v20;
      v24 = v20;
    }
    *v24 = v12;
    *((_DWORD *)v20 - 1) = v23;
  }
LABEL_19:
  v25 = *(_QWORD *)(v10 + 8848);
  v26 = v12 | 3;
  v45[0] = v26;
  v27 = *(_BYTE *)(v25 + v42);
  if ( v27 == -1 )
  {
    sub_8E8670(v10, v45, v42 ^ 1);
  }
  else if ( !v27 )
  {
    sub_8F28B0(v10, v42, v26, 0);
  }
  result = qword_1C6E7C8;
  v29 = v53;
  v46 = qword_1C6E7C8;
  if ( v53 )
  {
    v30 = *(unsigned int *)(v53 - 4);
    if ( (_DWORD)v30 )
    {
      v31 = v53 + 16 * v30;
      do
      {
        v32 = v29;
        v29 += 16;
        sub_15D0DF0(v32);
      }
      while ( v31 != v29 );
      v29 = v53;
    }
    result = (__int64 *)sub_186B220((void *)(v29 - 8));
  }
  if ( v5 )
    return (__int64 *)sub_186B220(v5 - 2);
  return result;
}

