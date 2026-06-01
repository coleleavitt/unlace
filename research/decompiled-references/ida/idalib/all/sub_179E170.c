bool __fastcall sub_179E170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  bool v7; // zf
  char v8; // al

  v5 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43 <= 1 )
    goto LABEL_2;
  a3 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(a3 - 43) <= 1 )
  {
    v6 = sub_F63050(v6, a2, a3, a4);
    if ( v6 )
    {
LABEL_2:
      while ( 1 )
      {
        v7 = (*(_BYTE *)(v6 + 18) & 0x10) == 0;
        v6 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v7 )
          break;
        if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43 > 1 )
          v6 = sub_F63050(v6, a2, a3, a4);
      }
      goto LABEL_7;
    }
    v6 = *(_QWORD *)v5;
    a3 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  }
  if ( (a3 & 0xF7) == 0x22 )
  {
    v6 = *(_QWORD *)(sub_F68450(v6, a2, a3, a4, a5) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(_BYTE *)(v6 + 16);
    return (v8 == 26
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
         && (v6 = sub_F63050(v6, a2, a3, a4)) != 0)
        && (unsigned int)sub_F63060(v6) == 0;
  }
  v8 = *(_BYTE *)(v6 + 16);
  if ( v8 != 33 )
  {
    if ( (_BYTE)a3 != 33 )
      return (v8 == 26
           || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
           && (v6 = sub_F63050(v6, a2, a3, a4)) != 0)
          && (unsigned int)sub_F63060(v6) == 0;
    v6 = sub_F63050(v6, a2, a3, a4);
    if ( !v6 )
    {
      v6 = *(_QWORD *)v5;
      v8 = *(_BYTE *)(*(_QWORD *)v5 + 16LL);
      return (v8 == 26
           || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
           && (v6 = sub_F63050(v6, a2, a3, a4)) != 0)
          && (unsigned int)sub_F63060(v6) == 0;
    }
  }
  v6 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_7:
  v8 = *(_BYTE *)(v6 + 16);
  return (v8 == 26
       || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
       && (v6 = sub_F63050(v6, a2, a3, a4)) != 0)
      && (unsigned int)sub_F63060(v6) == 0;
}
