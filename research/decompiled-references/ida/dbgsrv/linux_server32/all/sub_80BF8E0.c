/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BF8E0
// Address: 0x080BF8E0

//----- (080BF8E0) --------------------------------------------------------
int __cdecl sub_80BF8E0(int a1, char *a2, int a3)
{
  int result; // eax
  _DWORD v4[4]; // [esp+4h] [ebp-20h] BYREF
  unsigned int v5; // [esp+14h] [ebp-10h]

  v5 = __readgsdword(0x14u);
  if ( a1 )
  {
    if ( a1 <= 0 )
    {
      if ( v5 == __readgsdword(0x14u) )
        sub_80CFFD0(a2, a3);
LABEL_9:
      sub_80D7AB0();
    }
    off_811E568(v4);
    result = 0;
  }
  else
  {
    off_811E568(v4);
    result = v4[0];
  }
  if ( v5 != __readgsdword(0x14u) )
    goto LABEL_9;
  return result;
}
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
