/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420A90
// Address: 0x00420A90

//----- (00420A90) --------------------------------------------------------
char __cdecl sub_420A90(char *a1, int a2)
{
  char *v2; // eax
  char *v3; // ecx
  char v4; // al
  bool v6; // cf

  v2 = sub_4239C0(a1, 0);
  v3 = v2;
  if ( v2 )
  {
    v4 = *v2;
    if ( *v3 == 2 )
    {
      *((_DWORD *)v3 + 2) += a2;
      return 1;
    }
    if ( v4 == 9 )
    {
      v6 = __CFADD__(a2, *((_DWORD *)v3 + 2));
      *((_DWORD *)v3 + 2) += a2;
      *((_DWORD *)v3 + 3) += (a2 >> 31) + v6;
      return 1;
    }
    if ( v4 == 3 )
    {
      sub_45EC90((_WORD *)v3 + 4, &xmmword_4A29A0, (_WORD *)v3 + 4, a2 < 0);
      return 1;
    }
    sub_45CC20(61);
  }
  return 0;
}
// 4A29A0: using guessed type __int128 xmmword_4A29A0;
