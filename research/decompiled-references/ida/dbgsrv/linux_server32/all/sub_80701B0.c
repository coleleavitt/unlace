/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80701B0
// Address: 0x080701B0

//----- (080701B0) --------------------------------------------------------
void **__cdecl sub_80701B0(void **a1, char *s, int a3)
{
  int v3; // eax
  int v4; // esi
  void *v5; // eax
  int v6; // edx
  int v7; // ecx
  int v9; // [esp+0h] [ebp-24h]
  int v10; // [esp+4h] [ebp-20h]

  v3 = sub_80D37B0(nullptr, 0, s, a3);
  if ( v3 )
  {
    v4 = v3 + 1;
    v5 = *a1;
    v6 = (int)a1[1] + (a1[1] == nullptr) - 1;
    v7 = v6 + v4;
    if ( (unsigned int)a1[2] < v6 + v4 )
    {
      v10 = (int)a1[1] + (a1[1] == nullptr) - 1;
      v9 = v6 + v4;
      v5 = sub_80CF920((int)a1, v5, v6 + v4, 1u);
      v6 = v10;
      v7 = v9;
      *a1 = v5;
    }
    a1[1] = (void *)v7;
    sub_80D37B0((_BYTE *)v5 + v6, v4, s, a3);
  }
  return a1;
}
