/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30A40
// Address: 0x00030A40

//----- (00030A40) --------------------------------------------------------
void __cdecl sub_30A40(_DWORD *a1)
{
  int v1; // eax
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  v1 = a1[117];
  if ( v1 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 4))(a1[117]);
  v2 = (void *)a1[114];
  if ( v2 )
  {
    a1[115] = 0;
    qfree(v2);
    a1[114] = 0;
    a1[116] = 0;
  }
  if ( a1[53] )
  {
    sub_41610(a1 + 53, 0);
    qfree((void *)a1[53]);
    a1[53] = 0;
    a1[55] = 0;
  }
  v3 = (void *)a1[14];
  if ( v3 )
  {
    a1[15] = 0;
    qfree(v3);
    a1[14] = 0;
    a1[16] = 0;
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4);
    a1[4] = 0;
    a1[6] = 0;
  }
}
