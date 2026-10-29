/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063EC0
// Address: 0x0000000100063EC0

//----- (0000000100063EC0) ----------------------------------------------------
__int64 __fastcall sub_100063EC0(char **a1, __int64 *a2)
{
  __int64 v2; // r13
  size_t v3; // r14
  void *v4; // r15
  char *v5; // rax
  char *v6; // rcx
  __int64 v7; // rcx
  __int128 v9; // [rsp+28h] [rbp-48h]
  int v10; // [rsp+38h] [rbp-38h]

  v2 = *a2;
  v3 = a2[2];
  if ( v3 )
  {
    v4 = qalloc_or_throw(a2[2]);
    memcpy(v4, (const void *)a2[1], v3);
  }
  else
  {
    v4 = nullptr;
  }
  v10 = *((_DWORD *)a2 + 12);
  v9 = *((_OWORD *)a2 + 2);
  v5 = *a1;
  v6 = a1[1];
  if ( a1[2] < v6 + 1 )
  {
    v5 = (char *)qvector_reserve((__int64)a1, v5, (unsigned __int64)(v6 + 1), 0x38u);
    *a1 = v5;
    v6 = a1[1];
  }
  v7 = 56LL * (_QWORD)v6;
  *(_QWORD *)&v5[v7] = v2;
  *(_QWORD *)&v5[v7 + 8] = v4;
  *(_QWORD *)&v5[v7 + 16] = v3;
  *(_QWORD *)&v5[v7 + 24] = v3;
  *(_OWORD *)&v5[v7 + 32] = v9;
  *(_DWORD *)&v5[v7 + 48] = v10;
  ++a1[1];
  return __stack_chk_guard;
}
