/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfwrite
// Address: 0x000AFD40

//----- (000AFD40) --------------------------------------------------------
size_t __cdecl qfwrite(FILE *s, void *ptr, size_t n)
{
  size_t v3; // esi
  signed int v4; // eax
  signed int v5; // edi
  int v6; // ecx

  if ( s )
  {
    v3 = n;
    if ( n )
    {
      v4 = fwrite(ptr, 1u, n, s);
      if ( v4 != n )
      {
        v5 = v4;
        set_qerrno((v4 > 0) + 1);
        return v5;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    set_qerrno(1);
    *(_DWORD *)__errno(v6) = 9;
    set_qerrno(1);
    return -1;
  }
  return v3;
}
// AFDA0: variable 'v6' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
