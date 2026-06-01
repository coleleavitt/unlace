__int64 __fastcall sub_A26740(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r14d
  __int64 v8; // r13
  unsigned __int8 *v9; // rbx
  unsigned int v10; // ebp
  __int64 result; // rax
  unsigned int v12; // r15d
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r14
  unsigned int v17; // esi
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // [rsp+4h] [rbp-74h]
  _QWORD *v22; // [rsp+8h] [rbp-70h]
  unsigned int v26; // [rsp+28h] [rbp-50h]

  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 16LL * (a2 - 4));
  v26 = a6;
  sub_A1FEC0(a1, a2, *(_DWORD *)(a1 + 56));
  v21 = *(_DWORD *)(v8 + 8);
  if ( BYTE4(a7) )
  {
    v7 = 1;
    if ( (*(_BYTE *)(*(_QWORD *)v8 + 8LL) & 1) == 0 )
      sub_A23250(a1, *(_QWORD *)v8, a7);
  }
  v9 = (unsigned __int8 *)a5;
  v10 = 0;
  result = v26 - 1;
  if ( v7 != v21 )
  {
    v22 = (_QWORD *)v8;
    v12 = v7;
    while ( 1 )
    {
      while ( 1 )
      {
        result = (__int64)v22;
        v14 = *v22 + 16LL * v12;
        if ( (*(_BYTE *)(v14 + 8) & 1) == 0 )
          break;
        ++v10;
        ++v12;
LABEL_13:
        if ( v21 == v12 )
          return result;
      }
      v13 = (*(_BYTE *)(v14 + 8) >> 1) & 7;
      if ( v13 == 3 )
        break;
      if ( v13 != 5 )
      {
        v19 = v10++;
        ++v12;
        result = sub_A26320(a1, v14, *(_QWORD *)(a3 + 8 * v19));
        goto LABEL_13;
      }
      ++v12;
      if ( v9 )
      {
        v9 = nullptr;
        result = sub_A20510(a1, a5, a6, 1);
      }
      else
      {
        result = sub_A263B0(a1, (const __m128i *)(a3 + 8LL * v10), a4 - v10, 1);
      }
LABEL_10:
      if ( v21 == v12 )
        return result;
    }
    v15 = *v22 + 16LL * (v12 + 1);
    if ( !v9 )
    {
      v12 += 2;
      result = sub_A202E0(a1, (unsigned int)a4 - v10);
      if ( (_DWORD)a4 != v10 )
      {
        do
        {
          v20 = v10++;
          result = sub_A26320(a1, v15, *(_QWORD *)(a3 + 8 * v20));
        }
        while ( (_DWORD)a4 != v10 );
        v9 = nullptr;
      }
      goto LABEL_10;
    }
    sub_A202E0(a1, v26);
    v16 = (__int64)&v9[v26];
    result = v26;
    if ( !v26 )
    {
LABEL_28:
      v12 += 2;
      v9 = nullptr;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v18 = *v9;
      result = (*(_BYTE *)(v15 + 8) >> 1) & 7;
      if ( (_BYTE)result == 2 )
      {
        if ( *(_QWORD *)v15 )
          result = sub_A1FFA0(a1, v18, *(_QWORD *)v15);
        goto LABEL_23;
      }
      if ( (_BYTE)result == 4 )
        break;
      if ( *(_QWORD *)v15 )
      {
        ++v9;
        result = sub_A1FEC0(a1, v18, *(_QWORD *)v15);
        if ( v9 == (unsigned __int8 *)v16 )
          goto LABEL_28;
      }
      else
      {
LABEL_23:
        if ( ++v9 == (unsigned __int8 *)v16 )
          goto LABEL_28;
      }
    }
    if ( (unsigned __int8)(v18 - 97) <= 0x19u )
    {
      v17 = (char)v18 - 97;
    }
    else if ( (unsigned __int8)(v18 - 65) <= 0x19u )
    {
      v17 = (char)v18 - 39;
    }
    else if ( (unsigned __int8)(v18 - 48) <= 9u )
    {
      v17 = (char)v18 + 4;
    }
    else
    {
      v17 = ((_BYTE)v18 != 46) + 62;
    }
    result = sub_A20270(a1, v17);
    goto LABEL_23;
  }
  return result;
}
