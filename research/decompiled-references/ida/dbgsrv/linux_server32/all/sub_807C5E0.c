/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807C5E0
// Address: 0x0807C5E0

//----- (0807C5E0) --------------------------------------------------------
int __cdecl sub_807C5E0(void **a1, char a2)
{
  char v2; // cl
  _BYTE *v3; // edi
  unsigned int v4; // ebp
  int v5; // edx
  void *v6; // eax
  int v8; // [esp+0h] [ebp-24h]

  v2 = a2;
  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 1;
    v4 = 2;
    if ( (unsigned int)a1[2] >= 2 )
      goto LABEL_3;
LABEL_5:
    v8 = v5;
    v6 = sub_80CF920((int)a1, v6, v4, 1u);
    v2 = a2;
    v5 = v8;
    *a1 = v6;
    goto LABEL_3;
  }
  v4 = (unsigned int)(v3 + 1);
  v5 = (int)a1[1];
  v6 = *a1;
  --v3;
  if ( (unsigned int)a1[2] < v4 )
    goto LABEL_5;
LABEL_3:
  a1[1] = (void *)v4;
  v3[(_DWORD)v6] = v2;
  *((_BYTE *)*a1 + v5) = 0;
  return 0;
}
