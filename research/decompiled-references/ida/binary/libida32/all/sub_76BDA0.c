__int64 __fastcall sub_76BDA0(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 52) = a2;
  result = sub_76BCD0();
  if ( (unsigned __int64)*(int *)(a1 + 52) >= *(_QWORD *)(result + 72) )
    *(_DWORD *)(a1 + 52) = 0;
  return result;
}

