/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A530
// Address: 0x0009A530

//----- (0009A530) --------------------------------------------------------
void __cdecl sub_9A530(_DWORD *a1)
{
  int v1; // eax
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  *a1 = &off_138C08;
  v1 = a1[22];
  if ( v1 )
  {
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 4))(a1[22]);
    a1[22] = 0;
  }
  a1[21] = 0;
  v2 = (void *)a1[24];
  if ( v2 )
  {
    a1[25] = 0;
    qfree(v2);
    a1[24] = 0;
    a1[26] = 0;
  }
  v3 = (void *)a1[18];
  if ( v3 )
  {
    a1[19] = 0;
    qfree(v3);
    a1[18] = 0;
    a1[20] = 0;
  }
  v4 = (void *)a1[15];
  if ( v4 )
  {
    a1[16] = 0;
    qfree(v4);
    a1[15] = 0;
    a1[17] = 0;
  }
  sub_936A0(a1);
}
// 138C08: using guessed type int (__cdecl *off_138C08)(int);
