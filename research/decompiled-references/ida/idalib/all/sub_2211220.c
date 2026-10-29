void __fastcall sub_2211220(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  _BYTE *v12; // rsi
  char v13; // r11
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  char v19; // [rsp+1Eh] [rbp-EAh]
  char v20; // [rsp+1Eh] [rbp-EAh]
  char v21; // [rsp+1Fh] [rbp-E9h]
  void *ptr; // [rsp+30h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-D0h]
  _BYTE v25[192]; // [rsp+48h] [rbp-C0h] BYREF

  ptr = v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( !a2 )
    return;
  v7 = 0;
  v8 = 0x100002600LL;
LABEL_31:
  v10 = v7;
LABEL_16:
  v7 = v10;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(a1 + v7);
    if ( (unsigned __int8)v9 > 0x20u )
      break;
    if ( !_bittest64(&v8, v9) )
    {
      v10 = v7 + 1;
LABEL_8:
      if ( (unsigned __int8)v9 > 0x20u || !_bittest64(&v8, v9) )
      {
        v7 = v10;
        sub_FC8050(&ptr, v9);
        v11 = si128.m128i_i64[0];
        goto LABEL_29;
      }
      if ( si128.m128i_i64[0] )
      {
        v20 = v9;
        v16 = sub_2245280(a3, ptr, si128.m128i_i64[0]);
        sub_10DC5D0(a4, v16);
        LOBYTE(v9) = v20;
      }
      if ( (_BYTE)v9 == 10 && a5 )
        sub_10DC5D0(a4, 0);
      si128.m128i_i64[0] = 0;
      if ( v10 == a2 )
        goto LABEL_46;
      goto LABEL_16;
    }
    if ( (_BYTE)v9 == 10 && a5 )
      sub_10DC5D0(a4, 0);
    if ( ++v7 == a2 )
    {
      v11 = si128.m128i_i64[0];
LABEL_24:
      v12 = ptr;
      if ( v11 )
        goto LABEL_45;
      goto LABEL_25;
    }
  }
  while ( 1 )
  {
    v10 = v7 + 1;
    if ( (_BYTE)v9 != 92 || v10 >= a2 )
      break;
    v7 += 2LL;
    sub_FC8050(&ptr, *(_BYTE *)(a1 + v10));
    v11 = si128.m128i_i64[0];
LABEL_29:
    if ( a2 == v7 )
      goto LABEL_24;
    if ( !v11 )
      goto LABEL_31;
    v9 = *(unsigned __int8 *)(a1 + v7);
  }
  if ( (_BYTE)v9 != 34 && (_BYTE)v9 != 39 )
    goto LABEL_8;
  v11 = si128.m128i_i64[0];
  if ( v10 == a2 )
    goto LABEL_24;
  v13 = *(_BYTE *)(a1 + v10);
  v7 += 2LL;
  if ( v13 == (_BYTE)v9 )
    goto LABEL_29;
  while ( 1 )
  {
    v15 = v10 + 1;
    if ( v13 != 92 )
      goto LABEL_36;
    if ( a2 == v15 )
      break;
    v13 = *(_BYTE *)(a1 + v15);
    v15 = v10 + 2;
LABEL_36:
    v14 = v11 + 1;
    if ( (unsigned __int64)(v11 + 1) > si128.m128i_i64[1] )
    {
LABEL_43:
      v21 = v13;
      v19 = v9;
      sub_2236E10(&ptr, v25, v14, 1);
      v11 = si128.m128i_i64[0];
      v13 = v21;
      LOBYTE(v9) = v19;
    }
    *((_BYTE *)ptr + v11) = v13;
    v11 = ++si128.m128i_i64[0];
    if ( a2 == v15 )
      goto LABEL_24;
    v13 = *(_BYTE *)(a1 + v15);
    v10 = v15;
    if ( v13 == (_BYTE)v9 )
    {
      v7 = v15 + 1;
      goto LABEL_29;
    }
  }
  v14 = v11 + 1;
  if ( si128.m128i_i64[1] < (unsigned __int64)(v11 + 1) )
    goto LABEL_43;
  *((_BYTE *)ptr + v11) = 92;
  v12 = ptr;
  v11 = si128.m128i_i64[0] + 1;
  si128.m128i_i64[0] = v11;
  if ( !v11 )
    goto LABEL_25;
LABEL_45:
  v17 = sub_2245280(a3, v12, v11);
  sub_10DC5D0(a4, v17);
LABEL_46:
  v12 = ptr;
LABEL_25:
  if ( v12 != v25 )
    free(v12);
}
