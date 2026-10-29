__int64 __fastcall sub_721A00(__int64 a1, __int64 i, __int64 a3, unsigned __int16 a4, unsigned int a5, signed int a6)
{
  __int64 v7; // r10
  unsigned __int16 *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  unsigned __int64 v11; // r13
  unsigned __int16 *v12; // r11
  unsigned __int64 v13; // r14
  int v14; // r12d
  unsigned __int8 v15; // r11
  unsigned __int8 v16; // r9
  unsigned __int16 *v17; // rbx
  __int64 v18; // r12
  unsigned __int16 *v19; // rbx
  unsigned __int64 v20; // r13
  int v21; // ebp
  int v22; // r9d
  unsigned __int8 v23; // r11
  unsigned __int8 v24; // r10
  __int64 result; // rax
  __int64 v26; // rcx
  unsigned __int16 *v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+8h] [rbp-60h]
  unsigned int v30; // [rsp+10h] [rbp-58h]
  unsigned int v31; // [rsp+14h] [rbp-54h]
  __int64 v32; // [rsp+18h] [rbp-50h]
  __int64 v33; // [rsp+20h] [rbp-48h]
  unsigned int v34; // [rsp+2Ch] [rbp-3Ch]

  v7 = i;
  v8 = (unsigned __int16 *)(a1 + 6LL * (int)a5 + 6);
  v28 = (unsigned __int16 *)a3;
  v31 = *(__int16 *)(a1 + 4);
  v32 = a3 + 2;
  while ( 1 )
  {
    if ( (int)a5 >= a6 )
    {
      if ( v31 < a5 )
        goto LABEL_65;
      if ( a5 == a6 )
        goto LABEL_48;
      a3 = *v8;
    }
    else
    {
      a3 = *v8;
      if ( a4 < (unsigned __int16)a3 )
      {
        v26 = v8[1];
        a3 = 3 * v26 + 3;
        a5 += v26 + 1;
        v8 += a3;
        continue;
      }
      if ( v31 < a5 )
        goto LABEL_65;
    }
    if ( (unsigned __int16)a3 < a4 )
      goto LABEL_48;
    if ( a5 >= v31 )
      goto LABEL_65;
    a3 = v8[1];
    i = a5 + (unsigned int)a3;
    v34 = i;
    if ( (unsigned int)i >= v31 )
      goto LABEL_65;
    a3 *= 3;
    v33 = 2 * a3;
    i = v8[a3 + 2];
    v9 = *(_DWORD *)(a1 - 8);
    if ( (unsigned int)i >= v9 )
      goto LABEL_65;
    v10 = a1 + i;
    v11 = *(unsigned __int16 *)(a1 + i);
    v12 = (unsigned __int16 *)(a1 + i + v11 + 2);
    i += v11 + 3;
    if ( (unsigned int)i >= v9 )
      goto LABEL_65;
    i = *v12;
    a3 = v10 + (int)i + (int)v11 + 4 - 1 - a1;
    if ( (unsigned int)a3 >= v9 )
      goto LABEL_65;
    a3 = *v28 - (unsigned int)a4;
    v30 = a3;
    if ( (int)a3 < 0 )
      goto LABEL_63;
    v13 = (unsigned int)a3;
    a3 = (unsigned int)a3;
    if ( v11 <= (unsigned int)a3 )
      a3 = v11;
    v14 = a3;
    if ( !a3 )
      break;
    a3 = 0;
    for ( i = 1; ; i = (unsigned int)(i + 1) )
    {
      v15 = *(_BYTE *)(v32 + a4 + a3);
      v16 = *(_BYTE *)(v10 + a3 + 2);
      if ( v15 != v16 )
      {
        a3 = (unsigned int)-(int)i;
        if ( v15 < v16 )
          i = (unsigned int)a3;
        if ( (_DWORD)i )
        {
          if ( (int)i <= 0 )
            goto LABEL_23;
          i = (unsigned int)(i - 1);
          goto LABEL_60;
        }
LABEL_58:
        a5 = v34;
        result = 1;
        goto LABEL_50;
      }
      ++a3;
      if ( v14 < (int)i + 1 )
        break;
    }
    if ( v11 == v13 )
      goto LABEL_58;
    if ( v11 >= v13 )
    {
      i = (unsigned int)~(_DWORD)i;
      goto LABEL_23;
    }
LABEL_60:
    a4 += i;
    a5 += v8[1] + 1;
    v8 = (unsigned __int16 *)((char *)v8 + v33 + 6);
  }
  if ( v11 == v13 )
    goto LABEL_58;
  if ( v11 < v13 )
  {
    i = 0;
    goto LABEL_60;
  }
LABEL_63:
  i = 0xFFFFFFFFLL;
LABEL_23:
  if ( (int)a5 < a6 )
  {
    v17 = v28;
    v29 = v7;
    a3 = a4;
    i = 1;
    v18 = (__int64)v17 + a4 + 2;
    do
    {
      if ( *v8 != a4 )
        goto LABEL_65;
      a3 = v8[2];
      if ( (unsigned int)a3 >= v9 )
        goto LABEL_65;
      v19 = (unsigned __int16 *)(a1 + a3);
      v20 = *(unsigned __int16 *)(a1 + a3);
      if ( (int)a3 + (int)v20 + 3 >= v9 )
        goto LABEL_65;
      a3 = a3 + *(unsigned __int16 *)(a1 + a3 + v20 + 2) + (int)v20 + 4 - 1;
      if ( (unsigned int)a3 >= v9 )
        goto LABEL_65;
      a3 = v30;
      if ( (v30 & 0x80000000) != 0 )
        goto LABEL_46;
      a3 = v30;
      if ( v20 <= v30 )
        a3 = *v19;
      v21 = a3;
      if ( a3 )
      {
        a3 = 0;
        v22 = 1;
        while ( 1 )
        {
          v23 = *(_BYTE *)(v18 + a3);
          v24 = *((_BYTE *)v19 + a3 + 2);
          if ( v23 != v24 )
            break;
          ++v22;
          ++a3;
          if ( v21 < v22 )
            goto LABEL_44;
        }
        a3 = (unsigned int)-v22;
        if ( v23 < v24 )
          v22 = -v22;
        if ( v22 <= 0 )
        {
          v7 = v29;
          result = 1;
          if ( !v22 )
            goto LABEL_50;
LABEL_47:
          a4 = a4 + i - 1;
          if ( v31 >= a5 )
          {
LABEL_48:
            result = 0;
            goto LABEL_50;
          }
LABEL_65:
          sub_722BF0(a1, i, a3);
        }
      }
      else
      {
        v22 = 1;
LABEL_44:
        if ( v20 == v30 )
        {
          v7 = v29;
          result = 1;
          goto LABEL_50;
        }
        if ( v20 >= v30 )
        {
LABEL_46:
          v7 = v29;
          goto LABEL_47;
        }
      }
      i = (unsigned int)v22;
      ++a5;
      v8 += 3;
    }
    while ( a6 != a5 );
    v7 = v29;
  }
  a4 = a4 + i - 1;
  if ( v31 < a6 )
    goto LABEL_65;
  a5 = a6;
  result = 0;
LABEL_50:
  *(_DWORD *)v7 = a5;
  *(_BYTE *)(v7 + 4) = result;
  *(_WORD *)(v7 + 6) = a4;
  return result;
}

