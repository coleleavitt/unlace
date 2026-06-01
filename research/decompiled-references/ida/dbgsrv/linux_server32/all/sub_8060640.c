/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8060640
// Address: 0x08060640

//----- (08060640) --------------------------------------------------------
unsigned int __cdecl sub_8060640(int a1, _BYTE *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // edx
  unsigned int result; // eax
  int v6; // eax
  signed int v7; // ebp
  signed int v8; // [esp+0h] [ebp-24h] BYREF
  unsigned int v9; // [esp+4h] [ebp-20h]

  v9 = __readgsdword(0x14u);
  if ( a2 )
    *a2 = 0;
  v3 = a3[1];
  v4 = v3 >> 16;
  if ( (_BYTE)v3 == 127 && v4 )
  {
    if ( (v3 & 0xFF00) == 0x500 && v4 == 3 )
    {
      ptrace(PTRACE_GETEVENTMSG, *a3, 0, &v8);
      v6 = dword_811D384;
      v7 = v8;
      if ( dword_811D384 == -1 )
      {
        sub_80582E0();
        v6 = dword_811D384;
      }
      if ( v6 )
        ptrace(PTRACE_SETOPTIONS, v7, 0, 8);
      sub_8060260(a1, v8, -1, 1);
      if ( !a2 )
        goto LABEL_5;
    }
    else if ( v4 != 128 || !a2 )
    {
      goto LABEL_5;
    }
    *a2 = 1;
  }
LABEL_5:
  result = v9 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811D384: using guessed type int dword_811D384;
