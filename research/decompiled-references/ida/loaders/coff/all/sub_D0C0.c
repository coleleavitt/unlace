__int64 __fastcall sub_D0C0(__int64 a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, double a6, double a7)
{
  __int64 v10; // r13
  __int64 v11; // r15
  char v12; // al
  int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // r11
  __m128i si128; // xmm0
  __int64 v19; // r10
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // rax
  char *v25; // rax
  _QWORD *v26; // rbx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r10
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 *v35; // rax
  char *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdi
  const char *v40; // rdx
  const char *v41; // rdx
  __int64 v42; // rax
  __int64 segm_base; // rax
  char v44; // al
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  const char *v49; // rdi
  __int64 *segm_by_name; // rax
  __int16 v51; // ax
  __m128i v52; // xmm0
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  void *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  bool v59; // [rsp+8h] [rbp-B0h]
  __int64 v60; // [rsp+8h] [rbp-B0h]
  __int64 v61; // [rsp+8h] [rbp-B0h]
  char v62; // [rsp+10h] [rbp-A8h]
  __int64 v63; // [rsp+10h] [rbp-A8h]
  __int64 v64; // [rsp+10h] [rbp-A8h]
  __int64 v65; // [rsp+10h] [rbp-A8h]
  _QWORD *v66; // [rsp+10h] [rbp-A8h]
  _QWORD *v67; // [rsp+10h] [rbp-A8h]
  __int64 v68; // [rsp+10h] [rbp-A8h]
  __int64 v69; // [rsp+10h] [rbp-A8h]
  __int64 v70; // [rsp+18h] [rbp-A0h]
  __int64 v71; // [rsp+18h] [rbp-A0h]
  __int64 v72; // [rsp+18h] [rbp-A0h]
  _QWORD *v73; // [rsp+18h] [rbp-A0h]
  __int64 v74; // [rsp+18h] [rbp-A0h]
  _QWORD *v75; // [rsp+18h] [rbp-A0h]
  __int64 v76; // [rsp+20h] [rbp-98h]
  __int64 v77; // [rsp+20h] [rbp-98h]
  __int64 v78; // [rsp+28h] [rbp-90h]
  const char *v79; // [rsp+30h] [rbp-88h] BYREF
  __int128 v80; // [rsp+38h] [rbp-80h]
  __int64 v81; // [rsp+50h] [rbp-68h] BYREF
  __m128i v82; // [rsp+58h] [rbp-60h]
  __int64 v83; // [rsp+68h] [rbp-50h]
  __int64 v84; // [rsp+70h] [rbp-48h]
  unsigned __int64 v85; // [rsp+78h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  if ( a5 == -1 )
  {
    if ( a4 <= 0 )
      return v85 - __readfsqword(0x28u);
    v28 = *(_QWORD **)(a1 + 141);
    if ( (unsigned __int64)a4 >= v28[1] )
      return v85 - __readfsqword(0x28u);
    v10 = *(_QWORD *)(*v28 + 32LL * a4 + 16);
    v11 = v10 + *a2;
    if ( (*(_BYTE *)(a1 + 59) & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    v10 = a5;
    v11 = a5 + *a2;
    if ( (*(_BYTE *)(a1 + 59) & 1) == 0 )
      goto LABEL_6;
    if ( a4 <= 0 )
      return v85 - __readfsqword(0x28u);
  }
  if ( *(_DWORD *)(a1 + 61) < (unsigned int)a4 )
    return v85 - __readfsqword(0x28u);
  v11 -= *(_QWORD *)(*(_QWORD *)(a1 + 85) + 76LL * (a4 - 1) + 24);
LABEL_6:
  v12 = getinf_flag(3, 32);
  v13 = *(unsigned __int16 *)(a1 + 57);
  if ( (((_WORD)v13 - 387) & 0xFFFD) != 0 )
  {
    if ( v12 )
    {
      if ( (unsigned __int16)(v13 - 320) <= 0x23u )
      {
        v14 = 0x900000001LL;
        if ( _bittest64(&v14, (unsigned int)(v13 - 320)) )
          goto LABEL_7;
        v15 = *((_DWORD *)a2 + 2);
LABEL_13:
        v16 = v15;
        if ( (((_WORD)v13 - 358) & 0xFFFD) == 0
          || (LOBYTE(v51) = *(_WORD *)(a1 + 57), HIBYTE(v51) = BYTE1(v13) & 0xFE, v51 == 614)
          || (_WORD)v13 == 1126 )
        {
          if ( *((_WORD *)a2 + 6) != 37 )
            goto LABEL_41;
        }
        else
        {
          if ( (unsigned __int16)(v13 - 496) > 2u )
            goto LABEL_47;
          if ( *((_WORD *)a2 + 6) != 18 )
            goto LABEL_41;
        }
LABEL_15:
        v17 = v16;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1E280);
        v83 = 0;
        v81 = 0x400000000LL;
        v84 = 0;
        v82 = si128;
        if ( (debug & 0x10) != 0 )
        {
          v61 = v16;
          sub_58D0(
            (__int64)"%d. %08llX %08a %2d-> sym#%u %08a\n",
            a4,
            *a2,
            *(double *)si128.m128i_i64,
            v11,
            *((unsigned __int16 *)a2 + 6),
            a7);
          v17 = v61;
        }
        v59 = 0;
        v19 = 0;
        v62 = 0;
        goto LABEL_23;
      }
    }
    else if ( (v13 & 0xFFDF) == 0x142 )
    {
      goto LABEL_7;
    }
    v15 = *((_DWORD *)a2 + 2);
    v16 = v15;
    if ( (_WORD)v13 == 1280 || (_WORD)v13 == 1360 || (unsigned __int16)(v13 + 32000) <= 2u || (_WORD)v13 == 0x8500 )
    {
      if ( v15 == -1 )
      {
        v31 = _mm_load_si128((const __m128i *)&xmmword_1E280);
        v22 = 0;
        v81 = 0x400000000LL;
        v83 = 0;
        v84 = 0;
        v82 = v31;
        if ( (debug & 0x10) == 0 )
        {
LABEL_69:
          v60 = v22;
          v42 = getseg(v22);
          v19 = v60;
          if ( v42 )
          {
            v67 = (_QWORD *)v42;
            v82.m128i_i64[1] = *(_QWORD *)(v42 + 48);
            segm_base = get_segm_base(v42);
            v19 = v60;
            v59 = 0;
            v34 = v67;
            v83 = v19 - segm_base;
            goto LABEL_71;
          }
          v62 = 0;
          v17 = v60;
          v59 = 0;
LABEL_22:
          v83 = v19;
          goto LABEL_23;
        }
        v59 = 0;
        v30 = 0;
        goto LABEL_77;
      }
      goto LABEL_41;
    }
    goto LABEL_13;
  }
LABEL_7:
  if ( !*((_BYTE *)a2 + 15) )
  {
    switch ( *((_DWORD *)a2 + 2) )
    {
      case 1:
        v49 = ".text";
        break;
      case 2:
        v49 = ".rdata";
        break;
      case 3:
        v49 = ".data";
        break;
      case 4:
        v49 = ".sdata";
        break;
      case 5:
        v49 = ".sbss";
        break;
      case 6:
        v49 = ".bss";
        break;
      case 7:
        v49 = ".init";
        break;
      case 8:
        v49 = ".lit8";
        break;
      case 9:
        v49 = ".lit4";
        break;
      case 0xA:
        v49 = ".xdata";
        break;
      case 0xB:
        v49 = ".pdata";
        break;
      case 0xC:
        v49 = ".fini";
        break;
      case 0xD:
        v49 = ".lita";
        break;
      case 0xF:
        v49 = ".rconst";
        break;
      default:
        v49 = nullptr;
        break;
    }
    segm_by_name = (__int64 *)get_segm_by_name(v49);
    if ( !segm_by_name )
    {
      if ( *((_DWORD *)a2 + 2) == 14 )
        return v85 - __readfsqword(0x28u);
      v52 = _mm_load_si128((const __m128i *)&xmmword_1E280);
      v83 = 0;
      v81 = 0x400000000LL;
      v84 = 0;
      v82 = v52;
      if ( (debug & 0x10) != 0 )
        sub_58D0(
          (__int64)"%d. %08llX %08a %2d-> sym#%u %08a\n",
          a4,
          *a2,
          *(double *)v52.m128i_i64,
          v11,
          *((unsigned __int16 *)a2 + 6),
          a7);
      goto LABEL_83;
    }
    v22 = *segm_by_name;
    v21 = _mm_load_si128((const __m128i *)&xmmword_1E280);
    v83 = 0;
    v81 = 0x400000000LL;
    v84 = 0;
    v82 = v21;
    if ( (debug & 0x10) == 0 )
    {
      if ( v22 == -1 )
      {
LABEL_83:
        v62 = 0;
        goto LABEL_61;
      }
      goto LABEL_69;
    }
    v59 = 0;
    v23 = 0;
    v62 = 0;
LABEL_60:
    v76 = v23;
    v72 = v22;
    sub_58D0(
      (__int64)"%d. %08llX %08a %2d-> sym#%u %08a\n",
      a4,
      *a2,
      *(double *)v21.m128i_i64,
      v11,
      *((unsigned __int16 *)a2 + 6),
      a7);
    if ( v72 == -1 )
      goto LABEL_61;
    v78 = v76;
    v57 = getseg(v72);
    v19 = v72;
    if ( v57 )
    {
      v77 = v72;
      v75 = (_QWORD *)v57;
      v82.m128i_i64[1] = *(_QWORD *)(v57 + 48);
      v58 = get_segm_base(v57);
      v19 = v77;
      v34 = v75;
      v17 = v78;
      v83 = v77 - v58;
      if ( v62 )
      {
LABEL_23:
        *(_DWORD *)(a3 + 24) = a4;
        *(_QWORD *)(a3 + 32) = v11;
        *(_BYTE *)(a3 + 64) = v59;
        v25 = *(char **)(a3 + 104);
        *(_QWORD *)(a3 + 40) = v19;
        *(_QWORD *)(a3 + 48) = v10;
        *(_QWORD *)(a3 + 56) = v17;
        if ( v25 )
        {
          v26 = (_QWORD *)(*(_QWORD *)(a3 + 112) + a3);
          if ( ((unsigned __int8)v25 & 1) != 0 )
            v25 = *(char **)&v25[*v26 - 1];
          ((void (__fastcall *)(_QWORD *, __int64 *, _QWORD *))v25)(v26, &v81, a2);
        }
        else
        {
          v36 = *(char **)(a3 + 72);
          v37 = *(_QWORD *)(a3 + 80);
          if ( ((unsigned __int8)v36 & 1) != 0 )
            v36 = *(char **)&v36[*(_QWORD *)(a3 + v37) - 1];
          ((void (__fastcall *)(__int64, __int64 *, _QWORD *))v36)(a3 + v37, &v81, a2);
        }
        goto LABEL_27;
      }
LABEL_71:
      if ( (*(_WORD *)(a1 + 83) & 0x3002) != 0 )
        goto LABEL_76;
      v73 = v34;
      v68 = v19;
      v44 = getinf_flag(3, 32);
      v45 = *(unsigned __int16 *)(a1 + 57);
      v19 = v68;
      v34 = v73;
      if ( (((_WORD)v45 - 387) & 0xFFFD) == 0 )
        goto LABEL_76;
      if ( v44 )
      {
        v46 = (unsigned int)(v45 - 320);
        if ( (unsigned __int16)(v45 - 320) <= 0x23u )
        {
          v47 = 0x900000001LL;
          if ( _bittest64(&v47, v46) )
          {
LABEL_76:
            v74 = v19;
            v48 = netnode_altval(*(_QWORD *)(a1 + 125), *v34, 65);
            v62 = 0;
            v19 = v74;
            v17 = v48;
            goto LABEL_23;
          }
          goto LABEL_114;
        }
      }
      else if ( (v45 & 0xFFDF) == 0x142 )
      {
        goto LABEL_76;
      }
      v54 = (unsigned int)(v45 - 472);
      if ( (unsigned __int16)(v45 - 472) > 7u )
      {
        LOWORD(v45) = v45 - 487;
        if ( (unsigned __int16)v45 <= 0x10u )
        {
          v56 = &loc_10101;
          if ( _bittest64((const __int64 *)&v56, v45) )
            goto LABEL_76;
        }
      }
      else
      {
        v55 = 161;
        if ( _bittest64(&v55, v54) )
          goto LABEL_76;
      }
LABEL_114:
      v62 = 0;
      v17 = v19;
      goto LABEL_23;
    }
    goto LABEL_123;
  }
  v16 = *((_DWORD *)a2 + 2);
LABEL_47:
  if ( (_WORD)v13 == 388 )
  {
    if ( *((_WORD *)a2 + 6) == 12 )
      goto LABEL_15;
LABEL_41:
    v64 = netnode_altval(*(_QWORD *)(a1 + 32), v16, 65) - 1;
    v29 = netnode_altval(*(_QWORD *)(a1 + 32), *((unsigned int *)a2 + 2), 115);
    v30 = v64;
    v59 = v29 != 0;
    goto LABEL_42;
  }
  if ( (unsigned __int16)(v13 - 193) > 1u && (_WORD)v13 != 147 || v16 != -1 )
    goto LABEL_41;
  v35 = (__int64 *)getseg(v11);
  if ( v35 )
  {
    v59 = 0;
    v30 = *v35;
LABEL_42:
    if ( v30 == -1 )
    {
      v20 = netnode_altval(*(_QWORD *)(a1 + 109), *((unsigned int *)a2 + 2), 65);
      v21 = _mm_load_si128((const __m128i *)&xmmword_1E280);
      v83 = 0;
      v84 = 0;
      v22 = v20 - 1;
      v81 = 0x600000000LL;
      v23 = v20 - 1;
      v82 = v21;
      if ( (debug & 0x10) == 0 )
      {
        if ( !v20 )
        {
          v62 = 1;
LABEL_61:
          if ( !sub_9740((__int16 *)(a1 + 57), (__int64)a2) )
          {
            v38 = *((unsigned int *)a2 + 2);
            v39 = *(_QWORD *)(a1 + 109);
            v80 = 0;
            v79 = nullptr;
            netnode_qsupstr(v39, &v79, v38, 83);
            v40 = (const char *)&unk_1E0EC;
            if ( (_QWORD)v80 )
              v40 = v79;
            sub_59A0((__int64)"Reference to undefined symbol #%d %s\n", *((_DWORD *)a2 + 2), v40);
            v41 = (const char *)&unk_1E0EC;
            if ( (_QWORD)v80 )
              v41 = v79;
            sub_5CC0((__int64)"Reference to undefined symbol #%d %s\n", *((_DWORD *)a2 + 2), v41);
            v83 = *((unsigned int *)a2 + 2);
            if ( v79 )
            {
              *(_QWORD *)&v80 = 0;
              qfree(v79);
            }
LABEL_27:
            if ( (v81 & 0x100000000LL) == 0 && (v81 & 0x8000u) == 0LL )
            {
              if ( v62 )
                HIDWORD(v81) |= 2u;
              set_fixup(v11, &v81);
            }
          }
          return v85 - __readfsqword(0x28u);
        }
        v70 = v20 - 1;
        v63 = v20 - 1;
        v24 = getseg(v22);
        v19 = v63;
        v17 = v70;
        if ( v24 )
        {
          v82.m128i_i64[1] = *(_QWORD *)(v24 + 48);
          v53 = get_segm_base(v24);
          v19 = v63;
          v17 = v70;
          v62 = 1;
          v83 = v19 - v53;
          goto LABEL_23;
        }
        v62 = 1;
        goto LABEL_22;
      }
      v62 = 1;
      goto LABEL_60;
    }
    v31 = _mm_load_si128((const __m128i *)&xmmword_1E280);
    v83 = 0;
    v81 = 0x400000000LL;
    v84 = 0;
    v82 = v31;
    if ( (debug & 0x10) == 0 )
    {
LABEL_44:
      v65 = v30;
      v32 = getseg(v30);
      v19 = v65;
      if ( v32 )
      {
        v71 = v65;
        v66 = (_QWORD *)v32;
        v82.m128i_i64[1] = *(_QWORD *)(v32 + 48);
        v33 = get_segm_base(v32);
        v19 = v71;
        v34 = v66;
        v83 = v71 - v33;
        goto LABEL_71;
      }
      v62 = 0;
LABEL_123:
      v17 = v19;
      goto LABEL_22;
    }
LABEL_77:
    v69 = v30;
    sub_58D0(
      (__int64)"%d. %08llX %08a %2d-> sym#%u %08a\n",
      a4,
      *a2,
      *(double *)v31.m128i_i64,
      v11,
      *((unsigned __int16 *)a2 + 6),
      a7);
    v30 = v69;
    goto LABEL_44;
  }
  return sub_5A70((__int64)"%a: relocation for address out of program bounds", a6);
}

