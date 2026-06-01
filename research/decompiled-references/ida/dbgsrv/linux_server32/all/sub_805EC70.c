/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805EC70
// Address: 0x0805EC70

//----- (0805EC70) --------------------------------------------------------
_DWORD *__cdecl sub_805EC70(_DWORD *a1, char *s, int a3)
{
  _BYTE *v3; // eax
  int v4; // eax
  unsigned int v5; // edx
  _BYTE *v6; // eax
  unsigned int v8; // [esp+0h] [ebp-20h]

  v3 = (_BYTE *)*a1;
  if ( *a1 )
  {
    a1[1] = 0;
    sub_80CF780(v3);
    *a1 = 0;
    a1[2] = 0;
  }
  v4 = sub_80D37B0(nullptr, 0, s, a3);
  if ( v4 )
  {
    v5 = v4 + 1;
    v6 = (_BYTE *)*a1;
    if ( a1[2] < v5 )
    {
      v8 = v5;
      v6 = sub_80CF920((int)a1, v6, v5, 1u);
      v5 = v8;
      *a1 = v6;
    }
    a1[1] = v5;
    sub_80D37B0(v6, v5, s, a3);
  }
  return a1;
}
