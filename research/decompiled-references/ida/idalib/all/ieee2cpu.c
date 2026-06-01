__int64 __fastcall ieee2cpu(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  result = sub_3792E0(0x4Bu, a1, a2, (unsigned __int16)(a3 / 2 + 7));
  if ( !(_DWORD)result )
    return ieee_realcvt(a1, a2, (unsigned __int16)(a3 / 2 + 7));
  return result;
}
