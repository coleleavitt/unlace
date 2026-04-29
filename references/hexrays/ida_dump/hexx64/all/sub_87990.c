__int64 __fastcall sub_87990(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  unsigned __int8 v3; // al
  unsigned __int8 *v4; // rbp
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  char v8; // al
  unsigned __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rcx
  _QWORD *v12; // r12
  int v13; // eax
  unsigned __int8 *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned __int64 v27; // rsi
  unsigned __int8 v28; // al
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // esi
  __int64 (__fastcall *v32)(__int64, unsigned int); // rcx
  _QWORD *v33; // r12
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // ecx
  __int64 v39; // r13
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i *v45; // r12
  __int64 v46; // rax
  __m128i v47; // [rsp+0h] [rbp-78h] BYREF
  __int64 v48; // [rsp+18h] [rbp-60h] BYREF
  __int64 v49; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-50h]
  unsigned __int64 v51; // [rsp+30h] [rbp-48h]
  unsigned __int64 v52; // [rsp+38h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v2 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    goto LABEL_73;
  v3 = *v2;
  v4 = (unsigned __int8 *)a1;
  *(_QWORD *)a2 = v2 + 1;
  v6 = v3 & 0xF;
  v3 >>= 4;
  *(_BYTE *)a1 = v6;
  *(_DWORD *)(a1 + 4) = v3;
  if ( !v3 )
  {
    v7 = -8201;
    if ( _bittest64(&v7, v6) )
      *(_DWORD *)(a1 + 4) = sub_7CD20((_QWORD *)a2);
  }
  a1 = *(unsigned int *)(a2 + 40);
  v8 = sub_7A640(a1, 2, 2u);
  v9 = *v4;
  if ( v8 )
  {
    v10 = 0;
    if ( (unsigned __int8)v9 <= 0xEu )
    {
      v11 = 16498;
      if ( _bittest64(&v11, v9) )
      {
        a1 = a2;
        v10 = sub_7CD20((_QWORD *)a2);
        v9 = *v4;
      }
    }
    *((_WORD *)v4 + 1) = v10;
  }
  switch ( v9 )
  {
    case 0uLL:
      goto LABEL_12;
    case 1uLL:
      v17 = sub_7CD20((_QWORD *)a2);
      *((_DWORD *)v4 + 2) = v17;
      a1 = *(_QWORD *)(a2 + 24);
      if ( !a1 )
        goto LABEL_12;
      v31 = 121;
      if ( *(_DWORD *)(a2 + 48) > 0xAu )
        v31 = 122;
      v32 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 376LL);
      if ( v32 != sub_7A3C0 )
        v17 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v32)(a1, v17, v31);
LABEL_20:
      *((_DWORD *)v4 + 2) = v17;
      v13 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 2uLL:
      v24 = (__m128i)(unsigned __int64)sub_7CD40(a2);
      goto LABEL_33;
    case 3uLL:
      a1 = 24;
      v36 = j__qalloc_or_throw(24);
      v37 = 0;
      v38 = *((_DWORD *)v4 + 1);
      if ( !*(_BYTE *)(a2 + 52) )
        v37 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v36 = v37;
      *(_QWORD *)(v36 + 8) = 0;
      *(_DWORD *)(v36 + 16) = v38;
      *((_QWORD *)v4 + 1) = v36;
      *v4 = 9;
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1504LL) + 80LL);
      *((_DWORD *)v4 + 1) = v13;
      goto LABEL_13;
    case 4uLL:
      v12 = (_QWORD *)j__qalloc_or_throw(80);
      v12[4] = 0xFFFFFFFF00000000LL;
      v12[5] = 0;
      v12[6] = 0xFFFFFFFF00000000LL;
      v12[7] = 0;
      v12[8] = 0xFFFFFFFF00000000LL;
      v12[9] = 0;
      sub_330970(v12, -1);
      *((_QWORD *)v4 + 1) = v12;
      a1 = (__int64)v12;
      if ( (unsigned __int8)sub_883D0(v12, a2) )
        goto LABEL_12;
      return 0;
    case 5uLL:
      a1 = a2;
      v33 = (_QWORD *)j__qalloc_or_throw(16);
      v34 = sub_7D020(a2, 0);
      v35 = 0;
      if ( !*(_BYTE *)(a2 + 52) )
        v35 = *(_QWORD *)(a2 + 16);
      *v33 = v35;
      v33[1] = v34;
      v13 = *((_DWORD *)v4 + 1);
      *((_QWORD *)v4 + 1) = v33;
      goto LABEL_13;
    case 6uLL:
      a1 = a2;
      *((_QWORD *)v4 + 1) = sub_7CFC0(a2, 0);
      v13 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 7uLL:
      a1 = a2;
      v17 = sub_7CD20((_QWORD *)a2);
      goto LABEL_20;
    case 8uLL:
      v18 = j__qalloc_or_throw(312);
      *(_QWORD *)v18 = -1;
      a1 = v18;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 48) = 0;
      *(_QWORD *)(v18 + 72) = 0;
      *(_QWORD *)(v18 + 80) = 0;
      *(_QWORD *)(v18 + 88) = 0;
      *(_QWORD *)(v18 + 96) = 0;
      *(_QWORD *)(v18 + 104) = 0;
      *(_QWORD *)(v18 + 112) = 0;
      *(_QWORD *)(v18 + 136) = 0;
      *(_QWORD *)(v18 + 144) = 0;
      *(_QWORD *)(v18 + 152) = 0;
      *(_QWORD *)(v18 + 176) = 0;
      *(_QWORD *)(v18 + 184) = 0;
      *(_QWORD *)(v18 + 192) = 0;
      *(_QWORD *)(v18 + 216) = 0;
      *(_QWORD *)(v18 + 240) = 0;
      *(_QWORD *)(v18 + 248) = 0;
      *(_QWORD *)(v18 + 256) = 0;
      *(_QWORD *)(v18 + 280) = 0;
      *(_QWORD *)(v18 + 288) = 0;
      *(_OWORD *)(v18 + 32) = 0;
      *(_OWORD *)(v18 + 56) = 0;
      *(_OWORD *)(v18 + 120) = 0;
      *(_OWORD *)(v18 + 160) = 0;
      *(_OWORD *)(v18 + 200) = 0;
      *(_OWORD *)(v18 + 224) = 0;
      *(_OWORD *)(v18 + 264) = 0;
      *(_OWORD *)(v18 + 296) = 0;
      *((_QWORD *)v4 + 1) = v18;
      if ( !(unsigned __int8)sub_871F0(v18, a2) )
        return 0;
      goto LABEL_12;
    case 9uLL:
      v19 = j__qalloc_or_throw(24);
      v20 = 0;
      if ( !*(_BYTE *)(a2 + 52) )
        v20 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v19 = v20;
      a1 = a2;
      *(_QWORD *)(v19 + 8) = 0;
      *(_DWORD *)(v19 + 16) = -1;
      *((_QWORD *)v4 + 1) = v19;
      v21 = sub_7CD00((unsigned __int8 **)a2);
      if ( v21 < 0 )
      {
        a1 = a2;
        *(_DWORD *)(v19 + 16) = sub_7CD20((_QWORD *)a2);
        *(_QWORD *)(v19 + 8) = sub_7D020(a2, 0);
      }
      else
      {
        *(_QWORD *)(v19 + 8) = 0;
        *(_DWORD *)(v19 + 16) = (unsigned __int8)v21;
      }
      v13 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 0xAuLL:
      a1 = j__qalloc_or_throw(24);
      *(_QWORD *)a1 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = -1;
      *((_QWORD *)v4 + 1) = a1;
      if ( (unsigned __int8)sub_88370(a1, a2) )
        goto LABEL_12;
      return 0;
    case 0xBuLL:
      sub_7D150((__int64)&v49, (_QWORD *)a2);
      v27 = v50;
      a1 = v49;
      if ( v50 < v51 && v50 && v49 )
        goto LABEL_58;
      goto LABEL_35;
    case 0xCuLL:
      v22 = j__qalloc_or_throw(48);
      *(_QWORD *)v22 = 0;
      a1 = v22;
      *(_QWORD *)(v22 + 24) = 0;
      *(_OWORD *)(v22 + 8) = 0;
      *(_OWORD *)(v22 + 32) = 0;
      *((_QWORD *)v4 + 1) = v22;
      if ( (unsigned __int8)sub_82040((__int64 *)v22, a2) )
        goto LABEL_12;
      return 0;
    case 0xDuLL:
      v23 = *((int *)v4 + 1);
      *v4 = 2;
      v24 = (__m128i)v23;
      *((_DWORD *)v4 + 1) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1504LL) + 80LL);
LABEL_33:
      v47 = _mm_unpacklo_epi64(v24, v24);
      v25 = j__qalloc_or_throw(32);
      v26 = _mm_load_si128(&v47);
      *(_QWORD *)v25 = -1;
      a1 = v25;
      *(_DWORD *)(v25 + 8) = 0;
      *(__m128i *)(v25 + 16) = v26;
      *((_QWORD *)v4 + 1) = v25;
      sub_7E8E0(v25, (__int64 *)a2);
      v13 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 0xEuLL:
      v30 = (_QWORD *)j__qalloc_or_throw(32);
      *v30 = 0xFFFFFFFF00000000LL;
      v30[1] = 0;
      v30[2] = 0xFFFFFFFF00000000LL;
      v30[3] = 0;
      *((_QWORD *)v4 + 1) = v30;
      if ( !(unsigned __int8)sub_87990(v30, a2) )
        return 0;
      a1 = *((_QWORD *)v4 + 1) + 16LL;
      if ( (unsigned __int8)sub_87990(a1, a2) )
        goto LABEL_12;
      return 0;
    case 0xFuLL:
      v28 = sub_7CD00((unsigned __int8 **)a2);
      if ( v28 == 3 )
      {
        *v4 = 15;
        v48 = 0;
        if ( (unsigned __int8)sub_7CD00((unsigned __int8 **)a2) )
        {
          sub_7D2C0((unsigned __int8 **)a2, (__int64)&v48, -1);
          sub_7D150((__int64)&v49, (_QWORD *)a2);
          v39 = v49;
          v40 = v50;
          v41 = v51;
        }
        else
        {
          v41 = 0;
          v40 = 0;
          v39 = 0;
        }
        v42 = qalloc_or_throw(56);
        v43 = 0;
        if ( !*(_BYTE *)(a2 + 52) )
          v43 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)v42 = 0;
        *(_QWORD *)(v42 + 16) = v43;
        v44 = v48;
        *(_QWORD *)(v42 + 8) = 0;
        *(_QWORD *)(v42 + 24) = v39;
        *(_QWORD *)(v42 + 32) = v40;
        *(_QWORD *)(v42 + 40) = v41;
        *(_QWORD *)(v42 + 48) = v44;
        *((_QWORD *)v4 + 1) = v42;
        v48 = 0;
        sub_7D680(a2, v42);
        a1 = (__int64)&v48;
        clear_tinfo_t(&v48);
LABEL_12:
        v13 = *((_DWORD *)v4 + 1);
        goto LABEL_13;
      }
      if ( v28 > 3u )
      {
        if ( v28 != 4 )
          goto LABEL_76;
        *v4 = 2;
        v45 = (__m128i *)j__qalloc_or_throw(32);
        v46 = sub_7CD40(a2);
        v45->m128i_i64[0] = -1;
        v45->m128i_i32[2] = 0;
        v45[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v46, (__m128i)(unsigned __int64)v46);
        *((_QWORD *)v4 + 1) = v45;
        *(_QWORD *)(*((_QWORD *)v4 + 1) + 24LL) = sub_7CD40(a2);
        a1 = *((_QWORD *)v4 + 1);
        sub_7E8E0(a1, (__int64 *)a2);
        v13 = *((_DWORD *)v4 + 1);
      }
      else
      {
        if ( v28 != 1 )
        {
          if ( v28 == 2 )
          {
            *v4 = 13;
            v29 = j__qalloc_or_throw(20);
            a1 = a2;
            *((_QWORD *)v4 + 1) = v29;
            sub_7D460(a2, v29);
            v13 = *((_DWORD *)v4 + 1);
            goto LABEL_13;
          }
LABEL_76:
          if ( !under_debugger )
            sub_383060(50589);
LABEL_78:
          BUG();
        }
        sub_7D150((__int64)&v49, (_QWORD *)a2);
        *v4 = 3;
        v27 = v50;
        a1 = v49;
        if ( v50 < v51 && v49 && v50 )
        {
LABEL_58:
          a1 = qrealloc(a1, v27);
          if ( !a1 )
            a1 = v49;
        }
LABEL_35:
        *((_QWORD *)v4 + 1) = a1;
        v13 = *((_DWORD *)v4 + 1);
      }
LABEL_13:
      if ( v13 == 15 && *(_DWORD *)(a2 + 48) <= 0xBu )
        *((_DWORD *)v4 + 1) = -1;
      v14 = *(unsigned __int8 **)a2;
      if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      {
        v15 = *v14;
        *(_QWORD *)a2 = v14 + 1;
        v4[1] = v15;
        return 1;
      }
LABEL_73:
      sub_7A4F0(a1);
    default:
      *v4 = 0;
      if ( !under_debugger )
        sub_383060(50588);
      goto LABEL_78;
  }
}
