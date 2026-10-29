bool __fastcall sub_3D1870(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _BYTE *v9; // rsi
  unsigned __int64 v10; // r12
  _BYTE *v11; // rbx
  _BYTE *v12; // r12
  __int64 v14; // rax

  v2 = a2[1];
  v3 = a1[1];
  if ( !v2 )
  {
    if ( !v3 )
    {
      v5 = *a2;
      v7 = *a2;
      return v5 == v7;
    }
    a1[1] = 0;
    v5 = *a2;
    goto LABEL_4;
  }
  v8 = v2 - 1;
  v9 = (_BYTE *)*a1;
  v10 = v8 >> 1;
  v11 = (_BYTE *)*a1;
  if ( v3 >= v8 >> 1 )
  {
    if ( v10 == v3 )
    {
      v12 = &v9[v10];
      v5 = *a2;
      if ( v12 == v9 )
      {
        v7 = *a2;
        goto LABEL_16;
      }
      goto LABEL_12;
    }
  }
  else
  {
    if ( a1[2] < v10 )
    {
      v14 = qvector_reserve();
      v3 = a1[1];
      *a1 = v14;
      v9 = (_BYTE *)v14;
    }
    memset(&v9[v3], 0, v10 - v3);
    v11 = (_BYTE *)*a1;
  }
  a1[1] = v10;
  v12 = &v11[v10];
  v5 = *a2;
  if ( v11 == v12 )
  {
LABEL_4:
    v6 = a2[1];
    v7 = v5;
    goto LABEL_14;
  }
  do
  {
LABEL_12:
    if ( (unsigned int)qsscanf() != 1 )
      break;
    *v11++ = 0;
    v5 += 2;
  }
  while ( v12 != v11 );
  v6 = a2[1];
  v7 = *a2;
LABEL_14:
  if ( v6 )
  {
    v8 = v6 - 1;
LABEL_16:
    v7 += v8;
  }
  return v5 == v7;
}
