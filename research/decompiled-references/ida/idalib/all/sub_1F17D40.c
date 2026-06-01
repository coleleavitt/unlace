__int64 __fastcall sub_1F17D40(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  void *v7; // rax
  unsigned int v9; // eax
  bool v10; // cc
  void *v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(_QWORD **)(a2 + 8);
  *(_DWORD *)(a2 + 24) = v3 + 1;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v3);
  v6 = sub_1F16500(v4, *(_QWORD *)(a2 + 16), (__int64 *)(a2 + 32), (_DWORD *)(a2 + 24));
  sub_1EAEC10((__int64)&v11, a2);
  v14 = v12;
  if ( v12 <= 0x40 )
  {
    *(_DWORD *)(a1 + 24) = v12;
    v7 = v11;
    *(_BYTE *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v7;
    return a1;
  }
  sub_2205510(&v13);
  v9 = v14;
  v10 = v12 <= 0x40;
  *(_BYTE *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 24) = v9;
  *(_QWORD *)(a1 + 16) = v13;
  if ( v10 || !v11 )
    return a1;
  operator delete[](v11);
  return a1;
}
