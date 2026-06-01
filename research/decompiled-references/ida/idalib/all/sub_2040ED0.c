_BYTE *__fastcall sub_2040ED0(__int64 *a1, __int64 a2)
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
  unsigned __int8 v13; // al
  char v14; // dl
  unsigned __int8 v15; // al
  bool v16; // cc
  const char *v17; // rax
  size_t v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE *v22; // rsi
  __int64 v23; // rdi
  _BYTE *result; // rax
  __int64 v25; // rax
  _BYTE *v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  _BYTE *v31; // rax
  _QWORD v32[4]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v33; // [rsp+20h] [rbp-48h] BYREF
  __int64 v34; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_208DE40(a2) )
    sub_995540(*a1, "; Materializable\n");
  v6 = a1[4];
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *a1;
  v32[1] = a1 + 5;
  v32[2] = v6;
  v32[0] = off_2BE5D20;
  v32[3] = v7;
  sub_2038AA0(v8, a2, (__int64)v32, (__int64)off_2BE5D20, v4, v5);
  sub_995540(*a1, " = ");
  v9 = *a1;
  sub_2033420(&v33, *(_BYTE *)(a2 + 32) & 0xF);
  sub_227BF10(v9, v33.m128i_i64[0], v33.m128i_i64[1]);
  if ( (__int64 *)v33.m128i_i64[0] != &v34 )
    operator delete((void *)v33.m128i_i64[0]);
  v10 = *a1;
  v11 = *(_BYTE *)(a2 + 32);
  if ( (*(_BYTE *)(a2 + 33) & 0x40) == 0 || (v11 & 0xFu) - 7 <= 1 || (v11 & 0x30) != 0 && (v11 & 0xF) != 9 )
  {
    v12 = (v11 >> 4) & 3;
    if ( v12 == 1 )
      goto LABEL_29;
LABEL_8:
    if ( v12 == 2 )
    {
      sub_995540(v10, "protected ");
      v10 = *a1;
    }
    v13 = *(_BYTE *)(a2 + 33);
    v14 = v13 & 3;
    if ( (v13 & 3) == 1 )
      goto LABEL_30;
    goto LABEL_11;
  }
  sub_995540(v10, "dso_local ");
  v10 = *a1;
  v12 = (*(_BYTE *)(a2 + 32) >> 4) & 3;
  if ( v12 != 1 )
    goto LABEL_8;
LABEL_29:
  sub_995540(v10, "hidden ");
  v13 = *(_BYTE *)(a2 + 33);
  v10 = *a1;
  v14 = v13 & 3;
  if ( (v13 & 3) == 1 )
  {
LABEL_30:
    sub_995540(v10, "dllimport ");
    v10 = *a1;
    v13 = *(_BYTE *)(a2 + 33);
LABEL_12:
    v15 = (v13 >> 2) & 7;
    v16 = v15 <= 2u;
    if ( v15 != 2 )
      goto LABEL_13;
LABEL_25:
    sub_995540(v10, "thread_local(localdynamic) ");
    goto LABEL_17;
  }
LABEL_11:
  if ( v14 != 2 )
    goto LABEL_12;
  sub_995540(v10, "dllexport ");
  v10 = *a1;
  v15 = (*(_BYTE *)(a2 + 33) >> 2) & 7;
  v16 = v15 <= 2u;
  if ( v15 == 2 )
    goto LABEL_25;
LABEL_13:
  if ( v16 )
  {
    if ( v15 == 1 )
      sub_995540(v10, "thread_local ");
  }
  else if ( v15 == 3 )
  {
    sub_995540(v10, "thread_local(initialexec) ");
  }
  else if ( v15 == 4 )
  {
    sub_995540(v10, "thread_local(localexec) ");
  }
LABEL_17:
  v17 = sub_202F6B0(*(_BYTE *)(a2 + 32) >> 6);
  if ( v18 )
  {
    v25 = sub_9954E0(*a1, v17, v18);
    v26 = *(_BYTE **)(v25 + 32);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(v25 + 24) )
    {
      sub_227BA10(v25, 32);
    }
    else
    {
      *(_QWORD *)(v25 + 32) = v26 + 1;
      *v26 = 32;
    }
  }
  sub_995540(*a1, "alias ");
  sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(a2 + 24), *a1);
  sub_995540(*a1, ", ");
  v22 = *(_BYTE **)(a2 - 32);
  if ( v22 )
  {
    sub_203EFD0(a1, (__int64)v22, *v22 != 18, v19, v20, v21);
    if ( *(char *)(a2 + 33) >= 0 )
      goto LABEL_20;
LABEL_35:
    sub_995540(*a1, ", partition \"");
    v27 = *a1;
    v28 = sub_208DEF0(a2);
    sub_22449A0(v28, v29, v27);
    v30 = *a1;
    v31 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v31 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_227BA10(v30, 34);
    }
    else
    {
      *(_QWORD *)(v30 + 32) = v31 + 1;
      *v31 = 34;
    }
    goto LABEL_20;
  }
  sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(a2 + 8), *a1);
  sub_995540(*a1, " <<NULL ALIASEE>>");
  if ( *(char *)(a2 + 33) < 0 )
    goto LABEL_35;
LABEL_20:
  sub_2040CA0(a1, a2);
  v23 = *a1;
  result = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(*a1 + 24) )
    return (_BYTE *)sub_227BA10(v23, 10);
  *(_QWORD *)(v23 + 32) = result + 1;
  *result = 10;
  return result;
}
