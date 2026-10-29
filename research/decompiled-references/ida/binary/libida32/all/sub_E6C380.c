__int64 __fastcall sub_E6C380(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = (*(__int64 *)(a1 + 8) >> 1) & 3;
  if ( (_DWORD)v1 == 1 )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 59 >= 3 )
      return 0;
  }
  else if ( (_DWORD)v1 == 2 )
  {
    return sub_F3F530(*(_QWORD *)(a1 + 16));
  }
  else
  {
    return 0;
  }
  return result;
}

