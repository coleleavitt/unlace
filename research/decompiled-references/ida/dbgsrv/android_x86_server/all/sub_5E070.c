/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E070
// Address: 0x0005E070

//----- (0005E070) --------------------------------------------------------
unsigned int __cdecl sub_5E070(int a1, unsigned int a2)
{
  int v3; // [esp+10h] [ebp-2Ch] BYREF
  void *v4; // [esp+14h] [ebp-28h]
  int v5; // [esp+18h] [ebp-24h]
  int v6; // [esp+1Ch] [ebp-20h]
  int v7; // [esp+20h] [ebp-1Ch]
  unsigned int v8; // [esp+28h] [ebp-14h]

  v8 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a1 + 4) != a2 )
  {
    LOBYTE(v3) = 2;
    v5 = 0;
    v4 = nullptr;
    v7 = 0;
    v6 = 0;
    sub_4EB10((void **)a1, a2, (char *)&v3);
    if ( (char)v3 == 5 )
    {
      sub_59680(v4, (char *)&v3);
    }
    else if ( (char)v3 == 7 && v4 )
    {
      v5 = 0;
      qfree(v4);
      v4 = nullptr;
      v6 = 0;
    }
  }
  return __readgsdword(0x14u);
}
