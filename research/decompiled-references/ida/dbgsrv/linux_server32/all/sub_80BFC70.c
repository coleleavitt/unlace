/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BFC70
// Address: 0x080BFC70

//----- (080BFC70) --------------------------------------------------------
bool __cdecl sub_80BFC70(_DWORD *a1)
{
  pthread_mutex_t *v1; // esi
  _DWORD *v2; // eax
  int v3; // edx

  *a1 = &off_811CE1C;
  v1 = (pthread_mutex_t *)dword_811E7D0;
  sub_80D15A0((pthread_mutex_t *)dword_811E7D0);
  v2 = (_DWORD *)dword_811E7D4;
  v3 = dword_811E7D4 + 4 * dword_811E7D8;
  if ( dword_811E7D4 != v3 )
  {
    while ( a1 != (_DWORD *)*v2 )
    {
      if ( (_DWORD *)v3 == ++v2 )
        return sub_80D1600(v1);
    }
    if ( (_DWORD *)v3 != v2 )
    {
      memmove(v2, v2 + 1, v3 - (_DWORD)v2 - 4);
      --dword_811E7D8;
    }
  }
  return sub_80D1600(v1);
}
// 811CE1C: using guessed type _UNKNOWN *off_811CE1C;
// 811E7D0: using guessed type int dword_811E7D0;
// 811E7D4: using guessed type int dword_811E7D4;
// 811E7D8: using guessed type int dword_811E7D8;
