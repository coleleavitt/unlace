unsigned __int8 *__fastcall sub_13D7F50(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4)
{
  unsigned __int8 *v7; // rbx
  unsigned __int8 v8; // si
  char v10; // cl
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  char v15; // al
  unsigned __int8 *v16; // rdi
  unsigned __int8 v17; // dl
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int8 v20; // dl
  unsigned __int64 v21; // rax
  unsigned __int8 *v22; // rdi
  unsigned __int8 v23; // al
  __int64 v24; // rdx
  size_t v25; // r13
  int v26; // eax
  int v27; // ecx
  size_t v28; // r13
  int v29; // eax
  _BYTE *v30; // rdi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  size_t v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int8 *v36; // [rsp+8h] [rbp-F0h] BYREF
  void *src; // [rsp+10h] [rbp-E8h] BYREF
  size_t n; // [rsp+18h] [rbp-E0h]
  _QWORD v39[2]; // [rsp+20h] [rbp-D8h] BYREF
  int v40; // [rsp+30h] [rbp-C8h] BYREF
  int v41; // [rsp+34h] [rbp-C4h]
  char v42; // [rsp+38h] [rbp-C0h]
  __int64 v43; // [rsp+3Ch] [rbp-BCh]
  char v44; // [rsp+44h] [rbp-B4h]
  void *dest; // [rsp+48h] [rbp-B0h]
  __m128 v46; // [rsp+50h] [rbp-A8h] BYREF
  char v47; // [rsp+68h] [rbp-90h]
  __int64 v48[17]; // [rsp+70h] [rbp-88h] BYREF

  v7 = a3;
  v36 = a3;
  v8 = *a3;
  if ( *a3 != 63 && v8 != 92 )
  {
    if ( (byte_2411740[2 * v8] & 0xE0) == 0 )
      goto LABEL_4;
    v13 = 1;
LABEL_23:
    v14 = *(_QWORD *)(a1 + 136);
    v15 = *(_BYTE *)(v14 + 1);
    if ( (v15 & 0x10) == 0 )
    {
      if ( *(_BYTE *)(a1 + 26) )
        return v7;
      v27 = (v8 == 95) + 1328;
LABEL_42:
      sub_13D1530((__int64)v48, a1, (__int64)v7, v27);
      v28 = j__strlen(" ");
      v29 = sub_13D1500(a1, (__int64)v36, 1);
      v44 = 0;
      v43 = 0;
      dest = &v46.m128_u16[4];
      v46.m128_u64[0] = 0;
      v46.m128_i8[8] = 0;
      v47 = 0;
      v40 = v29;
      v41 = v29;
      v42 = 0;
      src = v39;
      sub_13D0630(&src, " ", (__int64)&asc_22D9D59[v28]);
      v30 = dest;
      if ( src == v39 )
      {
        v33 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)dest = v39[0];
          else
            memcpy(dest, src, n);
          v33 = n;
          v30 = dest;
        }
        v46.m128_u64[0] = v33;
        v30[v33] = 0;
        v30 = src;
      }
      else
      {
        if ( dest == &v46.m128_u16[4] )
        {
          v35 = v39[0];
          dest = src;
          v46 = _mm_loadh_ps((const double *)&v35);
        }
        else
        {
          v35 = v39[0];
          v31 = v46.m128_u64[1];
          dest = src;
          v46 = _mm_loadh_ps((const double *)&v35);
          if ( v30 )
          {
            src = v30;
            v39[0] = v31;
            goto LABEL_46;
          }
        }
        v30 = v39;
        src = v39;
      }
LABEL_46:
      n = 0;
      *v30 = 0;
      if ( src != v39 )
        operator delete(src);
      v47 = 0;
      if ( !v40 )
        goto LABEL_51;
      goto LABEL_49;
    }
    if ( v8 == 95 )
      goto LABEL_54;
    if ( !a4 || (v15 & 0x20) == 0 )
      goto LABEL_38;
    BYTE2(v48[0]) = 0;
    v16 = &v7[v13];
    LOWORD(v48[0]) = v8;
    v17 = *v16;
    if ( *v16 == 92 || (LODWORD(v18) = 1, v17 == 63) )
    {
      v32 = sub_13D18F0(v16, v14);
      v14 = *(_QWORD *)(a1 + 136);
      v17 = v32;
      v18 = HIDWORD(v32);
    }
    if ( byte_23F75C0[v17] )
    {
      BYTE1(v48[0]) = v17;
      v19 = (unsigned int)v18 + v13;
      v20 = v36[v19];
      if ( v20 == 92 || (LODWORD(v21) = 1, v20 == 63) )
      {
        v34 = sub_13D18F0(&v36[v19], v14);
        v14 = *(_QWORD *)(a1 + 136);
        v20 = v34;
        v21 = HIDWORD(v34);
      }
      if ( byte_23F75C0[v20] )
      {
        v22 = &v36[(unsigned int)(v21 + v19)];
        BYTE2(v48[0]) = v20;
        v23 = *v22;
        if ( *v22 == 63 || v23 == 92 )
          v23 = sub_13D18F0(v22, v14);
        v7 = v36;
        if ( !byte_23F75C0[v23] )
        {
          v14 = *(_QWORD *)(a1 + 136);
          v24 = 3;
          goto LABEL_37;
        }
LABEL_38:
        if ( *(_BYTE *)(a1 + 26) )
          return v7;
        sub_13D1530((__int64)v48, a1, (__int64)v7, (**(_BYTE **)(a1 + 136) & 0x20) == 0 ? 1254 : 1227);
        v25 = j__strlen(" ");
        v26 = sub_13D1500(a1, (__int64)v36, 1);
        sub_9EC740((__int64)&v40, v26, " ", v25, 0);
        if ( !v40 )
          goto LABEL_51;
LABEL_49:
        if ( v41 )
          sub_13D5200(v48, (unsigned __int64)&v40);
LABEL_51:
        if ( dest != &v46.m128_u16[4] )
          operator delete(dest);
        sub_AEA040((__int64)v48);
        return v36;
      }
      v24 = 2;
    }
    else
    {
      v24 = 1;
    }
LABEL_37:
    v7 = v36;
    if ( !(unsigned __int8)sub_13E43F0(v14, v48, v24) )
      goto LABEL_38;
LABEL_54:
    if ( v13 == 1 )
      ++v7;
    else
      v7 += sub_13D1690(a1, v7, a2) >> 32;
    v36 = v7;
    goto LABEL_9;
  }
  v12 = sub_13D1690(a1, a3, 0);
  v7 = v36;
  v8 = v12;
  v13 = HIDWORD(v12);
  if ( (byte_2411740[2 * (unsigned __int8)v12] & 0xE0) != 0 )
    goto LABEL_23;
  if ( (_BYTE)v12 == 92 )
  {
    if ( (unsigned __int8)sub_13D7240(a1, (__int64 *)&v36, HIDWORD(v12), a2) )
      goto LABEL_8;
    return v36;
  }
LABEL_4:
  if ( (v8 & 0x80u) == 0 || !(unsigned __int8)sub_13D5920(a1, &v36, a2) )
    return v36;
LABEL_8:
  v7 = v36;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 0x10) != 0 )
  {
LABEL_9:
    *(_WORD *)(a2 + 18) |= 0x20u;
    while ( 1 )
    {
      v10 = *v7;
      if ( *v7 == 63 )
        goto LABEL_15;
LABEL_11:
      if ( v10 == 92 )
      {
LABEL_15:
        while ( 1 )
        {
          v11 = sub_13D1690(a1, v7, 0);
          v10 = v11;
          if ( !byte_23F75C0[(unsigned __int8)v11] )
            break;
          v7 = v36;
          if ( HIDWORD(v11) == 1 )
            goto LABEL_13;
          v7 += sub_13D1690(a1, v36, a2) >> 32;
LABEL_14:
          v36 = v7;
          v10 = *v7;
          if ( *v7 != 63 )
            goto LABEL_11;
        }
        if ( (_BYTE)v11 == 92 )
        {
          if ( !(unsigned __int8)sub_13D7240(a1, (__int64 *)&v36, HIDWORD(v11), a2) )
            return v36;
          goto LABEL_59;
        }
      }
      else if ( byte_23F75C0[(unsigned __int8)v10] )
      {
LABEL_13:
        ++v7;
        goto LABEL_14;
      }
      if ( v10 >= 0 || !(unsigned __int8)sub_13D5920(a1, &v36, a2) )
        return v36;
LABEL_59:
      v7 = v36;
    }
  }
  v27 = 1328;
  if ( !*(_BYTE *)(a1 + 26) )
    goto LABEL_42;
  return v7;
}
