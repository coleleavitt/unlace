__int64 __fastcall sub_3FAC20(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5, double a6)
{
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // eax

  v10 = 40LL * *(int *)(a4 + 8);
  v11 = *(unsigned __int8 *)(*(_QWORD *)a4 + v10 + 64);
  v12 = *(_QWORD *)a4 + v10 + 64;
  v13 = *(_QWORD *)(a1 + 832);
  v14 = *(_DWORD *)(v13 + 456);
  if ( !(_BYTE)v11 )
    v14 = *(_DWORD *)(v13 + 452);
  v15 = sub_3F9DC0(a1, v11, v14, a6);
  sub_3FA780(a1, a2, a3, a4, a6, 0, v15);
  return sub_3F0D80(a5, v12, 0);
}
