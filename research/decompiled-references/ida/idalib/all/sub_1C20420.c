__int64 __fastcall sub_1C20420(__int64 a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int16 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int16 *v14; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 *v36; // r13
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r12
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 *v49; // rsi
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // r15
  __int64 v59; // rbx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbp
  __int64 v73; // r15
  __int64 v74; // rbp
  void *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rbp
  void *v80; // rdi
  unsigned __int64 v81; // [rsp+8h] [rbp-F0h]
  __int64 v82; // [rsp+8h] [rbp-F0h]
  __int64 v83; // [rsp+18h] [rbp-E0h] BYREF
  __int64 (__fastcall *v84)(__int64); // [rsp+20h] [rbp-D8h] BYREF
  __int64 *v85; // [rsp+28h] [rbp-D0h]
  __int64 v86; // [rsp+30h] [rbp-C8h] BYREF
  int v87; // [rsp+38h] [rbp-C0h]
  __int64 (__fastcall **v88)(__int64); // [rsp+40h] [rbp-B8h]
  __int64 v89; // [rsp+50h] [rbp-A8h]
  __int64 v90; // [rsp+58h] [rbp-A0h]
  char v91; // [rsp+A8h] [rbp-50h]
  unsigned int v92; // [rsp+B0h] [rbp-48h]
  char v93; // [rsp+B4h] [rbp-44h]

  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(v5 + 16);
  if ( (v6 & 4) != 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v49 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
      sub_168B9F0((__int64)&v86, v49, *(_DWORD *)(v5 + 32), 0xF24u, 0);
      v50 = sub_EEC8C0(*(_QWORD *)(a1 + 80), (__int64)v49, *(double *)a3.m128_u64);
      if ( v91 )
      {
        v59 = v89;
        if ( !v89 )
        {
          v64 = v90;
          v65 = *(_DWORD *)(v90 + 14976);
          if ( v65 )
          {
            v71 = (unsigned int)(v65 - 1);
            *(_DWORD *)(v90 + 14976) = v71;
            v59 = *(_QWORD *)(v64 + 8 * v71 + 14848);
            v72 = *(unsigned int *)(v59 + 536);
            *(_BYTE *)v59 = 0;
            v73 = *(_QWORD *)(v59 + 528);
            *(_DWORD *)(v59 + 424) = 0;
            v74 = v73 + (v72 << 6);
            while ( v73 != v74 )
            {
              while ( 1 )
              {
                v74 -= 64;
                v75 = *(void **)(v74 + 24);
                if ( v75 == (void *)(v74 + 40) )
                  break;
                operator delete(v75);
                if ( v73 == v74 )
                  goto LABEL_66;
              }
            }
LABEL_66:
            v7 = *(unsigned int *)(v59 + 424);
            v60 = *(unsigned int *)(v59 + 428);
            *(_DWORD *)(v59 + 536) = 0;
            v61 = v7 + 1;
          }
          else
          {
            v66 = operator new(0x3A0u);
            v61 = 1;
            v59 = v66;
            *(_BYTE *)v66 = 0;
            *(_QWORD *)(v66 + 96) = v66 + 112;
            *(_QWORD *)(v66 + 128) = v66 + 144;
            *(_QWORD *)(v66 + 160) = v66 + 176;
            *(_QWORD *)(v66 + 192) = v66 + 208;
            *(_QWORD *)(v66 + 224) = v66 + 240;
            *(_QWORD *)(v66 + 256) = v66 + 272;
            *(_QWORD *)(v66 + 288) = v66 + 304;
            *(_QWORD *)(v66 + 320) = v66 + 336;
            *(_QWORD *)(v66 + 352) = v66 + 368;
            *(_QWORD *)(v66 + 384) = v66 + 400;
            *(_QWORD *)(v66 + 416) = v66 + 432;
            *(_QWORD *)(v66 + 104) = 0;
            *(_BYTE *)(v66 + 112) = 0;
            *(_QWORD *)(v66 + 136) = 0;
            *(_BYTE *)(v66 + 144) = 0;
            *(_QWORD *)(v66 + 168) = 0;
            *(_BYTE *)(v66 + 176) = 0;
            *(_QWORD *)(v66 + 200) = 0;
            *(_BYTE *)(v66 + 208) = 0;
            *(_QWORD *)(v66 + 232) = 0;
            *(_BYTE *)(v66 + 240) = 0;
            *(_QWORD *)(v66 + 264) = 0;
            *(_BYTE *)(v66 + 272) = 0;
            *(_QWORD *)(v66 + 296) = 0;
            *(_BYTE *)(v66 + 304) = 0;
            *(_QWORD *)(v66 + 328) = 0;
            *(_BYTE *)(v66 + 336) = 0;
            *(_QWORD *)(v66 + 360) = 0;
            *(_BYTE *)(v66 + 368) = 0;
            *(_QWORD *)(v66 + 392) = 0;
            *(_BYTE *)(v66 + 400) = 0;
            *(_QWORD *)(v66 + 424) = 0x800000000LL;
            *(_QWORD *)(v66 + 528) = v66 + 544;
            *(_QWORD *)(v66 + 536) = 0x600000000LL;
            v60 = 8;
          }
          v89 = v59;
          goto LABEL_46;
        }
      }
      else
      {
        if ( !v93 )
        {
LABEL_41:
          sub_15F7200(&v86);
          return 1;
        }
        v53 = sub_168B9E0(&v86);
        v56 = (__int64)v88;
        if ( v88 )
          v56 = (*((__int64 (__fastcall **)(_QWORD))*v88 + 4))(v88);
        v83 = v56;
        v57 = sub_1587BC0(v53, &v83, v51, v52, v54, v55);
        v58 = *v57 + 32LL * v92;
        v59 = *(_QWORD *)(v58 + 8);
        if ( !v59 )
        {
          v68 = *(_QWORD *)(v58 + 16);
          v69 = *(_DWORD *)(v68 + 14976);
          if ( v69 )
          {
            v76 = (unsigned int)(v69 - 1);
            *(_DWORD *)(v68 + 14976) = v76;
            v59 = *(_QWORD *)(v68 + 8 * v76 + 14848);
            v77 = *(unsigned int *)(v59 + 536);
            *(_BYTE *)v59 = 0;
            v78 = *(_QWORD *)(v59 + 528);
            *(_DWORD *)(v59 + 424) = 0;
            v77 <<= 6;
            v79 = v78 + v77;
            v82 = v78;
            while ( v82 != v79 )
            {
              while ( 1 )
              {
                v79 -= 64;
                v80 = *(void **)(v79 + 24);
                if ( v80 == (void *)(v79 + 40) )
                  break;
                operator delete(v80);
                if ( v82 == v79 )
                  goto LABEL_70;
              }
            }
LABEL_70:
            v7 = *(unsigned int *)(v59 + 424);
            v60 = *(unsigned int *)(v59 + 428);
            *(_DWORD *)(v59 + 536) = 0;
            v61 = v7 + 1;
          }
          else
          {
            v70 = operator new(0x3A0u);
            v61 = 1;
            v59 = v70;
            *(_BYTE *)v70 = 0;
            *(_QWORD *)(v70 + 96) = v70 + 112;
            *(_QWORD *)(v70 + 128) = v70 + 144;
            *(_QWORD *)(v70 + 160) = v70 + 176;
            *(_QWORD *)(v70 + 192) = v70 + 208;
            *(_QWORD *)(v70 + 224) = v70 + 240;
            *(_QWORD *)(v70 + 256) = v70 + 272;
            *(_QWORD *)(v70 + 288) = v70 + 304;
            *(_QWORD *)(v70 + 320) = v70 + 336;
            *(_QWORD *)(v70 + 352) = v70 + 368;
            *(_QWORD *)(v70 + 384) = v70 + 400;
            *(_QWORD *)(v70 + 416) = v70 + 432;
            *(_QWORD *)(v70 + 104) = 0;
            *(_BYTE *)(v70 + 112) = 0;
            *(_QWORD *)(v70 + 136) = 0;
            *(_BYTE *)(v70 + 144) = 0;
            *(_QWORD *)(v70 + 168) = 0;
            *(_BYTE *)(v70 + 176) = 0;
            *(_QWORD *)(v70 + 200) = 0;
            *(_BYTE *)(v70 + 208) = 0;
            *(_QWORD *)(v70 + 232) = 0;
            *(_BYTE *)(v70 + 240) = 0;
            *(_QWORD *)(v70 + 264) = 0;
            *(_BYTE *)(v70 + 272) = 0;
            *(_QWORD *)(v70 + 296) = 0;
            *(_BYTE *)(v70 + 304) = 0;
            *(_QWORD *)(v70 + 328) = 0;
            *(_BYTE *)(v70 + 336) = 0;
            *(_QWORD *)(v70 + 360) = 0;
            *(_BYTE *)(v70 + 368) = 0;
            *(_QWORD *)(v70 + 392) = 0;
            *(_BYTE *)(v70 + 400) = 0;
            *(_QWORD *)(v70 + 424) = 0x800000000LL;
            *(_QWORD *)(v70 + 528) = v70 + 544;
            *(_QWORD *)(v70 + 536) = 0x600000000LL;
            v60 = 8;
          }
          *(_QWORD *)(v58 + 8) = v59;
          goto LABEL_46;
        }
      }
      v7 = *(unsigned int *)(v59 + 424);
      v60 = *(unsigned int *)(v59 + 428);
      v61 = v7 + 1;
LABEL_46:
      v84 = (__int64 (__fastcall *)(__int64))v50;
      LOBYTE(v85) = 1;
      if ( v61 > v60 )
      {
        sub_2237220(v59 + 416, v59 + 432, v61, 12);
        v7 = *(unsigned int *)(v59 + 424);
      }
      v62 = *(_QWORD *)(v59 + 416) + 12 * v7;
      *(_QWORD *)v62 = v84;
      *(_DWORD *)(v62 + 8) = (_DWORD)v85;
      ++*(_DWORD *)(v59 + 424);
      goto LABEL_41;
    }
  }
  v8 = *(_QWORD *)(v5 + 40);
  if ( (v8 & 6) == 0 )
  {
    v29 = sub_1C160F0(a1, v8 & 0xFFFFFFFFFFFFFFF8LL);
    v8 = a2;
    v83 = a1;
    *(_QWORD *)(a1 + 96) = v29;
    v84 = sub_1C153E0;
    v85 = &v83;
    v30 = *(_QWORD *)(a1 + 8);
    v87 = 0;
    v86 = v30;
    v88 = &v84;
    a2 = sub_1C15630((__int64)&v86, a2);
  }
  v9 = (unsigned __int16 *)sub_BFB9F0(a2);
  v13 = *v9;
  LOWORD(v13) = v13 & 0x1FF;
  if ( (_WORD)v13 == 32 )
    *(_QWORD *)(a1 + 88) = v9;
  v14 = sub_1C1A050(a1, v8, v13, v10, v11, v12, a3, a4);
  if ( v14 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v16 = *(unsigned int *)(a1 + 40);
  v17 = *(unsigned int *)(a1 + 44);
  v18 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL;
  *(_DWORD *)(a1 + 16) = v16;
  if ( v16 + 1 > v17 )
  {
    v81 = v18;
    sub_2237220(a1 + 32, a1 + 48, v16 + 1, 8);
    v16 = *(unsigned int *)(a1 + 40);
    v18 = v81;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v16) = v18;
  v19 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19 - 8);
  *(_DWORD *)(a1 + 40) = v19;
  if ( (*(_WORD *)v20 & 0x1FF) == 0x1A )
    *(_BYTE *)(v20 + 2) &= ~8u;
  v22 = sub_1C20080(a1, a2, *(double *)a3.m128_u64);
  if ( v22 == 1 )
    return 1;
  v25 = *(_QWORD *)(a1 + 80);
  v26 = *(_QWORD *)(v25 + 16);
  if ( (v26 & 4) == 0 )
  {
    v27 = *(_QWORD *)(a1 + 104);
    if ( (*(_BYTE *)(v27 + 60) & 2) != 0
      || (sub_1A93600(
            *(__int64 **)(*(_QWORD *)(a1 + 8) + 736LL),
            v26 & 0xFFFFFFFFFFFFFFF8LL,
            v27,
            *(_DWORD *)(v25 + 32),
            *(double *)a3.m128_u64,
            *(double *)a4.m128_u64),
          v25 = *(_QWORD *)(a1 + 80),
          (*(_BYTE *)(v25 + 16) & 4) == 0) )
    {
      v28 = v22 & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(_BYTE *)((v22 & 0xFFFFFFFFFFFFFFFELL) + 1) & 6) == 0 )
      {
        v31 = sub_C9AA20(v25, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), *(_QWORD *)(a1 + 8), v21, v23, v24);
        v35 = sub_BA9760(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 0xFFFFFFFFFFFFFFF8LL, v31);
        v36 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
        v37 = *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v37 + 16) == 34
          || (v63 = *(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v63 + 16) == 34)
          && (v37 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL), v31, v63, v32)) != 0 )
        {
          v38 = *(_QWORD *)(*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v39 = (unsigned int)*(unsigned __int8 *)(v38 + 16) - 35;
          if ( (unsigned int)v39 > 1 )
            v38 = sub_F63050(v38, v31, v39, v32);
          if ( !(*(_BYTE *)(v38 + 19) >> 2) )
          {
            v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v40 + 16) == 13 && ((*(_WORD *)(v40 + 18) >> 3) & 0x1FF) == 0x1E9 )
            {
              v41 = *v36;
              if ( *(_BYTE *)(*v36 + 16) == 34
                || (v67 = *(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v67 + 16) == 34)
                && (v41 = sub_F63050(*v36, v31, v67, v32)) != 0 )
              {
                v42 = *(_QWORD *)(*(_QWORD *)(v41 + 32) & 0xFFFFFFFFFFFFFFF0LL);
                v43 = (unsigned int)*(unsigned __int8 *)(v42 + 16) - 35;
                if ( (unsigned int)v43 > 1 )
                  v42 = sub_F63050(v42, v31, v43, v32);
                if ( *(_BYTE *)(v42 + 19) >> 2
                  || (v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL),
                      *(_BYTE *)(v44 + 16) != 13)
                  || ((*(_WORD *)(v44 + 18) >> 3) & 0x1FF) != 0x1E9 )
                {
                  v22 = sub_160A600(
                          *(_QWORD *)(a1 + 8),
                          v22 & 0xFFFFFFFFFFFFFFFELL,
                          v35,
                          1u,
                          0,
                          0,
                          *(double *)a3.m128_u64,
                          *(double *)a4.m128_u64,
                          0);
                }
              }
            }
          }
        }
        if ( (*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
          && (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
              | *(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
            & 7) == 3 )
        {
          v45 = *(_QWORD *)(a1 + 8);
          v46 = *(_QWORD *)(a1 + 80);
          if ( (unsigned __int8)sub_FD3830(
                                  *(_QWORD *)(*(_QWORD *)(v45 + 264) + 32LL),
                                  0x1968u,
                                  *(unsigned int *)(v46 + 32),
                                  *(_QWORD *)(v45 + 264),
                                  v33,
                                  v34) != 1 )
          {
            v47 = *(unsigned int *)(v45 + 40);
            v48 = 0;
            if ( (_DWORD)v47 )
              v48 = *(_QWORD *)(*(_QWORD *)(v45 + 32) + 8 * v47 - 8);
            sub_15EED40(v48, v46);
          }
        }
      }
    }
  }
  return v22;
}
