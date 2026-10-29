bool __fastcall sub_1A88BD0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rsi
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 i; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  bool result; // al
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v6;
  if ( *(_BYTE *)(*v6 + 16) != 34 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) != 34 )
      return 0;
    v8 = sub_F63050(*v6, v6, v24, a4);
    if ( !v8 )
      return 0;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 35;
  if ( (unsigned int)v11 > 1 )
    v10 = sub_F63050(v10, v6, v11, a4);
  for ( i = *(_QWORD *)(v10 + 24); ; i = *(_QWORD *)(v13 + 24) )
  {
    v13 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(unsigned __int8 *)(v13 + 16);
    if ( (unsigned int)(v14 - 35) > 1 )
      break;
    if ( (_BYTE)v14 == 36 )
      goto LABEL_7;
LABEL_18:
    ;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
    return 0;
  v23 = sub_F63050(v13, v6, v14, a4);
  v13 = v23;
  if ( !v23 )
    return 0;
  v14 = *(unsigned __int8 *)(v23 + 16);
  if ( (_BYTE)v14 != 36 )
    goto LABEL_18;
LABEL_7:
  v15 = sub_F62610(v13, (__int64)v6, v14, a4, a5, a6);
  if ( !v15 )
    return 0;
  v16 = *(_QWORD *)(v15 + 40);
  v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v16 & 7) != 0 )
    v17 = 0;
  if ( a3 )
  {
    v18 = sub_168B6C0(a1);
    if ( sub_6F3470(*(_QWORD *)(v18 + 17504), "NSAttributedString", 0x12u) == v17 )
      return a3;
  }
  v19 = sub_168B6C0(a1);
  v20 = sub_6F3470(*(_QWORD *)(v19 + 17504), "NSString", 8u);
  result = 1;
  if ( v20 != v17 )
  {
    v22 = sub_168B6C0(a1);
    return sub_6F3470(*(_QWORD *)(v22 + 17504), "NSMutableString", 0xFu) == v17;
  }
  return result;
}
