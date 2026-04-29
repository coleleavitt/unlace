__int64 __fastcall dyld4::APIs::dyld_program_minos_at_least(__int64 a1, __int64 a2)
{
  _DWORD *v2; // x9
  int v3; // w10
  bool v4; // w8
  unsigned int v5; // w9

  v2 = *(_DWORD **)(a1 + 8);
  v3 = v2[16];
  v4 = v3 != 0;
  if ( (_DWORD)a2 == -1 )
  {
    v5 = v2[15];
  }
  else if ( v3 == (_DWORD)a2 || v2[17] == (_DWORD)a2 )
  {
    v5 = v2[14];
  }
  else
  {
    v5 = 0;
    v4 = 0;
  }
  return (v5 >= HIDWORD(a2)) & (unsigned __int8)v4;
}
