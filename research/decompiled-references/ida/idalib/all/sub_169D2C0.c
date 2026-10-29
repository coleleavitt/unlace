_QWORD *__fastcall sub_169D2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *result; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rdi
  char v13; // al
  _QWORD *v14; // rbx

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(*(_QWORD *)v6 + 17LL) & 4) != 0
    || (unsigned int)*(unsigned __int8 *)(v8 + 16) - 47 > 1
    && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 > 1
     || (v8 = sub_F63050(v8, v6, a3, a4)) == 0) )
  {
    v11 = *(_QWORD *)(a1 + 544);
    if ( v6 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v13 = *(_BYTE *)(v12 + 16);
      if ( v13 == 48 )
      {
        v14 = sub_F60F10(v12, v6, a3, a4, a5, a6);
        if ( (unsigned __int8)sub_B67000((__int64)v14, v11) )
          goto LABEL_10;
      }
      else if ( v13 == 29 )
      {
        v14 = sub_F61460(v12, v6, a3, a4, a5, a6);
LABEL_10:
        if ( v14 )
          return v14 + 8;
      }
    }
    return nullptr;
  }
  v9 = sub_F60F10(v8, v6, a3, a4, a5, a6);
  result = v9 + 8;
  if ( !v9 )
    return nullptr;
  return result;
}
