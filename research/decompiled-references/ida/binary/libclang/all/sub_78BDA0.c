bool __fastcall sub_78BDA0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 *v3; // rax
  int v4; // eax
  bool result; // al
  char v6; // bl
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(sub_798D40(a1) + 2160);
  if ( (*(_BYTE *)(v1 + 1) & 8) == 0 || (*(_BYTE *)(v1 + 105) & 2) == 0 || (*(_BYTE *)(a1 + 28) & 0x7Fu) - 32 > 5 )
    return 0;
  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 && (*(_QWORD *)(a1 + 152) & 6LL) == 4 && (v10 = v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v4 = ((*(__int64 *)(v10 + 16) >> 1) & 3) + 1;
  }
  else
  {
    v3 = (__int64 *)sub_780C90(a1);
    if ( !v3 )
    {
      v11 = 0;
      goto LABEL_12;
    }
    v4 = ((*v3 >> 1) & 3) + 1;
  }
  v11 = 0;
  if ( (unsigned int)(v4 - 3) <= 1 )
    return 0;
LABEL_12:
  if ( !(unsigned __int8)sub_78B990((_QWORD *)a1, &v11) )
    return 0;
  result = *(_BYTE *)(v11 + 82) & 1;
  if ( !result )
    return 0;
  v6 = *(_BYTE *)(v11 + 29) & 1;
  if ( v6 )
  {
    v7 = sub_79A2B0(v11);
    v8 = *(_QWORD *)v7;
    v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
    if ( v8 < v9 )
    {
      while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 215 )
      {
        v8 += 8LL;
        if ( v9 == v8 )
          return v6;
      }
    }
    else
    {
      if ( v8 == v9 )
        return v6;
      while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 215 )
      {
        v9 += 8LL;
        if ( v8 == v9 )
          return v6;
      }
    }
    return v9 == v8;
  }
  return result;
}

