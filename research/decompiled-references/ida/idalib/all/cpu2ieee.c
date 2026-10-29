__int64 __fastcall cpu2ieee(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  result = sub_3792E0(0x4Bu, a2, a1, (unsigned __int16)(a3 / 2 - 1));
  if ( !(_DWORD)result )
    return ieee_realcvt(a2, a1, (unsigned __int16)(a3 / 2 - 1));
  return result;
}
