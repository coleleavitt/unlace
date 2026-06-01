/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807C670
// Address: 0x0807C670

//----- (0807C670) --------------------------------------------------------
int __cdecl sub_807C670(void **a1, char a2)
{
  int v2; // edi
  void *v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  unsigned int v6; // ebp
  int v8; // [esp+4h] [ebp-20h]

  v2 = (int)a1[1];
  v3 = *a1;
  if ( !v2 )
  {
    v4 = (unsigned int)a1[2];
    v5 = 1;
    v6 = 2;
    goto LABEL_3;
  }
  if ( (unsigned int)(v2 - 1) <= 0x3FF )
  {
    v4 = (unsigned int)a1[2];
    v5 = (int)a1[1];
    --v2;
    goto LABEL_7;
  }
  sub_8058290();
  v3 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    sub_80CF780(v3);
    v5 = (int)a1[1];
    *a1 = nullptr;
    a1[2] = nullptr;
    if ( !v5 )
    {
      v2 = 0;
      v5 = 1;
      v3 = nullptr;
      v6 = 2;
      goto LABEL_8;
    }
    v2 = v5 - 1;
    v3 = nullptr;
    v4 = 0;
    goto LABEL_7;
  }
  v5 = (int)a1[1];
  v4 = (unsigned int)a1[2];
  if ( v5 )
  {
    v2 = v5 - 1;
LABEL_7:
    v6 = v2 + 2;
    if ( v4 >= v2 + 2 )
      goto LABEL_4;
LABEL_8:
    v8 = v5;
    v3 = sub_80CF920((int)a1, v3, v6, 1u);
    v5 = v8;
    *a1 = v3;
    goto LABEL_4;
  }
  v2 = 0;
  v5 = 1;
  v6 = 2;
LABEL_3:
  if ( v4 < 2 )
    goto LABEL_8;
LABEL_4:
  a1[1] = (void *)v6;
  *((_BYTE *)v3 + v2) = a2;
  *((_BYTE *)*a1 + v5) = 0;
  return 0;
}
