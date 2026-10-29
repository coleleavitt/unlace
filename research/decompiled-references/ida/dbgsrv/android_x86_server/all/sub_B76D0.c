/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B76D0
// Address: 0x000B76D0

//----- (000B76D0) --------------------------------------------------------
unsigned int __cdecl sub_B76D0(int a1)
{
  char *v2; // [esp+10h] [ebp-18h] BYREF
  int v3; // [esp+14h] [ebp-14h]
  int v4; // [esp+18h] [ebp-10h]
  unsigned int v5; // [esp+1Ch] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      v2 = nullptr;
      v3 = 0;
      v4 = 0;
      sub_B9170((int *)a1, &v2);
      add_undo_record();
      *(_DWORD *)(a1 + 4) = 0;
      if ( v2 )
      {
        v3 = 0;
        qfree(v2);
        v2 = nullptr;
        v4 = 0;
      }
    }
  }
  return __readgsdword(0x14u);
}
