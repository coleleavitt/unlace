bool __fastcall sub_1A88D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v14; // rdx

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *v6;
  if ( *(_BYTE *)(*v6 + 16) != 42 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) != 42 )
      return 0;
    v7 = sub_F63050(*v6, v6, v14, a4);
    if ( !v7 )
      return 0;
  }
  v8 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v8 + 16) != 48 )
    return 0;
  v9 = sub_F60F10(*v8, (__int64)v6, a3, a4, a5, a6);
  if ( *((_BYTE *)v9 + 73) >> 5 )
    return 0;
  v10 = v9[5];
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v10 & 7) != 0 )
    v11 = 0;
  v12 = sub_168B6C0(a1);
  return sub_6F3470(*(_QWORD *)(v12 + 17504), "__CFString", 0xAu) == v11;
}
