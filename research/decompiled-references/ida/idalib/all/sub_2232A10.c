__int64 __fastcall sub_2232A10(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // rsi
  _BYTE *v7; // rdi
  __int64 result; // rax
  int v9; // esp
  _BYTE *v10; // rax
  unsigned __int64 v11; // r13
  _BYTE *v12; // r12
  unsigned __int64 v13; // r14
  _BYTE *v14; // rax
  unsigned __int64 v15; // rdi
  _BYTE *v16; // r8
  int v17; // esp
  unsigned __int64 v18; // r14
  _BYTE *v19; // r12
  unsigned __int64 v20; // r13
  _BYTE *v21; // rax
  _BYTE *v22; // rsi
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r13
  _BYTE *v26; // rbp
  _BYTE *v27; // r12
  _BYTE *v28; // rax
  _BYTE *v29; // rsi
  _BYTE *v30; // rsi
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r14
  _BYTE *v34; // rbp
  _BYTE *v35; // r12
  _BYTE *v36; // rsi
  _BYTE *v37; // rax
  int v38; // [rsp+Ch] [rbp-ACh]
  _BYTE v39[40]; // [rsp+90h] [rbp-28h] BYREF

  if ( a2 >= 0 )
  {
    v15 = a2;
    v16 = v39;
    if ( (unsigned int)a2 == a2 )
      return sub_2232660(a1, a2, a3, a4, 0);
    while ( 1 )
    {
      *--v16 = v15 % 0xA + 48;
      if ( v15 <= 9 )
        break;
      v15 /= 0xAu;
    }
    v18 = v17 + 144 - (int)v16;
    v19 = &v39[-v18];
    if ( a3 <= v18 || a4 == 1 )
    {
      if ( a4 == 1 )
      {
        v30 = &v39[-v18];
        v31 = (unsigned int)((v18 - 1) % 3) + 1;
        v32 = v31;
        if ( v18 <= v31 )
          v32 = v17 + 144 - (int)v16;
        v33 = v18 - v31;
        v34 = &v19[v31];
        v35 = &v34[v33];
        result = sub_227BF10(a1, v30, v32);
        if ( v33 )
        {
          do
          {
            v37 = *(_BYTE **)(a1 + 32);
            if ( (unsigned __int64)v37 < *(_QWORD *)(a1 + 24) )
            {
              *(_QWORD *)(a1 + 32) = v37 + 1;
              *v37 = 44;
            }
            else
            {
              sub_227BA10(a1, 44);
            }
            v36 = v34;
            v34 += 3;
            result = sub_227BF10(a1, v36, 3);
          }
          while ( v34 != v35 );
        }
        return result;
      }
    }
    else
    {
      v20 = v17 + 144 - (int)v16;
      do
      {
        while ( 1 )
        {
          v21 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v21 >= *(_QWORD *)(a1 + 24) )
            break;
          ++v20;
          *(_QWORD *)(a1 + 32) = v21 + 1;
          *v21 = 48;
          if ( a3 <= v20 )
            return sub_227BF10(a1, &v39[-v18], v18);
        }
        ++v20;
        sub_227BA10(a1, 48);
      }
      while ( a3 > v20 );
    }
    return sub_227BF10(a1, &v39[-v18], v18);
  }
  v6 = -a2;
  v7 = v39;
  if ( v6 == (unsigned int)v6 )
    return sub_2232660(a1, v6, a3, a4, 1);
  while ( 1 )
  {
    *--v7 = v6 % 0xA + 48;
    if ( v6 <= 9 )
      break;
    v6 /= 0xAu;
  }
  v10 = *(_BYTE **)(a1 + 32);
  v11 = v9 + 144 - (int)v7;
  if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 24) )
  {
    v38 = a4;
    sub_227BA10(a1, 45);
    a4 = v38;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v10 + 1;
    *v10 = 45;
  }
  v12 = &v39[-v11];
  if ( a3 > v11 && a4 != 1 )
  {
    v13 = v9 + 144 - (int)v7;
    do
    {
      while ( 1 )
      {
        v14 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v14 >= *(_QWORD *)(a1 + 24) )
          break;
        ++v13;
        *(_QWORD *)(a1 + 32) = v14 + 1;
        *v14 = 48;
        if ( a3 <= v13 )
          return sub_227BF10(a1, &v39[-v11], v11);
      }
      ++v13;
      sub_227BA10(a1, 48);
    }
    while ( a3 > v13 );
    return sub_227BF10(a1, &v39[-v11], v11);
  }
  if ( a4 != 1 )
    return sub_227BF10(a1, &v39[-v11], v11);
  v22 = &v39[-v11];
  v23 = (unsigned int)((v11 - 1) % 3) + 1;
  v24 = v23;
  if ( v11 <= v23 )
    v24 = v9 + 144 - (int)v7;
  v25 = v11 - v23;
  v26 = &v12[v23];
  v27 = &v26[v25];
  result = sub_227BF10(a1, v22, v24);
  if ( v25 )
  {
    while ( 1 )
    {
      v28 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v28 < *(_QWORD *)(a1 + 24) )
        break;
LABEL_34:
      sub_227BA10(a1, 44);
      result = sub_227BF10(a1, v26, 3);
      v26 += 3;
      if ( v26 == v27 )
        return result;
    }
    while ( 1 )
    {
      v29 = v26;
      v26 += 3;
      *(_QWORD *)(a1 + 32) = v28 + 1;
      *v28 = 44;
      result = sub_227BF10(a1, v29, 3);
      if ( v27 == v26 )
        break;
      v28 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v28 >= *(_QWORD *)(a1 + 24) )
        goto LABEL_34;
    }
  }
  return result;
}
