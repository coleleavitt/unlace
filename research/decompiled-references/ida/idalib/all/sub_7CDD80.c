void __fastcall __noreturn sub_7CDD80(int a1, __int16 a2)
{
  __int64 v2; // rbp
  const char *v3; // r13
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _BYTE *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // r14
  _BYTE *v14; // rsi
  __int64 v15; // r13
  _BYTE *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r13
  _BYTE *v20; // rsi
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // rdx
  _BYTE *v26; // rsi
  __int64 v27; // r14
  __int64 v28; // r8
  __int64 v29; // rdx
  _BYTE *v30; // rsi
  __m128i si128; // xmm0
  char *v32; // r14
  __int64 v33; // r14
  _BYTE *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r8
  __m128i v37; // xmm0
  char *v38; // r14
  __int64 v39; // [rsp+0h] [rbp-68h]
  __int64 v40; // [rsp+0h] [rbp-68h]
  __int64 v41; // [rsp+0h] [rbp-68h]
  __int64 v42; // [rsp+0h] [rbp-68h]
  __int64 v43; // [rsp+0h] [rbp-68h]
  __int64 v44; // [rsp+0h] [rbp-68h]
  __int64 v45; // [rsp+0h] [rbp-68h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v50; // [rsp+18h] [rbp-50h]
  unsigned __int64 v51; // [rsp+28h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-28h]

  v3 = "SSL_connect: ";
  v52 = v2;
  v51 = __readfsqword(0x28u);
  v50 = 0;
  ptr = nullptr;
  if ( (a2 & 0x1000) == 0 )
  {
    v3 = "SSL_???    : ";
    if ( (a2 & 0x2000) != 0 )
      v3 = "SSL_accept : ";
  }
  v5 = (_QWORD *)qvector_reserve(&ptr, 0, 14, 1);
  v6 = *(_QWORD *)v3;
  ptr = v5;
  *(_QWORD *)&v50 = 14;
  *v5 = v6;
  *(_QWORD *)((char *)v5 + 5) = *(_QWORD *)(v3 + 5);
  v7 = ptr;
  *((_BYTE *)ptr + 13) = 0;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_4;
    goto LABEL_15;
  }
  v8 = v50;
  if ( (_QWORD)v50 )
  {
    v10 = v50 + 11;
    v9 = v50 + 12;
    v8 = v50 - 1;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 12) )
      goto LABEL_14;
  }
  else
  {
    v9 = 13;
    v10 = 12;
    if ( *((_QWORD *)&v50 + 1) >= 0xDu )
      goto LABEL_14;
  }
  v41 = v10;
  ptr = (void *)qvector_reserve(&ptr, v7, v9, 1);
  v10 = v41;
  v7 = ptr;
LABEL_14:
  *(_QWORD *)&v50 = v9;
  v7[v10] = 0;
  qmemcpy((char *)ptr + v8, " SSL_CB_LOOP", 12);
  if ( (a2 & 2) == 0 )
  {
LABEL_4:
    if ( (a2 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_18;
  }
LABEL_15:
  v11 = v50;
  if ( (_QWORD)v50 )
  {
    v12 = v50 + 11;
    v13 = v50 + 12;
    v14 = ptr;
    v11 = v50 - 1;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 12) )
      goto LABEL_17;
  }
  else
  {
    v14 = ptr;
    v13 = 13;
    v12 = 12;
    if ( *((_QWORD *)&v50 + 1) >= 0xDu )
      goto LABEL_17;
  }
  v44 = v12;
  ptr = (void *)qvector_reserve(&ptr, v14, v13, 1);
  v12 = v44;
  v14 = ptr;
LABEL_17:
  *(_QWORD *)&v50 = v13;
  v14[v12] = 0;
  qmemcpy((char *)ptr + v11, " SSL_CB_EXIT", 12);
  if ( (a2 & 4) == 0 )
  {
LABEL_5:
    if ( (a2 & 8) == 0 )
      goto LABEL_6;
    goto LABEL_21;
  }
LABEL_18:
  v15 = v50;
  if ( (_QWORD)v50 )
  {
    v18 = v50 + 11;
    v17 = v50 + 12;
    v16 = ptr;
    v15 = v50 - 1;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 12) )
      goto LABEL_20;
  }
  else
  {
    v16 = ptr;
    v17 = 13;
    v18 = 12;
    if ( *((_QWORD *)&v50 + 1) >= 0xDu )
      goto LABEL_20;
  }
  v40 = v18;
  ptr = (void *)qvector_reserve(&ptr, v16, v17, 1);
  v18 = v40;
  v16 = ptr;
LABEL_20:
  *(_QWORD *)&v50 = v17;
  v16[v18] = 0;
  qmemcpy((char *)ptr + v15, " SSL_CB_READ", 12);
  if ( (a2 & 8) == 0 )
  {
LABEL_6:
    if ( (a2 & 0x4000) == 0 )
      goto LABEL_7;
    goto LABEL_24;
  }
LABEL_21:
  v19 = v50;
  if ( (_QWORD)v50 )
  {
    v22 = v50 + 12;
    v21 = v50 + 13;
    v20 = ptr;
    v19 = v50 - 1;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 13) )
      goto LABEL_23;
  }
  else
  {
    v20 = ptr;
    v21 = 14;
    v22 = 13;
    if ( *((_QWORD *)&v50 + 1) >= 0xEu )
      goto LABEL_23;
  }
  v39 = v22;
  ptr = (void *)qvector_reserve(&ptr, v20, v21, 1);
  v22 = v39;
  v20 = ptr;
LABEL_23:
  *(_QWORD *)&v50 = v21;
  v20[v22] = 0;
  qmemcpy((char *)ptr + v19, " SSL_CB_WRITE", 13);
  if ( (a2 & 0x4000) == 0 )
  {
LABEL_7:
    if ( (a2 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_27;
  }
LABEL_24:
  v23 = v50;
  if ( (_QWORD)v50 )
  {
    v24 = v50 + 12;
    v25 = v50 + 13;
    v26 = ptr;
    v23 = v50 - 1;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 13) )
      goto LABEL_26;
  }
  else
  {
    v26 = ptr;
    v25 = 14;
    v24 = 13;
    if ( *((_QWORD *)&v50 + 1) >= 0xEu )
      goto LABEL_26;
  }
  v48 = v24;
  v45 = v25;
  ptr = (void *)qvector_reserve(&ptr, v26, v25, 1);
  v24 = v48;
  v26 = ptr;
  v25 = v45;
LABEL_26:
  *(_QWORD *)&v50 = v25;
  v26[v24] = 0;
  qmemcpy((char *)ptr + v23, " SSL_CB_ALERT", 13);
  if ( (a2 & 0x10) == 0 )
  {
LABEL_8:
    if ( (a2 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_30;
  }
LABEL_27:
  v27 = v50;
  if ( (_QWORD)v50 )
  {
    v28 = v50 + 22;
    v29 = v50 + 23;
    v30 = ptr;
    v27 = v50 - 1;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 23) )
      goto LABEL_29;
  }
  else
  {
    v30 = ptr;
    v29 = 24;
    v28 = 23;
    if ( *((_QWORD *)&v50 + 1) >= 0x18u )
      goto LABEL_29;
  }
  v47 = v28;
  v43 = v29;
  ptr = (void *)qvector_reserve(&ptr, v30, v29, 1);
  v28 = v47;
  v30 = ptr;
  v29 = v43;
LABEL_29:
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A84A0);
  *(_QWORD *)&v50 = v29;
  v30[v28] = 0;
  v32 = (char *)ptr + v27;
  *(__m128i *)v32 = si128;
  *(_QWORD *)(v32 + 15) = 0x54524154535F454BLL;
  if ( (a2 & 0x20) == 0 )
    goto LABEL_9;
LABEL_30:
  v33 = v50;
  if ( (_QWORD)v50 )
  {
    v36 = v50 + 21;
    v35 = v50 + 22;
    v34 = ptr;
    v33 = v50 - 1;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 22) )
      goto LABEL_32;
  }
  else
  {
    v34 = ptr;
    v35 = 23;
    v36 = 22;
    if ( *((_QWORD *)&v50 + 1) >= 0x17u )
    {
LABEL_32:
      v37 = _mm_load_si128((const __m128i *)&xmmword_23A84A0);
      *(_QWORD *)&v50 = v35;
      v34[v36] = 0;
      v38 = (char *)ptr + v33;
      *(__m128i *)v38 = v37;
      *(_QWORD *)(v38 + 14) = 0x454E4F445F454B41LL;
LABEL_9:
      sub_368890();
    }
  }
  v46 = v36;
  v42 = v35;
  ptr = (void *)qvector_reserve(&ptr, v34, v35, 1);
  v36 = v46;
  v34 = ptr;
  v35 = v42;
  goto LABEL_32;
}
