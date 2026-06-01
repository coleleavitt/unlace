__int64 __fastcall sub_39CDD0(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[2];
  if ( *(_DWORD *)(result + 4) )
  {
    result = (unsigned int)~*(_DWORD *)(result + 8);
    if ( (result & 0x10002000) != 0 )
    {
      sub_6335B0(*a1, 3, 4, 0);
      sub_6335B0(*a1, 3, 2, (~*(_BYTE *)(a1[2] + 8LL) & 6) == 0);
      return sub_609420(a1, 0);
    }
  }
  return result;
}
