unsigned __int64 __fastcall sub_97D910(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r12
  _QWORD *v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // ax
  _QWORD *v14; // rsi
  __int64 v15; // r13
  __int16 v16; // ax
  _QWORD *v17; // rsi
  unsigned __int64 *v18; // r12
  __int64 v19; // rdi
  unsigned __int16 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  _QWORD *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdi
  _QWORD *v34; // rcx
  int v35; // eax
  unsigned __int64 *v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  int v42; // [rsp+Ch] [rbp-3Ch]

  if ( (*(_WORD *)a2 & 0x1FF) != 0x81 )
  {
    v8 = a1[1].m128i_i64[0];
    v10 = 0;
    v9 = nullptr;
    if ( v8 )
      goto LABEL_3;
LABEL_29:
    v8 = sub_975DA0((__int64)a1, a2, a3, a4, a5, a6);
    goto LABEL_3;
  }
  v8 = a1[1].m128i_i64[0];
  v9 = *(_QWORD **)(a2 + 56);
  v10 = a2;
  if ( !v8 )
    goto LABEL_29;
LABEL_3:
  sub_9784E0(a1, v8, a2);
  if ( a1[20].m128i_i8[0] )
    return 0;
  v13 = *(_WORD *)a2;
  a1[1].m128i_i64[1] = v8;
  a1[1].m128i_i64[0] = 0;
  if ( (v13 & 0x1FF) == 0x80 )
  {
    v14 = *(_QWORD **)(a2 + 32);
    if ( v14 == v9 )
    {
      v15 = v8;
      goto LABEL_8;
    }
  }
  else
  {
    v14 = *(_QWORD **)(a2 + 40);
    if ( v14 == v9 )
    {
      v15 = v8;
      goto LABEL_27;
    }
  }
  v15 = (__int64)sub_97D280(a1, v14, 1, 0, v11, v12);
  if ( a1[20].m128i_i8[0] )
    return 0;
  v16 = *(_WORD *)a2;
  a1[1].m128i_i64[0] = 0;
  a1[1].m128i_i64[1] = v8;
  if ( (v16 & 0x1FF) == 0x80 )
  {
LABEL_8:
    v17 = *(_QWORD **)(a2 + 40);
    goto LABEL_9;
  }
LABEL_27:
  v17 = *(_QWORD **)(a2 + 48);
LABEL_9:
  v18 = sub_97D280(a1, v17, 1, 0, v11, v12);
  if ( a1[20].m128i_i8[0] )
    return 0;
  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
    v19 = *(_QWORD *)(a2 + 24);
  else
    v19 = *(_QWORD *)(a2 + 32);
  v20 = (unsigned __int16 *)sub_BD7CB0(v19);
  v23 = *v20;
  v24 = (unsigned int)(v23 + 394);
  LOWORD(v24) = (v23 + 394) & 0x1FF;
  if ( (unsigned __int16)v24 <= 1u )
  {
    v24 = ((v20[1] >> 3) & 0x3Fu) - 19;
    if ( (unsigned int)v24 <= 1 )
      return sub_979BF0((__int64)a1, (__int64)v20, a2, v15, (__int64)v18);
  }
  a1[1].m128i_i64[0] = sub_975DE0((__int64)a1, (__int64)v17, v24, v23, v21, v22);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
    v25 = *(_QWORD *)(a2 + 24);
  else
    v25 = *(_QWORD *)(a2 + 32);
  v26 = sub_974040(a1->m128i_i64, v25);
  v29 = a1[1].m128i_i64[0];
  v30 = (_QWORD *)(a1->m128i_i64[1] + 32);
  if ( !v26 )
  {
    sub_975B20(v29, 0, v15 & 0xFFFFFFFFFFFFFFF9LL | 2, v30, v27, v28);
    v33 = a1[1].m128i_i64[0];
    v34 = (_QWORD *)(a1->m128i_i64[1] + 32);
    v35 = 0;
    goto LABEL_32;
  }
  v42 = v26;
  sub_975B20(v29, v15, 2LL * (v15 == 0), v30, v27, v28);
  v33 = a1[1].m128i_i64[0];
  v34 = (_QWORD *)(a1->m128i_i64[1] + 32);
  v35 = v42;
  if ( v42 != 1 )
  {
LABEL_32:
    v37 = 2LL * ((v35 == 1) | (unsigned __int8)(v18 == nullptr));
    goto LABEL_18;
  }
  v36 = v18;
  v18 = nullptr;
  v37 = (unsigned __int64)v36 & 0xFFFFFFFFFFFFFFF9LL | 2;
LABEL_18:
  sub_975B20(v33, (__int64)v18, v37, v34, v31, v32);
  *(_QWORD *)(a1[1].m128i_i64[0] + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
    v40 = *(_QWORD *)(a2 + 24);
  else
    v40 = *(_QWORD *)(a2 + 32);
  if ( v9 )
  {
    if ( v9 != (_QWORD *)v40 )
      sub_979740((__int64)a1, v40, 1, 0, v38, v39);
    v40 = *(_QWORD *)(v10 + 24);
  }
  return sub_979740((__int64)a1, v40, 1, 0, v38, v39);
}

