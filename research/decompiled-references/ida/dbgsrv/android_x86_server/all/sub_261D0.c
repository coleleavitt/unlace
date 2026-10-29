/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_261D0
// Address: 0x000261D0

//----- (000261D0) --------------------------------------------------------
void __cdecl sub_261D0(_DWORD *a1, int a2, char a3, char **a4)
{
  char **v4; // esi
  _DWORD *v5; // esi
  void *v6; // eax
  void *v7; // eax

  v4 = a4;
  if ( a3 )
  {
    sub_1D4A0(a1, nullptr);
    v5 = (_DWORD *)sub_8ABA0((int)a1);
    sub_2DDD0(v5, (int)(a1 + 124));
    sub_2DEB0(v5 + 3, (int)(a1 + 127));
    v6 = (void *)a1[124];
    if ( v6 )
    {
      a1[125] = 0;
      qfree(v6);
      a1[124] = 0;
      a1[126] = 0;
    }
    v7 = (void *)a1[127];
    v4 = a4;
    if ( v7 )
    {
      a1[128] = 0;
      qfree(v7);
      a1[127] = 0;
      a1[129] = 0;
    }
  }
  if ( v4 )
    sub_20430((int)a1, v4);
}
