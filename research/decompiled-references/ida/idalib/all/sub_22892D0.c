__int64 __fastcall sub_22892D0(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v7; // rdx

  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_OWORD *)(a1 + 32) = 0;
  v5 = sub_2288A70(a2, a3, a4);
  *(_DWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = v7;
  return a1;
}
