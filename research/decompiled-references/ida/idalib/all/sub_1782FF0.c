__int16 __fastcall sub_1782FF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  unsigned __int16 v6; // ax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  __m128 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rcx
  __m128i v24; // xmm1
  __m128i si128; // xmm0
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  unsigned __int64 v40; // rax
  __int64 v42; // [rsp+8h] [rbp-1D0h] BYREF
  _QWORD v43[2]; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v44; // [rsp+20h] [rbp-1B8h]
  __m128i v45; // [rsp+30h] [rbp-1A8h]
  __int64 v46; // [rsp+40h] [rbp-198h]
  __m128i v47; // [rsp+50h] [rbp-188h]
  __int64 v48; // [rsp+60h] [rbp-178h]
  __m128i v49; // [rsp+70h] [rbp-168h]
  __int64 v50; // [rsp+80h] [rbp-158h]
  __m128i v51; // [rsp+90h] [rbp-148h]
  __int64 v52; // [rsp+A0h] [rbp-138h]
  __m128i v53; // [rsp+B0h] [rbp-128h]
  __int64 v54; // [rsp+C0h] [rbp-118h]
  __m128i v55; // [rsp+D0h] [rbp-108h]
  __int64 v56; // [rsp+E0h] [rbp-F8h]
  __m128i v57; // [rsp+F0h] [rbp-E8h]
  __int64 v58; // [rsp+100h] [rbp-D8h]
  __m128 v59; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+130h] [rbp-A8h]
  __m128i v61; // [rsp+138h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+148h] [rbp-90h]

  v44 = a3;
  v43[1] = &v42;
  v5 = *(_WORD *)a2;
  v42 = a2;
  v6 = v5 & 0x1FF;
  v43[0] = a1;
  if ( (unsigned int)v6 - 113 > 1 )
  {
    v19.m128_i16[0] = (v6 + 423) & 0x1FF;
    if ( v19.m128_i16[0] <= 4u )
    {
      if ( (*(_DWORD *)a2 & 0x10000) == 0 )
      {
        v29 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        sub_1782DA0(v43, v29, 0);
        v30 = *(_QWORD *)(a1 + 248);
        v33 = sub_BFB6C0(a2, v30, v31, v32);
        v19.m128_i32[0] = sub_F65A30(v33, v30, v34, v35);
        if ( v19.m128_i32[0] == 1 )
        {
          v39 = sub_F60F10(
                  *(_QWORD *)(*(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
                  v30,
                  v19.m128_i64[1],
                  v36,
                  v37,
                  v38);
          v40 = sub_B97300((__int64)v39);
          v19.m128_i16[0] = (unsigned __int16)sub_1782DA0(v43, v40, 1);
        }
      }
      return v19.m128_i16[0];
    }
    sub_EE9E50(&v59, a2);
    v24 = _mm_loadu_si128(&v61);
    si128 = _mm_load_si128((const __m128i *)&v59);
    v50 = v60;
    v54 = v62;
    v56 = v62;
    v52 = v60;
    v48 = v60;
    v45 = v24;
    v46 = v62;
    v58 = v60;
    v19 = v59;
    v53 = v24;
    v55 = v24;
    v49 = si128;
    v51 = si128;
    v47 = si128;
    v57 = si128;
    while ( 1 )
    {
LABEL_46:
      if ( v24.m128i_i64[0] != v19.m128_u64[0] )
      {
LABEL_47:
        if ( (v19.m128_i8[8] & 3) != 0 )
          goto LABEL_54;
LABEL_48:
        v26 = *(_QWORD *)v19.m128_u64[0];
        if ( !*(_QWORD *)v19.m128_u64[0] )
          goto LABEL_57;
        goto LABEL_49;
      }
      while ( 1 )
      {
        if ( v24.m128i_i64[1] == v19.m128_u64[1] )
          return v19.m128_i16[0];
        if ( (v19.m128_i8[8] & 3) == 0 )
          goto LABEL_48;
LABEL_54:
        v26 = *(_QWORD *)sub_EF2B30((__int64)&v59);
        if ( v26 )
        {
LABEL_49:
          sub_1782FF0(a1, v26, a3);
          v19.m128_u64[1] = v59.m128_u64[1];
          if ( (v59.m128_i8[8] & 3) == 0 )
            goto LABEL_56;
        }
        else
        {
          v19.m128_u64[1] = v59.m128_u64[1];
          if ( (v59.m128_i8[8] & 3) == 0 )
          {
LABEL_56:
            v19.m128_u64[0] = v59.m128_u64[0];
LABEL_57:
            v19.m128_u64[0] += 8LL;
            v59.m128_u64[0] = v19.m128_u64[0];
            goto LABEL_46;
          }
        }
        if ( (v19.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          break;
        sub_EF2960((__int64)&v59);
        v19 = v59;
        if ( v24.m128i_i64[0] != v59.m128_u64[0] )
          goto LABEL_47;
      }
      sub_EF2750((unsigned __int64 *)&v59, 1);
      v19 = v59;
    }
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( !(unsigned int)sub_18B1C40(a1, a2, v7, 0)
    || (*(_BYTE *)(v7 + 28) & 0x7Fu) - 34 <= 5 && (unsigned int)sub_B75A50(v7, 0) == 377 )
  {
    goto LABEL_20;
  }
  v8 = v44;
  if ( *(_DWORD *)(v44 + 12) == *(_DWORD *)(v44 + 16) )
  {
    v27 = *(_QWORD *)(v43[0] + 544LL);
    if ( !v27 )
      BUG();
    sub_168B9F0((__int64)&v59, (__int64 *)(v43[0] + 8LL), *(_DWORD *)(v27 - 48), 0xDC5u, 0);
    sub_15F7200(&v59);
    v8 = v44;
  }
  if ( *(_BYTE *)(v8 + 20) )
  {
    v9 = *(__int64 **)v8;
    v10 = *(unsigned int *)(v8 + 12);
    v11 = (__int64 *)(*(_QWORD *)v8 + 8 * v10);
    if ( *(__int64 **)v8 != v11 )
    {
      v12 = *(__int64 **)v8;
      if ( v7 == *v9 )
        goto LABEL_66;
      while ( v11 != ++v12 )
      {
        if ( v7 == *v12 )
          goto LABEL_66;
      }
    }
    if ( (unsigned int)v10 < *(_DWORD *)(v8 + 8) )
    {
      *(_DWORD *)(v8 + 12) = v10 + 1;
      *v11 = v7;
      v9 = *(__int64 **)v8;
      v12 = (__int64 *)(*(_QWORD *)v8 + 8 * v10);
      goto LABEL_66;
    }
  }
  v12 = (__int64 *)sub_2236760(v8, v7);
  v9 = *(__int64 **)v8;
  if ( *(_BYTE *)(v8 + 20) )
  {
LABEL_66:
    v13 = &v9[*(unsigned int *)(v8 + 12)];
    goto LABEL_15;
  }
  v13 = &v9[*(unsigned int *)(v8 + 8)];
LABEL_15:
  if ( v13 != v12 && (unsigned __int64)*v12 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v14 = v12 + 1;
    do
    {
      v15 = v14;
      if ( v13 == v14 )
        break;
      ++v14;
    }
    while ( (unsigned __int64)*v15 >= 0xFFFFFFFFFFFFFFFELL );
  }
LABEL_20:
  v16 = *(_QWORD *)(sub_B8C1B0(v7 + 72) + 16);
  if ( (v16 & 4) != 0 )
    v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v17 )
    v17 -= 64LL;
  v18 = sub_B97300(v17);
  v19.m128_i32[0] = sub_18B1C40(v43[0], 0, v18, 0);
  if ( v19.m128_i32[0] )
  {
    if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 34 > 5 || (v19.m128_i32[0] = sub_B75A50(v18, 0), v19.m128_i32[0] != 377) )
    {
      v20 = v44;
      if ( *(_DWORD *)(v44 + 12) == *(_DWORD *)(v44 + 16) )
      {
        v28 = *(_QWORD *)(v43[0] + 544LL);
        if ( !v28 )
          BUG();
        sub_168B9F0((__int64)&v59, (__int64 *)(v43[0] + 8LL), *(_DWORD *)(v28 - 48), 0xDC5u, 0);
        sub_15F7200(&v59);
        v20 = v44;
      }
      if ( !*(_BYTE *)(v20 + 20) )
        goto LABEL_35;
      v21 = *(_QWORD **)v20;
      v22 = *(unsigned int *)(v20 + 12);
      v19.m128_u64[1] = *(_QWORD *)v20 + 8 * v22;
      if ( *(_QWORD *)v20 != v19.m128_u64[1] )
      {
        v19.m128_u64[0] = *(_QWORD *)v20;
        if ( v18 == *v21 )
          goto LABEL_64;
        while ( 1 )
        {
          v19.m128_u64[0] += 8LL;
          if ( v19.m128_u64[1] == v19.m128_u64[0] )
            break;
          if ( v18 == *(_QWORD *)v19.m128_u64[0] )
            goto LABEL_64;
        }
      }
      if ( (unsigned int)v22 < *(_DWORD *)(v20 + 8) )
      {
        *(_DWORD *)(v20 + 12) = v22 + 1;
        *(_QWORD *)v19.m128_u64[1] = v18;
        v21 = *(_QWORD **)v20;
        v19.m128_u64[0] = *(_QWORD *)v20 + 8 * v22;
      }
      else
      {
LABEL_35:
        v19.m128_u64[0] = sub_2236760(v20, v18);
        v21 = *(_QWORD **)v20;
        if ( !*(_BYTE *)(v20 + 20) )
        {
          v23 = &v21[*(unsigned int *)(v20 + 8)];
LABEL_37:
          if ( v23 != (_QWORD *)v19.m128_u64[0] && *(_QWORD *)v19.m128_u64[0] >= 0xFFFFFFFFFFFFFFFELL )
          {
            v19.m128_u64[0] += 8LL;
            do
            {
              v19.m128_u64[1] = v19.m128_u64[0];
              if ( v23 == (_QWORD *)v19.m128_u64[0] )
                break;
              v19.m128_u64[0] += 8LL;
            }
            while ( *(_QWORD *)v19.m128_u64[1] >= 0xFFFFFFFFFFFFFFFELL );
          }
          return v19.m128_i16[0];
        }
      }
LABEL_64:
      v23 = &v21[*(unsigned int *)(v20 + 12)];
      goto LABEL_37;
    }
  }
  return v19.m128_i16[0];
}
