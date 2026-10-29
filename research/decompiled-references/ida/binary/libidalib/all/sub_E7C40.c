__int64 __fastcall sub_E7C40(_BYTE *a1, _BYTE *a2, __int64 *a3, _BYTE *a4, _BYTE *a5, _BYTE *a6, unsigned int a7)
{
  __int64 result; // rax

  if ( a1 )
    sub_E7590(a1, "Path", 0);
  if ( a2 )
    sub_E7590(a2, "Parameters", 0);
  if ( a3 )
    sub_C58A0(a3);
  if ( a4 )
    sub_E7590(a4, "StartDir", 1);
  sub_E7B80(a5, a6, a7);
  result = (unsigned int)dword_25274C;
  if ( !dword_25274C )
  {
    result = dbg;
    if ( dbg )
    {
      if ( (*(_BYTE *)(dbg + 32LL) & 1) != 0 )
      {
        if ( byte_252752 )
          return sub_C4290(a5, a6);
      }
    }
  }
  return result;
}

