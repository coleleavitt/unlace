char __fastcall sub_1BD8BB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  char result; // al
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-20h]

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v5;
  if ( *(_BYTE *)(*v5 + 16) == 14 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 14 )
    return 0;
  v14 = a3;
  v13 = sub_F63050(*v5, v5, a3, a4);
  a3 = v14;
  v6 = v13;
  if ( !v13 )
    return 0;
LABEL_2:
  v7 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v7;
  if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) != 14 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v12 + 16) != 14 )
      return 0;
    v8 = sub_F63050(v8, v5, v12, a4);
    if ( !v8 )
      return 0;
  }
  result = sub_1BD2B60(a1, *(_QWORD *)(v6 + 32), *(_QWORD *)(v8 + 32));
  if ( !result )
    return sub_1BD84A0(a1, 0, v10, v11, v10, a5);
  return result;
}
