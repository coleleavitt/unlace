/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25140
// Address: 0x00025140

//----- (00025140) --------------------------------------------------------
unsigned int __cdecl sub_25140(int a1, int a2, _DWORD *a3)
{
  char *v3; // eax
  char *v4; // ecx
  _DWORD v6[8]; // [esp+8h] [ebp-20h] BYREF

  v6[5] = __readgsdword(0x14u);
  if ( *a3 == -1 )
  {
    if ( a3[3] )
      v4 = (char *)a3[2];
    else
      v4 = byte_EF875;
    sub_8A3F0(a1, "Can't import symbols from %s: no imagebase\n", v4);
  }
  else
  {
    v6[1] = 49;
    v6[0] = &off_134680;
    v6[2] = a1;
    v6[3] = a3;
    v6[4] = a2;
    if ( a3[3] )
      v3 = (char *)a3[2];
    else
      v3 = byte_EF875;
    sub_40950(v3, v6, 0);
  }
  return __readgsdword(0x14u);
}
// 134680: using guessed type int (__cdecl *off_134680)(int, int, char *s);
