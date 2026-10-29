__int64 __fastcall sub_E23220(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax

  result = a2;
  *(_QWORD *)a1 = a4;
  *(_OWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 40) = a3;
  if ( a2 )
    sub_E1E330(a2, a1);
  return result;
}
