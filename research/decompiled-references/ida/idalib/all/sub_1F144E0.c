__int64 __fastcall sub_1F144E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 *v8; // rsi
  __int64 v9; // rdi
  _QWORD *v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 *v20; // r12
  __int64 *i; // r15
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rsi
  __int64 v30; // r15
  void *v31; // rdi
  void **v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  void **v35; // rdi
  void **v36; // r12
  void **v37; // rdi
  __int64 v38; // rdi
  void **v39; // rdi
  void **v40; // r12
  void **v41; // rdi
  __int64 v42; // rax
  __int64 (__fastcall *v43)(__int64); // rdx
  __int64 (__fastcall *v44)(__int64); // rax
  int v45; // eax
  unsigned __int64 *v46; // rbx
  unsigned __int64 v47; // r12
  __int64 (__fastcall *v48)(__int64, __int64, unsigned __int64, __int64, __int64, __int64); // rdx
  __int64 (__fastcall *v49)(__int64, __int64, unsigned __int64, __int64, __int64, __int64); // rax
  int v50; // eax
  int v51; // eax
  int v53; // esi
  int v54; // r10d
  __int64 v55; // rdi
  __int64 v56; // rdi
  unsigned __int64 *v57; // [rsp+8h] [rbp-C0h]
  void *v58; // [rsp+8h] [rbp-C0h]
  void **v59; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  int v61; // [rsp+18h] [rbp-B0h]
  _BYTE v62[32]; // [rsp+20h] [rbp-A8h] BYREF
  __m128 v63; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v64[120]; // [rsp+50h] [rbp-78h] BYREF

  v5 = *(unsigned int *)(a2 + 16);
  v6 = *(_QWORD *)a2;
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
    v8 = (__int64 *)(v6 + 24LL * v7);
    v9 = *v8;
    if ( a3 == *v8 )
    {
LABEL_3:
      sub_1ECCBC0(&v63, v8, (_QWORD *)(v6 + 24 * v5), a2, 1);
      v10 = (_QWORD *)v63.m128_u64[0];
      goto LABEL_4;
    }
    v53 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v54 = v53 + 1;
        v7 = (v5 - 1) & (v53 + v7);
        v8 = (__int64 *)(v6 + 24LL * v7);
        v55 = *v8;
        if ( a3 == *v8 )
          goto LABEL_3;
        v53 = v54;
      }
      while ( v55 != -4096 );
    }
  }
  sub_1ECCBC0(&v63, (_QWORD *)(v6 + 24 * v5), (_QWORD *)(v6 + 24 * v5), a2, 1);
  v10 = (_QWORD *)v63.m128_u64[0];
LABEL_4:
  v11 = 0;
  sub_1ECCBC0(
    &v63,
    (_QWORD *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( v10 == (_QWORD *)v63.m128_u64[0] )
    return v11;
  v57 = v10 + 1;
  sub_1F00840((__int64 **)&ptr, (__int64)(v10 + 1), v12, v13, v14, v15);
  v63.m128_u64[0] = (unsigned __int64)v64;
  v63.m128_u64[1] = 0x800000000LL;
  if ( v61 )
  {
    sub_1EB3E90((char ***)&v63, (char ***)&ptr);
    v16 = ptr;
    if ( ptr == v62 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v16 = ptr;
  if ( ptr != v62 )
LABEL_7:
    free(v16);
LABEL_8:
  v17 = sub_1EB3E40(v57) != 0;
  v18 = sub_1EAA820(v57, v17);
  v20 = v19;
  for ( i = (__int64 *)v18; v20 != i; ++i )
  {
    v22 = *i;
    v17 = 56;
    operator delete((void *)(v22 & 0xFFFFFFFFFFFFFFF8LL), 0x38u);
  }
  v23 = sub_1EB3E40(v57);
  if ( v23 )
  {
    v27 = *(unsigned int *)(v23 + 40);
    v28 = *(_QWORD *)(v23 + 24);
    v29 = 56 * v27;
    if ( (_DWORD)v27 )
    {
      v30 = v28 + 56 * v27;
      do
      {
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)v28 + 2) > 1 )
          {
            v31 = *(void **)(v28 + 8);
            if ( v31 != (void *)(v28 + 24) )
              break;
          }
          v28 += 56;
          if ( v30 == v28 )
            goto LABEL_17;
        }
        v28 += 56;
        v58 = (void *)v23;
        free(v31);
        v23 = (unsigned __int64)v58;
      }
      while ( v30 != v28 );
LABEL_17:
      v28 = *(_QWORD *)(v23 + 24);
      v29 = 56LL * *(unsigned int *)(v23 + 40);
    }
    v59 = (void **)v23;
    operator delete(v28, v29, 8);
    v32 = v59;
    if ( *v59 )
    {
      operator delete(*v59);
      v32 = v59;
    }
    v17 = 48;
    operator delete(v32, 0x30u);
  }
  v33 = v10[1];
  if ( (v33 & 2) != 0 )
    *(_DWORD *)((v33 & 0xFFFFFFFFFFFFFFFCLL) + 8) = 0;
  else
    v10[1] = 0;
  v34 = v10[2];
  if ( v34 )
  {
    if ( (v34 & 4) != 0 )
    {
      v35 = (void **)(v34 & 0xFFFFFFFFFFFFFFF8LL);
      v36 = v35;
      if ( v35 )
      {
        v37 = (void **)*v35;
        if ( v37 != v36 + 2 )
          free(v37);
        v17 = 48;
        operator delete(v36, 0x30u);
      }
    }
  }
  v38 = v10[1];
  if ( v38 )
  {
    if ( (v38 & 2) != 0 )
    {
      v39 = (void **)(v38 & 0xFFFFFFFFFFFFFFFCLL);
      v40 = v39;
      if ( v39 )
      {
        v41 = (void **)*v39;
        if ( v41 != v40 + 2 )
          free(v41);
        v17 = 48;
        operator delete(v40, 0x30u);
      }
    }
  }
  v42 = *(_QWORD *)(a1 + 24);
  v43 = sub_1EA8950;
  *v10 = -8192;
  --*(_DWORD *)(a2 + 8);
  v44 = *(__int64 (__fastcall **)(__int64))(v42 + 184);
  ++*(_DWORD *)(a2 + 12);
  if ( v44 == sub_1EA8950 )
  {
    v45 = *(_DWORD *)(a1 + 9408) + 1;
    *(_DWORD *)(a1 + 9408) = v45;
    if ( v45 == 1 )
    {
      v56 = *(_QWORD *)(a1 + 496);
      if ( v56 )
        sub_224E010(v56);
    }
  }
  else
  {
    v44(a1 + 24);
  }
  v46 = (unsigned __int64 *)v63.m128_u64[0];
  v11 = 0;
  v47 = v63.m128_u64[0] + 8LL * v63.m128_u32[2];
  if ( v63.m128_u64[0] != v47 )
  {
    do
    {
      while ( 1 )
      {
        v17 = *v46;
        if ( !sub_1EDB740(a1, *v46, (__int64)v43, v24, v25, v26) )
          break;
        if ( (unsigned __int64 *)v47 == ++v46 )
          goto LABEL_42;
      }
      v17 = *v46++;
      v11 = 1;
      sub_1EDB980((_QWORD *)a1, v17, (__int64)v43, v24, v25, v26);
    }
    while ( (unsigned __int64 *)v47 != v46 );
  }
LABEL_42:
  v48 = sub_1F14160;
  v49 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 24)
                                                                                                + 192LL);
  if ( v49 == sub_1F14160 )
  {
    v50 = *(_DWORD *)(a1 + 9408);
    if ( v50 == 1 )
    {
      sub_1F10680((std::_V2 *)a1);
      v50 = *(_DWORD *)(a1 + 9408);
    }
    v51 = v50 - 1;
    *(_DWORD *)(a1 + 9408) = v51;
    if ( !v51 )
      sub_1ED6E50(a1, v17, (unsigned __int64)v48, v24, v25, v26);
  }
  else
  {
    ((void (__fastcall *)(__int64))v49)(a1 + 24);
  }
  if ( (_BYTE *)v63.m128_u64[0] != v64 )
    free((void *)v63.m128_u64[0]);
  return v11;
}
