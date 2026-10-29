__int64 __fastcall sub_B778D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0;
  if ( (*(_QWORD *)(a1 + 152) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v2 = (*(__int64 *)(a1 + 152) >> 1) & 3;
    if ( (_DWORD)v2 )
    {
      if ( ((*(__int64 *)(a1 + 152) >> 1) & 3) == 1 )
        return 2;
      else
        return (unsigned int)((_DWORD)v2 != 2) + 3;
    }
    else
    {
      return (*(_BYTE *)((*(_QWORD *)(a1 + 152) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 34 < 6 ? 5 : 1;
    }
  }
  return result;
}
