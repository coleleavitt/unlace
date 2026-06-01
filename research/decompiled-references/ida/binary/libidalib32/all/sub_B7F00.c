__int64 __fastcall sub_B7F00(__int64 a1, char a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 16) & 4;
  if ( a2 )
  {
    if ( !(_DWORD)result )
    {
      result = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
      if ( (_BYTE)result )
        *(_DWORD *)(a1 + 16) |= 4u;
    }
  }
  else if ( (_DWORD)result )
  {
    result = (**(__int64 (__fastcall ***)(__int64, _QWORD))a1)(a1, 0);
    *(_DWORD *)(a1 + 16) &= ~4u;
  }
  return result;
}

