__int64 __fastcall sub_1853A70(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbp
  _QWORD *v11; // r15
  __int64 v12; // r14
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  __int64 v15; // r12
  unsigned __int8 v16; // al
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // bp
  __int64 v23; // rax
  int v24; // eax
  __int64 *v25; // r15
  unsigned int v26; // edx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 v33; // al
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int8 v41; // cl
  unsigned int v42; // edx
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r13
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // rdx
  unsigned __int8 v48; // si
  unsigned int v49; // eax
  __int64 v50; // rdi
  __m128i v51; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int8 v52; // [rsp+17h] [rbp-121h]
  __int64 v53; // [rsp+18h] [rbp-120h]
  unsigned __int64 *v54; // [rsp+20h] [rbp-118h]
  __int64 v55; // [rsp+28h] [rbp-110h]
  const __m128i *v56; // [rsp+30h] [rbp-108h]
  __int64 *v57; // [rsp+38h] [rbp-100h]
  __int64 v58; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v59; // [rsp+48h] [rbp-F0h] BYREF
  __m128i v60; // [rsp+50h] [rbp-E8h] BYREF
  __m128 v61; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+78h] [rbp-C0h]

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 232);
  v53 = a1;
  v56 = a2;
  v55 = a4;
  v54 = a5;
  if ( (*(_BYTE *)(v6 + 1) & 0x10) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 544);
    if ( ((*(_BYTE *)(v7 + 8) + 70) & 0x7Fu) <= 3 )
    {
      v51.m128i_i8[0] = a2[1].m128i_i8[12];
      if ( (v51.m128i_i8[0] & 0x7F) == 0x51 )
      {
        v34 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
          v34 = *(_QWORD *)v34;
        if ( (*(_BYTE *)(v34 + 8) & 0x7F) == 0x3E )
        {
          v50 = v34;
          v34 = 0;
          v35 = sub_B72690(v50);
          v7 = *(_QWORD *)(v53 + 544);
          if ( !v35 )
            goto LABEL_58;
          v34 = v35;
        }
        v35 = v34 - 64;
LABEL_58:
        if ( (*(_BYTE *)(v35 + 75) & 1) != 0 )
        {
          while ( 1 )
          {
            v36 = *(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v35 + 16) & 4) != 0 )
              v36 = *(_QWORD *)v36;
            if ( !v36 )
              break;
            v35 = v36 - 64;
            if ( (*(_BYTE *)(v36 + 11) & 1) == 0 )
              goto LABEL_63;
          }
          v35 = 0;
        }
LABEL_63:
        if ( v7 )
          v7 -= 64;
        v52 = sub_B707F0(v7, v35);
        if ( v52 )
        {
          v37 = (__int64 *)(v53 + 8);
          if ( *(_QWORD *)(v53 + 544) == v34 )
          {
            sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), v56[1].m128i_u32[2], 0x151Au, 0);
            v51 = _mm_loadu_si128(v56 + 4);
            v61 = (__m128)v51;
            v60.m128i_i64[0] = sub_183A570((__m128i *)&v61);
            sub_1587DB0((__int64)&v62, v60.m128i_i64);
            sub_15F7200(&v62);
            sub_168B9F0((__int64)&v62, v37, *(_DWORD *)(v5 + 24), 0x193Au, 0);
            sub_15F7200(&v62);
            sub_B88650((__int64)v56, 1);
          }
          else
          {
            v38 = v56[4].m128i_i64[0];
            if ( v38 )
            {
              v39 = v56[4].m128i_i64[1];
              v62 = v56[4].m128i_i64[0];
              v63 = v39;
              v40 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v40 )
              {
                v62 = v40;
                v41 = 0;
                while ( (*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  v41 = v52;
                  v40 = *(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                if ( v41 )
                  v62 = v40;
              }
              v42 = sub_E90530(&v62);
            }
            else
            {
              v42 = 0;
            }
            sub_168B9F0((__int64)&v62, v37, v42, 0x151Bu, 0);
            v58 = v56[4].m128i_i64[0];
            v43 = sub_17AE3B0((__int64)&v62, &v58);
            v44 = *(_QWORD *)(v53 + 544);
            if ( v44 )
              v44 -= 64;
            v59 = v44;
            v45 = sub_1852F10(v43, &v59);
            v51 = _mm_loadu_si128(v56 + 4);
            v60 = v51;
            v46 = sub_E90530(v60.m128i_i64) >> 32;
            if ( v60.m128i_i64[0] )
            {
              v61 = (__m128)_mm_load_si128(&v60);
              v47 = *(_QWORD *)(v60.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v47 )
              {
                v48 = 0;
                v51.m128i_i64[0] = v61.m128_i64[1];
                v61 = _mm_loadh_ps((const double *)v51.m128i_i64);
                while ( (*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  v48 = v52;
                  v47 = *(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                if ( v48 )
                  v61.m128_u64[0] = v47;
              }
              v49 = sub_E90530((__int64 *)&v61);
            }
            else
            {
              v49 = 0;
            }
            v61.m128_u64[0] = __PAIR64__(v46, v49);
            sub_1587DB0(v45, (__int64 *)&v61);
            sub_15F7200(&v62);
            sub_168B9F0((__int64)&v62, v37, *(_DWORD *)(v5 + 24), 0x193Au, 0);
            sub_15F7200(&v62);
            sub_B88650((__int64)v56, 1);
          }
          return v52;
        }
      }
    }
  }
  v8 = *(unsigned int *)(v55 + 16);
  if ( !(_DWORD)v8 )
    return 0;
  if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 53 <= 1 )
    v5 = *(_QWORD *)(v5 + 64);
  v9 = 0;
  v52 = 0;
  v51.m128i_i64[0] = 0;
  v10 = *(_QWORD *)(v55 + 8) + 8 * v8;
  v11 = *(_QWORD **)(v55 + 8);
  v57 = &v62;
  do
  {
    while ( 1 )
    {
      v12 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
      v13 = *(_BYTE *)(v12 + 28) & 0x7F;
      if ( (unsigned int)v13 - 53 <= 1 || ((v13 + 52) & 0x7Fu) <= 1 )
      {
        v12 = sub_B72ED0(*v11 & 0xFFFFFFFFFFFFFFF8LL);
        v13 = *(_BYTE *)(v12 + 28) & 0x7F;
      }
      if ( ((v13 + 48) & 0x7Fu) <= 1 || v13 == 55 )
        goto LABEL_10;
      if ( (unsigned int)v13 - 59 <= 2 && sub_B97450(v12) )
      {
        v14 = *(_BYTE *)(v5 + 28) & 0x7F;
        if ( ((v14 + 100) & 0x7B) != 0 && (unsigned int)v14 - 49 > 2 )
        {
          v28 = v56[2].m128i_i64[1];
          LODWORD(v63) = v56[1].m128i_i32[2];
          v62 = v28;
          sub_B85890(v57 + 2, v28);
          v33 = sub_17B40D0(v53, *(_QWORD *)(v53 + 544), v29, v30, v31, v32, v62, v63);
          if ( v33 )
            return v33;
        }
      }
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
      if ( v15 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
      {
        v16 = *(_BYTE *)(v12 + 28) & 0x7F;
        if ( (unsigned int)v16 - 64 > 2 || (*(_BYTE *)(v5 + 28) & 0x7Fu) - 64 > 2 )
        {
          if ( v16 != 57 || (*(_BYTE *)(v5 + 28) & 0x7F) != 0x39 )
            goto LABEL_45;
        }
        else
        {
          v17 = (__int64 *)(*(_QWORD *)(v5 + 80) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v5 + 80) & 4) != 0 )
            v18 = v17[1];
          else
            v18 = *v17;
          v19 = (__int64 *)(*(_QWORD *)(v12 + 80) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v12 + 80) & 4) != 0 )
            v20 = v19[1];
          else
            v20 = *v19;
          if ( (*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v20) & 7) != (*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v18) & 7) )
          {
LABEL_45:
            if ( !(unsigned __int8)sub_1BD6B00(v53, v12, v5) )
              goto LABEL_31;
            goto LABEL_30;
          }
        }
      }
      v21 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 53 <= 1 )
        *v54 = v21;
LABEL_30:
      v52 = 1;
LABEL_31:
      if ( (*(_BYTE *)(v12 + 8) & 6) != 0 && !(unsigned __int8)sub_1A427C0(v53, v12, 0) )
        break;
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 58 >= 5 )
      {
        v9 = v12;
        v12 = v51.m128i_i64[0];
      }
      v51.m128i_i64[0] = v12;
LABEL_10:
      if ( (_QWORD *)v10 == ++v11 )
        goto LABEL_34;
    }
    ++v11;
  }
  while ( (_QWORD *)v10 != v11 );
LABEL_34:
  if ( v52 )
    return 0;
  v22 = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( !v9 )
  {
    if ( v22 == 57 )
    {
      if ( v51.m128i_i64[0] )
      {
        v25 = (__int64 *)(v53 + 8);
        sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), v56[1].m128i_u32[2], 0x1514u, 0);
        sub_15F7200(&v62);
        sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), *(_DWORD *)(v5 + 24), 0x193Au, 0);
        sub_15F7200(&v62);
        v9 = v51.m128i_i64[0];
        goto LABEL_90;
      }
      return 0;
    }
LABEL_37:
    v23 = sub_B8BF30(v5);
    if ( !v23 )
    {
      if ( (unsigned int)v22 - 58 > 4 )
      {
        if ( v9 )
        {
          sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), v56[1].m128i_u32[2], 0x1514u, 0);
          sub_15F7200(&v62);
          sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), *(_DWORD *)(v5 + 24), 0x193Au, 0);
          sub_15F7200(&v62);
          sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), *(_DWORD *)(v9 + 24), 0x1939u, 0);
          sub_15F7200(&v62);
          sub_B88650((__int64)v56, 1);
          return 1;
        }
      }
      else if ( v51.m128i_i64[0] )
      {
        sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), v56[1].m128i_u32[2], 0x1514u, 0);
        sub_15F7200(&v62);
        sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), *(_DWORD *)(v5 + 24), 0x193Au, 0);
        sub_15F7200(&v62);
        sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), *(_DWORD *)(v51.m128i_i64[0] + 24), 0x1939u, 0);
        sub_15F7200(&v62);
        sub_B88650((__int64)v56, 1);
        return 1;
      }
      return 0;
    }
    v61.m128_u64[0] = 0;
    v24 = sub_1BDCB60(v53, 0, v23, v55, &v61, 1);
    switch ( v24 )
    {
      case 1:
        v52 = 1;
        if ( ((*(_BYTE *)(*(_QWORD *)(v53 + 544) + 8LL) + 70) & 0x7Fu) <= 3 )
          return v52;
        v25 = (__int64 *)(v53 + 8);
        break;
      case 2:
        v25 = (__int64 *)(v53 + 8);
        break;
      case 0:
        return v52;
      default:
        v25 = (__int64 *)(v53 + 8);
        goto LABEL_42;
    }
    sub_168B9F0((__int64)&v62, v25, v56[1].m128i_u32[2], 0x1514u, 0);
    sub_15F7200(&v62);
LABEL_42:
    sub_168B9F0((__int64)&v62, v25, *(_DWORD *)(v5 + 24), 0x193Au, 0);
    sub_15F7200(&v62);
    v26 = *(_DWORD *)(v61.m128_u64[0] + 24);
    goto LABEL_91;
  }
  if ( ((*(_BYTE *)(v9 + 28) & 0x7F) == 57) == (v22 == 57) )
    goto LABEL_37;
  v25 = (__int64 *)(v53 + 8);
  sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), v56[1].m128i_u32[2], 0x1514u, 0);
  sub_15F7200(&v62);
  sub_168B9F0((__int64)&v62, (__int64 *)(v53 + 8), *(_DWORD *)(v5 + 24), 0x193Au, 0);
  sub_15F7200(&v62);
LABEL_90:
  v26 = *(_DWORD *)(v9 + 24);
LABEL_91:
  sub_168B9F0((__int64)&v62, v25, v26, 0x1939u, 0);
  sub_15F7200(&v62);
  sub_B88650((__int64)v56, 1);
  return 1;
}
