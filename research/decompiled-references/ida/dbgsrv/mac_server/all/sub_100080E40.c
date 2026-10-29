/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100080E40
// Address: 0x0000000100080E40

//----- (0000000100080E40) ----------------------------------------------------
__int64 __fastcall sub_100080E40(_QWORD *a1, void **a2)
{
  __int64 v2; // rax
  _BYTE *v3; // r14
  _BYTE *v4; // rcx
  char *v5; // rax
  char *v6; // r14
  char *v7; // rax
  __int64 v8; // r12
  __int64 v9; // r12
  _BYTE *v10; // r15
  __int64 v11; // rcx
  _BYTE *v12; // r13
  _BYTE *v13; // rax
  char *v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  void *v18; // r14
  unsigned __int8 v20; // [rsp+Eh] [rbp-32h] BYREF
  unsigned __int8 v21; // [rsp+Fh] [rbp-31h] BYREF

  v2 = a1[1];
  v3 = (_BYTE *)(21 * v2 + 10);
  v4 = a2[1];
  if ( v4 >= v3 )
  {
    if ( v4 != v3 )
    {
      v20 = 0;
      sub_10001CE90((__int64)a2, 21 * v2 + 10, &v20);
    }
  }
  else
  {
    v5 = (char *)*a2;
    if ( a2[2] < v3 )
    {
      v5 = (char *)qvector_reserve((__int64)a2, *a2, (unsigned __int64)v3, 1u);
      *a2 = v5;
      v4 = a2[1];
    }
    __bzero(&v5[(_QWORD)v4], v3 - v4);
    a2[1] = v3;
  }
  v6 = &v3[(_QWORD)*a2];
  v7 = pack_dq(*a2, (unsigned __int64)v6, a1[1]);
  v8 = 24LL * a1[1];
  if ( v8 )
  {
    v9 = *a1 + v8;
    v10 = (_BYTE *)(*a1 + 16LL);
    v11 = 0;
    do
    {
      if ( v7 < v6 )
        *v7++ = *v10;
      v12 = v10 - 16;
      v13 = pack_dq(v7, (unsigned __int64)v6, *((_QWORD *)v10 - 2) - v11);
      v7 = pack_dq(v13, (unsigned __int64)v6, *((_QWORD *)v10 - 1) - *((_QWORD *)v10 - 2));
      v11 = *((_QWORD *)v10 - 1);
      v10 += 24;
    }
    while ( v12 + 24 != (_BYTE *)v9 );
  }
  v14 = (char *)*a2;
  v15 = (unsigned __int64)a2[1];
  v16 = v7 - (_BYTE *)*a2;
  if ( v15 >= v16 )
  {
    if ( v15 != v16 )
    {
      v21 = 0;
      sub_10001CE90((__int64)a2, v16, &v21);
    }
  }
  else
  {
    if ( (unsigned __int64)a2[2] < v16 )
    {
      v17 = v16;
      v14 = (char *)qvector_reserve((__int64)a2, *a2, v16, 1u);
      v16 = v17;
      *a2 = v14;
      v15 = (unsigned __int64)a2[1];
    }
    v18 = (void *)v16;
    __bzero(&v14[v15], v16 - v15);
    a2[1] = v18;
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
