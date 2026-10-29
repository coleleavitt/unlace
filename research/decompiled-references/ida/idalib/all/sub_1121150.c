void __fastcall sub_1121150(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, int a6, char a7)
{
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  void **v11; // r12
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  char *v15; // r15
  __int64 v16; // rdi
  unsigned __int8 (__fastcall *v17)(__int64, unsigned __int8 **); // rax
  _QWORD *v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  void **v21; // rcx
  void **v22; // r15
  void **v23; // r13
  __int64 v24; // r12
  _QWORD *v25; // rbp
  void **v26; // rbx
  _QWORD *v27; // r15
  _BYTE *v28; // rax
  void *v29; // rsi
  size_t v30; // rcx
  _QWORD *v31; // [rsp+8h] [rbp-E0h]
  void **v34; // [rsp+28h] [rbp-C0h]
  size_t v35; // [rsp+28h] [rbp-C0h]
  size_t v36; // [rsp+28h] [rbp-C0h]
  __int64 *src; // [rsp+30h] [rbp-B8h]
  void *srca; // [rsp+30h] [rbp-B8h]
  void *v40; // [rsp+40h] [rbp-A8h] BYREF
  size_t n; // [rsp+48h] [rbp-A0h]
  __int64 v42; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int8 *v43[4]; // [rsp+60h] [rbp-88h] BYREF
  __int16 v44; // [rsp+80h] [rbp-68h]

  v9 = *(_QWORD **)(a2 + 8);
  v31 = &v9[*(unsigned int *)(a2 + 16)];
  if ( v9 == v31 )
    goto LABEL_25;
  v10 = v9 + 1;
  if ( !*v9 )
  {
    do
    {
      v9 = v10;
      if ( v31 == v10 )
        goto LABEL_25;
      ++v10;
    }
    while ( !*(v10 - 1) );
  }
  v11 = &v40;
  v12 = &v42;
  while ( 1 )
  {
    v19 = *v9;
    if ( (unsigned __int8)sub_21B9810(*v9, a4) )
    {
      v13 = *(_QWORD *)(v19 + 16);
      v14 = -1;
      if ( !v13 )
        v13 = v19;
      *(_BYTE *)(v13 + 44) |= 1u;
      v15 = **(char ***)(v19 + 48);
      v40 = v12;
      if ( v15 )
        v14 = (__int64)&v15[strlen(v15)];
      sub_111F450(v11, v15, v14);
      v16 = a1[1];
      v17 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)v16 + 96LL);
      v44 = 260;
      v43[0] = (unsigned __int8 *)v11;
      if ( !v17(v16, v43) )
      {
        if ( a7 )
        {
          sub_FC70B0((__int64)v43, *a1, 0, 443);
          sub_AEC220(v43, v40, n);
          sub_AEA040((__int64)v43);
        }
        goto LABEL_11;
      }
      v27 = *(_QWORD **)(a3 + 8);
      if ( v27 == *(_QWORD **)(a3 + 16) )
      {
        sub_10BCB90((void ***)a3, *(const __m128i **)(a3 + 8), (__int64)v11);
LABEL_11:
        if ( v40 != v12 )
          operator delete(v40);
LABEL_13:
        v18 = v9 + 1;
        if ( v31 == v9 + 1 )
          goto LABEL_25;
        goto LABEL_14;
      }
      v28 = v27 + 2;
      *v27 = v27 + 2;
      v29 = v40;
      v30 = n;
      if ( (char *)v40 + n && !v40 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( n > 0xF )
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        srca = v40;
        v35 = n;
        v28 = (_BYTE *)operator new(n + 1);
        v30 = v35;
        v29 = srca;
        *v27 = v28;
        v27[2] = v35;
      }
      else
      {
        if ( n == 1 )
        {
          *((_BYTE *)v27 + 16) = *(_BYTE *)v40;
LABEL_39:
          v27[1] = v30;
          v28[v30] = 0;
          *(_QWORD *)(a3 + 8) += 32LL;
          goto LABEL_11;
        }
        if ( !n )
          goto LABEL_39;
      }
      v36 = v30;
      memcpy(v28, v29, v30);
      v28 = (_BYTE *)*v27;
      v30 = v36;
      goto LABEL_39;
    }
    if ( !(unsigned __int8)sub_21B9810(v19, a5) )
      goto LABEL_13;
    v20 = *(_QWORD *)(v19 + 16);
    if ( !v20 )
      v20 = v19;
    *(_BYTE *)(v20 + 44) |= 1u;
    v21 = *(void ***)(a3 + 8);
    v34 = *(void ***)a3;
    if ( *(void ***)a3 == v21 )
      goto LABEL_13;
    src = v12;
    v22 = *(void ***)a3;
    v23 = v11;
    v24 = a3;
    v25 = v9;
    v26 = v21;
    do
    {
      while ( *v22 != v22 + 2 )
      {
        operator delete(*v22);
        v22 += 4;
        if ( v22 == v26 )
          goto LABEL_24;
      }
      v22 += 4;
    }
    while ( v26 != v22 );
LABEL_24:
    v9 = v25;
    a3 = v24;
    v11 = v23;
    v12 = src;
    *(_QWORD *)(a3 + 8) = v34;
    v18 = v9 + 1;
    if ( v31 == v9 + 1 )
      goto LABEL_25;
LABEL_14:
    if ( !v9[1] )
      break;
LABEL_15:
    v9 = v18;
  }
  while ( v31 != ++v18 )
  {
    if ( *v18 )
      goto LABEL_15;
  }
LABEL_25:
  if ( *(_QWORD *)(a3 + 8) != *(_QWORD *)a3 )
    sub_1120E60(a1, a3, a6, a7);
}
