/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DEA0
// Address: 0x0044DEA0

//----- (0044DEA0) --------------------------------------------------------
char __thiscall sub_44DEA0(_DWORD *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi
  _DWORD *v3; // eax
  int v4; // edx

  *this = &off_48F940;
  v2 = dword_4B6C98;
  sub_4562D0(dword_4B6C98);
  v3 = (_DWORD *)dword_4B6C9C;
  v4 = 4 * dword_4B6CA0 + dword_4B6C9C;
  if ( dword_4B6C9C != v4 )
  {
    do
    {
      if ( this == (_DWORD *)*v3 )
        break;
      ++v3;
    }
    while ( v3 != (_DWORD *)v4 );
    if ( v3 != (_DWORD *)v4 )
    {
      sub_464310((unsigned int)v3, (unsigned int)(v3 + 1), 4 * (((dword_4B6C9C + 4 * dword_4B6CA0 - (int)v3) >> 2) - 1));
      --dword_4B6CA0;
    }
  }
  return sub_4562F0(v2);
}
// 48F940: using guessed type void (__noreturn *off_48F940)();
// 4B6C9C: using guessed type int dword_4B6C9C;
// 4B6CA0: using guessed type int dword_4B6CA0;
