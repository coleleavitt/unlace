void __fastcall sub_16C1900(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // rax
  unsigned __int8 v8; // al
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned int *v15; // rax
  unsigned __int64 v16; // r14
  unsigned int *v17; // r12
  __int64 *v18; // r13
  unsigned __int64 v19; // rdx
  unsigned int v20; // eax
  const __m128i *v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __m128i *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  unsigned int *v30; // rax
  unsigned __int64 v31; // r14
  unsigned int *v32; // r12
  __int64 *v33; // r13
  unsigned __int64 v34; // rdx
  unsigned int v35; // eax
  const __m128i *v36; // r15
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __m128i *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r13
  char v45; // dl
  int v46; // r12d
  __int64 v47; // r15
  int v48; // r14d
  unsigned int *v49; // rax
  unsigned __int64 v50; // r10
  __int64 v51; // r15
  unsigned int *v52; // r13
  char *v53; // r9
  unsigned int *v54; // r12
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r13
  char v60; // dl
  int v61; // r12d
  __int64 v62; // r15
  int v63; // r14d
  unsigned int *v64; // rax
  unsigned __int64 v65; // r10
  __int64 v66; // r15
  unsigned int *v67; // r13
  char *v68; // r9
  unsigned int *v69; // r12
  __int64 v70; // r12
  int v71; // eax
  int v72; // r15d
  unsigned int v73; // r13d
  __int64 v74; // rax
  __int64 v75; // r8
  __int64 v76; // r9
  _DWORD *v77; // rdi
  char v78; // cl
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // r12
  int v83; // eax
  int v84; // r15d
  unsigned int v85; // r13d
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // r9
  _DWORD *v89; // rdi
  char v90; // cl
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rsi
  _QWORD *v95; // r12
  __int64 i; // rbx
  _QWORD *v97; // rax
  __int64 v98; // rsi
  __int64 *v99; // r13
  unsigned __int64 v100; // rdx
  int v101; // eax
  const __m128i *v102; // r15
  __int64 v103; // rax
  unsigned __int64 v104; // rdx
  __m128i *v105; // rax
  __int64 *v106; // r13
  unsigned __int64 v107; // rdx
  int v108; // eax
  const __m128i *v109; // r15
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  __m128i *v112; // rax
  __int64 *v113; // rsi
  __int64 *v114; // rsi
  unsigned int v115; // ecx
  __int64 *v116; // rsi
  __int64 *v117; // rsi
  __int64 v118; // [rsp+0h] [rbp-F8h]
  __int64 v119; // [rsp+0h] [rbp-F8h]
  __int64 v120; // [rsp+0h] [rbp-F8h]
  __int64 v121; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v122; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v123; // [rsp+8h] [rbp-F0h]
  int v124; // [rsp+14h] [rbp-E4h] BYREF
  unsigned __int64 v125; // [rsp+18h] [rbp-E0h] BYREF
  __m128i si128; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD *v127; // [rsp+30h] [rbp-C8h]
  __m128 v128; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v129; // [rsp+50h] [rbp-A8h]
  _BYTE v130[96]; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v131; // [rsp+B8h] [rbp-40h]

  while ( 2 )
  {
    v4 = *(_WORD *)a2 & 0x1FF;
    if ( v4 > 0x75u )
    {
      if ( v4 <= 0x77u )
      {
        switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
        {
          case 0:
            v94 = *(_QWORD *)(a2 + 16);
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 1LL) & 0x40) != 0 )
              goto LABEL_79;
            goto LABEL_113;
          case 1:
            v94 = *(_QWORD *)(a2 + 16);
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 1LL) & 0x40) != 0 )
              goto LABEL_79;
            goto LABEL_113;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
            goto LABEL_110;
          case 7:
            v94 = *(_QWORD *)(a2 + 16);
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 1LL) & 0x40) != 0 )
              goto LABEL_79;
            goto LABEL_113;
          case 8:
            v94 = *(_QWORD *)(a2 + 16);
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 1LL) & 0x40) != 0 )
            {
LABEL_79:
              sub_16C30B0(a1, v94, *(_QWORD *)(a2 + 24));
            }
            else
            {
LABEL_113:
              sub_16C1900(a1, v94);
              sub_16C1900(a1, *(_QWORD *)(a2 + 24));
            }
            return;
          case 0x13:
            sub_16B5CB0(a1 + 16, *(_DWORD *)(a1 + 1096) & 0x7FFFFFFF);
            v70 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
            sub_16B5CB0(a1 + 16, *(_DWORD *)(a1 + 1096) & 0x7FFFFFFF);
            v71 = *(_DWORD *)(a1 + 24);
            si128.m128i_i64[0] = a1;
            v72 = *(_DWORD *)(a1 + 1096);
            *(_DWORD *)(a1 + 1096) = v70;
            v73 = v71 - 1;
            v74 = *(_QWORD *)(a1 + 1120);
            LOBYTE(v127) = 1;
            v128.m128_u64[0] = a1;
            si128.m128i_i64[1] = v74;
            *(_QWORD *)(a1 + 1120) = &si128;
            v128.m128_u64[1] = (unsigned __int64)v130;
            v129 = 0x400000000LL;
            v131 = *(_QWORD *)(a1 + 1104);
            *(_QWORD *)(a1 + 1104) = &v128.m128_u64[1];
            sub_16C1900(a1, *(_QWORD *)(a2 + 16));
            sub_16BB4C0((__int64 *)&v128);
            v128.m128_i8[0] = 0;
            if ( !(_BYTE)v127 )
              goto LABEL_58;
            v77 = *(_DWORD **)(a2 + 16);
            if ( (*v77 & 0x20000) != 0 )
              goto LABEL_58;
            v78 = 1;
            v79 = *(_QWORD *)(si128.m128i_i64[0] + 8);
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v79 + 4616) + 640LL * *(unsigned int *)(v79 + 4624) - 640) - 4) > 1 )
              v78 = *(_BYTE *)(v79 + 2440);
            LOBYTE(v127) = sub_C3D850((__int64)v77, &v128, *(_QWORD *)(v79 + 248), v78, v75, v76);
            if ( !(_BYTE)v127 || v128.m128_i8[0] )
            {
LABEL_58:
              *(_DWORD *)(a1 + 1096) = v73;
              sub_16C1900(a1, *(_QWORD *)(a2 + 24));
            }
            v80 = *(_QWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 1096) = v72;
            *(_BYTE *)(v80 + 4 * v70 + 3) |= 0x80u;
            *(_BYTE *)(v80 + 4LL * v73 + 3) |= 0x80u;
            v81 = si128.m128i_i64[1];
            *(_QWORD *)(si128.m128i_i64[0] + 1120) = si128.m128i_i64[1];
            if ( v81 )
              *(_BYTE *)(v81 + 16) &= (unsigned __int8)v127;
            return;
          case 0x14:
            sub_16B5CB0(a1 + 16, *(_DWORD *)(a1 + 1096) & 0x7FFFFFFF);
            v82 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
            sub_16B5CB0(a1 + 16, *(_DWORD *)(a1 + 1096) & 0x7FFFFFFF);
            v83 = *(_DWORD *)(a1 + 24);
            si128.m128i_i64[0] = a1;
            v84 = *(_DWORD *)(a1 + 1096);
            *(_DWORD *)(a1 + 1096) = v82;
            v85 = v83 - 1;
            v86 = *(_QWORD *)(a1 + 1120);
            LOBYTE(v127) = 1;
            v128.m128_u64[0] = a1;
            si128.m128i_i64[1] = v86;
            *(_QWORD *)(a1 + 1120) = &si128;
            v128.m128_u64[1] = (unsigned __int64)v130;
            v129 = 0x400000000LL;
            v131 = *(_QWORD *)(a1 + 1104);
            *(_QWORD *)(a1 + 1104) = &v128.m128_u64[1];
            sub_16C1900(a1, *(_QWORD *)(a2 + 16));
            sub_16BB4C0((__int64 *)&v128);
            v128.m128_i8[0] = 0;
            if ( !(_BYTE)v127 )
              goto LABEL_67;
            v89 = *(_DWORD **)(a2 + 16);
            if ( (*v89 & 0x20000) != 0 )
              goto LABEL_67;
            v90 = 1;
            v91 = *(_QWORD *)(si128.m128i_i64[0] + 8);
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v91 + 4616) + 640LL * *(unsigned int *)(v91 + 4624) - 640) - 4) > 1 )
              v90 = *(_BYTE *)(v91 + 2440);
            LOBYTE(v127) = sub_C3D850((__int64)v89, &v128, *(_QWORD *)(v91 + 248), v90, v87, v88);
            if ( !(_BYTE)v127 || !v128.m128_i8[0] )
            {
LABEL_67:
              *(_DWORD *)(a1 + 1096) = v85;
              sub_16C1900(a1, *(_QWORD *)(a2 + 24));
            }
            v92 = *(_QWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 1096) = v84;
            *(_BYTE *)(v92 + 4 * v82 + 3) |= 0x80u;
            *(_BYTE *)(v92 + 4LL * v85 + 3) |= 0x80u;
            v93 = si128.m128i_i64[1];
            *(_QWORD *)(si128.m128i_i64[0] + 1120) = si128.m128i_i64[1];
            if ( v93 )
              *(_BYTE *)(v93 + 16) &= (unsigned __int8)v127;
            return;
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
LABEL_70:
            sub_16C3210(a1, a2);
            return;
          case 0x20:
            sub_16C30B0(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
            return;
          default:
            goto LABEL_6;
        }
      }
      goto LABEL_6;
    }
    if ( v4 != 4 )
    {
LABEL_6:
      switch ( v4 )
      {
        case 0u:
        case 1u:
        case 2u:
        case 5u:
        case 0x1Bu:
        case 0x41u:
        case 0x47u:
        case 0x5Eu:
        case 0x69u:
        case 0x75u:
          return;
        case 3u:
        case 4u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
        case 0x19u:
        case 0x1Au:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x23u:
        case 0x24u:
        case 0x25u:
        case 0x26u:
        case 0x27u:
        case 0x28u:
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
        case 0x2Cu:
        case 0x2Du:
        case 0x2Fu:
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x34u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
        case 0x3Du:
        case 0x3Eu:
        case 0x3Fu:
        case 0x40u:
        case 0x42u:
        case 0x43u:
        case 0x45u:
        case 0x46u:
        case 0x4Au:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Eu:
        case 0x5Fu:
        case 0x61u:
        case 0x62u:
        case 0x63u:
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x68u:
        case 0x6Au:
        case 0x6Bu:
        case 0x6Cu:
        case 0x6Du:
        case 0x6Eu:
        case 0x6Fu:
        case 0x70u:
        case 0x73u:
        case 0x74u:
        case 0x76u:
          goto LABEL_110;
        case 0x2Eu:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        case 0x33u:
          v95 = (_QWORD *)(a2 + 32);
          for ( i = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32; (_QWORD *)i != v95; ++v95 )
          {
            if ( *v95 )
              sub_16C1900(a1, *v95);
          }
          return;
        case 0x35u:
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 1LL) & 0x10) == 0 )
            goto LABEL_110;
          sub_16C3A60(
            a1,
            *(_QWORD *)(a2 + 16),
            (unsigned int)((__int64)(*(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16)) >> 3));
          return;
        case 0x39u:
          if ( (*(_DWORD *)(a2 + 16) & 0x3FFF8000) != 0x3FFF8000 )
            sub_16C1900(
              a1,
              *(_QWORD *)(a2
                        + 8LL
                        * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                        + 32));
          return;
        case 0x44u:
          sub_EE9E50(&v128, a2);
          si128 = _mm_load_si128((const __m128i *)&v128);
          v127 = (_QWORD *)v129;
          if ( (si128.m128i_i8[8] & 3) != 0 )
            v97 = (_QWORD *)sub_EF2B30((__int64)&si128);
          else
            v97 = (_QWORD *)si128.m128i_i64[0];
          sub_16C1900(a1, *v97);
          return;
        case 0x48u:
        case 0x49u:
          sub_16C3C70(a1, a2);
          return;
        case 0x4Du:
          if ( (**(_DWORD **)(a2 + 16) & 0x20000) == 0 )
          {
            if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
              v98 = *(_QWORD *)(a2 + 24);
            else
              v98 = *(_QWORD *)(a2 + 32);
            sub_16C1900(a1, v98);
          }
          return;
        case 0x4Fu:
        case 0x50u:
        case 0x51u:
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
          sub_16C0D20(a1, a2);
          return;
        case 0x59u:
        case 0x5Au:
        case 0x5Cu:
        case 0x5Du:
          sub_16BBCC0((__int64 *)a1, a2);
          return;
        case 0x5Bu:
          v5 = *(_QWORD *)(a1 + 8);
          v125 = a2;
          if ( (*(_BYTE *)(*(_QWORD *)(v5 + 232) + 1LL) & 0x40) == 0 )
            goto LABEL_115;
          v6 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
          if ( *(_DWORD *)(a2 + 16) != 2 )
          {
            if ( v6 != 42 )
            {
LABEL_115:
              sub_16BBCC0((__int64 *)a1, a2);
              return;
            }
            LODWORD(v7) = 0x8000000;
LABEL_11:
            if ( (v7 & 0x8000000) != 0 )
            {
              v124 = 3;
              goto LABEL_13;
            }
LABEL_120:
            v124 = 0;
            sub_16BBCC0((__int64 *)a1, a2);
            return;
          }
          v115 = v6 - 15;
          if ( v115 > 0x1C )
            goto LABEL_120;
          v7 = 1LL << v115;
          if ( ((1LL << v115) & 0x13301800) != 0 )
          {
            v124 = 1;
          }
          else
          {
            if ( (v7 & 0x67F9) == 0 )
              goto LABEL_11;
            v124 = 2;
          }
LABEL_13:
          v128.m128_u64[0] = a1;
          si128.m128i_i64[1] = a1;
          v128.m128_u64[1] = (unsigned __int64)v130;
          v129 = 0x400000000LL;
          v131 = *(_QWORD *)(a1 + 1104);
          *(_QWORD *)(a1 + 1104) = &v128.m128_u64[1];
          si128.m128i_i64[0] = (__int64)&v124;
          v127 = &v125;
          v8 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
          if ( ((v8 + 27) & 0x3Fu) <= 1 || (unsigned int)v8 - 5 > 0x23 )
            v9 = *(_DWORD *)(a2 + 24);
          else
            v9 = *(_DWORD *)(a2 + 20);
          sub_15F0FC0(v5, v9, (__int64 (__fastcall *)(__int64))sub_16C3F70, (__int64)&si128);
          sub_16BB4C0((__int64 *)&v128);
          return;
        case 0x60u:
          if ( sub_C960B0(a2) )
            sub_16C1900(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          return;
        case 0x67u:
          sub_16C3A60(a1, a2 + 48, *(unsigned int *)(a2 + 16));
          return;
        case 0x71u:
        case 0x72u:
          sub_16C3BE0(a1, a2);
          return;
        case 0x77u:
          goto LABEL_70;
        default:
          goto LABEL_6;
      }
    }
    break;
  }
  switch ( *(_BYTE *)(a2 + 2) >> 3 )
  {
    case 0:
      v10 = sub_16B5F60(a1, *(_QWORD *)(a2 + 16), 1);
      v14 = v10;
      if ( !v10 )
        goto LABEL_110;
      sub_16BFA80(a1, v10, a2, v11, v12, v13);
      sub_16C1900(a1, *(_QWORD *)(a2 + 16));
      si128.m128i_i64[0] = v14;
      v15 = sub_16BC3E0((unsigned int *)(a1 + 64), si128.m128i_i64);
      v16 = si128.m128i_i64[0];
      v17 = v15;
      if ( !*((_BYTE *)v15 + 48) )
      {
        sub_16BF690(a1, si128.m128i_i64[0], (__int64)v15, a2, 1);
        v16 = si128.m128i_i64[0];
      }
      if ( !*((_QWORD *)v17 + 4) || !(unsigned __int8)sub_16BB1E0((__int64 *)(a1 + 16), *(_DWORD *)(a1 + 1096), v17[10]) )
      {
        v18 = *(__int64 **)(a1 + 1104);
        if ( v18 )
        {
          v19 = *((_QWORD *)v17 + 4);
          v20 = v17[10];
          v128.m128_u64[0] = v16;
          v21 = (const __m128i *)&v128;
          v128.m128_u64[1] = v19;
          LODWORD(v129) = v20;
          v22 = *((unsigned int *)v18 + 2);
          v23 = v22 + 1;
          v24 = (__m128i *)(*v18 + 24 * v22);
          if ( v23 > *((unsigned int *)v18 + 3) )
          {
            v113 = v18 + 2;
            v118 = *v18;
            if ( *v18 > (unsigned __int64)&v128 || v24 <= (__m128i *)&v128 )
            {
              sub_2237220(v18, v113, v23, 24);
              v24 = (__m128i *)(*v18 + 24LL * *((unsigned int *)v18 + 2));
            }
            else
            {
              sub_2237220(v18, v113, v23, 24);
              v21 = (const __m128i *)((char *)&v128 + *v18 - v118);
              v24 = (__m128i *)(24LL * *((unsigned int *)v18 + 2) + *v18);
            }
          }
          *v24 = _mm_loadu_si128(v21);
          v24[1].m128i_i64[0] = v21[1].m128i_i64[0];
          ++*((_DWORD *)v18 + 2);
        }
        *((_QWORD *)v17 + 4) = a2;
        v17[10] = *(_DWORD *)(a1 + 1096);
      }
      return;
    case 1:
      v25 = sub_16B5F60(a1, *(_QWORD *)(a2 + 16), 1);
      v29 = v25;
      if ( !v25 )
        goto LABEL_110;
      sub_16BFA80(a1, v25, a2, v26, v27, v28);
      sub_16C1900(a1, *(_QWORD *)(a2 + 16));
      si128.m128i_i64[0] = v29;
      v30 = sub_16BC3E0((unsigned int *)(a1 + 64), si128.m128i_i64);
      v31 = si128.m128i_i64[0];
      v32 = v30;
      if ( !*((_BYTE *)v30 + 48) )
      {
        sub_16BF690(a1, si128.m128i_i64[0], (__int64)v30, a2, 1);
        v31 = si128.m128i_i64[0];
      }
      if ( !*((_QWORD *)v32 + 4) || !(unsigned __int8)sub_16BB1E0((__int64 *)(a1 + 16), *(_DWORD *)(a1 + 1096), v32[10]) )
      {
        v33 = *(__int64 **)(a1 + 1104);
        if ( v33 )
        {
          v34 = *((_QWORD *)v32 + 4);
          v35 = v32[10];
          v128.m128_u64[0] = v31;
          v36 = (const __m128i *)&v128;
          v128.m128_u64[1] = v34;
          LODWORD(v129) = v35;
          v37 = *((unsigned int *)v33 + 2);
          v38 = v37 + 1;
          v39 = (__m128i *)(*v33 + 24 * v37);
          if ( v38 > *((unsigned int *)v33 + 3) )
          {
            v114 = v33 + 2;
            v119 = *v33;
            if ( *v33 > (unsigned __int64)&v128 || v39 <= (__m128i *)&v128 )
            {
              sub_2237220(v33, v114, v38, 24);
              v39 = (__m128i *)(*v33 + 24LL * *((unsigned int *)v33 + 2));
            }
            else
            {
              sub_2237220(v33, v114, v38, 24);
              v36 = (const __m128i *)((char *)&v128 + *v33 - v119);
              v39 = (__m128i *)(24LL * *((unsigned int *)v33 + 2) + *v33);
            }
          }
          *v39 = _mm_loadu_si128(v36);
          v39[1].m128i_i64[0] = v36[1].m128i_i64[0];
          ++*((_DWORD *)v33 + 2);
        }
        *((_QWORD *)v32 + 4) = a2;
        v32[10] = *(_DWORD *)(a1 + 1096);
      }
      return;
    case 2:
      v40 = sub_16B5F60(a1, *(_QWORD *)(a2 + 16), 1);
      v44 = v40;
      if ( !v40 )
        goto LABEL_110;
      sub_16BFA80(a1, v40, a2, v41, v42, v43);
      sub_16C1900(a1, *(_QWORD *)(a2 + 16));
      v45 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 1LL);
      si128.m128i_i64[0] = v44;
      v45 &= 8u;
      v46 = 2 - (v45 != 0);
      v47 = -(__int64)(v45 == 0);
      v48 = v46;
      v49 = sub_16BC3E0((unsigned int *)(a1 + 64), si128.m128i_i64);
      v50 = si128.m128i_i64[0];
      v51 = (v47 & 0x10) + 16;
      v52 = v49;
      if ( !*((_BYTE *)v49 + 48) )
      {
        sub_16BF690(a1, si128.m128i_i64[0], (__int64)v49, a2, 1);
        v50 = si128.m128i_i64[0];
      }
      v53 = (char *)v52 + v51;
      v54 = &v52[4 * v46];
      if ( !*(_QWORD *)v54 )
        goto LABEL_42;
      v122 = v50;
      if ( !(unsigned __int8)sub_16BB1E0((__int64 *)(a1 + 16), *(_DWORD *)(a1 + 1096), *((_DWORD *)v53 + 2)) )
      {
        v53 = (char *)v52 + v51;
        v50 = v122;
LABEL_42:
        if ( v48 == 2 )
        {
          v106 = *(__int64 **)(a1 + 1104);
          if ( v106 )
          {
            v107 = *(_QWORD *)v53;
            v108 = *((_DWORD *)v53 + 2);
            v128.m128_u64[0] = v50;
            v109 = (const __m128i *)&v128;
            v128.m128_u64[1] = v107;
            LODWORD(v129) = v108;
            v110 = *((unsigned int *)v106 + 2);
            v111 = v110 + 1;
            v112 = (__m128i *)(*v106 + 24 * v110);
            if ( v111 > *((unsigned int *)v106 + 3) )
            {
              v116 = v106 + 2;
              v120 = *v106;
              if ( *v106 > (unsigned __int64)&v128 || v112 <= (__m128i *)&v128 )
              {
                sub_2237220(v106, v116, v111, 24);
                v112 = (__m128i *)(*v106 + 24LL * *((unsigned int *)v106 + 2));
              }
              else
              {
                sub_2237220(v106, v116, v111, 24);
                v109 = (const __m128i *)((char *)&v128 + *v106 - v120);
                v112 = (__m128i *)(24LL * *((unsigned int *)v106 + 2) + *v106);
              }
            }
            *v112 = _mm_loadu_si128(v109);
            v112[1].m128i_i64[0] = v109[1].m128i_i64[0];
            ++*((_DWORD *)v106 + 2);
          }
        }
        *(_QWORD *)v54 = a2;
        v54[2] = *(_DWORD *)(a1 + 1096);
      }
      break;
    case 3:
      v55 = sub_16B5F60(a1, *(_QWORD *)(a2 + 16), 1);
      v59 = v55;
      if ( !v55 )
        goto LABEL_110;
      sub_16BFA80(a1, v55, a2, v56, v57, v58);
      sub_16C1900(a1, *(_QWORD *)(a2 + 16));
      v60 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 1LL);
      si128.m128i_i64[0] = v59;
      v60 &= 8u;
      v61 = 2 - (v60 != 0);
      v62 = -(__int64)(v60 == 0);
      v63 = v61;
      v64 = sub_16BC3E0((unsigned int *)(a1 + 64), si128.m128i_i64);
      v65 = si128.m128i_i64[0];
      v66 = (v62 & 0x10) + 16;
      v67 = v64;
      if ( !*((_BYTE *)v64 + 48) )
      {
        sub_16BF690(a1, si128.m128i_i64[0], (__int64)v64, a2, 1);
        v65 = si128.m128i_i64[0];
      }
      v68 = (char *)v67 + v66;
      v69 = &v67[4 * v61];
      if ( !*(_QWORD *)v69 )
        goto LABEL_50;
      v123 = v65;
      if ( !(unsigned __int8)sub_16BB1E0((__int64 *)(a1 + 16), *(_DWORD *)(a1 + 1096), *((_DWORD *)v68 + 2)) )
      {
        v68 = (char *)v67 + v66;
        v65 = v123;
LABEL_50:
        if ( v63 == 2 )
        {
          v99 = *(__int64 **)(a1 + 1104);
          if ( v99 )
          {
            v100 = *(_QWORD *)v68;
            v101 = *((_DWORD *)v68 + 2);
            v128.m128_u64[0] = v65;
            v102 = (const __m128i *)&v128;
            v128.m128_u64[1] = v100;
            LODWORD(v129) = v101;
            v103 = *((unsigned int *)v99 + 2);
            v104 = v103 + 1;
            v105 = (__m128i *)(*v99 + 24 * v103);
            if ( v104 > *((unsigned int *)v99 + 3) )
            {
              v117 = v99 + 2;
              v121 = *v99;
              if ( *v99 > (unsigned __int64)&v128 || v105 <= (__m128i *)&v128 )
              {
                sub_2237220(v99, v117, v104, 24);
                v105 = (__m128i *)(*v99 + 24LL * *((unsigned int *)v99 + 2));
              }
              else
              {
                sub_2237220(v99, v117, v104, 24);
                v102 = (const __m128i *)((char *)&v128 + *v99 - v121);
                v105 = (__m128i *)(24LL * *((unsigned int *)v99 + 2) + *v99);
              }
            }
            *v105 = _mm_loadu_si128(v102);
            v105[1].m128i_i64[0] = v102[1].m128i_i64[0];
            ++*((_DWORD *)v99 + 2);
          }
        }
        *(_QWORD *)v69 = a2;
        v69[2] = *(_DWORD *)(a1 + 1096);
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
LABEL_110:
      sub_16C38D0(a1, a2);
      return;
    default:
      goto LABEL_6;
  }
}
