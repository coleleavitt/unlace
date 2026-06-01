/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C0B0
// Address: 0x000000010005C0B0

//----- (000000010005C0B0) ----------------------------------------------------
__int64 __fastcall sub_10005C0B0(char **a1, __int64 *a2)
{
  size_t v2; // r14
  void *v3; // r15
  char *v4; // rax
  char *v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+0h] [rbp-A0h]
  int v9; // [rsp+8h] [rbp-98h]
  __int128 v10; // [rsp+28h] [rbp-78h]
  __int128 v11; // [rsp+38h] [rbp-68h]
  __int128 v12; // [rsp+48h] [rbp-58h]
  __int128 v13; // [rsp+58h] [rbp-48h]
  __int128 v14; // [rsp+68h] [rbp-38h]

  v9 = *((_DWORD *)a2 + 2);
  v8 = *a2;
  v2 = a2[3];
  if ( v2 )
  {
    v3 = qalloc_or_throw(a2[3]);
    memcpy(v3, (const void *)a2[2], v2);
  }
  else
  {
    v3 = nullptr;
  }
  v14 = *(_OWORD *)(a2 + 13);
  v13 = *(_OWORD *)(a2 + 11);
  v12 = *(_OWORD *)(a2 + 9);
  v11 = *(_OWORD *)(a2 + 7);
  v10 = *(_OWORD *)(a2 + 5);
  v4 = *a1;
  v5 = a1[1];
  if ( a1[2] < v5 + 1 )
  {
    v4 = (char *)qvector_reserve((__int64)a1, v4, (unsigned __int64)(v5 + 1), 0x78u);
    *a1 = v4;
    v5 = a1[1];
  }
  v6 = 120LL * (_QWORD)v5;
  *(_DWORD *)&v4[v6 + 8] = v9;
  *(_QWORD *)&v4[v6] = v8;
  *(_QWORD *)&v4[v6 + 16] = v3;
  *(_QWORD *)&v4[v6 + 24] = v2;
  *(_QWORD *)&v4[v6 + 32] = v2;
  *(_OWORD *)&v4[v6 + 40] = v10;
  *(_OWORD *)&v4[v6 + 56] = v11;
  *(_OWORD *)&v4[v6 + 72] = v12;
  *(_OWORD *)&v4[v6 + 88] = v13;
  *(_OWORD *)&v4[v6 + 104] = v14;
  ++a1[1];
  return __stack_chk_guard;
}
