/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C8D0
// Address: 0x000000000043C8D0

//----- (000000000043C8D0) ----------------------------------------------------
void *__fastcall sub_43C8D0(void **a1, const void *a2, size_t a3)
{
  char *v6; // x1
  size_t v7; // x21
  char *v8; // x22
  char *v10; // x3
  char *v11; // x0
  unsigned __int64 v12; // x2
  char *v13; // x0
  char v14; // [xsp+47h] [xbp-9h] BYREF

  v6 = (char *)*a1;
  v7 = (size_t)a1[1];
  v14 = 0;
  v8 = (char *)(v7 + a3);
  if ( v7 > v7 + a3 )
  {
LABEL_11:
    a1[1] = v8;
    return memcpy(&v6[v7], a2, a3);
  }
  if ( v7 >= v7 + a3 )
    return memcpy(&v6[v7], a2, a3);
  v10 = (char *)a1[2];
  if ( v6 > &v14 || &v14 >= &v10[(_QWORD)v6] )
  {
    if ( v8 > v10 )
      *a1 = sub_491288((__int64)a1, v6, v7 + a3, 1u);
    v11 = (char *)a1[1];
    if ( v8 > v11 )
    {
      do
        (v11++)[(_QWORD)*a1] = 0;
      while ( v8 != v11 );
    }
    v6 = (char *)*a1;
    goto LABEL_11;
  }
  v12 = v7;
  if ( v8 <= v10
    || (v13 = (char *)sub_491288((__int64)a1, v6, v7 + a3, 1u),
        *a1 = v13,
        v12 = (unsigned __int64)a1[1],
        v6 = v13,
        (unsigned __int64)v8 > v12) )
  {
    do
    {
      v6[v12++] = 0;
      v6 = (char *)*a1;
    }
    while ( v8 != (char *)v12 );
    a1[1] = v8;
  }
  else
  {
    a1[1] = v8;
  }
  return memcpy(&v6[v7], a2, a3);
}
