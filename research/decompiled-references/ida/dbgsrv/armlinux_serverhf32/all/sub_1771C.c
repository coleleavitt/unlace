/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1771C
// Address: 0x0001771C

//----- (0001771C) --------------------------------------------------------
void *__fastcall sub_1771C(_DWORD *a1, int (__fastcall **a2)(_DWORD, int), int (__fastcall **a3)(_DWORD, int))
{
  void *result; // r0
  int v7; // r3
  void *v8; // r1
  int (__fastcall **v9[3])(_DWORD, int); // [sp+0h] [bp-10h] BYREF

  v9[1] = a2;
  v9[2] = a3;
  v9[0] = (int (__fastcall **)(_DWORD, int))&off_CF564;
  result = (void *)sub_570F0(v9);
  if ( !result )
  {
    if ( (unsigned __int8)a3 == 127 )
    {
      v7 = a1[260];
      result = (void *)a1[261];
      v8 = (void *)a1[259];
      if ( v7 + 1 > (unsigned int)result )
      {
        result = sub_77EB0((int)(a1 + 259), v8, v7 + 1, 4u);
        v7 = a1[260];
        v8 = result;
        a1[259] = result;
      }
      *((_DWORD *)v8 + v7) = a2;
      ++a1[260];
    }
    else if ( (((unsigned __int8)a3 & 0x7F) + 1) << 24 >> 25 <= 0 )
    {
      sub_1700C((int)"  %d: failed to store pending status %x, killing unknown thread\n", a2, a3);
      return (void *)ptrace(PTRACE_KILL, a2, 0, 0);
    }
  }
  return result;
}
// CF564: using guessed type _UNKNOWN *off_CF564;
