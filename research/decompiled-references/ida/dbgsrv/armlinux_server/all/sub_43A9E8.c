/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A9E8
// Address: 0x000000000043A9E8

//----- (000000000043A9E8) ----------------------------------------------------
__int64 __fastcall sub_43A9E8(void **a1, char a2)
{
  void *v4; // x1
  void *v5; // x20
  unsigned __int64 v6; // x20
  unsigned __int64 v7; // x0
  unsigned __int64 v8; // x21
  __int64 v9; // x22

  v4 = *a1;
  v5 = a1[1];
  if ( !v5 )
  {
    v8 = 2;
    v9 = 1;
    v6 = 0;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_6;
LABEL_8:
    v4 = sub_491288((__int64)a1, v4, v8, 1u);
    *a1 = v4;
    goto LABEL_6;
  }
  v6 = (unsigned __int64)v5 - 1;
  if ( v6 <= 0x3FF )
  {
    v7 = (unsigned __int64)a1[2];
LABEL_4:
    v8 = v6 + 2;
    v9 = v6 + 1;
    goto LABEL_5;
  }
  sub_40A690((int)"%s", v4);
  v4 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    j__free(v4);
    v6 = (unsigned __int64)a1[1];
    *a1 = nullptr;
    a1[2] = nullptr;
    if ( !v6 )
    {
      v4 = nullptr;
      v9 = 1;
      v8 = 2;
      v6 = 0;
      goto LABEL_8;
    }
    v7 = 0;
    goto LABEL_12;
  }
  v6 = (unsigned __int64)a1[1];
  v7 = (unsigned __int64)a1[2];
  v9 = 1;
  v8 = 2;
  if ( v6 )
  {
LABEL_12:
    --v6;
    v4 = nullptr;
    goto LABEL_4;
  }
LABEL_5:
  if ( v8 > v7 )
    goto LABEL_8;
LABEL_6:
  a1[1] = (void *)v8;
  *((_BYTE *)v4 + v6) = a2;
  *((_BYTE *)*a1 + v9) = 0;
  return 0;
}
