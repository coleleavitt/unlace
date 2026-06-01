/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000619B0
// Address: 0x00000001000619B0

//----- (00000001000619B0) ----------------------------------------------------
__int64 __fastcall sub_1000619B0(_QWORD *a1, __int64 a2, const char *a3)
{
  void *v4; // rax
  __int64 v5; // rcx
  _BYTE *v6; // r14
  char *v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _BYTE *v12; // [rsp+8h] [rbp-28h] BYREF

  v4 = (void *)a1[9];
  v5 = a1[10];
  if ( a1[11] < (unsigned __int64)(v5 + 1) )
  {
    v4 = qvector_reserve((__int64)(a1 + 9), v4, v5 + 1, 8u);
    a1[9] = v4;
    v5 = a1[10];
  }
  *((_QWORD *)v4 + v5) = a2;
  ++a1[10];
  v6 = qstrdup(a3);
  v12 = v6;
  v7 = (char *)a1[12];
  v8 = a1[14];
  v9 = a1[13];
  v10 = v9 + 1;
  if ( v7 <= (char *)&v12 && &v7[8 * v8] > (char *)&v12 )
  {
    if ( v8 < v10 )
    {
      v7 = (char *)qvector_reserve((__int64)(a1 + 12), v7, v10, 8u);
      a1[12] = v7;
      v9 = a1[13];
    }
  }
  else if ( v8 < v10 )
  {
    v7 = (char *)qvector_reserve((__int64)(a1 + 12), v7, v10, 8u);
    a1[12] = v7;
    v9 = a1[13];
    v6 = v12;
  }
  *(_QWORD *)&v7[8 * v9] = v6;
  ++a1[13];
  return __stack_chk_guard;
}
