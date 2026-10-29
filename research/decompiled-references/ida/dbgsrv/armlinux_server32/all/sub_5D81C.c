/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D81C
// Address: 0x0005D81C

//----- (0005D81C) --------------------------------------------------------
const char *__fastcall sub_5D81C(const char *result, void **a2)
{
  const void *v2; // r7
  const char *v3; // r6
  unsigned int v5; // r9
  void *v6; // r4
  size_t v7; // r8
  unsigned int v8; // r7
  int v9; // r10
  int v10; // r8
  unsigned __int8 *v11; // r4
  int v12; // r6
  unsigned __int8 *v13; // r6
  int v14; // t1
  char *v15; // r10

  v2 = result + 1034;
  v3 = result;
  v5 = (unsigned int)a2[2];
  v6 = *a2;
  if ( result != (const char *)-1034 && (result = (const char *)strlen(result + 1034), (v7 = (size_t)result) != 0) )
  {
    v15 = (char *)(result + 1);
    if ( (unsigned int)(result + 1) > v5 )
    {
      v6 = sub_78018((int)a2, v6, (unsigned int)(result + 1), 1u);
      *a2 = v6;
    }
    a2[1] = v15;
    result = (const char *)memmove(v6, v2, v7);
    *((_BYTE *)*a2 + v7) = 0;
    v10 = (int)a2[1];
    if ( v10 )
    {
      v5 = (unsigned int)a2[2];
      v9 = v10 - 1;
      v6 = *a2;
      v8 = v10 + 1;
    }
    else
    {
      v9 = 0;
      v5 = (unsigned int)a2[2];
      v6 = *a2;
      v8 = 2;
      v10 = 1;
    }
  }
  else
  {
    v8 = 2;
    v9 = 0;
    v10 = 1;
    a2[1] = nullptr;
  }
  if ( v8 > v5 )
  {
    result = (const char *)sub_78018((int)a2, v6, v8, 1u);
    v6 = (void *)result;
    *a2 = (void *)result;
  }
  a2[1] = (void *)v8;
  *((_BYTE *)v6 + v10) = 0;
  v11 = (unsigned __int8 *)(v3 + 10);
  *((_BYTE *)*a2 + v9) = 124;
  v12 = *((unsigned __int16 *)v3 + 4);
  if ( v12 )
  {
    v13 = &v11[v12];
    do
    {
      v14 = *v11++;
      result = (const char *)sub_34260((int)a2, "%02X", v14);
    }
    while ( v13 != v11 );
  }
  return result;
}
