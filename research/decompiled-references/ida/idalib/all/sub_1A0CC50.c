unsigned __int64 __fastcall sub_1A0CC50(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        unsigned __int64 a4,
        _DWORD *a5,
        int a6,
        __m128 a7)
{
  __int64 v7; // r13
  __int64 v9; // rsi
  _DWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i *v17; // r15
  unsigned __int64 v18; // rax
  __int64 *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 result; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // r15
  __int64 v35; // rdx
  bool v36; // r14
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // r15
  _BOOL4 v49; // ebx
  _QWORD *v50; // r14
  unsigned __int64 v51; // rsi
  _QWORD *v52; // rcx
  unsigned __int8 v53; // dl
  __int64 v54; // r10
  unsigned __int64 *v55; // rbx
  unsigned __int64 v56; // r12
  __int64 v57; // r14
  unsigned __int8 v58; // al
  __int64 v59; // r15
  unsigned __int8 v60; // cl
  __int64 v61; // rdx
  __m128i si128; // xmm1
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rbx
  unsigned __int64 v67; // [rsp+0h] [rbp-158h] BYREF
  __int64 v68; // [rsp+8h] [rbp-150h]
  __m128i *v69; // [rsp+10h] [rbp-148h]
  __m128i *v70; // [rsp+18h] [rbp-140h]
  __int64 v71; // [rsp+20h] [rbp-138h]
  __int64 v72; // [rsp+28h] [rbp-130h]
  _DWORD *v73; // [rsp+30h] [rbp-128h]
  bool v74; // [rsp+3Bh] [rbp-11Dh]
  int v75; // [rsp+3Ch] [rbp-11Ch]
  __int64 v76; // [rsp+40h] [rbp-118h]
  __int64 v77; // [rsp+48h] [rbp-110h]
  unsigned __int64 *v78; // [rsp+50h] [rbp-108h]
  unsigned __int64 v79; // [rsp+58h] [rbp-100h] BYREF
  __m128i v80; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 v81; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v82; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v83[24]; // [rsp+88h] [rbp-D0h] BYREF
  __m128i v84; // [rsp+A0h] [rbp-B8h]
  __m128i v85; // [rsp+B0h] [rbp-A8h]
  __int64 v86; // [rsp+C0h] [rbp-98h]

  v7 = (__int64)(a5 + 48);
  v9 = 2;
  v10 = a5;
  v11 = *(_QWORD *)(a4 + 8);
  v69 = a3;
  v71 = v11;
  v79 = a4;
  v75 = a6;
  sub_1BD2860(a5 + 48, 2);
  v15 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v70 = (__m128i *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  LODWORD(v16) = 0;
  if ( (v15 & 8) != 0 )
  {
    v15 &= 0xFFFFFFFFFFFFFFF0LL;
    v16 = *(_QWORD *)(v15 + 24);
  }
  v17 = v69;
  v10[2012] = (unsigned int)v16 >> 9;
  v18 = v70->m128i_i64[0];
  v74 = v17->m128i_i8[0] != 2;
  v19 = (__int64 *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v19 + 16) == 48 )
  {
    v20 = sub_F60F10(*v19, 2, v15, v12, v13, v14);
    v9 = v17->m128i_u32[1];
    v21 = v20;
    if ( !(unsigned __int8)sub_1E63330(a1, v9, a2, 1, 0) )
    {
      v9 = (__int64)v21;
      v54 = sub_1A3D890(a1, v21);
      if ( v54 )
      {
        v72 = a2;
        v78 = &v79;
        v73 = v10;
        do
        {
          v55 = (unsigned __int64 *)(v54 & 0xFFFFFFFFFFFFFFF8LL);
          v56 = v54 & 0xFFFFFFFFFFFFFFF8LL;
          v57 = (v54 >> 2) & 1;
          if ( ((v54 >> 2) & 1) != 0 )
          {
            v56 = 0;
            if ( v55 )
              v56 = *v55;
          }
          v58 = *(_BYTE *)(v56 + 28) & 0x7F;
          if ( v58 != 81 )
          {
            if ( (unsigned int)v58 - 53 <= 1 || (v59 = v56, ((v58 + 52) & 0x7Fu) <= 1) )
            {
              v59 = sub_B72ED0(v56);
              v58 = *(_BYTE *)(v59 + 28) & 0x7F;
            }
            v60 = *(_BYTE *)(v59 + 29);
            v67 = 0;
            v82 = (v60 >> 5) & 3 | v56;
            if ( v58 == 71 )
            {
              v61 = *(_QWORD *)(v59 + 48);
              v67 = v59;
              v59 = v61;
              v58 = *(_BYTE *)(v61 + 28) & 0x7F;
            }
            if ( v58 == 38 )
            {
              v68 = v59;
              a7 = _mm_loadh_ps((const double *)&v67);
              *(__m128 *)v83 = a7;
              si128 = _mm_load_si128((const __m128i *)&v82);
              v81 = a7.m128_u64[1];
              v80 = si128;
              if ( *(char *)(v59 + 28) >= 0 )
              {
                v9 = 1;
                if ( sub_B99130(v59, 1) )
                {
                  if ( v67 )
                  {
                    v9 = v67;
                    sub_1BF2330(a1, v67, v80.m128i_i32[0], 0, (_DWORD)v78, 1, v7, 1, 0, v74, 0, 0, 0);
                  }
                  else
                  {
                    v9 = v59;
                    v76 = 0;
                    v77 = 0;
                    sub_1BF10B0(a1, v59, v80.m128i_i32[0], (_DWORD)v78, 1, v7, 1, 0, v74, 0, 0, 0, 0, 0, 0, 0);
                  }
                }
              }
            }
          }
          if ( !v57 )
            break;
          if ( !v55 )
            break;
          v54 = v55[1];
        }
        while ( v54 );
        a2 = v72;
        v10 = v73;
      }
    }
  }
  v22 = sub_EEB7E0(v79, v9, *(double *)a7.m128_u64);
  v23 = v22;
  LODWORD(v67) = v22;
  v24 = *(_QWORD *)(*(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v25 = *(_QWORD *)v24;
  if ( *(_BYTE *)(*(_QWORD *)v24 + 16LL) == 48 && !(unsigned __int8)sub_1E63330(a1, v23, v71, 1, 0) )
  {
    v46 = sub_F60F10(v25, v23, v26, v27, v28, v29);
    v48 = (_QWORD *)sub_B9F870((__int64)v46);
    if ( v47 != v48 )
    {
      v68 = (__int64)v10;
      v49 = v74;
      v50 = v47;
      do
      {
        while ( 1 )
        {
          v51 = *v48 & 0xFFFFFFFFFFFFFFF8LL;
          v52 = (_QWORD *)(*(_QWORD *)(v51 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v51 + 16) & 4) != 0 )
            v52 = (_QWORD *)*v52;
          if ( v52 )
            LODWORD(v52) = (_DWORD)v52 - 64;
          v53 = *(_BYTE *)(v51 + 28) & 0x7F;
          if ( (unsigned int)v53 - 53 <= 1 )
          {
            v51 = *(_QWORD *)(v51 + 64);
            v53 = *(_BYTE *)(v51 + 28) & 0x7F;
          }
          if ( v53 == 71 )
            break;
          sub_1BEE590(a1, v51, *v48++, (_DWORD)v52, v79, a2, v7, v49, v49, 1, 0);
          if ( v50 == v48 )
            goto LABEL_37;
        }
        sub_1BEE030(a1, v51, *v48++, (_DWORD)v52, v79, a2, v7, v49, v49, 1);
      }
      while ( v50 != v48 );
LABEL_37:
      v10 = (_DWORD *)v68;
    }
  }
  result = sub_1BF27B0(v7, a1, (unsigned int)v67, &v80);
  if ( !(_DWORD)result
    || (*v10 = 0, v10[46] = 29, v10[47] = result, (_DWORD)result == 3)
    && (result = (unsigned __int64)v69, v69->m128i_i8[0] == 2) )
  {
    v33 = v80.m128i_i64[0];
    v34 = *(_QWORD *)v80.m128i_i64[0];
    v68 = a2 & 7;
    *(_BYTE *)(v34 + 29) |= 8u;
    v35 = (unsigned int)v10[50];
    v36 = v35 + (unsigned __int64)(v10[764] & 0x3FFFFFFF) > 1;
    if ( (*(_BYTE *)(v34 + 28) & 0x7F) == 0x26 )
    {
      v63 = v70->m128i_i64[0];
      v64 = *(_QWORD *)(v70->m128i_i64[0] + 8) & 7LL;
      if ( v64 | (*(__int64 *)(v70->m128i_i64[0] + 8) >> 3) & 1 )
      {
        v63 = sub_F64F00(a2, v33, v64, v31, v32);
        v33 = v80.m128i_i64[0];
      }
      v65 = *(_QWORD *)(v33 + 8);
      v66 = (__int64)(v10 + 2);
      *(_QWORD *)v83 = v63 & 0xFFFFFFFFFFFFFFF0LL;
      LODWORD(v82) = 8;
      v83[8] = v36;
      *(_QWORD *)&v83[16] = v34;
      v84.m128i_i64[0] = v65;
      sub_1A0C040(v66, (const __m128i *)&v82);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) != 0 )
      {
        if ( (a2 >> 3) & 1 | v68 || (result = v70->m128i_i64[1] & 7, result | (v70->m128i_i64[1] >> 3) & 1) )
        {
          LODWORD(v82) = 9;
          *(_QWORD *)v83 = a2;
          return (unsigned __int64)sub_1A0C040(v66, (const __m128i *)&v82);
        }
      }
      else
      {
        LODWORD(v82) = 7;
        *(_QWORD *)v83 = a2;
        return (unsigned __int64)sub_1A0C040(v66, (const __m128i *)&v82);
      }
    }
    else
    {
      v37 = *(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v37 + 16) - 25 > 1 )
        v37 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL), v33, v35, v31);
      v38 = sub_B8C330(v34);
      v82 = *(_QWORD *)(v37 + 24);
      v67 = sub_F67970(&v82, v38);
      v39 = *(_QWORD *)(v80.m128i_i64[0] + 8);
      v83[8] = v36;
      *(_QWORD *)v83 = v67;
      v84.m128i_i64[0] = v39;
      LODWORD(v82) = 8;
      *(_QWORD *)&v83[16] = v34;
      sub_1A0C040((__int64)(v10 + 2), (const __m128i *)&v82);
      v40 = v67;
      v41 = v67 & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) == 0 )
          goto LABEL_19;
        v42 = *(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v43 = (unsigned int)*(unsigned __int8 *)(v42 + 16) - 25;
        if ( (unsigned int)v43 > 1 )
        {
          v44 = *(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v69 = (__m128i *)v67;
          v67 &= 0xFFFFFFFFFFFFFFF0LL;
          v42 = sub_F63050(v44, &v82, v40, v43);
          v40 = (__int64)v69;
          v41 = v67;
        }
        v45 = *(_QWORD *)(v42 + 24);
        v67 = v41;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1
          && (v69 = (__m128i *)v40, sub_1A0A350(v40, a2)) )
        {
          result = (unsigned __int64)v70;
          if ( (*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)(v67 + 8) | (unsigned __int8)v69) & 7) != (v70->m128i_i64[1] | v68) )
          {
            LODWORD(v82) = 9;
            *(_QWORD *)v83 = a2;
            return (unsigned __int64)sub_1A0C040((__int64)(v10 + 2), (const __m128i *)&v82);
          }
        }
        else
        {
LABEL_19:
          LODWORD(v82) = 7;
          *(_QWORD *)v83 = a2;
          return (unsigned __int64)sub_1A0C040((__int64)(v10 + 2), (const __m128i *)&v82);
        }
      }
      else
      {
        result = v80.m128i_i64[0];
        if ( (*(_DWORD *)(v80.m128i_i64[0] + 112) & 0xFF00FFFF) != 0 )
        {
          LODWORD(v82) = 6;
          *(_QWORD *)v83 = 0;
          sub_1BCD530(&v83[8]);
          if ( (v82 & 0x7FFFFFFF) == 3 )
            sub_1BD22E0(&v83[8]);
          LODWORD(v82) = v82 & 0x80000000;
          *(__m128i *)&v83[8] = _mm_loadu_si128((const __m128i *)(v80.m128i_i64[0] + 112));
          v84 = _mm_loadu_si128((const __m128i *)(v80.m128i_i64[0] + 128));
          v85 = _mm_loadu_si128((const __m128i *)(v80.m128i_i64[0] + 144));
          v86 = *(_QWORD *)(v80.m128i_i64[0] + 160);
          sub_1A0BA10((__int64)v10, (const __m128i *)&v82, a2, v75);
          result = v82 & 0x7FFFFFFF;
          if ( (_DWORD)result == 3 )
            return sub_1BD22E0(&v83[8]);
        }
      }
    }
  }
  return result;
}
