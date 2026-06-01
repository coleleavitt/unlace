/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE050
// Address: 0x080CE050

//----- (080CE050) --------------------------------------------------------
void *__cdecl sub_80CE050(unsigned int *a1, unsigned int a2, char a3)
{
  size_t v3; // esi
  _BYTE *v4; // eax
  unsigned int v5; // ebp
  int v6; // eax
  void *v7; // edi
  char v9; // [esp-18h] [ebp-28h]

  v3 = sub_80CDEC0(a1, a2);
  v4 = (_BYTE *)*a1;
  v5 = *a1 + v3;
  if ( a2 >= v5 && v5 >= (unsigned int)v4 )
  {
    if ( !a3 )
    {
      v6 = v3 + 1;
      if ( (int)(v3 + 1) <= 0 )
      {
        v6 = 1;
        v3 = 0;
      }
      goto LABEL_7;
    }
    if ( v3 && *v4 )
    {
      v6 = v3 + 1;
      v7 = nullptr;
      if ( (int)(v3 + 1) <= 0 )
        return v7;
LABEL_7:
      v7 = sub_80CF710(v6);
      if ( !v7 )
        sub_807ECA0((int)"unpack_ds", v9);
      memcpy(v7, (const void *)*a1, v3);
      *((_BYTE *)v7 + v3) = 0;
      *a1 = v5;
      return v7;
    }
  }
  return nullptr;
}
// 80CE106: variable 'v9' is possibly undefined
