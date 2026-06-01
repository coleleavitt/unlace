unsigned __int64 __fastcall sub_1B129B0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  void **v8; // rbp
  unsigned __int64 *v9; // r13
  void **i; // r14
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbp
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // [rsp+0h] [rbp-C8h]
  void *v38; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v39; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v41; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v42; // [rsp+0h] [rbp-C8h]
  __int64 v44; // [rsp+8h] [rbp-C0h]
  int v47; // [rsp+2Ch] [rbp-9Ch]
  _QWORD v48[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v49; // [rsp+40h] [rbp-88h]
  void *v50; // [rsp+48h] [rbp-80h]
  __int64 v51; // [rsp+50h] [rbp-78h]
  char v52; // [rsp+58h] [rbp-70h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v54; // [rsp+68h] [rbp-60h]
  _BYTE v55[88]; // [rsp+70h] [rbp-58h] BYREF

  if ( !a3 )
    return 0;
  v8 = (void **)(a2 + 8 * a3);
  v9 = (unsigned __int64 *)a2;
  for ( i = (void **)a2; v8 != i; ++i )
  {
    ptr = *i;
    if ( !(unsigned __int8)sub_1B12200((unsigned __int64 *)&ptr, *a1, 71, 0, 103, nullptr, a7, a8, nullptr) )
      return 0;
  }
  v13 = 103;
  v14 = sub_1AE5FF0(a1[1]);
  if ( v14 )
    v13 = *(_DWORD *)(v14 + 976);
  v15 = sub_168B6E0((__int64)a1);
  v16 = sub_1AE8290(v13, 71, *(unsigned int *)(v15 + 64), 0x67u);
  if ( v16 == 103 || (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
  {
    v19 = sub_168B6C0((__int64)a1);
    return sub_EBEE30(v19, v16, a4, a5, a6, 0, a2, a3);
  }
  else
  {
    v48[0] = 0;
    v50 = &v52;
    ptr = v55;
    v48[1] = 0;
    v49 = 0;
    v51 = 0;
    v54 = 0x300000000LL;
    if ( v8 != (void **)a2 )
    {
      v47 = v16;
      do
      {
        v20 = *v9;
        v21 = *a1;
        v22 = 0;
        if ( *v9 )
        {
          v37 = *v9;
          v23 = sub_C00A40(*v9, v20, 0, v17, v18);
          v20 = v37;
          v22 = v23;
        }
        v24 = sub_19B4A30(v21, v20, v22, 0, 0, 0, a7, a8);
        v25 = sub_1B00390(
                (_QWORD *)*a1,
                (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFELL),
                (__int64)v48,
                ".capture_expr.",
                0xEu,
                a7,
                a8);
        v17 = (unsigned int)v54;
        v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
        v27 = (unsigned int)v54 + 1LL;
        if ( v27 > HIDWORD(v54) )
        {
          v42 = v26;
          sub_2237220(&ptr, v55, v27, 8);
          v17 = (unsigned int)v54;
          v28 = ptr;
          v26 = v42;
        }
        else
        {
          v28 = ptr;
        }
        ++v9;
        v28[v17] = v26;
        LODWORD(v54) = v54 + 1;
      }
      while ( v8 != (void **)v9 );
      v16 = v47;
    }
    v29 = (_QWORD *)sub_168B6C0((__int64)a1);
    v34 = sub_1AEDEF0(v29, (__int64)v48, v30, v31, v32, v33);
    v38 = ptr;
    v44 = (unsigned int)v54;
    v35 = sub_168B6C0((__int64)a1);
    v36 = sub_EBEE30(v35, v16, a4, a5, a6, v34, (__int64)v38, v44);
    if ( ptr != v55 )
    {
      v39 = v36;
      free(ptr);
      v36 = v39;
    }
    if ( v50 != &v52 )
    {
      v40 = v36;
      free(v50);
      v36 = v40;
    }
    v41 = v36;
    operator delete(v48[0], 16LL * v49, 8);
    return v41;
  }
}
