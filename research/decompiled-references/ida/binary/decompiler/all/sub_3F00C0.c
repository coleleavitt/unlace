__int64 __fastcall sub_3F00C0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5)
{
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // eax

  v9 = 40LL * *(int *)(a4 + 8);
  v10 = *(unsigned __int8 *)(*(_QWORD *)a4 + v9 + 64);
  v11 = *(_QWORD *)a4 + v9 + 64;
  v12 = *(_QWORD *)(a1 + 832);
  v13 = *(_DWORD *)(v12 + 456);
  if ( !(_BYTE)v10 )
    v13 = *(_DWORD *)(v12 + 452);
  v14 = sub_3EF260(a1, v10, v13);
  sub_3EFC20(a1, a2, a3, a4, 0, v14);
  return sub_3E6140(a5, v11, 0);
}
