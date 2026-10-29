void __fastcall sub_16DCAE0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        double a7,
        __int64 a8,
        char *a9,
        __int64 a10)
{
  unsigned int v10; // r14d
  __int64 *v11; // rbx
  unsigned int v13; // edx
  unsigned int v14; // eax
  char *v15; // rbx
  char *v16; // r14
  char *v17; // r13
  __int64 v18; // r15
  __int64 v19; // rbp
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  _BYTE *v24; // rax
  _BYTE *v25; // rsi
  signed __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  char *v34; // rbx
  char *v35; // r15
  char *v36; // r14
  __int64 v37; // rbp
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r12
  _BYTE *v44; // rax
  _BYTE *v45; // rsi
  signed __int64 v46; // r13
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbp
  void *v52; // rdi
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // r12
  void *v59; // rdi
  int v60; // r13d
  void *v61; // rdi
  void *v62; // rax
  __int64 v63; // rbp
  __int64 v64; // rbp
  void *v65; // rdi
  char *v66; // r14
  __int64 v67; // r12
  int v68; // r13d
  void *v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // r12
  int v72; // edx
  void *v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v77; // [rsp+8h] [rbp-100h]
  _BYTE *srca; // [rsp+10h] [rbp-F8h]
  void *src; // [rsp+10h] [rbp-F8h]
  int srcb; // [rsp+10h] [rbp-F8h]
  _BYTE *v81; // [rsp+18h] [rbp-F0h]
  int v82; // [rsp+18h] [rbp-F0h]
  __int64 v83; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v85[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+50h] [rbp-B8h]
  __int64 v87; // [rsp+60h] [rbp-A8h]
  __int64 v88; // [rsp+68h] [rbp-A0h]
  char v89; // [rsp+B8h] [rbp-50h]
  unsigned int v90; // [rsp+C0h] [rbp-48h]
  char v91; // [rsp+C4h] [rbp-44h]

  v10 = a5;
  v11 = (__int64 *)(a1 + 8);
  if ( !(_BYTE)a2 )
  {
    if ( a6 )
    {
      v14 = sub_C00A40(a3, a2, a3, a4, a5);
      sub_168CDE0((__int64)v85, v11, v14, a4, 0);
      v84 = sub_EEC8C0(a3, (__int64)v11, a7);
      sub_1587DB0((__int64)v85, &v84);
      sub_15F7200(v85);
      v13 = v10;
    }
    else
    {
      sub_168CDE0((__int64)v85, (__int64 *)(a1 + 8), a5, a4, 0);
      v84 = sub_EEC8C0(a3, a1 + 8, a7);
      sub_1587DB0((__int64)v85, &v84);
      sub_15F7200(v85);
      v13 = a8;
    }
    sub_168B9F0((__int64)v85, v11, v13, 0x1768u, 0);
    sub_15884C0((__int64)v85, &a8);
    if ( !v89 )
    {
      if ( v91 )
      {
        v29 = sub_168B9E0(v85);
        v32 = v86;
        if ( v86 )
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 32LL))(v86);
        v83 = v32;
        v33 = sub_1587BC0(v29, &v83, v27, v28, v30, v31);
        v34 = a9;
        v77 = *v33 + 32LL * v90;
        v35 = &a9[64 * a10];
        if ( v35 != a9 )
        {
          while ( 1 )
          {
            v36 = v34;
            if ( !*(_DWORD *)v34 || !*((_DWORD *)v34 + 1) )
              goto LABEL_39;
            v37 = *(_QWORD *)(v77 + 8);
            if ( v37 )
            {
              v38 = *(unsigned int *)(v37 + 536);
              v39 = *(unsigned int *)(v37 + 540);
              v40 = v38 + 1;
              v41 = v38 << 6;
            }
            else
            {
              v53 = *(_QWORD *)(v77 + 16);
              v54 = *(_DWORD *)(v53 + 14976);
              if ( v54 )
              {
                v55 = (unsigned int)(v54 - 1);
                *(_DWORD *)(v53 + 14976) = v55;
                v37 = *(_QWORD *)(v53 + 8 * v55 + 14848);
                v56 = *(unsigned int *)(v37 + 536);
                *(_BYTE *)v37 = 0;
                v57 = *(_QWORD *)(v37 + 528);
                *(_DWORD *)(v37 + 424) = 0;
                v58 = v57 + (v56 << 6);
                while ( v57 != v58 )
                {
                  while ( 1 )
                  {
                    v58 -= 64;
                    v59 = *(void **)(v58 + 24);
                    if ( v59 == (void *)(v58 + 40) )
                      break;
                    operator delete(v59);
                    if ( v57 == v58 )
                      goto LABEL_60;
                  }
                }
LABEL_60:
                *(_DWORD *)(v37 + 536) = 0;
                v39 = *(unsigned int *)(v37 + 540);
              }
              else
              {
                v39 = 6;
                v37 = operator new(0x3A0u);
                *(_BYTE *)v37 = 0;
                *(_QWORD *)(v37 + 96) = v37 + 112;
                *(_QWORD *)(v37 + 128) = v37 + 144;
                *(_QWORD *)(v37 + 160) = v37 + 176;
                *(_QWORD *)(v37 + 192) = v37 + 208;
                *(_QWORD *)(v37 + 224) = v37 + 240;
                *(_QWORD *)(v37 + 256) = v37 + 272;
                *(_QWORD *)(v37 + 288) = v37 + 304;
                *(_QWORD *)(v37 + 320) = v37 + 336;
                *(_QWORD *)(v37 + 352) = v37 + 368;
                *(_QWORD *)(v37 + 384) = v37 + 400;
                *(_QWORD *)(v37 + 416) = v37 + 432;
                *(_QWORD *)(v37 + 104) = 0;
                *(_BYTE *)(v37 + 112) = 0;
                *(_QWORD *)(v37 + 136) = 0;
                *(_BYTE *)(v37 + 144) = 0;
                *(_QWORD *)(v37 + 168) = 0;
                *(_BYTE *)(v37 + 176) = 0;
                *(_QWORD *)(v37 + 200) = 0;
                *(_BYTE *)(v37 + 208) = 0;
                *(_QWORD *)(v37 + 232) = 0;
                *(_BYTE *)(v37 + 240) = 0;
                *(_QWORD *)(v37 + 264) = 0;
                *(_BYTE *)(v37 + 272) = 0;
                *(_QWORD *)(v37 + 296) = 0;
                *(_BYTE *)(v37 + 304) = 0;
                *(_QWORD *)(v37 + 328) = 0;
                *(_BYTE *)(v37 + 336) = 0;
                *(_QWORD *)(v37 + 360) = 0;
                *(_BYTE *)(v37 + 368) = 0;
                *(_QWORD *)(v37 + 392) = 0;
                *(_BYTE *)(v37 + 400) = 0;
                *(_QWORD *)(v37 + 424) = 0x800000000LL;
                *(_QWORD *)(v37 + 528) = v37 + 544;
                *(_QWORD *)(v37 + 536) = 0x600000000LL;
              }
              v41 = 0;
              v40 = 1;
              *(_QWORD *)(v77 + 8) = v37;
            }
            v42 = *(_QWORD *)(v37 + 528);
            v43 = v42 + v41;
            if ( v40 > v39 )
            {
              if ( v42 > (unsigned __int64)v34 || v43 <= (unsigned __int64)v34 )
              {
                v71 = sub_2237400(v37 + 528, v37 + 544, v40, 64, &v84);
                sub_9EF810((__int64 *)(v37 + 528), v71);
                v72 = v84;
                v73 = *(void **)(v37 + 528);
                if ( v73 == (void *)(v37 + 544) )
                {
                  v74 = *(unsigned int *)(v37 + 536);
                  *(_QWORD *)(v37 + 528) = v71;
                  *(_DWORD *)(v37 + 540) = v72;
                }
                else
                {
                  v82 = v84;
                  free(v73);
                  v74 = *(unsigned int *)(v37 + 536);
                  *(_QWORD *)(v37 + 528) = v71;
                  *(_DWORD *)(v37 + 540) = v82;
                }
                v43 = (v74 << 6) + v71;
              }
              else
              {
                v66 = &v34[-v42];
                v67 = sub_2237400(v37 + 528, v37 + 544, v40, 64, &v84);
                sub_9EF810((__int64 *)(v37 + 528), v67);
                v68 = v84;
                v69 = *(void **)(v37 + 528);
                if ( v69 != (void *)(v37 + 544) )
                  free(v69);
                v70 = *(unsigned int *)(v37 + 536);
                *(_QWORD *)(v37 + 528) = v67;
                v36 = &v66[v67];
                *(_DWORD *)(v37 + 540) = v68;
                v43 = (v70 << 6) + v67;
              }
            }
            *(_QWORD *)v43 = *(_QWORD *)v36;
            *(_DWORD *)(v43 + 8) = *((_DWORD *)v36 + 2);
            *(_QWORD *)(v43 + 12) = *(_QWORD *)(v36 + 12);
            *(_DWORD *)(v43 + 20) = *((_DWORD *)v36 + 5);
            v44 = (_BYTE *)(v43 + 40);
            *(_QWORD *)(v43 + 24) = v43 + 40;
            v45 = *((_BYTE **)v36 + 3);
            v46 = *((_QWORD *)v36 + 4);
            if ( &v45[v46] && !v45 )
              goto LABEL_84;
            if ( (unsigned __int64)v46 > 0xF )
              break;
            if ( v46 == 1 )
            {
              *(_BYTE *)(v43 + 40) = *v45;
            }
            else if ( v46 )
            {
              goto LABEL_48;
            }
LABEL_38:
            *(_QWORD *)(v43 + 32) = v46;
            v44[v46] = 0;
            *(_BYTE *)(v43 + 56) = v36[56];
            ++*(_DWORD *)(v37 + 536);
LABEL_39:
            v34 += 64;
            if ( v35 == v34 )
              goto LABEL_6;
          }
          v81 = *((_BYTE **)v36 + 3);
          if ( v46 < 0 )
            goto LABEL_85;
          v44 = (_BYTE *)operator new(v46 + 1);
          *(_QWORD *)(v43 + 40) = v46;
          v45 = v81;
          *(_QWORD *)(v43 + 24) = v44;
LABEL_48:
          memcpy(v44, v45, v46);
          v44 = *(_BYTE **)(v43 + 24);
          goto LABEL_38;
        }
      }
      goto LABEL_6;
    }
    v15 = a9;
    v16 = &a9[64 * a10];
    if ( a9 == v16 )
    {
LABEL_6:
      sub_15F7200(v85);
      return;
    }
    while ( 1 )
    {
      v17 = v15;
      if ( !*(_DWORD *)v15 || !*((_DWORD *)v15 + 1) )
        goto LABEL_21;
      v18 = v87;
      if ( v87 )
      {
        v19 = *(unsigned int *)(v87 + 536);
        v20 = *(_QWORD *)(v87 + 528);
        v21 = *(unsigned int *)(v87 + 540);
        v22 = v19 + 1;
        v23 = v20 + (v19 << 6);
      }
      else
      {
        v47 = v88;
        v48 = *(_DWORD *)(v88 + 14976);
        if ( v48 )
        {
          v49 = (unsigned int)(v48 - 1);
          *(_DWORD *)(v88 + 14976) = v49;
          v18 = *(_QWORD *)(v47 + 8 * v49 + 14848);
          v50 = *(unsigned int *)(v18 + 536);
          *(_BYTE *)v18 = 0;
          v51 = *(_QWORD *)(v18 + 528);
          *(_DWORD *)(v18 + 424) = 0;
          v50 <<= 6;
          v20 = v51 + v50;
          if ( v51 != v51 + v50 )
          {
            do
            {
              while ( 1 )
              {
                v20 -= 64LL;
                v52 = *(void **)(v20 + 24);
                if ( v52 == (void *)(v20 + 40) )
                  break;
                operator delete(v52);
                if ( v51 == v20 )
                  goto LABEL_53;
              }
            }
            while ( v51 != v20 );
LABEL_53:
            v20 = *(_QWORD *)(v18 + 528);
          }
          *(_DWORD *)(v18 + 536) = 0;
          v21 = *(unsigned int *)(v18 + 540);
        }
        else
        {
          v18 = operator new(0x3A0u);
          *(_BYTE *)v18 = 0;
          *(_QWORD *)(v18 + 96) = v18 + 112;
          v20 = v18 + 544;
          *(_QWORD *)(v18 + 128) = v18 + 144;
          *(_QWORD *)(v18 + 160) = v18 + 176;
          *(_QWORD *)(v18 + 192) = v18 + 208;
          *(_QWORD *)(v18 + 224) = v18 + 240;
          *(_QWORD *)(v18 + 256) = v18 + 272;
          *(_QWORD *)(v18 + 288) = v18 + 304;
          *(_QWORD *)(v18 + 320) = v18 + 336;
          *(_QWORD *)(v18 + 352) = v18 + 368;
          *(_QWORD *)(v18 + 384) = v18 + 400;
          *(_QWORD *)(v18 + 416) = v18 + 432;
          *(_QWORD *)(v18 + 104) = 0;
          *(_BYTE *)(v18 + 112) = 0;
          *(_QWORD *)(v18 + 136) = 0;
          *(_BYTE *)(v18 + 144) = 0;
          *(_QWORD *)(v18 + 168) = 0;
          *(_BYTE *)(v18 + 176) = 0;
          *(_QWORD *)(v18 + 200) = 0;
          *(_BYTE *)(v18 + 208) = 0;
          *(_QWORD *)(v18 + 232) = 0;
          *(_BYTE *)(v18 + 240) = 0;
          *(_QWORD *)(v18 + 264) = 0;
          *(_BYTE *)(v18 + 272) = 0;
          *(_QWORD *)(v18 + 296) = 0;
          *(_BYTE *)(v18 + 304) = 0;
          *(_QWORD *)(v18 + 328) = 0;
          *(_BYTE *)(v18 + 336) = 0;
          *(_QWORD *)(v18 + 360) = 0;
          *(_BYTE *)(v18 + 368) = 0;
          *(_QWORD *)(v18 + 392) = 0;
          *(_BYTE *)(v18 + 400) = 0;
          *(_QWORD *)(v18 + 424) = 0x800000000LL;
          *(_QWORD *)(v18 + 528) = v18 + 544;
          *(_QWORD *)(v18 + 536) = 0x600000000LL;
          v21 = 6;
        }
        v87 = v18;
        v23 = v20;
        v22 = 1;
      }
      if ( v22 > v21 )
      {
        if ( v20 > (unsigned __int64)v15 || v23 <= (unsigned __int64)v15 )
        {
          v64 = sub_2237400(v18 + 528, v18 + 544, v22, 64, &v84);
          sub_9EF810((__int64 *)(v18 + 528), v64);
          v65 = *(void **)(v18 + 528);
          if ( v65 == (void *)(v18 + 544) )
          {
            *(_DWORD *)(v18 + 540) = v84;
            v75 = *(unsigned int *)(v18 + 536);
            *(_QWORD *)(v18 + 528) = v64;
            v23 = (v75 << 6) + v64;
          }
          else
          {
            srcb = v84;
            free(v65);
            *(_QWORD *)(v18 + 528) = v64;
            *(_DWORD *)(v18 + 540) = srcb;
            v23 = ((unsigned __int64)*(unsigned int *)(v18 + 536) << 6) + v64;
          }
        }
        else
        {
          src = (void *)sub_2237400(v18 + 528, v18 + 544, v22, 64, &v84);
          sub_9EF810((__int64 *)(v18 + 528), (__int64)src);
          v60 = v84;
          v61 = *(void **)(v18 + 528);
          v62 = src;
          if ( v61 != (void *)(v18 + 544) )
          {
            free(v61);
            v62 = src;
          }
          *(_DWORD *)(v18 + 540) = v60;
          v17 = &v15[(_QWORD)v62 - v20];
          v63 = *(unsigned int *)(v18 + 536);
          *(_QWORD *)(v18 + 528) = v62;
          v23 = (unsigned __int64)v62 + 64 * v63;
        }
      }
      *(_QWORD *)v23 = *(_QWORD *)v17;
      *(_DWORD *)(v23 + 8) = *((_DWORD *)v17 + 2);
      *(_QWORD *)(v23 + 12) = *(_QWORD *)(v17 + 12);
      *(_DWORD *)(v23 + 20) = *((_DWORD *)v17 + 5);
      v24 = (_BYTE *)(v23 + 40);
      *(_QWORD *)(v23 + 24) = v23 + 40;
      v25 = *((_BYTE **)v17 + 3);
      v26 = *((_QWORD *)v17 + 4);
      if ( &v25[v26] && !v25 )
LABEL_84:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v26 > 0xF )
        break;
      if ( v26 == 1 )
      {
        *(_BYTE *)(v23 + 40) = *v25;
      }
      else if ( v26 )
      {
        goto LABEL_43;
      }
LABEL_20:
      *(_QWORD *)(v23 + 32) = v26;
      v24[v26] = 0;
      *(_BYTE *)(v23 + 56) = v17[56];
      ++*(_DWORD *)(v18 + 536);
LABEL_21:
      v15 += 64;
      if ( v16 == v15 )
        goto LABEL_6;
    }
    if ( v26 < 0 )
LABEL_85:
      std::__throw_length_error("basic_string::_M_create");
    srca = *((_BYTE **)v17 + 3);
    v24 = (_BYTE *)operator new(v26 + 1);
    *(_QWORD *)(v23 + 40) = v26;
    v25 = srca;
    *(_QWORD *)(v23 + 24) = v24;
LABEL_43:
    memcpy(v24, v25, v26);
    v24 = *(_BYTE **)(v23 + 24);
    goto LABEL_20;
  }
  sub_168CDE0((__int64)v85, (__int64 *)(a1 + 8), a5, a4, 0);
  sub_15884C0((__int64)v85, &a8);
  sub_16D60F0((__int64)v85, (__int64)&a9);
  sub_15F7200(v85);
}
