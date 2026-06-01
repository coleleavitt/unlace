/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_849F0
// Address: 0x000849F0

//----- (000849F0) --------------------------------------------------------
unsigned int __cdecl sub_849F0(int a1, unsigned int a2)
{
  int v3; // [esp+18h] [ebp-20h] BYREF
  int v4; // [esp+1Ch] [ebp-1Ch]
  int v5; // [esp+20h] [ebp-18h]
  int v6; // [esp+24h] [ebp-14h]
  unsigned int v7; // [esp+2Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a1 + 4) != a2 )
  {
    v3 = -2;
    v6 = 0;
    v5 = -1;
    v4 = -1;
    sub_88760(a1, a2, (unsigned int)&v3);
    if ( v3 >= -1 )
    {
      if ( v4 )
      {
        v5 = 0;
        qfree((void *)v4);
        v4 = 0;
        v6 = 0;
      }
      v3 = -2;
    }
  }
  return __readgsdword(0x14u);
}
