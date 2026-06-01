unsigned __int64 __fastcall sub_7BD3E0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x11 )
  {
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 )
    {
      if ( v5 > 7 )
      {
LABEL_4:
        v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v6 && (*(_BYTE *)(v6 + 8) & 6) != 0 )
          return 0;
      }
    }
    else
    {
      sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v5 = *(_QWORD *)(a1 + 104);
      if ( v5 > 7 )
        goto LABEL_4;
    }
  }
  for ( i = sub_7A0650(a1 + 48, a2); i; i = *(_QWORD *)(v8 + 8) )
  {
    v8 = i & 0xFFFFFFFFFFFFFFF8LL;
    result = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( (i & 4) == 0 )
    {
      if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x10 && ((*(_BYTE *)(v8 + 58) & 2) != 0) == a3 )
        return result;
      return 0;
    }
    if ( !v8 )
      BUG();
    result = *(_QWORD *)v8;
    if ( (*(_BYTE *)(*(_QWORD *)v8 + 28LL) & 0x7F) == 0x10 && a3 == ((*(_BYTE *)(result + 58) & 2) != 0) )
      return result;
  }
  return 0;
}

