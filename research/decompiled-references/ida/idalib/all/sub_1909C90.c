__int64 __fastcall sub_1909C90(
        __int64 a1,
        int a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  unsigned __int64 *v8; // rbp
  char v9; // r15
  _BYTE *v10; // r12
  unsigned __int64 v11; // r14
  _BYTE *v12; // rdx
  char v13; // bl
  unsigned int v14; // eax
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  _DWORD *v17; // rbx
  _DWORD *v18; // r13
  unsigned int v19; // ebp
  unsigned int v20; // r14d
  _DWORD *v21; // rbx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  _BYTE *v26; // r14
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r15
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r15
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rsi
  __int64 v43; // r15
  __int64 v44; // rdi
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  _DWORD *v57; // r12
  __int64 v58; // rbx
  void *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rax
  unsigned int v64; // r15d
  _DWORD *v65; // r14
  _DWORD *v66; // r13
  __int64 v67; // rbx
  void *v68; // rdi
  __int64 v69; // rax
  __int64 v71; // [rsp+10h] [rbp-148h]
  char v72; // [rsp+18h] [rbp-140h]
  unsigned __int64 v73; // [rsp+18h] [rbp-140h]
  _BYTE *v74; // [rsp+20h] [rbp-138h]
  unsigned __int64 v75; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v76; // [rsp+28h] [rbp-130h]
  unsigned int v77; // [rsp+30h] [rbp-128h]
  char v78; // [rsp+37h] [rbp-121h]
  __int64 v83; // [rsp+58h] [rbp-100h]
  __int64 v84; // [rsp+58h] [rbp-100h]
  _BYTE *v85; // [rsp+68h] [rbp-F0h]
  __int64 v86; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v87; // [rsp+84h] [rbp-D4h] BYREF
  int v88; // [rsp+8Ch] [rbp-CCh]
  _BYTE v89[16]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+A0h] [rbp-B8h]
  __int64 v91; // [rsp+B0h] [rbp-A8h]
  __int64 v92; // [rsp+B8h] [rbp-A0h]
  char v93; // [rsp+108h] [rbp-50h]
  unsigned int v94; // [rsp+110h] [rbp-48h]
  char v95; // [rsp+114h] [rbp-44h]

  if ( !(_DWORD)a4 )
    return sub_1909BB0(a1, a2, (__int64)a3, a4, a5, a6, a7, a8);
  v72 = 0;
  v8 = a3;
  v9 = 0;
  v78 = 0;
  v10 = v89;
  v77 = 0;
  v71 = (__int64)&a3[(unsigned int)(a4 - 1) + 1];
  do
  {
    v11 = *v8;
    v12 = *(_BYTE **)(a1 + 232);
    v13 = v12[1] & 8;
    if ( (*(_WORD *)*v8 & 0x1FF) == 0x44 )
    {
      if ( !v77 )
      {
        v74 = *(_BYTE **)(a1 + 232);
        v14 = sub_C009D0(v11);
        v12 = v74;
        v77 = v14;
      }
      if ( !v13 )
      {
        v26 = v12;
        if ( v77 )
          goto LABEL_56;
        return sub_1909BB0(a1, a2, (__int64)a3, a4, a5, a6, a7, a8);
      }
      v15 = *(_WORD *)(v11 + 20) >> 1;
      if ( !v78 && v15 > 1u )
      {
        v16 = sub_C009D0(v11);
        sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), v16, 0x159Eu, 0);
        v87 = sub_C00960(v11);
        sub_1587DB0((__int64)v10, &v87);
        sub_15F7200(v10);
        v78 = 1;
        v15 = *(_WORD *)(v11 + 20) >> 1;
      }
      v17 = *(_DWORD **)(v11 + 24);
      v18 = &v17[6 * v15];
      if ( v17 != v18 )
      {
        v75 = v11;
        v76 = v8;
        while ( 1 )
        {
          while ( !*v17 || v9 )
          {
            v17 += 6;
            if ( v17 == v18 )
              goto LABEL_22;
          }
          sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), v17[3], 0x159Bu, 0);
          v19 = v17[5];
          if ( *v17 )
          {
            v20 = v17[3];
            if ( !v93 )
              goto LABEL_19;
          }
          else
          {
            v20 = v17[4];
            if ( !v20 )
              v20 = v17[5];
            if ( !v93 )
            {
LABEL_19:
              if ( v95 )
              {
                v39 = sub_168B9E0(v10);
                v40 = v90;
                if ( v90 )
                  v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 32LL))(v90);
                v86 = v40;
                v41 = sub_1587BC0(v39, &v86, v35, v36, v37, v38);
                v42 = *v41 + 32LL * v94;
                v43 = *(_QWORD *)(v42 + 8);
                if ( v43 )
                {
                  v44 = *(unsigned int *)(v43 + 424);
                  v45 = *(unsigned int *)(v43 + 428);
                  v46 = v44 + 1;
                }
                else
                {
                  v51 = *(_QWORD *)(v42 + 16);
                  v52 = *(_DWORD *)(v51 + 14976);
                  if ( v52 )
                  {
                    v53 = (unsigned int)(v52 - 1);
                    *(_DWORD *)(v51 + 14976) = v53;
                    v43 = *(_QWORD *)(v51 + 8 * v53 + 14848);
                    v54 = *(unsigned int *)(v43 + 536);
                    *(_BYTE *)v43 = 0;
                    v55 = *(_QWORD *)(v43 + 528);
                    *(_DWORD *)(v43 + 424) = 0;
                    v56 = v55 + (v54 << 6);
                    v83 = v55;
                    if ( v55 == v56 )
                    {
                      v46 = 1;
                      v44 = 0;
                    }
                    else
                    {
                      v85 = v10;
                      v57 = v17;
                      v58 = v56;
                      do
                      {
                        while ( 1 )
                        {
                          v58 -= 64;
                          v59 = *(void **)(v58 + 24);
                          if ( v59 == (void *)(v58 + 40) )
                            break;
                          operator delete(v59);
                          if ( v83 == v58 )
                            goto LABEL_63;
                        }
                      }
                      while ( v83 != v58 );
LABEL_63:
                      v17 = v57;
                      v10 = v85;
                      v44 = *(unsigned int *)(v43 + 424);
                      v46 = v44 + 1;
                    }
                    *(_DWORD *)(v43 + 536) = 0;
                    v45 = *(unsigned int *)(v43 + 428);
                  }
                  else
                  {
                    v69 = operator new(0x3A0u);
                    v45 = 8;
                    v44 = 0;
                    v43 = v69;
                    *(_BYTE *)v69 = 0;
                    *(_QWORD *)(v69 + 96) = v69 + 112;
                    *(_QWORD *)(v69 + 128) = v69 + 144;
                    *(_QWORD *)(v69 + 160) = v69 + 176;
                    *(_QWORD *)(v69 + 192) = v69 + 208;
                    *(_QWORD *)(v69 + 224) = v69 + 240;
                    *(_QWORD *)(v69 + 256) = v69 + 272;
                    *(_QWORD *)(v69 + 288) = v69 + 304;
                    *(_QWORD *)(v69 + 320) = v69 + 336;
                    *(_QWORD *)(v69 + 352) = v69 + 368;
                    *(_QWORD *)(v69 + 384) = v69 + 400;
                    *(_QWORD *)(v69 + 416) = v69 + 432;
                    *(_QWORD *)(v69 + 104) = 0;
                    *(_BYTE *)(v69 + 112) = 0;
                    *(_QWORD *)(v69 + 136) = 0;
                    *(_BYTE *)(v69 + 144) = 0;
                    *(_QWORD *)(v69 + 168) = 0;
                    *(_BYTE *)(v69 + 176) = 0;
                    *(_QWORD *)(v69 + 200) = 0;
                    *(_BYTE *)(v69 + 208) = 0;
                    *(_QWORD *)(v69 + 232) = 0;
                    *(_BYTE *)(v69 + 240) = 0;
                    *(_QWORD *)(v69 + 264) = 0;
                    *(_BYTE *)(v69 + 272) = 0;
                    *(_QWORD *)(v69 + 296) = 0;
                    *(_BYTE *)(v69 + 304) = 0;
                    *(_QWORD *)(v69 + 328) = 0;
                    *(_BYTE *)(v69 + 336) = 0;
                    *(_QWORD *)(v69 + 360) = 0;
                    *(_BYTE *)(v69 + 368) = 0;
                    *(_QWORD *)(v69 + 392) = 0;
                    *(_BYTE *)(v69 + 400) = 0;
                    *(_QWORD *)(v69 + 424) = 0x800000000LL;
                    *(_QWORD *)(v69 + 536) = 0x600000000LL;
                    *(_QWORD *)(v69 + 528) = v69 + 544;
                    v46 = 1;
                  }
                  *(_QWORD *)(v42 + 8) = v43;
                }
                v87 = __PAIR64__(v19, v20);
                LOBYTE(v88) = 1;
                if ( v46 > v45 )
                {
                  sub_2237220(v43 + 416, v43 + 432, v46, 12);
                  v44 = *(unsigned int *)(v43 + 424);
                }
                v47 = *(_QWORD *)(v43 + 416) + 12 * v44;
                *(_QWORD *)v47 = v87;
                *(_DWORD *)(v47 + 8) = v88;
                ++*(_DWORD *)(v43 + 424);
              }
              goto LABEL_20;
            }
          }
          v30 = v91;
          if ( v91 )
          {
            v31 = *(unsigned int *)(v91 + 424);
            v32 = *(unsigned int *)(v91 + 428);
            v33 = v31 + 1;
          }
          else
          {
            v48 = v92;
            v49 = *(_DWORD *)(v92 + 14976);
            if ( v49 )
            {
              v60 = (unsigned int)(v49 - 1);
              *(_DWORD *)(v92 + 14976) = v60;
              v30 = *(_QWORD *)(v48 + 8 * v60 + 14848);
              v61 = *(unsigned int *)(v30 + 536);
              *(_BYTE *)v30 = 0;
              v62 = *(_QWORD *)(v30 + 528);
              *(_DWORD *)(v30 + 424) = 0;
              v63 = v62 + (v61 << 6);
              if ( v62 == v63 )
              {
                v33 = 1;
                v31 = 0;
              }
              else
              {
                v84 = v30;
                v64 = v20;
                v65 = v18;
                v66 = v17;
                v67 = v63;
                do
                {
                  while ( 1 )
                  {
                    v67 -= 64;
                    v68 = *(void **)(v67 + 24);
                    if ( v68 == (void *)(v67 + 40) )
                      break;
                    operator delete(v68);
                    if ( v62 == v67 )
                      goto LABEL_69;
                  }
                }
                while ( v62 != v67 );
LABEL_69:
                v17 = v66;
                v18 = v65;
                v20 = v64;
                v30 = v84;
                v31 = *(unsigned int *)(v84 + 424);
                v33 = v31 + 1;
              }
              *(_DWORD *)(v30 + 536) = 0;
              v32 = *(unsigned int *)(v30 + 428);
            }
            else
            {
              v50 = operator new(0x3A0u);
              v32 = 8;
              v33 = 1;
              v30 = v50;
              *(_BYTE *)v50 = 0;
              *(_QWORD *)(v50 + 96) = v50 + 112;
              *(_QWORD *)(v50 + 128) = v50 + 144;
              *(_QWORD *)(v50 + 160) = v50 + 176;
              *(_QWORD *)(v50 + 192) = v50 + 208;
              *(_QWORD *)(v50 + 224) = v50 + 240;
              *(_QWORD *)(v50 + 256) = v50 + 272;
              *(_QWORD *)(v50 + 288) = v50 + 304;
              *(_QWORD *)(v50 + 320) = v50 + 336;
              *(_QWORD *)(v50 + 352) = v50 + 368;
              *(_QWORD *)(v50 + 384) = v50 + 400;
              *(_QWORD *)(v50 + 416) = v50 + 432;
              *(_QWORD *)(v50 + 104) = 0;
              *(_BYTE *)(v50 + 112) = 0;
              *(_QWORD *)(v50 + 136) = 0;
              *(_BYTE *)(v50 + 144) = 0;
              *(_QWORD *)(v50 + 168) = 0;
              *(_BYTE *)(v50 + 176) = 0;
              *(_QWORD *)(v50 + 200) = 0;
              *(_BYTE *)(v50 + 208) = 0;
              *(_QWORD *)(v50 + 232) = 0;
              *(_BYTE *)(v50 + 240) = 0;
              *(_QWORD *)(v50 + 264) = 0;
              *(_BYTE *)(v50 + 272) = 0;
              *(_QWORD *)(v50 + 296) = 0;
              *(_BYTE *)(v50 + 304) = 0;
              *(_QWORD *)(v50 + 328) = 0;
              *(_BYTE *)(v50 + 336) = 0;
              *(_QWORD *)(v50 + 360) = 0;
              *(_BYTE *)(v50 + 368) = 0;
              *(_QWORD *)(v50 + 392) = 0;
              *(_BYTE *)(v50 + 400) = 0;
              *(_QWORD *)(v50 + 424) = 0x800000000LL;
              *(_QWORD *)(v50 + 528) = v50 + 544;
              *(_QWORD *)(v50 + 536) = 0x600000000LL;
              v31 = 0;
            }
            v91 = v30;
          }
          v87 = __PAIR64__(v19, v20);
          LOBYTE(v88) = 1;
          if ( v33 > v32 )
          {
            sub_2237220(v30 + 416, v30 + 432, v33, 12);
            v31 = *(unsigned int *)(v30 + 424);
          }
          v34 = *(_QWORD *)(v30 + 416) + 12 * v31;
          *(_QWORD *)v34 = v87;
          *(_DWORD *)(v34 + 8) = v88;
          ++*(_DWORD *)(v30 + 424);
LABEL_20:
          v21 = v17 + 6;
          sub_15F7200(v10);
          if ( v18 == v21 )
          {
            v11 = v75;
            v8 = v76;
            v9 = 1;
            break;
          }
          v17 = v21 + 6;
          v9 = 1;
          if ( v17 == v18 )
          {
LABEL_22:
            v11 = v75;
            v8 = v76;
            break;
          }
        }
      }
      if ( !v72 && (*(_WORD *)*a3 & 0x1FF) != 0x44 )
      {
        v22 = sub_C009D0(v11);
        sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), v22, 0x159Du, 0);
        v87 = sub_EEC8C0(v11, a1 + 8, *(double *)a7.m128i_i64);
        sub_1587DB0((__int64)v10, &v87);
        sub_15F7200(v10);
        v23 = sub_EEB7E0(*a3, (__int64)&v87, *(double *)a7.m128i_i64);
        v24 = a1 + 8;
        sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), v23, 0x171Au, 0);
        v25 = *a3;
LABEL_26:
        v87 = sub_EEC8C0(v25, v24, *(double *)a7.m128i_i64);
        sub_1587DB0((__int64)v10, &v87);
        sub_15F7200(v10);
        v72 = 1;
      }
    }
    else if ( v13 )
    {
      if ( !v72 )
      {
        a6 = *a3;
        if ( (*(_WORD *)*a3 & 0x1FF) == 0x44 )
        {
          v73 = *a3;
          v28 = sub_C009D0(*a3);
          sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), v28, 0x159Du, 0);
          v87 = sub_EEC8C0(v73, a1 + 8, *(double *)a7.m128i_i64);
          sub_1587DB0((__int64)v10, &v87);
          sub_15F7200(v10);
          v29 = sub_EEB7E0(*v8, (__int64)&v87, *(double *)a7.m128i_i64);
          v24 = a1 + 8;
          sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), v29, 0x171Au, 0);
          v25 = *v8;
          goto LABEL_26;
        }
      }
    }
    ++v8;
  }
  while ( (unsigned __int64 *)v71 != v8 );
  if ( v77 )
  {
    v26 = *(_BYTE **)(a1 + 232);
    if ( (v26[1] & 8) != 0 )
    {
      if ( !((unsigned __int8)v72 | (unsigned __int8)v78) && !v9 )
      {
        sub_168B9F0((__int64)v89, (__int64 *)(a1 + 8), v77, (((char)v26[1] >> 31) & 0x4BD) + 5525, 0);
        sub_15F7200(v89);
      }
    }
    else
    {
LABEL_56:
      if ( (*v26 & 1) == 0 )
      {
        sub_168B9F0((__int64)v89, (__int64 *)(a1 + 8), v77, 0x159Au, 0);
        sub_15F7200(v89);
      }
    }
  }
  return sub_1909BB0(a1, a2, (__int64)a3, a4, a5, a6, a7, a8);
}
