__int64 __fastcall sub_87990(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  unsigned __int8 v3; // al
  unsigned __int8 *v4; // rbp
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int16 v12; // ax
  _QWORD *v13; // r12
  int v14; // eax
  unsigned __int8 *v15; // rax
  unsigned __int8 v16; // dl
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  __m128i v27; // xmm0
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // esi
  __int64 (__fastcall *v34)(__int64, unsigned int); // rcx
  _QWORD *v35; // r12
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r13
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __m128i *v49; // r12
  __int64 v50; // rax
  __m128i v51; // [rsp+0h] [rbp-78h] BYREF
  __int64 v52; // [rsp+18h] [rbp-60h] BYREF
  __int64 v53; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+28h] [rbp-50h]
  unsigned __int64 v55; // [rsp+30h] [rbp-48h]
  unsigned __int64 v56; // [rsp+38h] [rbp-40h]

  v56 = __readfsqword(0x28u);
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
  v8 = 2;
  v9 = sub_7A640(a1, 2, 2u);
  v11 = *v4;
  if ( v9 )
  {
    v12 = 0;
    if ( (unsigned __int8)v11 <= 0xEu )
    {
      v10 = 16498;
      if ( _bittest64(&v10, v11) )
      {
        a1 = a2;
        v12 = sub_7CD20((_QWORD *)a2);
        v11 = *v4;
      }
    }
    *((_WORD *)v4 + 1) = v12;
  }
  switch ( v11 )
  {
    case 0uLL:
      goto LABEL_12;
    case 1uLL:
      v18 = sub_7CD20((_QWORD *)a2);
      *((_DWORD *)v4 + 2) = v18;
      a1 = *(_QWORD *)(a2 + 24);
      if ( !a1 )
        goto LABEL_12;
      v33 = 121;
      if ( *(_DWORD *)(a2 + 48) > 0xAu )
        v33 = 122;
      v34 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 376LL);
      if ( v34 != sub_7A3C0 )
        v18 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v34)(a1, v18, v33);
LABEL_20:
      *((_DWORD *)v4 + 2) = v18;
      v14 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 2uLL:
      v25 = (__m128i)(unsigned __int64)sub_7CD40(a2);
      goto LABEL_33;
    case 3uLL:
      a1 = 24;
      v38 = j__qalloc_or_throw(24, 2, v11, v10);
      v39 = 0;
      v40 = *((_DWORD *)v4 + 1);
      if ( !*(_BYTE *)(a2 + 52) )
        v39 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v38 = v39;
      *(_QWORD *)(v38 + 8) = 0;
      *(_DWORD *)(v38 + 16) = v40;
      *((_QWORD *)v4 + 1) = v38;
      *v4 = 9;
      v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1504LL) + 80LL);
      *((_DWORD *)v4 + 1) = v14;
      goto LABEL_13;
    case 4uLL:
      v13 = (_QWORD *)j__qalloc_or_throw(80, 2, v11, v10);
      v13[4] = 0xFFFFFFFF00000000LL;
      v13[5] = 0;
      v13[6] = 0xFFFFFFFF00000000LL;
      v13[7] = 0;
      v13[8] = 0xFFFFFFFF00000000LL;
      v13[9] = 0;
      sub_330970(v13, -1);
      *((_QWORD *)v4 + 1) = v13;
      a1 = (__int64)v13;
      if ( (unsigned __int8)sub_883D0(v13, a2) )
        goto LABEL_12;
      return 0;
    case 5uLL:
      a1 = a2;
      v35 = (_QWORD *)j__qalloc_or_throw(16, 2, v11, v10);
      v36 = sub_7D020(a2, 0);
      v37 = 0;
      if ( !*(_BYTE *)(a2 + 52) )
        v37 = *(_QWORD *)(a2 + 16);
      *v35 = v37;
      v35[1] = v36;
      v14 = *((_DWORD *)v4 + 1);
      *((_QWORD *)v4 + 1) = v35;
      goto LABEL_13;
    case 6uLL:
      a1 = a2;
      *((_QWORD *)v4 + 1) = sub_7CFC0(a2, 0);
      v14 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 7uLL:
      a1 = a2;
      v18 = sub_7CD20((_QWORD *)a2);
      goto LABEL_20;
    case 8uLL:
      v19 = j__qalloc_or_throw(312, 2, v11, v10);
      *(_QWORD *)v19 = -1;
      a1 = v19;
      *(_QWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 16) = 0;
      *(_QWORD *)(v19 + 24) = 0;
      *(_QWORD *)(v19 + 48) = 0;
      *(_QWORD *)(v19 + 72) = 0;
      *(_QWORD *)(v19 + 80) = 0;
      *(_QWORD *)(v19 + 88) = 0;
      *(_QWORD *)(v19 + 96) = 0;
      *(_QWORD *)(v19 + 104) = 0;
      *(_QWORD *)(v19 + 112) = 0;
      *(_QWORD *)(v19 + 136) = 0;
      *(_QWORD *)(v19 + 144) = 0;
      *(_QWORD *)(v19 + 152) = 0;
      *(_QWORD *)(v19 + 176) = 0;
      *(_QWORD *)(v19 + 184) = 0;
      *(_QWORD *)(v19 + 192) = 0;
      *(_QWORD *)(v19 + 216) = 0;
      *(_QWORD *)(v19 + 240) = 0;
      *(_QWORD *)(v19 + 248) = 0;
      *(_QWORD *)(v19 + 256) = 0;
      *(_QWORD *)(v19 + 280) = 0;
      *(_QWORD *)(v19 + 288) = 0;
      *(_OWORD *)(v19 + 32) = 0;
      *(_OWORD *)(v19 + 56) = 0;
      *(_OWORD *)(v19 + 120) = 0;
      *(_OWORD *)(v19 + 160) = 0;
      *(_OWORD *)(v19 + 200) = 0;
      *(_OWORD *)(v19 + 224) = 0;
      *(_OWORD *)(v19 + 264) = 0;
      *(_OWORD *)(v19 + 296) = 0;
      *((_QWORD *)v4 + 1) = v19;
      if ( !(unsigned __int8)sub_871F0(v19, a2) )
        return 0;
      goto LABEL_12;
    case 9uLL:
      v20 = j__qalloc_or_throw(24, 2, v11, v10);
      v21 = 0;
      if ( !*(_BYTE *)(a2 + 52) )
        v21 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v20 = v21;
      a1 = a2;
      *(_QWORD *)(v20 + 8) = 0;
      *(_DWORD *)(v20 + 16) = -1;
      *((_QWORD *)v4 + 1) = v20;
      v22 = sub_7CD00((unsigned __int8 **)a2);
      if ( v22 < 0 )
      {
        a1 = a2;
        *(_DWORD *)(v20 + 16) = sub_7CD20((_QWORD *)a2);
        *(_QWORD *)(v20 + 8) = sub_7D020(a2, 0);
      }
      else
      {
        *(_QWORD *)(v20 + 8) = 0;
        *(_DWORD *)(v20 + 16) = (unsigned __int8)v22;
      }
      v14 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 0xAuLL:
      a1 = j__qalloc_or_throw(24, 2, v11, v10);
      *(_QWORD *)a1 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = -1;
      *((_QWORD *)v4 + 1) = a1;
      if ( (unsigned __int8)sub_88370(a1, a2) )
        goto LABEL_12;
      return 0;
    case 0xBuLL:
      sub_7D150((__int64)&v53, (_QWORD *)a2);
      a1 = v53;
      if ( v54 < v55 && v54 && v53 )
        goto LABEL_58;
      goto LABEL_35;
    case 0xCuLL:
      v23 = j__qalloc_or_throw(48, 2, v11, v10);
      *(_QWORD *)v23 = 0;
      a1 = v23;
      *(_QWORD *)(v23 + 24) = 0;
      *(_OWORD *)(v23 + 8) = 0;
      *(_OWORD *)(v23 + 32) = 0;
      *((_QWORD *)v4 + 1) = v23;
      if ( (unsigned __int8)sub_82040((__int64 *)v23, a2) )
        goto LABEL_12;
      return 0;
    case 0xDuLL:
      v24 = *((int *)v4 + 1);
      *v4 = 2;
      v25 = (__m128i)v24;
      *((_DWORD *)v4 + 1) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1504LL) + 80LL);
LABEL_33:
      v51 = _mm_unpacklo_epi64(v25, v25);
      v26 = j__qalloc_or_throw(32, 2, v11, v10);
      v27 = _mm_load_si128(&v51);
      *(_QWORD *)v26 = -1;
      a1 = v26;
      *(_DWORD *)(v26 + 8) = 0;
      *(__m128i *)(v26 + 16) = v27;
      *((_QWORD *)v4 + 1) = v26;
      sub_7E8E0(v26, (__int64 *)a2);
      v14 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 0xEuLL:
      v32 = (_QWORD *)j__qalloc_or_throw(32, 2, v11, v10);
      *v32 = 0xFFFFFFFF00000000LL;
      v32[1] = 0;
      v32[2] = 0xFFFFFFFF00000000LL;
      v32[3] = 0;
      *((_QWORD *)v4 + 1) = v32;
      if ( !(unsigned __int8)sub_87990(v32, a2) )
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
        v52 = 0;
        if ( (unsigned __int8)sub_7CD00((unsigned __int8 **)a2) )
        {
          sub_7D2C0((unsigned __int8 **)a2, (__int64)&v52, -1);
          v8 = a2;
          sub_7D150((__int64)&v53, (_QWORD *)a2);
          v43 = v53;
          v44 = v54;
          v45 = v55;
        }
        else
        {
          v45 = 0;
          v44 = 0;
          v43 = 0;
        }
        v46 = qalloc_or_throw(56, v8, v41, v42);
        v47 = 0;
        if ( !*(_BYTE *)(a2 + 52) )
          v47 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)v46 = 0;
        *(_QWORD *)(v46 + 16) = v47;
        v48 = v52;
        *(_QWORD *)(v46 + 8) = 0;
        *(_QWORD *)(v46 + 24) = v43;
        *(_QWORD *)(v46 + 32) = v44;
        *(_QWORD *)(v46 + 40) = v45;
        *(_QWORD *)(v46 + 48) = v48;
        *((_QWORD *)v4 + 1) = v46;
        v52 = 0;
        sub_7D680(a2, v46);
        a1 = (__int64)&v52;
        clear_tinfo_t();
LABEL_12:
        v14 = *((_DWORD *)v4 + 1);
        goto LABEL_13;
      }
      if ( v28 > 3u )
      {
        if ( v28 != 4 )
          goto LABEL_76;
        *v4 = 2;
        v49 = (__m128i *)j__qalloc_or_throw(32, 2, v29, v30);
        v50 = sub_7CD40(a2);
        v49->m128i_i64[0] = -1;
        v49->m128i_i32[2] = 0;
        v49[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)(unsigned __int64)v50);
        *((_QWORD *)v4 + 1) = v49;
        *(_QWORD *)(*((_QWORD *)v4 + 1) + 24LL) = sub_7CD40(a2);
        a1 = *((_QWORD *)v4 + 1);
        sub_7E8E0(a1, (__int64 *)a2);
        v14 = *((_DWORD *)v4 + 1);
      }
      else
      {
        if ( v28 != 1 )
        {
          if ( v28 == 2 )
          {
            *v4 = 13;
            v31 = j__qalloc_or_throw(20, 2, v29, v30);
            a1 = a2;
            *((_QWORD *)v4 + 1) = v31;
            sub_7D460(a2, v31);
            v14 = *((_DWORD *)v4 + 1);
            goto LABEL_13;
          }
LABEL_76:
          if ( !under_debugger )
            sub_383060(50589);
LABEL_78:
          BUG();
        }
        sub_7D150((__int64)&v53, (_QWORD *)a2);
        *v4 = 3;
        a1 = v53;
        if ( v54 < v55 && v53 && v54 )
        {
LABEL_58:
          a1 = qrealloc();
          if ( !a1 )
            a1 = v53;
        }
LABEL_35:
        *((_QWORD *)v4 + 1) = a1;
        v14 = *((_DWORD *)v4 + 1);
      }
LABEL_13:
      if ( v14 == 15 && *(_DWORD *)(a2 + 48) <= 0xBu )
        *((_DWORD *)v4 + 1) = -1;
      v15 = *(unsigned __int8 **)a2;
      if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      {
        v16 = *v15;
        *(_QWORD *)a2 = v15 + 1;
        v4[1] = v16;
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
