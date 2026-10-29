__int64 __fastcall sub_2232660(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4, char a5)
{
  _BYTE *v7; // rdi
  int v8; // esp
  unsigned __int64 v9; // r14
  _BYTE *v10; // rax
  _BYTE *v11; // r12
  unsigned __int64 v12; // r13
  _BYTE *v13; // rax
  __int64 result; // rax
  _BYTE *v15; // rsi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  _BYTE *v19; // rbp
  _BYTE *v20; // r12
  _BYTE *v21; // rax
  _BYTE *v22; // rsi
  int v23; // [rsp+Ch] [rbp-ACh]
  _BYTE v24[40]; // [rsp+90h] [rbp-28h] BYREF

  v7 = v24;
  while ( 1 )
  {
    *--v7 = a2 % 0xA + 48;
    if ( a2 <= 9 )
      break;
    a2 /= 0xAu;
  }
  v9 = v8 + 144 - (int)v7;
  if ( a5 )
  {
    v10 = *(_BYTE **)(a1 + 32);
    if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 24) )
    {
      v23 = a4;
      sub_227BA10(a1, 45);
      a4 = v23;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v10 + 1;
      *v10 = 45;
    }
  }
  v11 = &v24[-v9];
  if ( v9 < a3 && a4 != 1 )
  {
    v12 = v8 + 144 - (int)v7;
    do
    {
      while ( 1 )
      {
        v13 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 24) )
          break;
        ++v12;
        *(_QWORD *)(a1 + 32) = v13 + 1;
        *v13 = 48;
        if ( a3 <= v12 )
          return sub_227BF10(a1, &v24[-v9], v9);
      }
      ++v12;
      sub_227BA10(a1, 48);
    }
    while ( a3 > v12 );
    return sub_227BF10(a1, &v24[-v9], v9);
  }
  if ( a4 != 1 )
    return sub_227BF10(a1, &v24[-v9], v9);
  v15 = &v24[-v9];
  v16 = (unsigned int)((v9 - 1) % 3) + 1;
  v17 = v16;
  if ( v9 <= v16 )
    v17 = v8 + 144 - (int)v7;
  v18 = v9 - v16;
  v19 = &v11[v16];
  v20 = &v19[v18];
  result = sub_227BF10(a1, v15, v17);
  if ( v18 )
  {
    while ( 1 )
    {
      v21 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v21 < *(_QWORD *)(a1 + 24) )
        break;
LABEL_22:
      sub_227BA10(a1, 44);
      result = sub_227BF10(a1, v19, 3);
      v19 += 3;
      if ( v19 == v20 )
        return result;
    }
    while ( 1 )
    {
      v22 = v19;
      v19 += 3;
      *(_QWORD *)(a1 + 32) = v21 + 1;
      *v21 = 44;
      result = sub_227BF10(a1, v22, 3);
      if ( v20 == v19 )
        break;
      v21 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v21 >= *(_QWORD *)(a1 + 24) )
        goto LABEL_22;
    }
  }
  return result;
}
