__int64 __fastcall sub_37C4F0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 96) = a2;
  result = dword_2C57A94;
  if ( (int)dword_2C57A94 > a3 )
    result = (unsigned int)a3;
  *(_DWORD *)(a1 + 104) = result;
  return result;
}

