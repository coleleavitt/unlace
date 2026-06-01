void __fastcall sub_178C030(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int16 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7)
{
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 *v14; // r12
  __int64 *i; // rbp
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  _BYTE *v26; // rdi
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v39; // [rsp+18h] [rbp-110h] BYREF
  __m128i v40; // [rsp+20h] [rbp-108h] BYREF
  __int64 v41; // [rsp+30h] [rbp-F8h]
  unsigned __int8 *v42[11]; // [rsp+40h] [rbp-E8h] BYREF
  char v43; // [rsp+98h] [rbp-90h]
  __int64 v44; // [rsp+A0h] [rbp-88h]
  char v45; // [rsp+A8h] [rbp-80h]
  unsigned int v46; // [rsp+ACh] [rbp-7Ch]
  void *ptr; // [rsp+B0h] [rbp-78h]
  _BYTE v48[104]; // [rsp+C0h] [rbp-68h] BYREF

  v7 = 0;
  v8 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v8 )
  {
    a4 = *(_QWORD *)(a1 + 32);
    v7 = *(_QWORD *)(a4 + 8 * v8 - 8);
  }
  if ( !*a3 )
    return;
  if ( !*(_QWORD *)(v7 + 184) )
  {
    sub_B88650(a2, 1);
    return;
  }
  if ( (**a3 & 0x1FF) == 0xF6 )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v27 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
    v28 = *v27;
    v29 = *v27 + 8LL * *((unsigned int *)v27 + 2);
    if ( *v27 >= v29 )
    {
      if ( v28 == v29 )
        goto LABEL_7;
      while ( *(_WORD *)(*(_QWORD *)v29 + 36LL) != 53 )
      {
        v29 += 8LL;
        if ( v28 == v29 )
          goto LABEL_7;
      }
    }
    else
    {
      v30 = *v27;
      while ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 53 )
      {
        v30 += 8LL;
        if ( v29 == v30 )
          goto LABEL_7;
      }
      if ( v29 == v30 )
        goto LABEL_7;
    }
    sub_168B9F0((__int64)&v40, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1960u, 0);
    sub_15F7200(&v40);
  }
LABEL_7:
  v10 = *(unsigned int *)(v7 + 32);
  if ( (_DWORD)v10 )
  {
    v10 = a1 + 8;
    sub_168B9F0((__int64)&v40, (__int64 *)(a1 + 8), *(_DWORD *)(v7 + 32), 0x154Au, 0);
    sub_15F7200(&v40);
  }
  v11 = *(__int64 **)(v7 + 712);
  v12 = *(unsigned int *)(v7 + 720);
  v13 = a1;
  v14 = &v11[v12];
  for ( i = v11; v14 != i; ++i )
  {
    v16 = *i;
    v10 = a1 + 8;
    sub_168B9F0((__int64)&v40, (__int64 *)(a1 + 8), *(_DWORD *)(v16 + 16), 0xDC0u, 0);
    sub_15F7200(&v40);
  }
  if ( (unsigned __int8)sub_B74ED0(a2, v10, v12, v13) )
  {
    sub_168B9F0((__int64)&v40, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1BEAu, 0);
    if ( v43 )
    {
      sub_AE9DF0(v42, a2, 0xAu);
    }
    else if ( BYTE4(v44) )
    {
      v35 = sub_168B9E0(&v40);
      v36 = v41;
      if ( v41 )
        v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
      v39 = v36;
      v37 = sub_1587BC0(v35, &v39, v31, v32, v33, v34);
      sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * (unsigned int)v44 + 8), a2, 0xAu);
    }
    sub_15F7200(&v40);
  }
  sub_1783C30((__int64)&v40, (_QWORD *)a1, a2, v7, *a3, v17);
  if ( v45 )
  {
    v19 = *(_QWORD *)(v44 + 184);
    v20 = sub_17840A0((__int64)v42[10], v19, v46, "get_return_object", 0x11u, v18, a7);
    v23 = 0;
    v24 = 0;
    if ( v20 == 1 )
    {
      v45 = 0;
    }
    else
    {
      v45 = 1;
      v42[5] = (unsigned __int8 *)(v20 & 0xFFFFFFFFFFFFFFFELL);
      if ( v48[32] || (sub_178BFE0(&v40, v19), v45) )
      {
        v25 = sub_EF24C0(*(_QWORD **)(a1 + 248), (__int64)&v40, v23, v24, v21, v22);
        v26 = ptr;
        *a3 = (unsigned __int16 *)v25;
        if ( v26 != v48 )
          free(v26);
        return;
      }
    }
  }
  sub_B88650(a2, 1);
  if ( ptr != v48 )
    free(ptr);
}
