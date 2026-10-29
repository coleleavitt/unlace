/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A968
// Address: 0x000000000043A968

//----- (000000000043A968) ----------------------------------------------------
__int64 __fastcall sub_43A968(void **a1, char a2)
{
  __int64 v4; // x20
  __int64 v5; // x22
  unsigned __int64 v6; // x21
  void *v7; // x1

  v4 = (__int64)a1[1];
  if ( v4 )
  {
    v5 = v4 - 1;
    v6 = v4 + 1;
  }
  else
  {
    v4 = 1;
    v6 = 2;
    v5 = 0;
  }
  v7 = *a1;
  if ( v6 > (unsigned __int64)a1[2] )
  {
    v7 = sub_491288((__int64)a1, v7, v6, 1u);
    *a1 = v7;
  }
  a1[1] = (void *)v6;
  *((_BYTE *)v7 + v5) = a2;
  *((_BYTE *)*a1 + v4) = 0;
  return 0;
}
