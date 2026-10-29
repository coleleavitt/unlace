__int64 __fastcall sub_37FF60(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 96) = a2;
  result = dword_2C81AB4;
  if ( (int)dword_2C81AB4 > a3 )
    result = (unsigned int)a3;
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
