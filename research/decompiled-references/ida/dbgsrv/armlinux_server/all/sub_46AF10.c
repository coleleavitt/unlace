/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46AF10
// Address: 0x000000000046AF10

//----- (000000000046AF10) ----------------------------------------------------
__int64 __fastcall sub_46AF10(__int64 a1, void **a2)
{
  const void *v4; // x23
  void *v5; // x19
  unsigned __int64 v6; // x24
  size_t v7; // x0
  size_t v8; // x22
  unsigned __int64 v9; // x22
  __int64 v10; // x23
  __int64 v11; // x25
  unsigned __int8 *v12; // x19
  __int64 result; // x0
  unsigned __int8 *v14; // x21
  int v15; // t1
  size_t v16; // x25

  v4 = (const void *)(a1 + 1034);
  v5 = *a2;
  v6 = (unsigned __int64)a2[2];
  if ( a1 == -1034 || (v7 = strlen((const char *)(a1 + 1034)), (v8 = v7) == 0) )
  {
    a2[1] = nullptr;
LABEL_4:
    v9 = 2;
    v10 = 1;
    v11 = 0;
    goto LABEL_5;
  }
  v16 = v7 + 1;
  if ( v7 + 1 > v6 )
  {
    v5 = sub_491288((__int64)a2, v5, v7 + 1, 1u);
    *a2 = v5;
  }
  a2[1] = (void *)v16;
  memmove(v5, v4, v8);
  *((_BYTE *)*a2 + v8) = 0;
  v5 = *a2;
  v10 = (__int64)a2[1];
  v6 = (unsigned __int64)a2[2];
  if ( !v10 )
    goto LABEL_4;
  v11 = v10 - 1;
  v9 = v10 + 1;
LABEL_5:
  if ( v9 > v6 )
  {
    v5 = sub_491288((__int64)a2, v5, v9, 1u);
    *a2 = v5;
  }
  a2[1] = (void *)v9;
  *((_BYTE *)v5 + v10) = 0;
  v12 = (unsigned __int8 *)(a1 + 10);
  *((_BYTE *)*a2 + v11) = asc_4C64B0[0];
  result = *(unsigned __int16 *)(a1 + 8);
  if ( *(_WORD *)(a1 + 8) )
  {
    v14 = &v12[(unsigned int)(result - 1) + 1];
    do
    {
      v15 = *v12++;
      result = sub_42D148((__int64)a2, "%02X", v15);
    }
    while ( v12 != v14 );
  }
  return result;
}
