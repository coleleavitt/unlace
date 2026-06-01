unsigned __int64 __fastcall sub_1403C80(__int64 a1, _QWORD *a2, char a3, char a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 *v9; // r12
  int v10; // eax
  int v11; // esi
  char v12; // al
  unsigned __int64 *v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rax
  int v17; // edx
  int v18; // esi
  char v19; // dl

  v6 = sub_1403A00(a1, a2);
  if ( v6 == *(_QWORD *)(a1 + 368) + 32LL * *(unsigned int *)(a1 + 384) )
  {
    result = sub_13FFDB0(a1, (__int64)a2);
    if ( !a3 )
    {
LABEL_39:
      if ( (result & 2) != 0 )
        return 0;
    }
    return result;
  }
  v7 = *(unsigned __int64 **)(v6 + 8);
  v8 = 0;
  v9 = &v7[*(unsigned int *)(v6 + 16)];
  if ( v7 == v9 )
  {
    if ( !a3 )
      return 0;
    return v8;
  }
  if ( a4 )
  {
    while ( 1 )
    {
      v13 = v7;
      if ( *(_QWORD *)(a1 + 72) == sub_FEEE40(*v7 & 0xFFFFFFFFFFFFFFF8LL) )
        goto LABEL_38;
      v16 = *v7;
      if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0
        && ((*(_BYTE *)((v16 & 0xFFFFFFFFFFFFFFF8LL) + 904) & 4) == 0
         || (*(_BYTE *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 904) & 4) != 0) )
      {
        v17 = v16 & 7;
        v18 = v8 & 7;
        if ( (((unsigned __int8)v18 ^ v16 & 7) & 1) != 0 )
        {
          v19 = (v16 & 1) == 0;
          goto LABEL_30;
        }
        if ( (((unsigned __int8)v18 ^ v16 & 7) & 2) != 0 )
        {
          v19 = (((unsigned __int8)(v16 & 7) >> 1) ^ 1) & 1;
          goto LABEL_30;
        }
        if ( (v17 == 4) != (v18 == 4) )
        {
          v19 = v17 != 4;
LABEL_30:
          if ( v19 )
            v8 = *v7;
        }
      }
      else
      {
        v8 = *v7;
      }
      if ( v9 == ++v7 )
        goto LABEL_16;
    }
  }
  do
  {
    while ( 1 )
    {
      v13 = v7;
      if ( (*v7 & 7) == 4 )
        goto LABEL_11;
      if ( *(_QWORD *)(a1 + 72) == sub_FEEE40(*v7 & 0xFFFFFFFFFFFFFFF8LL) )
      {
LABEL_38:
        result = *v13;
        if ( a3 )
          return result;
        goto LABEL_39;
      }
      v14 = *v7;
      if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) == 0
        || (*(_BYTE *)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 904) & 4) != 0
        && (*(_BYTE *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 904) & 4) == 0 )
      {
        break;
      }
      v10 = v14 & 7;
      v11 = v8 & 7;
      if ( (((unsigned __int8)v11 ^ v14 & 7) & 1) != 0 )
      {
        v12 = (v14 & 1) == 0;
        goto LABEL_9;
      }
      if ( (((unsigned __int8)v11 ^ v14 & 7) & 2) != 0 )
      {
        v12 = (((unsigned __int8)(v14 & 7) >> 1) ^ 1) & 1;
LABEL_9:
        if ( v12 )
          v8 = *v7;
        goto LABEL_11;
      }
      if ( (v10 == 4) != (v11 == 4) )
      {
        v12 = v10 != 4;
        goto LABEL_9;
      }
LABEL_11:
      if ( v9 == ++v7 )
        goto LABEL_16;
    }
    ++v7;
    v8 = v14;
  }
  while ( v9 != v7 );
LABEL_16:
  if ( a3 || (v8 & 2) == 0 )
    return v8;
  return 0;
}
