/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465D0
// Address: 0x000465D0

//----- (000465D0) --------------------------------------------------------
unsigned int __cdecl sub_465D0(int a1, char *s, int a3)
{
  int v3; // edi
  int v4; // esi
  int v6[9]; // [esp+18h] [ebp-24h] BYREF

  v6[4] = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 104);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 112);
    sub_1B530((int)v6, s);
    sub_526D0(v3, v4, (int)v6);
    if ( v6[0] )
    {
      v6[1] = 0;
      qfree((void *)v6[0]);
      v6[0] = 0;
      v6[2] = 0;
    }
    sub_52A10(*(_DWORD *)(a1 + 104), *(_DWORD *)(a1 + 112), a3);
  }
  return __readgsdword(0x14u);
}
