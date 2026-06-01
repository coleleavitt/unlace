/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805A080
// Address: 0x0805A080

//----- (0805A080) --------------------------------------------------------
unsigned int __cdecl sub_805A080(_DWORD *a1, int (__cdecl **a2)(_DWORD, int), int (__cdecl **a3)(_DWORD, int))
{
  unsigned int result; // eax
  int v4; // edx
  void *v5; // eax
  int (__cdecl **v6[3])(_DWORD, int); // [esp+0h] [ebp-2Ch] BYREF
  unsigned int v7; // [esp+Ch] [ebp-20h]

  v7 = __readgsdword(0x14u);
  v6[1] = a2;
  v6[0] = &off_811B7D4;
  v6[2] = a3;
  if ( !sub_80A4C60(v6) )
  {
    if ( (_BYTE)a3 == 127 )
    {
      v4 = a1[174];
      v5 = (void *)a1[173];
      if ( a1[175] < (unsigned int)(v4 + 1) )
      {
        v5 = sub_80CF920((int)(a1 + 173), v5, v4 + 1, 4u);
        v4 = a1[174];
        a1[173] = v5;
      }
      *((_DWORD *)v5 + v4) = a2;
      ++a1[174];
    }
    else if ( (char)(((unsigned __int8)a3 & 0x7F) + 1) <= 1 )
    {
      sub_8058290();
      ptrace(PTRACE_KILL, a2, 0, 0, "  %d: failed to store pending status %x, killing unknown thread\n", a2, a3);
    }
  }
  result = v7 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811B7D4: using guessed type int (__cdecl *off_811B7D4)(int, int);
