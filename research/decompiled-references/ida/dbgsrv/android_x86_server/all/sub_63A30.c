/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63A30
// Address: 0x00063A30

//----- (00063A30) --------------------------------------------------------
char __cdecl sub_63A30(_DWORD *a1, char *a2)
{
  char *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp+10h] [ebp-2Ch] BYREF
  void *v7; // [esp+14h] [ebp-28h]
  int v8; // [esp+18h] [ebp-24h]
  int v9; // [esp+1Ch] [ebp-20h]
  int v10; // [esp+20h] [ebp-1Ch]
  unsigned int v11; // [esp+28h] [ebp-14h]

  v11 = __readgsdword(0x14u);
  if ( move_idcv(a2, (char *)(*a1 + 20 * a1[1] - 20)) )
    return 0;
  v3 = (char *)(*a1 + 20 * a1[1] - 20);
  LOBYTE(v6) = 2;
  v8 = 0;
  v7 = nullptr;
  v10 = 0;
  v9 = 0;
  copy_idcv((char *)&v6, v3);
  v4 = a1[1];
  if ( v4 )
  {
    v5 = v4 - 1;
    a1[1] = v5;
    free_idcv((char *)(*a1 + 20 * v5));
  }
  if ( (char)v6 == 5 )
  {
    sub_59680(v7, (char *)&v6);
  }
  else if ( (char)v6 == 7 )
  {
    if ( v7 )
    {
      v8 = 0;
      qfree(v7);
      v7 = nullptr;
      v9 = 0;
    }
  }
  return 1;
}
