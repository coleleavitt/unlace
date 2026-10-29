/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CA08
// Address: 0x0003CA08

//----- (0003CA08) --------------------------------------------------------
int __fastcall sub_3CA08(void **a1, char a2)
{
  void *v3; // r1
  _BYTE *v4; // r5
  unsigned int v6; // r3
  unsigned int v7; // r6
  int v8; // r8
  void *v10; // r0

  v4 = a1[1];
  v3 = *a1;
  if ( !v4 )
  {
    v7 = 2;
    v8 = 1;
    if ( (unsigned int)a1[2] >= 2 )
      goto LABEL_7;
LABEL_9:
    v3 = sub_78018((int)a1, v3, v7, 1u);
    *a1 = v3;
    goto LABEL_7;
  }
  if ( (unsigned int)--v4 < 0x400 )
  {
    v6 = (unsigned int)a1[2];
LABEL_5:
    v7 = (unsigned int)(v4 + 2);
    v8 = (int)(v4 + 1);
    goto LABEL_6;
  }
  sub_171B0((int)"%s", (const char *)v3);
  v3 = *a1;
  if ( *a1 )
  {
    v10 = *a1;
    a1[1] = nullptr;
    sub_77F70(v10);
    v4 = a1[1];
    *a1 = nullptr;
    a1[2] = nullptr;
    if ( !v4 )
    {
      v3 = nullptr;
      v8 = 1;
      v7 = 2;
      goto LABEL_9;
    }
    v6 = 0;
    goto LABEL_13;
  }
  v6 = (unsigned int)a1[2];
  v4 = a1[1];
  if ( v4 )
  {
LABEL_13:
    --v4;
    v3 = nullptr;
    goto LABEL_5;
  }
  v8 = 1;
  v7 = 2;
  v4 = *a1;
LABEL_6:
  if ( v7 > v6 )
    goto LABEL_9;
LABEL_7:
  a1[1] = (void *)v7;
  v4[(_DWORD)v3] = a2;
  *((_BYTE *)*a1 + v8) = 0;
  return 0;
}
