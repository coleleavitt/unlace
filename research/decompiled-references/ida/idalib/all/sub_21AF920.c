__int64 *__fastcall sub_21AF920(__int64 *a1, void **a2, __int64 a3, __int64 a4)
{
  size_t v6; // r13
  _WORD *v7; // r14
  __int64 v8; // rax
  size_t v10; // rax
  unsigned int v11; // eax
  _BYTE *v12; // rcx
  __int64 v13; // rbp
  _QWORD *v14; // r13
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r14
  unsigned __int32 v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE *v22; // rcx
  size_t v23; // rax
  _BYTE *v24; // rcx
  size_t v25; // rax
  _BYTE *v26; // rcx
  size_t v27; // rax
  _BYTE *v28; // rcx
  size_t v29; // rax
  _BYTE *v30; // rcx
  size_t v31; // rax
  _BYTE *v32; // rcx
  __int64 v33; // rax
  char *v34; // rsi
  char *v35; // rsi
  unsigned int v36; // eax
  unsigned int v37; // eax
  _BYTE *v38; // rcx
  size_t v39; // rax
  _BYTE *v40; // rcx
  _BYTE *v41; // rcx
  size_t v42; // rax
  _BYTE *v43; // rcx
  int v44; // [rsp+0h] [rbp-108h]
  unsigned int v45; // [rsp+4h] [rbp-104h]
  __int64 v46; // [rsp+8h] [rbp-100h]
  __m128i v47; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-D8h]
  __m128i v49[3]; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v50[2]; // [rsp+70h] [rbp-98h] BYREF
  __int16 v51; // [rsp+90h] [rbp-78h]
  __m128i v52[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v53; // [rsp+C0h] [rbp-48h]

  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(_WORD **)(a3 + 8);
  if ( v6 == 6 )
  {
    if ( *(_DWORD *)v7 == 1768716644 && v7[2] == 27502 )
    {
      sub_21A95D0(v52[0].m128i_i64, (__int64)a2, a4);
      v8 = v52[0].m128i_i64[0];
      if ( !v52[0].m128i_i64[0] )
        goto LABEL_20;
      goto LABEL_10;
    }
    if ( j__strlen("dylink.0") != 6 )
    {
      if ( j__strlen("name") != 6 )
        goto LABEL_5;
      goto LABEL_16;
    }
LABEL_14:
    if ( memcmp(v7, "dylink.0", v6) )
    {
      if ( v6 == j__strlen("name") )
        goto LABEL_16;
LABEL_5:
      if ( v6 != j__strlen("linking") )
        goto LABEL_6;
      if ( !v6 )
      {
LABEL_30:
        sub_21AC0F0(v52[0].m128i_i64, (__int64)a2, a4);
        v8 = v52[0].m128i_i64[0];
        if ( !v52[0].m128i_i64[0] )
          goto LABEL_20;
        goto LABEL_10;
      }
LABEL_29:
      if ( memcmp(v7, "linking", v6) )
      {
        if ( v6 == j__strlen("producers") )
          goto LABEL_8;
        goto LABEL_33;
      }
      goto LABEL_30;
    }
LABEL_19:
    sub_21A9B50(v52, (__int64)a2, a4);
    v8 = v52[0].m128i_i64[0];
    if ( !v52[0].m128i_i64[0] )
      goto LABEL_20;
    goto LABEL_10;
  }
  if ( v6 == j__strlen("dylink.0") )
  {
    if ( !v6 )
      goto LABEL_19;
    goto LABEL_14;
  }
  if ( v6 != j__strlen("name") )
    goto LABEL_5;
  if ( !v6 )
  {
LABEL_23:
    sub_21AC660(v52, (__int64)a2, a4);
    v8 = v52[0].m128i_i64[0];
    if ( !v52[0].m128i_i64[0] )
      goto LABEL_20;
    goto LABEL_10;
  }
LABEL_16:
  if ( !memcmp(v7, "name", v6) )
    goto LABEL_23;
  if ( v6 == j__strlen("linking") )
    goto LABEL_29;
LABEL_6:
  if ( v6 == j__strlen("producers") )
  {
    if ( !v6 )
      goto LABEL_9;
LABEL_8:
    if ( !memcmp(v7, "producers", v6) )
    {
LABEL_9:
      sub_21AD970((void **)v52, a2, a4);
      v8 = v52[0].m128i_i64[0];
      if ( !v52[0].m128i_i64[0] )
        goto LABEL_20;
LABEL_10:
      *a1 = v8;
      return a1;
    }
    if ( v6 != j__strlen("target_features") )
      goto LABEL_39;
    goto LABEL_35;
  }
LABEL_33:
  if ( v6 != j__strlen("target_features") )
    goto LABEL_39;
  if ( !v6 )
    goto LABEL_36;
LABEL_35:
  if ( !memcmp(v7, "target_features", v6) )
  {
LABEL_36:
    sub_21AEDD0(v52, a2, a4);
    v8 = v52[0].m128i_i64[0];
    if ( !v52[0].m128i_i64[0] )
      goto LABEL_20;
    goto LABEL_10;
  }
LABEL_39:
  v10 = j__strlen("reloc.");
  if ( v6 < v10 || v10 && memcmp(v7, "reloc.", v10) )
    goto LABEL_20;
  v11 = sub_21A2A40(a4);
  v12 = a2[9];
  if ( v11 >= 0xCCCCCCCCCCCCCCCDLL * (((_BYTE *)a2[10] - v12) >> 4) )
  {
    sub_21A2C10(v52[0].m128i_i64, "invalid section index");
    v13 = v52[0].m128i_i64[0];
    goto LABEL_44;
  }
  v14 = &v12[80 * v11];
  v15 = sub_21A2A40(a4);
  v46 = v14[5];
  v44 = v15 - 1;
  if ( !v15 )
  {
LABEL_99:
    if ( *(_QWORD *)(a4 + 8) != *(_QWORD *)(a4 + 16) )
    {
      sub_21A2C10(v52[0].m128i_i64, "reloc section ended prematurely");
      v13 = v52[0].m128i_i64[0];
      goto LABEL_44;
    }
    goto LABEL_20;
  }
  v48 = 0;
  v16 = sub_21A2A40(a4);
  v17 = v16;
  v47.m128i_i64[0] = (unsigned __int8)v16;
  v45 = sub_21A2A40(a4);
  v47.m128i_i64[1] = v45;
  while ( 2 )
  {
    v18 = sub_21A2A40(a4);
    v47.m128i_i32[1] = v18;
    switch ( v17 )
    {
      case 0LL:
      case 1LL:
      case 2LL:
      case 12LL:
      case 18LL:
      case 19LL:
      case 24LL:
      case 26LL:
        v41 = a2[70];
        if ( v18 >= 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v41) >> 4) || v41[144 * v18 + 16] )
          goto LABEL_91;
        goto LABEL_67;
      case 3LL:
      case 4LL:
      case 5LL:
      case 11LL:
      case 21LL:
      case 23LL:
        v40 = a2[70];
        if ( v18 < 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v40) >> 4) && v40[144 * v18 + 16] == 1 )
          goto LABEL_66;
        goto LABEL_54;
      case 6LL:
        if ( v18 < (unsigned __int64)(((_BYTE *)a2[39] - (_BYTE *)a2[38]) >> 6) )
          goto LABEL_67;
        v39 = j__strlen("invalid relocation type index");
        sub_21A3560(v52[0].m128i_i64, (__int64)a2, (__int64)&v47, (__int64)"invalid relocation type index", v39);
        v13 = v52[0].m128i_i64[0];
        goto LABEL_44;
      case 7LL:
        v38 = a2[70];
        if ( v18 >= 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v38) >> 4) || v38[144 * v18 + 16] > 2u )
          goto LABEL_57;
        goto LABEL_67;
      case 8LL:
        v32 = a2[70];
        if ( v18 < 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v32) >> 4) && !v32[144 * v18 + 16] )
          goto LABEL_66;
        goto LABEL_91;
      case 9LL:
        v30 = a2[70];
        if ( v18 >= 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v30) >> 4) || v30[144 * v18 + 16] != 3 )
        {
          v31 = j__strlen("invalid section relocation");
          sub_21A3560(v52[0].m128i_i64, (__int64)a2, (__int64)&v47, (__int64)"invalid section relocation", v31);
          v13 = v52[0].m128i_i64[0];
          goto LABEL_44;
        }
LABEL_66:
        v48 = (int)sub_21A2BD0(a4);
        goto LABEL_67;
      case 10LL:
        v28 = a2[70];
        if ( v18 < 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v28) >> 4) && v28[144 * v18 + 16] == 4 )
          goto LABEL_67;
        v29 = j__strlen("invalid tag relocation");
        sub_21A3560(v52[0].m128i_i64, (__int64)a2, (__int64)&v47, (__int64)"invalid tag relocation", v29);
        v13 = v52[0].m128i_i64[0];
        goto LABEL_44;
      case 13LL:
        v26 = a2[70];
        if ( v18 < 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v26) >> 4) && v26[144 * v18 + 16] == 2 )
          goto LABEL_67;
LABEL_57:
        v27 = j__strlen("invalid global relocation");
        sub_21A3560(v52[0].m128i_i64, (__int64)a2, (__int64)&v47, (__int64)"invalid global relocation", v27);
        v13 = v52[0].m128i_i64[0];
        goto LABEL_44;
      case 14LL:
      case 15LL:
      case 16LL:
      case 17LL:
      case 25LL:
        v24 = a2[70];
        if ( v18 < 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v24) >> 4) && v24[144 * v18 + 16] == 1 )
          goto LABEL_94;
LABEL_54:
        v25 = j__strlen("invalid data relocation");
        sub_21A3560(v52[0].m128i_i64, (__int64)a2, (__int64)&v47, (__int64)"invalid data relocation", v25);
        v13 = v52[0].m128i_i64[0];
        goto LABEL_44;
      case 20LL:
        v22 = a2[70];
        if ( v18 < 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v22) >> 4) && v22[144 * v18 + 16] == 5 )
          goto LABEL_67;
        v23 = j__strlen("invalid table relocation");
        sub_21A3560(v52[0].m128i_i64, (__int64)a2, (__int64)&v47, (__int64)"invalid table relocation", v23);
        v13 = v52[0].m128i_i64[0];
        goto LABEL_44;
      case 22LL:
        v43 = a2[70];
        if ( v18 >= 0x8E38E38E38E38E39LL * (((_BYTE *)a2[71] - v43) >> 4) || v43[144 * v18 + 16] )
        {
LABEL_91:
          v42 = j__strlen("invalid function relocation");
          sub_21A3560(v52[0].m128i_i64, (__int64)a2, (__int64)&v47, (__int64)"invalid function relocation", v42);
          v13 = v52[0].m128i_i64[0];
          goto LABEL_44;
        }
LABEL_94:
        v48 = sub_21A2AC0((char **)(a4 + 8), *(char **)(a4 + 16));
LABEL_67:
        if ( (unsigned __int8)(v47.m128i_i8[0] - 14) <= 1u || (v33 = 5, v47.m128i_i8[0] == 17) )
          v33 = 10;
        if ( v47.m128i_i8[0] <= 0x1Au )
        {
          if ( ((0x4802324uLL >> v47.m128i_i8[0]) & 1) != 0 )
            v33 = 4;
          if ( v47.m128i_i8[0] <= 0x16u && (((unsigned __int64)&loc_490000 >> v47.m128i_i8[0]) & 1) != 0 )
            v33 = 8;
        }
        if ( v47.m128i_i64[1] + v33 <= (unsigned __int64)(unsigned int)v46 )
        {
          v34 = (char *)v14[7];
          if ( v34 == (char *)v14[8] )
          {
            sub_21A5C90((__int64)(v14 + 6), v34, &v47);
          }
          else
          {
            v35 = v34 + 24;
            *(__m128i *)(v35 - 24) = _mm_load_si128(&v47);
            *((_QWORD *)v35 - 1) = v48;
            v14[7] = v35;
          }
          if ( --v44 == -1 )
            goto LABEL_99;
          v48 = 0;
          v47 = 0;
          v36 = sub_21A2A40(a4);
          v17 = v36;
          v47.m128i_i8[0] = v36;
          v37 = sub_21A2A40(a4);
          v47.m128i_i64[1] = v37;
          if ( v37 < (unsigned __int64)v45 )
          {
            sub_21A2C10(v52[0].m128i_i64, "relocations not in offset order");
            v13 = v52[0].m128i_i64[0];
            goto LABEL_44;
          }
          v45 = v37;
          continue;
        }
        sub_21A2C10(v52[0].m128i_i64, "invalid relocation offset");
        v13 = v52[0].m128i_i64[0];
LABEL_44:
        if ( v13 )
        {
          *a1 = v13;
          return a1;
        }
LABEL_20:
        *a1 = 0;
        return a1;
      default:
        v50[0].m128i_i32[0] = v17;
        v51 = 265;
        v53 = 259;
        v52[0].m128i_i64[0] = (__int64)"invalid relocation type: ";
        sub_A41580(v49, v52, v50, v19, v20, v21);
        v13 = operator new(0x38u);
        sub_2195A00(v13, (__int64)v49, 3);
        goto LABEL_44;
    }
  }
}
