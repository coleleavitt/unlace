__int64 __fastcall sub_99EDC0(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 *v7; // r8
  __int64 *v8; // r15
  __int64 *v9; // r14
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  char v16; // al
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rcx
  _DWORD *v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r15
  unsigned int v38; // r12d
  __int64 *v39; // rbp
  __int64 v40; // r14
  unsigned __int8 *v41; // r13
  __m128i v42; // xmm0
  _BYTE *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r12
  unsigned __int64 v46; // xmm0_8
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // eax
  unsigned __int8 **v50; // rbp
  __int64 v51; // r15
  unsigned __int8 *v52; // r12
  unsigned __int8 *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdi
  int v56; // eax
  unsigned __int8 *v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // r13
  __int64 v61; // r14
  __int64 v62; // r13
  void *v63; // rdi
  __int64 v64; // rax
  unsigned __int8 *v65; // rdx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rax
  void *v71; // rdi
  __int64 v72; // rsi
  unsigned __int8 *v73; // rdx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // r13
  __int64 v77; // r14
  __int64 v78; // r13
  void *v79; // rdi
  unsigned __int64 v80; // [rsp+8h] [rbp-A0h]
  __int64 v81; // [rsp+10h] [rbp-98h]
  __int64 v82; // [rsp+18h] [rbp-90h]
  __m128i v83; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v84[24]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v85; // [rsp+48h] [rbp-60h]
  unsigned int v86; // [rsp+50h] [rbp-58h]
  int v87; // [rsp+60h] [rbp-48h]

  v6 = *((unsigned int *)a4 + 72);
  v7 = (__int64 *)a4[35];
  v80 = a1;
  LODWORD(v81) = a2;
  v8 = &v7[3 * v6];
  if ( v8 != v7 )
  {
    v9 = v7;
    v10 = 1;
    while ( 1 )
    {
      v11 = (unsigned int)(*(_DWORD *)a3 + *((_DWORD *)v9 + 2));
      sub_A1C030(v84, *(_QWORD *)(a3 + 24), v11, (unsigned int)v11);
      v12 = *v9;
      v13 = *(_QWORD *)(*v9 + 48);
      if ( *((_BYTE *)a4 + 648) )
      {
        if ( !v87 )
          break;
      }
      v15 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      v16 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v16 != 47 )
      {
LABEL_9:
        if ( v16 != 5 )
        {
          if ( (*(_BYTE *)(v12 + 68) & 1) == 0 || (v17 = *(_QWORD *)(v12 + 40), v17 > 7) || (_DWORD)v17 )
          {
            if ( (unsigned __int8)(v16 - 2) <= 2u || v16 == 6 )
            {
              if ( (unsigned __int8)(*(_BYTE *)(v15 + 16) - 2) > 4u )
                v15 = sub_B0D320(v15);
              v10 &= sub_99E300(v80, v81, (__int64)v84, v15);
            }
            else if ( !(unsigned __int8)sub_A1C2E0(v84) )
            {
              v10 = 0;
              sub_99DE30(v80, (unsigned int)v81, *v9);
            }
          }
        }
        goto LABEL_17;
      }
      if ( v87 != 1 )
      {
        if ( v87 )
        {
          if ( (unsigned int)(v87 - 2) <= 1 )
            BUG();
          v24 = *(_QWORD *)(v85 + 32);
          goto LABEL_26;
        }
        v14 = v85;
        v24 = *(_QWORD *)(v85 + 32);
        goto LABEL_63;
      }
      v24 = v85;
LABEL_26:
      v10 &= sub_99EDC0(v80, (unsigned int)v81, v84, *(_QWORD *)(v24 + 24));
LABEL_17:
      v9 += 3;
      sub_A1C0C0(v84);
      if ( v8 == v9 )
        goto LABEL_18;
    }
    v14 = v85;
    if ( v85 && *(_DWORD *)(*(_QWORD *)(v85 + 32) + 16LL) != v86 && v86 && (*(_BYTE *)(v85 + v86 + 28) & 0x10) == 0 )
      goto LABEL_17;
    v15 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v16 != 47 )
      goto LABEL_9;
    v24 = *(_QWORD *)(v85 + 32);
LABEL_63:
    if ( v86 != *(_DWORD *)(v24 + 16) && v86 )
      v24 = *(_QWORD *)(v14 + v86 + 32);
    goto LABEL_26;
  }
  v10 = 1;
LABEL_18:
  v18 = a4[1];
  v82 = v18 + 32LL * *((unsigned int *)a4 + 4);
  if ( v18 != v82 )
  {
    v19 = v18;
    v20 = 0;
    while ( 1 )
    {
      v21 = (unsigned int)(*(_DWORD *)a3 + *(_DWORD *)(v19 + 8));
      sub_A1C030(v84, *(_QWORD *)(a3 + 24), v21, (unsigned int)v21);
      if ( !(unsigned __int8)sub_A1C2E0(v84) )
        break;
      v22 = *(_QWORD *)(v19 + 24);
      ++v20;
      v19 += 32;
      v10 &= sub_99EDC0(v80, (unsigned int)v81, v84, v22);
      sub_A1C0C0(v84);
      if ( v82 == v19 )
        return v10;
    }
    v25 = *(_DWORD *)(a3 + 48);
    if ( v25 == 1 )
    {
      v26 = *(_QWORD *)(a3 + 24);
    }
    else if ( (unsigned int)(v25 - 2) <= 1 )
    {
      v26 = 0;
    }
    else
    {
      v26 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL);
    }
    v27 = *a4;
    if ( !*a4 || (*(_BYTE *)(v27 + 28) & 0x7Fu) - 57 > 2 )
    {
      v49 = sub_BEE210(v26);
      v50 = (unsigned __int8 **)sub_A2E1A0(v80, v49, 2289, 0);
      v51 = sub_BEDF70(*(_QWORD *)(v19 + 16));
      if ( v50 )
      {
        v52 = *v50;
        if ( !*v50 )
        {
          v73 = v50[1];
          v74 = *((_DWORD *)v73 + 3744);
          if ( v74 )
          {
            v75 = (unsigned int)(v74 - 1);
            *((_DWORD *)v73 + 3744) = v75;
            v52 = *(unsigned __int8 **)&v73[8 * v75 + 14848];
            v76 = *((unsigned int *)v52 + 134);
            v77 = *((_QWORD *)v52 + 66);
            *v52 = 0;
            *((_DWORD *)v52 + 106) = 0;
            v78 = v77 + (v76 << 6);
            while ( v77 != v78 )
            {
              while ( 1 )
              {
                v78 -= 64;
                v79 = *(void **)(v78 + 24);
                if ( v79 == (void *)(v78 + 40) )
                  break;
                operator delete(v79, *(_QWORD *)(v78 + 40) + 1LL);
                if ( v77 == v78 )
                  goto LABEL_96;
              }
            }
LABEL_96:
            *((_DWORD *)v52 + 134) = 0;
          }
          else
          {
            v52 = (unsigned __int8 *)operator new(0x3A0u);
            *v52 = 0;
            *((_QWORD *)v52 + 12) = v52 + 112;
            *((_QWORD *)v52 + 16) = v52 + 144;
            *((_QWORD *)v52 + 20) = v52 + 176;
            *((_QWORD *)v52 + 24) = v52 + 208;
            *((_QWORD *)v52 + 28) = v52 + 240;
            *((_QWORD *)v52 + 32) = v52 + 272;
            *((_QWORD *)v52 + 36) = v52 + 304;
            *((_QWORD *)v52 + 40) = v52 + 336;
            *((_QWORD *)v52 + 44) = v52 + 368;
            *((_QWORD *)v52 + 48) = v52 + 400;
            *((_QWORD *)v52 + 13) = 0;
            v52[112] = 0;
            *((_QWORD *)v52 + 17) = 0;
            v52[144] = 0;
            *((_QWORD *)v52 + 21) = 0;
            v52[176] = 0;
            *((_QWORD *)v52 + 25) = 0;
            v52[208] = 0;
            *((_QWORD *)v52 + 29) = 0;
            v52[240] = 0;
            *((_QWORD *)v52 + 33) = 0;
            v52[272] = 0;
            *((_QWORD *)v52 + 37) = 0;
            v52[304] = 0;
            *((_QWORD *)v52 + 41) = 0;
            v52[336] = 0;
            *((_QWORD *)v52 + 45) = 0;
            v52[368] = 0;
            *((_QWORD *)v52 + 49) = 0;
            v52[400] = 0;
            *((_QWORD *)v52 + 52) = v52 + 432;
            *((_QWORD *)v52 + 53) = 0x800000000LL;
            *((_QWORD *)v52 + 66) = v52 + 544;
            *((_QWORD *)v52 + 67) = 0x600000000LL;
          }
          *v50 = v52;
        }
        v52[*v52 + 1] = 8;
        v53 = *v50;
        v54 = **v50;
        *v53 = v54 + 1;
        *(_QWORD *)&v53[8 * v54 + 16] = v51;
      }
      goto LABEL_61;
    }
    v28 = *(_QWORD *)(v27 + 104);
    v29 = *(_QWORD *)(v28 + 96);
    v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v29 & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_53;
    }
    else
    {
      if ( v30 <= 3 || (v29 & 2) == 0 )
        goto LABEL_53;
      v31 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
      v32 = v31[2275];
      if ( !v32 )
      {
        *(_QWORD *)(v28 + 96) = v28 & 0xFFFFFFFFFFFFFFFALL | 1;
        goto LABEL_53;
      }
      v33 = v31[274];
      v31[284] += 24LL;
      v30 = (v33 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v31[275] >= v30 + 24 && v33 )
        v31[274] = v30 + 24;
      else
        v30 = sub_99DCF0((__int64)(v31 + 274), 24, 3);
      *(_QWORD *)v30 = v32;
      *(_DWORD *)(v30 + 8) = 0;
      v29 = v30 | 5;
      *(_QWORD *)(v30 + 16) = v28;
      *(_QWORD *)(v28 + 96) = v30 | 5;
      LOBYTE(v30) = v30 & 0xFA | 4;
    }
    if ( (v30 & 4) != 0 )
    {
      v34 = (_DWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v34 )
      {
        v55 = *(_QWORD *)v34;
        v56 = *(_DWORD *)(*(_QWORD *)v34 + 12LL);
        if ( v34[2] != v56 )
        {
          v34[2] = v56;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 144LL))(v55, v28);
        }
      }
    }
LABEL_53:
    v35 = *(_QWORD *)(v27 + 128);
    if ( (*(_BYTE *)(v35 + 24) & 1) != 0 )
      v36 = sub_7A2E20(v35);
    else
      v36 = *(_QWORD *)(v35 + 24);
    v37 = v36 + 24 * v20;
    v83 = _mm_unpacklo_epi64(
            _mm_loadl_epi64((const __m128i *)*(_QWORD *)(v37 + 16)),
            (__m128i)(unsigned __int64)(*(_QWORD *)(v37 + 16) + 8LL));
    v38 = sub_B1E2D0(&v83);
    v39 = (__int64 *)sub_A2E1A0(v80, v38, 2289, 0);
    v40 = sub_BEDF70(*(_QWORD *)(v19 + 16));
    if ( v39 )
    {
      v41 = (unsigned __int8 *)*v39;
      if ( !*v39 )
      {
        v65 = (unsigned __int8 *)v39[1];
        v66 = *((_DWORD *)v65 + 3744);
        if ( v66 )
        {
          v67 = (unsigned int)(v66 - 1);
          *((_DWORD *)v65 + 3744) = v67;
          v41 = *(unsigned __int8 **)&v65[8 * v67 + 14848];
          v68 = *((unsigned int *)v41 + 134);
          *v41 = 0;
          v69 = *((_QWORD *)v41 + 66);
          *((_DWORD *)v41 + 106) = 0;
          v70 = v69 + (v68 << 6);
          v81 = v69;
          while ( v81 != v70 )
          {
            v70 -= 64;
            v71 = *(void **)(v70 + 24);
            if ( v71 != (void *)(v70 + 40) )
            {
              v72 = *(_QWORD *)(v70 + 40);
              v80 = v70;
              operator delete(v71, v72 + 1);
              v70 = v80;
            }
          }
          *((_DWORD *)v41 + 134) = 0;
        }
        else
        {
          v41 = (unsigned __int8 *)operator new(0x3A0u);
          *v41 = 0;
          *((_QWORD *)v41 + 12) = v41 + 112;
          *((_QWORD *)v41 + 16) = v41 + 144;
          *((_QWORD *)v41 + 20) = v41 + 176;
          *((_QWORD *)v41 + 24) = v41 + 208;
          *((_QWORD *)v41 + 28) = v41 + 240;
          *((_QWORD *)v41 + 32) = v41 + 272;
          *((_QWORD *)v41 + 36) = v41 + 304;
          *((_QWORD *)v41 + 40) = v41 + 336;
          *((_QWORD *)v41 + 44) = v41 + 368;
          *((_QWORD *)v41 + 48) = v41 + 400;
          *((_QWORD *)v41 + 13) = 0;
          v41[112] = 0;
          *((_QWORD *)v41 + 17) = 0;
          v41[144] = 0;
          *((_QWORD *)v41 + 21) = 0;
          v41[176] = 0;
          *((_QWORD *)v41 + 25) = 0;
          v41[208] = 0;
          *((_QWORD *)v41 + 29) = 0;
          v41[240] = 0;
          *((_QWORD *)v41 + 33) = 0;
          v41[272] = 0;
          *((_QWORD *)v41 + 37) = 0;
          v41[304] = 0;
          *((_QWORD *)v41 + 41) = 0;
          v41[336] = 0;
          *((_QWORD *)v41 + 45) = 0;
          v41[368] = 0;
          *((_QWORD *)v41 + 49) = 0;
          v41[400] = 0;
          *((_QWORD *)v41 + 52) = v41 + 432;
          *((_QWORD *)v41 + 53) = 0x800000000LL;
          *((_QWORD *)v41 + 66) = v41 + 544;
          *((_QWORD *)v41 + 67) = 0x600000000LL;
        }
        *v39 = (__int64)v41;
      }
      v42 = _mm_cvtsi32_si128(v38);
      v41[*v41 + 1] = 8;
      v43 = (_BYTE *)*v39;
      v44 = *(unsigned __int8 *)*v39;
      *v43 = v44 + 1;
      *(_QWORD *)&v43[8 * v44 + 16] = v40;
      v45 = *v39;
      v46 = _mm_unpacklo_epi32(v42, _mm_cvtsi32_si128(*(_DWORD *)(v37 + 4))).m128i_u64[0];
      if ( !*v39 )
      {
        v57 = (unsigned __int8 *)v39[1];
        v58 = *((_DWORD *)v57 + 3744);
        if ( v58 )
        {
          v59 = (unsigned int)(v58 - 1);
          *((_DWORD *)v57 + 3744) = v59;
          v45 = *(_QWORD *)&v57[8 * v59 + 14848];
          v60 = *(unsigned int *)(v45 + 536);
          v61 = *(_QWORD *)(v45 + 528);
          *(_BYTE *)v45 = 0;
          *(_DWORD *)(v45 + 424) = 0;
          v62 = v61 + (v60 << 6);
          while ( v61 != v62 )
          {
            while ( 1 )
            {
              v62 -= 64;
              v63 = *(void **)(v62 + 24);
              if ( v63 == (void *)(v62 + 40) )
                break;
              v64 = *(_QWORD *)(v62 + 40);
              v80 = v46;
              operator delete(v63, v64 + 1);
              v46 = v80;
              if ( v61 == v62 )
                goto LABEL_81;
            }
          }
LABEL_81:
          *(_DWORD *)(v45 + 536) = 0;
        }
        else
        {
          v80 = v46;
          v45 = operator new(0x3A0u);
          *(_BYTE *)v45 = 0;
          *(_QWORD *)(v45 + 96) = v45 + 112;
          *(_QWORD *)(v45 + 128) = v45 + 144;
          *(_QWORD *)(v45 + 160) = v45 + 176;
          *(_QWORD *)(v45 + 192) = v45 + 208;
          *(_QWORD *)(v45 + 224) = v45 + 240;
          *(_QWORD *)(v45 + 256) = v45 + 272;
          *(_QWORD *)(v45 + 288) = v45 + 304;
          *(_QWORD *)(v45 + 320) = v45 + 336;
          *(_QWORD *)(v45 + 352) = v45 + 368;
          *(_QWORD *)(v45 + 384) = v45 + 400;
          *(_QWORD *)(v45 + 104) = 0;
          *(_BYTE *)(v45 + 112) = 0;
          *(_QWORD *)(v45 + 136) = 0;
          *(_BYTE *)(v45 + 144) = 0;
          *(_QWORD *)(v45 + 168) = 0;
          *(_BYTE *)(v45 + 176) = 0;
          *(_QWORD *)(v45 + 200) = 0;
          *(_BYTE *)(v45 + 208) = 0;
          *(_QWORD *)(v45 + 232) = 0;
          *(_BYTE *)(v45 + 240) = 0;
          *(_QWORD *)(v45 + 264) = 0;
          *(_BYTE *)(v45 + 272) = 0;
          *(_QWORD *)(v45 + 296) = 0;
          *(_BYTE *)(v45 + 304) = 0;
          *(_QWORD *)(v45 + 328) = 0;
          *(_BYTE *)(v45 + 336) = 0;
          *(_QWORD *)(v45 + 360) = 0;
          *(_BYTE *)(v45 + 368) = 0;
          *(_QWORD *)(v45 + 392) = 0;
          *(_BYTE *)(v45 + 400) = 0;
          *(_QWORD *)(v45 + 416) = v45 + 432;
          v46 = v80;
          *(_QWORD *)(v45 + 424) = 0x800000000LL;
          *(_QWORD *)(v45 + 528) = v45 + 544;
          *(_QWORD *)(v45 + 536) = 0x600000000LL;
        }
        *v39 = v45;
      }
      v83.m128i_i8[8] = 1;
      v83.m128i_i64[0] = v46;
      v47 = *(unsigned int *)(v45 + 424);
      if ( *(unsigned int *)(v45 + 428) < (unsigned __int64)(v47 + 1) )
      {
        sub_25D6060(v45 + 416, v45 + 432, v47 + 1, 12);
        v47 = *(unsigned int *)(v45 + 424);
      }
      v48 = *(_QWORD *)(v45 + 416) + 12 * v47;
      *(_QWORD *)v48 = v83.m128i_i64[0];
      *(_DWORD *)(v48 + 8) = v83.m128i_i32[2];
      ++*(_DWORD *)(v45 + 424);
    }
LABEL_61:
    v10 = 0;
    sub_A1C0C0(v84);
  }
  return v10;
}

