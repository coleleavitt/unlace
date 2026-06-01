__int64 __fastcall sub_1914520(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rax
  __int64 i; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // r9
  __int64 result; // rax
  _BYTE *v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+0h] [rbp-18h]
  int v23; // [rsp+8h] [rbp-10h]

  v8 = *(_QWORD *)(a2 + 8);
  if ( (v8 & 4) == 0 )
  {
    a3 = v8 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
      goto LABEL_11;
  }
  for ( i = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL); ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v10 = sub_F63050(i, a2, a3, a4);
    if ( !v10 )
      break;
    i = v10;
  }
  v11 = sub_F63240(i, a2, a3, a4, a5, a6);
  if ( v11 && (unsigned __int8)sub_F58560((__int64)v11) )
    goto LABEL_10;
  v19 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  while ( 2 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v19 + 16) - 2) <= 4u )
    {
LABEL_21:
      v19 = *(_QWORD *)(*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      continue;
    }
    break;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v20 = sub_F63050(v19, a2, v12, a4);
    if ( v20 )
    {
      v19 = v20;
      goto LABEL_21;
    }
  }
  v21 = sub_F63240(v19, a2, v12, a4, a5, v13);
  if ( !v21 || !sub_F58570((__int64)v21) )
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( (v8 & 4) == 0 )
      goto LABEL_14;
    return a2;
  }
LABEL_10:
  v14 = sub_C00A40(a2, a2, v12, a4, a5);
  sub_17D0CF0(a1, *(_QWORD *)(a2 + 8), v14, 8, 6, v15, v22, v23);
  v8 = *(_QWORD *)(a2 + 8);
LABEL_11:
  if ( (v8 & 4) != 0 )
    return a2;
LABEL_14:
  v17 = (_BYTE *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v17[8] & 4) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    return a2;
  }
  v18 = sub_1913450(a1, a2, 2u, a4, a5, a6, a7, a8);
  result = 1;
  if ( v18 != 1 )
  {
    result = v18;
    if ( (v18 & 0xFFFFFFFFFFFFFFFELL) == 0 )
      return a2;
  }
  return result;
}
