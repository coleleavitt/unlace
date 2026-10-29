void __fastcall sub_16DE8D0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __int64 a7,
        __int64 a8,
        int a9,
        char *a10,
        __int64 a11)
{
  unsigned int v11; // r14d
  __int64 *v13; // rbx
  unsigned int v15; // eax
  char *v16; // rbx
  char *v17; // r14
  char *v18; // r13
  __int64 v19; // r15
  __int64 v20; // r12
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r12
  _BYTE *v25; // rax
  _BYTE *v26; // rsi
  signed __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  char *v42; // rbx
  char *v43; // r15
  char *v44; // r14
  __int64 v45; // r12
  __int64 v46; // rcx
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rbp
  _BYTE *v52; // rax
  _BYTE *v53; // rsi
  signed __int64 v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r12
  void *v67; // rdi
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // rbp
  void *v74; // rdi
  int v75; // r13d
  void *v76; // rdi
  void *v77; // rax
  __int64 v78; // r12
  __int64 v79; // r12
  void *v80; // rdi
  char *v81; // r14
  int v82; // edx
  void *v83; // rdi
  void *v84; // rax
  __int64 v85; // rbp
  int v86; // edx
  void *v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // [rsp+0h] [rbp-108h]
  _BYTE *srca; // [rsp+8h] [rbp-100h]
  void *src; // [rsp+8h] [rbp-100h]
  int srcb; // [rsp+8h] [rbp-100h]
  _BYTE *v94; // [rsp+10h] [rbp-F8h]
  void *v95; // [rsp+10h] [rbp-F8h]
  int v96; // [rsp+10h] [rbp-F8h]
  int v97; // [rsp+10h] [rbp-F8h]
  void *v98; // [rsp+20h] [rbp-E8h]
  __int64 v99; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v100; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v101[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+50h] [rbp-B8h]
  __int64 v103; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v104; // [rsp+68h] [rbp-A0h]
  char v105; // [rsp+B8h] [rbp-50h]
  unsigned int v106; // [rsp+C0h] [rbp-48h]
  char v107; // [rsp+C4h] [rbp-44h]

  v11 = a5;
  v13 = (__int64 *)(a1 + 8);
  if ( !(_BYTE)a2 )
  {
    v15 = sub_C00A40(a3, a2, a3, a4, a5);
    sub_168CDE0((__int64)v101, v13, v15, a4, 0);
    v100 = sub_EEC8C0(a3, (__int64)v13, a6);
    sub_1587DB0((__int64)v101, &v100);
    sub_15F7200(v101);
    sub_168B9F0((__int64)v101, v13, v11, 0x1768u, 0);
    if ( v105 )
    {
      sub_AEC610(&v103, &a8);
    }
    else
    {
      if ( !v107 )
      {
LABEL_4:
        sub_15F7200(v101);
        return;
      }
      v57 = sub_168B9E0(v101);
      v60 = v102;
      if ( v102 )
        v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
      v100 = v60;
      v61 = sub_1587BC0(v57, &v100, v55, v56, v58, v59);
      sub_AEC610((__int64 *)(*v61 + 32LL * v106 + 8), &a8);
    }
    if ( v105 )
    {
      v16 = a10;
      v17 = &a10[64 * a11];
      if ( a10 == v17 )
        goto LABEL_4;
      while ( 1 )
      {
        v18 = v16;
        if ( !*(_DWORD *)v16 || !*((_DWORD *)v16 + 1) )
          goto LABEL_19;
        v19 = v103;
        if ( v103 )
        {
          v20 = *(unsigned int *)(v103 + 536);
          v21 = *(_QWORD *)(v103 + 528);
          v22 = *(unsigned int *)(v103 + 540);
          v23 = v20 + 1;
          v24 = v21 + (v20 << 6);
        }
        else
        {
          v62 = v104;
          v63 = *(_DWORD *)(v104 + 14976);
          if ( v63 )
          {
            v64 = (unsigned int)(v63 - 1);
            *(_DWORD *)(v104 + 14976) = v64;
            v19 = *(_QWORD *)(v62 + 8 * v64 + 14848);
            v65 = *(unsigned int *)(v19 + 536);
            *(_BYTE *)v19 = 0;
            v66 = *(_QWORD *)(v19 + 528);
            *(_DWORD *)(v19 + 424) = 0;
            v65 <<= 6;
            v21 = v66 + v65;
            if ( v66 != v66 + v65 )
            {
              do
              {
                while ( 1 )
                {
                  v21 -= 64LL;
                  v67 = *(void **)(v21 + 24);
                  if ( v67 == (void *)(v21 + 40) )
                    break;
                  operator delete(v67);
                  if ( v66 == v21 )
                    goto LABEL_62;
                }
              }
              while ( v66 != v21 );
LABEL_62:
              v21 = *(_QWORD *)(v19 + 528);
            }
            *(_DWORD *)(v19 + 536) = 0;
            v22 = *(unsigned int *)(v19 + 540);
          }
          else
          {
            v19 = operator new(0x3A0u);
            *(_BYTE *)v19 = 0;
            *(_QWORD *)(v19 + 96) = v19 + 112;
            v21 = v19 + 544;
            *(_QWORD *)(v19 + 128) = v19 + 144;
            *(_QWORD *)(v19 + 160) = v19 + 176;
            *(_QWORD *)(v19 + 192) = v19 + 208;
            *(_QWORD *)(v19 + 224) = v19 + 240;
            *(_QWORD *)(v19 + 256) = v19 + 272;
            *(_QWORD *)(v19 + 288) = v19 + 304;
            *(_QWORD *)(v19 + 320) = v19 + 336;
            *(_QWORD *)(v19 + 352) = v19 + 368;
            *(_QWORD *)(v19 + 384) = v19 + 400;
            *(_QWORD *)(v19 + 416) = v19 + 432;
            *(_QWORD *)(v19 + 104) = 0;
            *(_BYTE *)(v19 + 112) = 0;
            *(_QWORD *)(v19 + 136) = 0;
            *(_BYTE *)(v19 + 144) = 0;
            *(_QWORD *)(v19 + 168) = 0;
            *(_BYTE *)(v19 + 176) = 0;
            *(_QWORD *)(v19 + 200) = 0;
            *(_BYTE *)(v19 + 208) = 0;
            *(_QWORD *)(v19 + 232) = 0;
            *(_BYTE *)(v19 + 240) = 0;
            *(_QWORD *)(v19 + 264) = 0;
            *(_BYTE *)(v19 + 272) = 0;
            *(_QWORD *)(v19 + 296) = 0;
            *(_BYTE *)(v19 + 304) = 0;
            *(_QWORD *)(v19 + 328) = 0;
            *(_BYTE *)(v19 + 336) = 0;
            *(_QWORD *)(v19 + 360) = 0;
            *(_BYTE *)(v19 + 368) = 0;
            *(_QWORD *)(v19 + 392) = 0;
            *(_BYTE *)(v19 + 400) = 0;
            *(_QWORD *)(v19 + 424) = 0x800000000LL;
            *(_QWORD *)(v19 + 528) = v19 + 544;
            *(_QWORD *)(v19 + 536) = 0x600000000LL;
            v22 = 6;
          }
          v103 = v19;
          v24 = v21;
          v23 = 1;
        }
        if ( v23 > v22 )
        {
          if ( v21 > (unsigned __int64)v16 || v24 <= (unsigned __int64)v16 )
          {
            v79 = sub_2237400(v19 + 528, v19 + 544, v23, 64, &v100);
            sub_9EF810((__int64 *)(v19 + 528), v79);
            v80 = *(void **)(v19 + 528);
            if ( v80 == (void *)(v19 + 544) )
            {
              *(_DWORD *)(v19 + 540) = v100;
              v89 = *(unsigned int *)(v19 + 536);
              *(_QWORD *)(v19 + 528) = v79;
              v24 = (v89 << 6) + v79;
            }
            else
            {
              srcb = v100;
              free(v80);
              *(_QWORD *)(v19 + 528) = v79;
              *(_DWORD *)(v19 + 540) = srcb;
              v24 = ((unsigned __int64)*(unsigned int *)(v19 + 536) << 6) + v79;
            }
          }
          else
          {
            src = (void *)sub_2237400(v19 + 528, v19 + 544, v23, 64, &v100);
            sub_9EF810((__int64 *)(v19 + 528), (__int64)src);
            v75 = v100;
            v76 = *(void **)(v19 + 528);
            v77 = src;
            if ( v76 != (void *)(v19 + 544) )
            {
              free(v76);
              v77 = src;
            }
            *(_DWORD *)(v19 + 540) = v75;
            v18 = &v16[(_QWORD)v77 - v21];
            v78 = *(unsigned int *)(v19 + 536);
            *(_QWORD *)(v19 + 528) = v77;
            v24 = (unsigned __int64)v77 + 64 * v78;
          }
        }
        *(_QWORD *)v24 = *(_QWORD *)v18;
        *(_DWORD *)(v24 + 8) = *((_DWORD *)v18 + 2);
        *(_QWORD *)(v24 + 12) = *(_QWORD *)(v18 + 12);
        *(_DWORD *)(v24 + 20) = *((_DWORD *)v18 + 5);
        v25 = (_BYTE *)(v24 + 40);
        *(_QWORD *)(v24 + 24) = v24 + 40;
        v26 = *((_BYTE **)v18 + 3);
        v27 = *((_QWORD *)v18 + 4);
        if ( &v26[v27] && !v26 )
          goto LABEL_95;
        if ( (unsigned __int64)v27 > 0xF )
          break;
        if ( v27 == 1 )
        {
          *(_BYTE *)(v24 + 40) = *v26;
        }
        else if ( v27 )
        {
          goto LABEL_51;
        }
LABEL_18:
        *(_QWORD *)(v24 + 32) = v27;
        v25[v27] = 0;
        *(_BYTE *)(v24 + 56) = v18[56];
        ++*(_DWORD *)(v19 + 536);
LABEL_19:
        v16 += 64;
        if ( v17 == v16 )
          goto LABEL_4;
      }
      if ( v27 < 0 )
        goto LABEL_94;
      srca = *((_BYTE **)v18 + 3);
      v25 = (_BYTE *)operator new(v27 + 1);
      *(_QWORD *)(v24 + 40) = v27;
      v26 = srca;
      *(_QWORD *)(v24 + 24) = v25;
LABEL_51:
      memcpy(v25, v26, v27);
      v25 = *(_BYTE **)(v24 + 24);
      goto LABEL_18;
    }
    if ( !v107 )
      goto LABEL_4;
    v37 = sub_168B9E0(v101);
    v40 = v102;
    if ( v102 )
      v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
    v99 = v40;
    v41 = sub_1587BC0(v37, &v99, v35, v36, v38, v39);
    v42 = a10;
    v90 = *v41 + 32LL * v106;
    v43 = &a10[64 * a11];
    if ( v43 == a10 )
      goto LABEL_4;
    while ( 1 )
    {
      v44 = v42;
      if ( !*(_DWORD *)v42 || !*((_DWORD *)v42 + 1) )
        goto LABEL_44;
      v45 = *(_QWORD *)(v90 + 8);
      if ( v45 )
      {
        v46 = *(unsigned int *)(v45 + 536);
        v47 = *(unsigned int *)(v45 + 540);
        v48 = v46 + 1;
        v49 = v46 << 6;
      }
      else
      {
        v68 = *(_QWORD *)(v90 + 16);
        v69 = *(_DWORD *)(v68 + 14976);
        if ( v69 )
        {
          v70 = (unsigned int)(v69 - 1);
          *(_DWORD *)(v68 + 14976) = v70;
          v45 = *(_QWORD *)(v68 + 8 * v70 + 14848);
          v71 = *(unsigned int *)(v45 + 536);
          v72 = *(_QWORD *)(v45 + 528);
          *(_BYTE *)v45 = 0;
          *(_DWORD *)(v45 + 424) = 0;
          v73 = v72 + (v71 << 6);
          while ( v72 != v73 )
          {
            while ( 1 )
            {
              v73 -= 64;
              v74 = *(void **)(v73 + 24);
              if ( v74 == (void *)(v73 + 40) )
                break;
              operator delete(v74);
              if ( v72 == v73 )
                goto LABEL_69;
            }
          }
LABEL_69:
          *(_DWORD *)(v45 + 536) = 0;
          v47 = *(unsigned int *)(v45 + 540);
        }
        else
        {
          v47 = 6;
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
          *(_QWORD *)(v45 + 416) = v45 + 432;
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
          *(_QWORD *)(v45 + 424) = 0x800000000LL;
          *(_QWORD *)(v45 + 528) = v45 + 544;
          *(_QWORD *)(v45 + 536) = 0x600000000LL;
        }
        v49 = 0;
        v48 = 1;
        *(_QWORD *)(v90 + 8) = v45;
      }
      v50 = *(_QWORD *)(v45 + 528);
      v51 = v50 + v49;
      if ( v48 > v47 )
      {
        if ( v50 > (unsigned __int64)v42 || v51 <= (unsigned __int64)v42 )
        {
          v85 = sub_2237400(v45 + 528, v45 + 544, v48, 64, &v100);
          sub_9EF810((__int64 *)(v45 + 528), v85);
          v86 = v100;
          v87 = *(void **)(v45 + 528);
          if ( v87 == (void *)(v45 + 544) )
          {
            v88 = *(unsigned int *)(v45 + 536);
            *(_QWORD *)(v45 + 528) = v85;
            *(_DWORD *)(v45 + 540) = v86;
          }
          else
          {
            v97 = v100;
            free(v87);
            v88 = *(unsigned int *)(v45 + 536);
            *(_QWORD *)(v45 + 528) = v85;
            *(_DWORD *)(v45 + 540) = v97;
          }
          v51 = (v88 << 6) + v85;
        }
        else
        {
          v81 = &v42[-v50];
          v95 = (void *)sub_2237400(v45 + 528, v45 + 544, v48, 64, &v100);
          sub_9EF810((__int64 *)(v45 + 528), (__int64)v95);
          v82 = v100;
          v83 = *(void **)(v45 + 528);
          v84 = v95;
          if ( v83 == (void *)(v45 + 544) )
          {
            *(_QWORD *)(v45 + 528) = v95;
            *(_DWORD *)(v45 + 540) = v82;
          }
          else
          {
            v98 = v95;
            v96 = v100;
            free(v83);
            v84 = v98;
            *(_QWORD *)(v45 + 528) = v98;
            *(_DWORD *)(v45 + 540) = v96;
          }
          v44 = &v81[(_QWORD)v84];
          v51 = (unsigned __int64)v84 + 64 * (unsigned __int64)*(unsigned int *)(v45 + 536);
        }
      }
      *(_QWORD *)v51 = *(_QWORD *)v44;
      *(_DWORD *)(v51 + 8) = *((_DWORD *)v44 + 2);
      *(_QWORD *)(v51 + 12) = *(_QWORD *)(v44 + 12);
      *(_DWORD *)(v51 + 20) = *((_DWORD *)v44 + 5);
      v52 = (_BYTE *)(v51 + 40);
      *(_QWORD *)(v51 + 24) = v51 + 40;
      v53 = *((_BYTE **)v44 + 3);
      v54 = *((_QWORD *)v44 + 4);
      if ( &v53[v54] && !v53 )
LABEL_95:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v54 > 0xF )
        break;
      if ( v54 == 1 )
      {
        *(_BYTE *)(v51 + 40) = *v53;
      }
      else if ( v54 )
      {
        goto LABEL_57;
      }
LABEL_43:
      *(_QWORD *)(v51 + 32) = v54;
      v52[v54] = 0;
      *(_BYTE *)(v51 + 56) = v44[56];
      ++*(_DWORD *)(v45 + 536);
LABEL_44:
      v42 += 64;
      if ( v43 == v42 )
        goto LABEL_4;
    }
    v94 = *((_BYTE **)v44 + 3);
    if ( v54 < 0 )
LABEL_94:
      std::__throw_length_error("basic_string::_M_create");
    v52 = (_BYTE *)operator new(v54 + 1);
    *(_QWORD *)(v51 + 40) = v54;
    v53 = v94;
    *(_QWORD *)(v51 + 24) = v52;
LABEL_57:
    memcpy(v52, v53, v54);
    v52 = *(_BYTE **)(v51 + 24);
    goto LABEL_43;
  }
  sub_168CDE0((__int64)v101, (__int64 *)(a1 + 8), a5, a4, 0);
  if ( v105 )
  {
    sub_AEC610(&v103, &a8);
  }
  else if ( v107 )
  {
    v30 = sub_168B9E0(v101);
    v33 = v102;
    if ( v102 )
      v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
    v100 = v33;
    v34 = sub_1587BC0(v30, &v100, v28, v29, v31, v32);
    sub_AEC610((__int64 *)(*v34 + 32LL * v106 + 8), &a8);
  }
  sub_16D60F0((__int64)v101, (__int64)&a10);
  sub_15F7200(v101);
}
