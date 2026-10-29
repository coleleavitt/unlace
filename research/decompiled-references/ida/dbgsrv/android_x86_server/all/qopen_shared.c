/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qopen_shared
// Address: 0x000AF1F0

//----- (000AF1F0) --------------------------------------------------------
int __cdecl qopen_shared(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax

  if ( (unsigned int)(a3 + 1) >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(707);
    BUG();
  }
  v3 = __open_2(a1, a2 & 0xFFFF7DBF | 0x8000);
  if ( v3 == -1 )
  {
    set_qerrno(1);
    return -1;
  }
  else
  {
    v4 = v3;
    if ( sub_AF2B0(v3, a2 & 0xBF, dword_107CF4[a3]) )
    {
      v5 = close(v4);
      v4 = -1;
      if ( v5 == -1 )
        set_qerrno(1);
    }
  }
  return v4;
}
// 17A70: using guessed type int __cdecl __open_2(_DWORD, _DWORD);
// 107CF4: using guessed type int dword_107CF4[];
// 13E34C: using guessed type int under_debugger;
