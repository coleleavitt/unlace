/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qopen
// Address: 0x000AF140

//----- (000AF140) --------------------------------------------------------
int __cdecl qopen(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax

  v2 = __open_2(a1, a2 & 0xFFFF7DBF | 0x8000);
  if ( v2 == -1 )
  {
    set_qerrno(1);
    return -1;
  }
  else
  {
    v3 = v2;
    if ( flock(v2, 6) == -1 )
    {
      set_qerrno(1);
      v4 = close(v3);
      v3 = -1;
      if ( v4 == -1 )
        set_qerrno(1);
    }
    else
    {
      fcntl(v3, 2, 1);
    }
  }
  return v3;
}
// 17A70: using guessed type int __cdecl __open_2(_DWORD, _DWORD);
