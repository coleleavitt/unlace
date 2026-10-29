__int64 __fastcall sub_639C80(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  result = a1;
  if ( a2 )
  {
    *(_QWORD *)a1 = 42;
    *(_QWORD *)(a1 + 8) = a2;
    *(_QWORD *)(a1 + 16) = a3;
    *(_QWORD *)(a1 + 24) = a4;
  }
  else
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)a1 = 73;
    *(_QWORD *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 4) = 0;
  }
  return result;
}

