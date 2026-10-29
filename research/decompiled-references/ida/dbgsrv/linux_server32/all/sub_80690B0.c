/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80690B0
// Address: 0x080690B0

//----- (080690B0) --------------------------------------------------------
void __cdecl sub_80690B0(_DWORD *a1)
{
  char *v1; // esi
  int i; // ebp
  char *v3; // esi
  void *v4; // edx
  void *v5; // edx
  int v6; // [esp+0h] [ebp-20h]

  v1 = (char *)a1[7];
  *a1 = &off_811B8C0;
  if ( v1 )
  {
    v6 = a1[8];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v3 = &v1[68 * i];
        v4 = *((void **)v3 + 3);
        if ( v4 )
        {
          *((_DWORD *)v3 + 4) = 0;
          sub_80CF780(v4);
        }
        v5 = *(void **)v3;
        if ( *(_DWORD *)v3 )
        {
          *((_DWORD *)v3 + 1) = 0;
          sub_80CF780(v5);
        }
        v1 = (char *)a1[7];
      }
    }
    a1[8] = 0;
    sub_80CF780(v1);
  }
}
// 811B8C0: using guessed type int (__cdecl *off_811B8C0)(int);
