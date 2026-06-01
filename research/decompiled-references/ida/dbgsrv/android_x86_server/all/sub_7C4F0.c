/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C4F0
// Address: 0x0007C4F0

//----- (0007C4F0) --------------------------------------------------------
void __cdecl sub_7C4F0(_DWORD *a1)
{
  _BYTE *v1; // eax
  void *v2; // eax
  void *v3; // eax

  *a1 = &off_138314;
  a1[25] = off_138340;
  v1 = (_BYTE *)a1[61];
  if ( v1 && !v1[388] )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 20))(a1[61]);
  sub_92D90(a1);
  a1[62] = 0;
  free_debug_event(a1 + 50);
  free_debug_event(a1 + 39);
  a1[25] = &off_138B5C;
  v2 = (void *)a1[35];
  if ( v2 )
  {
    a1[36] = 0;
    qfree(v2);
    a1[35] = 0;
    a1[37] = 0;
  }
  v3 = (void *)a1[27];
  if ( v3 )
  {
    a1[28] = 0;
    qfree(v3);
    a1[27] = 0;
    a1[29] = 0;
  }
  sub_92E10(a1);
}
// 1B9D0: using guessed type _DWORD __cdecl sub_1B9D0(_DWORD);
// 138314: using guessed type int (__cdecl *off_138314)(int);
// 138340: using guessed type int (__cdecl *off_138340[2])(int);
// 138B5C: using guessed type int (__cdecl *off_138B5C)(int);
