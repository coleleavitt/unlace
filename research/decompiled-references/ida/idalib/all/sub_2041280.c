_BYTE *__fastcall sub_2041280(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE *v16; // rsi
  __int64 v17; // rdi
  _BYTE *result; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  _BYTE *v23; // rax
  _QWORD v24[4]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_208DE40(a2) )
    sub_995540(*a1, "; Materializable\n");
  v6 = a1[4];
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *a1;
  v24[1] = a1 + 5;
  v24[2] = v6;
  v24[0] = off_2BE5D20;
  v24[3] = v7;
  sub_2038AA0(v8, a2, (__int64)v24, (__int64)off_2BE5D20, v4, v5);
  sub_995540(*a1, " = ");
  v9 = *a1;
  sub_2033420(&v25, *(_BYTE *)(a2 + 32) & 0xF);
  sub_227BF10(v9, v25.m128i_i64[0], v25.m128i_i64[1]);
  if ( (__int64 *)v25.m128i_i64[0] != &v26 )
    operator delete((void *)v25.m128i_i64[0]);
  v10 = *a1;
  v11 = *(_BYTE *)(a2 + 32);
  if ( (*(_BYTE *)(a2 + 33) & 0x40) != 0 && (v11 & 0xFu) - 7 > 1 && ((v11 & 0x30) == 0 || (v11 & 0xF) == 9) )
  {
    sub_995540(v10, "dso_local ");
    v10 = *a1;
    v12 = (*(_BYTE *)(a2 + 32) >> 4) & 3;
    if ( v12 == 1 )
      goto LABEL_17;
  }
  else
  {
    v12 = (v11 >> 4) & 3;
    if ( v12 == 1 )
    {
LABEL_17:
      sub_995540(v10, "hidden ");
      v10 = *a1;
      goto LABEL_10;
    }
  }
  if ( v12 == 2 )
  {
    sub_995540(v10, "protected ");
    v10 = *a1;
  }
LABEL_10:
  sub_995540(v10, "ifunc ");
  sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(a2 + 24), *a1);
  sub_995540(*a1, ", ");
  v16 = *(_BYTE **)(a2 - 32);
  if ( v16 )
  {
    sub_203EFD0(a1, (__int64)v16, *v16 != 18, v13, v14, v15);
    if ( *(char *)(a2 + 33) >= 0 )
      goto LABEL_12;
LABEL_20:
    sub_995540(*a1, ", partition \"");
    v19 = *a1;
    v20 = sub_208DEF0(a2);
    sub_22449A0(v20, v21, v19);
    v22 = *a1;
    v23 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v23 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_227BA10(v22, 34);
    }
    else
    {
      *(_QWORD *)(v22 + 32) = v23 + 1;
      *v23 = 34;
    }
    goto LABEL_12;
  }
  sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(a2 + 8), *a1);
  sub_995540(*a1, " <<NULL RESOLVER>>");
  if ( *(char *)(a2 + 33) < 0 )
    goto LABEL_20;
LABEL_12:
  sub_2040CA0(a1, a2);
  v17 = *a1;
  result = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(*a1 + 24) )
    return (_BYTE *)sub_227BA10(v17, 10);
  *(_QWORD *)(v17 + 32) = result + 1;
  *result = 10;
  return result;
}
