bool __fastcall sub_1A38BD0(_QWORD **a1, _QWORD **a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool result; // al
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx

  v4 = *(_QWORD *)(a3 + 8) & 7LL;
  if ( *(char *)(a3 + 29) < 0 )
  {
    v5 = 0;
    if ( v4 )
      v5 = sub_B8C660(a3);
  }
  else if ( v4 )
  {
    v5 = *(_QWORD *)(a3 - 8);
  }
  else
  {
    v5 = 0;
  }
  result = 0;
  if ( **a1 == v5 )
  {
    v7 = *(_QWORD *)(a3 + 16);
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) != 0 )
      v8 = *(_QWORD *)v8;
    while ( 1 )
    {
      v9 = *(_BYTE *)(v8 + 8) & 0x7F;
      if ( v9 != 24 )
      {
LABEL_8:
        if ( v9 )
          goto LABEL_10;
      }
      if ( !sub_B8E160(v8) )
        return **a2 == v8;
LABEL_10:
      while ( 1 )
      {
        v10 = *(_QWORD *)(sub_B8C1B0(v8) + 16);
        if ( (v10 & 4) != 0 )
          break;
        v8 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = *(_BYTE *)(v8 + 8) & 0x7F;
        if ( v9 != 24 )
          goto LABEL_8;
        if ( !sub_B8E160(v8) )
          return **a2 == v8;
      }
      v8 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  return result;
}
