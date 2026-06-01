__int64 __fastcall sub_4994B0(__int64 a1, __int64 a2, _QWORD *a3, int a4, int a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // rax

  v5 = a4;
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*a3 + 24LL))(a3);
  v10 = -1;
  if ( v5 < v9 )
    v10 = *(_QWORD *)(a3[1] + 8 * v5);
  *(_QWORD *)(a1 + 8) = v10;
  *(_DWORD *)a1 = a4;
  *(_DWORD *)(a1 + 4) = a5;
  *(_QWORD *)(a1 + 16) = a2;
  return a1;
}
