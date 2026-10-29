__int64 __fastcall sub_2232860(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  _BYTE *v6; // rdi
  int v7; // esp
  unsigned __int64 v8; // r12
  _BYTE *v9; // r14
  unsigned __int64 v10; // rbp
  _BYTE *v11; // rax
  _BYTE *v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  _BYTE *v16; // rbp
  _BYTE *v17; // r13
  _BYTE *v18; // rax
  _BYTE *v19; // rsi
  __int64 result; // rax
  _BYTE v21[40]; // [rsp+80h] [rbp-28h] BYREF

  v6 = v21;
  if ( a2 == (unsigned int)a2 )
    return sub_2232660(a1, a2, a3, a4, 0);
  while ( 1 )
  {
    *--v6 = a2 % 0xA + 48;
    if ( a2 <= 9 )
      break;
    a2 /= 0xAu;
  }
  v8 = v7 + 128 - (int)v6;
  v9 = &v21[-v8];
  if ( a3 > v8 && a4 != 1 )
  {
    v10 = v7 + 128 - (int)v6;
    do
    {
      while ( 1 )
      {
        v11 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 24) )
          break;
        ++v10;
        *(_QWORD *)(a1 + 32) = v11 + 1;
        *v11 = 48;
        if ( a3 <= v10 )
          return sub_227BF10(a1, &v21[-v8], v8);
      }
      ++v10;
      sub_227BA10(a1, 48);
    }
    while ( a3 > v10 );
    return sub_227BF10(a1, &v21[-v8], v8);
  }
  if ( a4 != 1 )
    return sub_227BF10(a1, &v21[-v8], v8);
  v12 = &v21[-v8];
  v13 = (unsigned int)((v8 - 1) % 3) + 1;
  v14 = v13;
  if ( v8 <= v13 )
    v14 = v7 + 128 - (int)v6;
  v15 = v8 - v13;
  v16 = &v9[v13];
  v17 = &v16[v15];
  result = sub_227BF10(a1, v12, v14);
  if ( v15 )
  {
    while ( 1 )
    {
      v18 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v18 < *(_QWORD *)(a1 + 24) )
        break;
LABEL_20:
      sub_227BA10(a1, 44);
      result = sub_227BF10(a1, v16, 3);
      v16 += 3;
      if ( v16 == v17 )
        return result;
    }
    while ( 1 )
    {
      v19 = v16;
      v16 += 3;
      *(_QWORD *)(a1 + 32) = v18 + 1;
      *v18 = 44;
      result = sub_227BF10(a1, v19, 3);
      if ( v17 == v16 )
        break;
      v18 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v18 >= *(_QWORD *)(a1 + 24) )
        goto LABEL_20;
    }
  }
  return result;
}
