__int64 __fastcall sub_1EADD10(_DWORD *a1, _BYTE *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rdi
  _BYTE *v9; // r12
  void *v10[2]; // [rsp+8h] [rbp-58h] BYREF
  _BYTE v11[72]; // [rsp+18h] [rbp-48h] BYREF

  if ( a1[2] <= 3u )
    return 1;
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  *(_DWORD *)(a4 + 32) = **(_QWORD **)a1;
  *(_DWORD *)(a4 + 36) = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 16);
  if ( (unsigned int)(v6 + v5) > a3 )
    return 1;
  v9 = &a2[(unsigned int)v6];
  v10[0] = v11;
  sub_1EA9D80(v10, a2, (__int64)v9);
  sub_A0AAD0(a4, v10);
  if ( v10[0] != v11 )
    operator delete(v10[0]);
  v10[0] = v11;
  sub_1EA9D80(v10, v9, (__int64)&a2[(unsigned int)v6 + (unsigned __int64)(unsigned int)v5]);
  sub_A0AAD0(a4 + 40, v10);
  if ( v10[0] != v11 )
    operator delete(v10[0]);
  return 0;
}
