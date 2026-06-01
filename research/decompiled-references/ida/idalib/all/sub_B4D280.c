__int64 __fastcall sub_B4D280(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 == 4 )
    return (unsigned int)(*(_DWORD *)a1 == 1567517019) - 1;
  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1953853275 && *(_BYTE *)(a1 + 4) == 93 )
      return 1;
    else
      return 0xFFFFFFFFLL;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( a2 == 8 )
    {
      if ( *(_QWORD *)a1 == 0x5D74756F2C6E695BLL )
        return 2;
      else
        return 3 * (unsigned int)(*(_QWORD *)a1 == 0x5D6E692C74756F5BLL) - 1;
    }
  }
  return result;
}
