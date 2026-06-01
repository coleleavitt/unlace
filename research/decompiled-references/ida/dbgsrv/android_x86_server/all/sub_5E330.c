/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E330
// Address: 0x0005E330

//----- (0005E330) --------------------------------------------------------
unsigned int __cdecl sub_5E330(int a1)
{
  char *v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+10h] [ebp-2Ch] BYREF
  void *v6; // [esp+14h] [ebp-28h]
  int v7; // [esp+18h] [ebp-24h]
  int v8; // [esp+1Ch] [ebp-20h]
  int v9; // [esp+20h] [ebp-1Ch]
  unsigned int v10; // [esp+28h] [ebp-14h]

  v10 = __readgsdword(0x14u);
  v1 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
  LOBYTE(v5) = 2;
  v7 = 0;
  v6 = nullptr;
  v9 = 0;
  v8 = 0;
  copy_idcv((char *)&v5, v1);
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = v2 - 1;
    *(_DWORD *)(a1 + 16) = v3;
    free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v3));
  }
  if ( (char)v5 == 5 )
  {
    sub_59680(v6, (char *)&v5);
  }
  else if ( (char)v5 == 7 && v6 )
  {
    v7 = 0;
    qfree(v6);
    v6 = nullptr;
    v8 = 0;
  }
  return __readgsdword(0x14u);
}
