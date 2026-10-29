/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19A30
// Address: 0x00019A30

//----- (00019A30) --------------------------------------------------------
int __cdecl sub_19A30(_DWORD *a1, _DWORD *a2)
{
  int result; // eax
  int v3; // ecx
  int v4[6]; // [esp+Ch] [ebp-18h] BYREF

  v4[1] = __readgsdword(0x14u);
  result = ps_pglobal_lookup(0, nullptr, off_13B000, v4);
  if ( !result )
  {
    v3 = sub_19AC0(a1, (int (__cdecl *)(_DWORD *, int))sub_19BF0, v4[0]);
    result = 10;
    if ( v3 == 66 )
    {
      *a2 = 0;
      a2[1] = &dword_13BCC0;
      return 0;
    }
  }
  return result;
}
// 13B000: using guessed type char *off_13B000;
// 13BCC0: using guessed type int dword_13BCC0;
