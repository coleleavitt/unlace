__int64 __fastcall sub_10210B0(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 i; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  _BYTE v20[41]; // [rsp+Fh] [rbp-29h] BYREF

  if ( *(_DWORD *)(a1 + 520) )
  {
    v16 = *(_DWORD *)(a1 + 520);
    v20[0] = 0;
    v17 = sub_101FA50(a1, v16, v20);
    if ( v20[0] )
      return 0;
    if ( *(char *)(v17 + 3) >= 0 )
    {
      v18 = *(_QWORD *)((*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      while ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8);
        if ( !v19 )
        {
          v18 = 0;
          break;
        }
        v18 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v19 & 4) == 0 )
          break;
      }
      if ( a2 == v18 )
        return *(unsigned int *)(a1 + 520);
    }
  }
  v4 = *(_DWORD *)(a1 + 192);
  if ( !v4 )
  {
LABEL_11:
    v9 = *(_QWORD *)(a1 + 264);
    if ( (_DWORD)v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      for ( i = 0; ; ++i )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)i >> 6));
        v13 = _bittest64(&v12, i) ? sub_101F8A0(a1 + 264, i) : sub_101F930(a1, i, nullptr);
        if ( *(char *)(v13 + 3) >= 0 )
          break;
LABEL_21:
        if ( i == v10 )
          return 0;
      }
      v14 = *(_QWORD *)((*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      while ( 1 )
      {
        if ( !v14 )
        {
LABEL_20:
          if ( a2 != v14 )
            goto LABEL_21;
          return (unsigned int)(-2 - i);
        }
        v15 = *(_QWORD *)(v14 + 8);
        if ( !v15 )
          break;
        v14 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v15 & 4) == 0 )
          goto LABEL_20;
      }
      if ( a2 )
        goto LABEL_21;
      return (unsigned int)(-2 - i);
    }
    return 0;
  }
  v5 = *(_QWORD *)(a1 + 184);
  result = 0;
  while ( *(char *)(v5 + 3) < 0 )
  {
LABEL_10:
    result = (unsigned int)(result + 1);
    v5 += 24;
    if ( (_DWORD)result == v4 )
      goto LABEL_11;
  }
  v7 = *(_QWORD *)((*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  while ( 1 )
  {
    if ( !v7 )
    {
LABEL_9:
      if ( a2 == v7 )
        return result;
      goto LABEL_10;
    }
    v8 = *(_QWORD *)(v7 + 8);
    if ( !v8 )
      break;
    v7 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v8 & 4) == 0 )
      goto LABEL_9;
  }
  if ( a2 )
    goto LABEL_10;
  return result;
}
