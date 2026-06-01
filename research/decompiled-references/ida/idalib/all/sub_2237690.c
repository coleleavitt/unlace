__int64 __fastcall sub_2237690(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v3; // rbx
  unsigned __int64 v4; // r8
  int v6; // ebp
  unsigned int v7; // r14d
  unsigned __int64 v8; // r9
  char *v9; // rax
  char *v10; // rax
  int v11; // r12d
  unsigned __int64 v12; // r11
  const void *v13; // rsi
  size_t v14; // r11
  size_t v15; // r13
  const void *v16; // rsi
  unsigned __int64 v18; // [rsp+0h] [rbp-58h]
  size_t v19; // [rsp+0h] [rbp-58h]
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v3 = *(_BYTE **)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  v22 = a3;
  if ( !(_DWORD)a3 )
    goto LABEL_22;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    v20 = v4;
    v18 = v8;
    v9 = (char *)memchr((const void *)(a2 + v8), 9, a3 - v8);
    v8 = v18;
    v4 = v20;
    if ( !v9 )
      break;
    v10 = &v9[-a2];
    v11 = (int)v10;
    if ( v10 == (char *)-1LL )
      break;
    if ( v18 > a3 )
      v8 = a3;
    if ( (unsigned __int64)v10 >= v8 )
    {
      v12 = (unsigned __int64)v10;
      if ( a3 <= (unsigned __int64)v10 )
        v12 = a3;
      v13 = (const void *)(a2 + v8);
      v14 = v12 - v8;
      if ( v14 <= v20 - (unsigned __int64)v3 )
      {
        if ( v14 )
        {
          v19 = v14;
          memcpy(v3, v13, v14);
          v4 = *(_QWORD *)(a1 + 24);
          v3 = (_BYTE *)(v19 + *(_QWORD *)(a1 + 32));
          *(_QWORD *)(a1 + 32) = v3;
        }
      }
      else
      {
        sub_227BF10(a1, v13, v14);
        v3 = *(_BYTE **)(a1 + 32);
        v4 = *(_QWORD *)(a1 + 24);
      }
    }
    v6 = v11 + v6 - v7;
    while ( (unsigned __int64)v3 < v4 )
    {
      ++v6;
      *(_QWORD *)(a1 + 32) = v3 + 1;
      *v3 = 32;
      if ( (v6 & 7) == 0 )
        goto LABEL_17;
LABEL_14:
      v3 = *(_BYTE **)(a1 + 32);
      v4 = *(_QWORD *)(a1 + 24);
    }
    ++v6;
    sub_227BA10(a1, 32);
    if ( (v6 & 7) != 0 )
      goto LABEL_14;
LABEL_17:
    v7 = v11 + 1;
    if ( v22 == v11 + 1 )
    {
      v3 = *(_BYTE **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 24) > (unsigned __int64)v3 )
        goto LABEL_23;
      return sub_227BA10(a1, 10);
    }
    v8 = v7;
    v4 = *(_QWORD *)(a1 + 24);
    v3 = *(_BYTE **)(a1 + 32);
  }
  while ( v7 < a3 );
  if ( a3 >= v8 )
  {
    v15 = a3 - v8;
    v16 = (const void *)(v8 + a2);
    if ( v15 <= v4 - (unsigned __int64)v3 )
    {
      if ( v15 )
      {
        memcpy(v3, v16, v15);
        v4 = *(_QWORD *)(a1 + 24);
        v3 = (_BYTE *)(v15 + *(_QWORD *)(a1 + 32));
        *(_QWORD *)(a1 + 32) = v3;
      }
    }
    else
    {
      sub_227BF10(a1, v16, v15);
      v3 = *(_BYTE **)(a1 + 32);
      v4 = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_22:
  if ( v4 > (unsigned __int64)v3 )
  {
LABEL_23:
    *(_QWORD *)(a1 + 32) = v3 + 1;
    *v3 = 10;
    return (__int64)(v3 + 1);
  }
  return sub_227BA10(a1, 10);
}
