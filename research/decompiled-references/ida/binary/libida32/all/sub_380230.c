__int64 __fastcall sub_380230(__int64 a1)
{
  __int64 result; // rax

  result = sub_380150((_QWORD *)a1);
  if ( !(_BYTE)result )
  {
    if ( *(_DWORD *)(a1 + 204) )
    {
      sub_37F3D0(a1, &byte_22CD811, -1);
      return 0;
    }
  }
  return result;
}

