char __fastcall sub_B77270(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax

  if ( (unsigned int)sub_B76070(a1, a2, a3, a4) == 1 )
    return 1;
  v7 = (unsigned int)sub_B76070(a1, a2, v4, v5);
  result = 0;
  if ( (unsigned int)v7 > 1 )
  {
    v9 = *(_QWORD *)(a1 + 120);
    v10 = sub_B76070(a1, a2, v7, v8);
    v11 = (__int64 *)(v9 + 8);
    v12 = 8LL * v10;
    v13 = (__int64 *)(v9 + v12);
    v14 = v12 - 8;
    v15 = (v12 - 8) >> 5;
    v16 = v14 >> 3;
    if ( v15 > 0 )
    {
      v17 = v9 + 32 * v15 + 8;
      while ( 1 )
      {
        v18 = *(_DWORD *)(*v11 + 96);
        if ( (BYTE1(v18) & 6) != 2 && (BYTE1(v18) & 6) != 4 && (*(_QWORD *)(*v11 + 88) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return v13 == v11;
        v19 = v11[1];
        v20 = *(_DWORD *)(v19 + 96);
        if ( (BYTE1(v20) & 6) != 2 && (BYTE1(v20) & 6) != 4 && (*(_QWORD *)(v19 + 88) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return v13 == v11 + 1;
        v21 = v11[2];
        v22 = *(_DWORD *)(v21 + 96);
        if ( (BYTE1(v22) & 6) != 2 && (BYTE1(v22) & 6) != 4 && (*(_QWORD *)(v21 + 88) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return v13 == v11 + 2;
        v23 = v11[3];
        v24 = *(_DWORD *)(v23 + 96);
        if ( (BYTE1(v24) & 6) != 2 && (BYTE1(v24) & 6) != 4 && (*(_QWORD *)(v23 + 88) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return v13 == v11 + 3;
        v11 += 4;
        if ( (__int64 *)v17 == v11 )
        {
          v16 = v13 - v11;
          break;
        }
      }
    }
    if ( v16 != 2 )
    {
      if ( v16 != 3 )
      {
        if ( v16 != 1 )
          return 1;
        goto LABEL_28;
      }
      if ( !sub_B74820(*v11) )
        return v13 == v11;
      ++v11;
    }
    if ( sub_B74820(*v11) )
    {
      ++v11;
LABEL_28:
      if ( !sub_B74820(*v11) )
        return v13 == v11;
      return 1;
    }
    return v13 == v11;
  }
  return result;
}
