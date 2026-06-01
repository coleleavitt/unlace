__int64 __fastcall sub_383DB0(__int64 a1)
{
  __int64 result; // rax

  result = sub_383CD0((_QWORD *)a1);
  if ( !(_BYTE)result )
  {
    if ( *(_DWORD *)(a1 + 212) )
    {
      sub_382EF0(a1, &byte_22F0C30, -1);
      return 0;
    }
  }
  return result;
}
