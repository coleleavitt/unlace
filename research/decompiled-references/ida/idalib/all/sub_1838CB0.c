bool __fastcall sub_1838CB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // r13
  bool result; // al
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rbp
  __int64 v17; // rbp

  v4 = *(__int64 **)(a1 + 120);
  v5 = 8LL * (unsigned int)sub_B76070(a1, a2, a3, a4);
  v6 = &v4[(unsigned __int64)v5 / 8];
  v7 = v5 >> 3;
  v8 = v5 >> 5;
  if ( v8 )
  {
    v9 = &v4[4 * v8];
    while ( 1 )
    {
      v10 = *v4;
      if ( sub_B74820(*v4) && (*(_BYTE *)(v10 + 97) & 1) == 0 )
        return v6 != v4;
      v12 = v4[1];
      if ( sub_B74820(v12) && (*(_BYTE *)(v12 + 97) & 1) == 0 )
        return v6 != v4 + 1;
      v13 = v4[2];
      if ( sub_B74820(v13) && (*(_BYTE *)(v13 + 97) & 1) == 0 )
        return v6 != v4 + 2;
      v14 = v4[3];
      if ( sub_B74820(v14) && (*(_BYTE *)(v14 + 97) & 1) == 0 )
        return v6 != v4 + 3;
      v4 += 4;
      if ( v9 == v4 )
      {
        v7 = v6 - v4;
        break;
      }
    }
  }
  if ( v7 != 2 )
  {
    if ( v7 != 3 )
    {
      result = 0;
      if ( v7 != 1 )
        return result;
      goto LABEL_21;
    }
    v16 = *v4;
    if ( sub_B74820(*v4) && (*(_BYTE *)(v16 + 97) & 1) == 0 )
      return v6 != v4;
    ++v4;
  }
  v17 = *v4;
  if ( sub_B74820(*v4) && (*(_BYTE *)(v17 + 97) & 1) == 0 )
    return v6 != v4;
  ++v4;
LABEL_21:
  v15 = *v4;
  result = sub_B74820(*v4);
  if ( result )
  {
    result = 0;
    if ( (*(_BYTE *)(v15 + 97) & 1) == 0 )
      return v6 != v4;
  }
  return result;
}
