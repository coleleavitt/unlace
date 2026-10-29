unsigned __int64 __fastcall sub_7BDA60(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  char v11; // [rsp+Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x11 )
  {
    v6 = *(_QWORD *)(a1 + 104);
    if ( v6 )
    {
      if ( v6 > 7 )
      {
LABEL_4:
        v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v7 && (*(_BYTE *)(v7 + 8) & 6) != 0 && !a4 )
          return 0;
      }
    }
    else
    {
      v11 = a4;
      sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v6 = *(_QWORD *)(a1 + 104);
      a4 = v11;
      if ( v6 > 7 )
        goto LABEL_4;
    }
  }
  for ( i = sub_7A0650(a1 + 48, a2); i; i = *(_QWORD *)(v9 + 8) )
  {
    v9 = i & 0xFFFFFFFFFFFFFFF8LL;
    result = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( (i & 4) == 0 )
    {
      if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x10 && a3 == ((*(_BYTE *)(v9 + 58) & 2) != 0) )
        return result;
      return 0;
    }
    if ( !v9 )
      BUG();
    result = *(_QWORD *)v9;
    if ( (*(_BYTE *)(*(_QWORD *)v9 + 28LL) & 0x7F) == 0x10 && a3 == ((*(_BYTE *)(result + 58) & 2) != 0) )
      return result;
  }
  return 0;
}

