void __fastcall sub_162EF90(_QWORD *a1, __int64 a2, const __m128i *a3)
{
  unsigned int v5; // eax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 (*v13)(); // rax
  __int64 v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __m128i *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned __int8 *v35; // rbx
  int v36; // r13d
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  char *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  char *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rax
  int v62; // r14d
  __int64 v63; // rbp
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbp
  __int64 v80; // r14
  __int64 v81; // rbp
  void *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // r13
  __int64 v85; // r15
  __int64 v86; // r13
  void *v87; // rdi
  int v88; // [rsp+0h] [rbp-F8h] BYREF
  int v89; // [rsp+4h] [rbp-F4h] BYREF
  __int64 v90; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v91; // [rsp+10h] [rbp-E8h] BYREF
  int v92; // [rsp+18h] [rbp-E0h]
  char *v93; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v94; // [rsp+28h] [rbp-D0h]
  _BYTE v95[16]; // [rsp+30h] [rbp-C8h] BYREF
  char *v96; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v97; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v98; // [rsp+58h] [rbp-A0h]
  char v99; // [rsp+A8h] [rbp-50h]
  unsigned int v100; // [rsp+B0h] [rbp-48h]
  char v101; // [rsp+B4h] [rbp-44h]

  v5 = a3[3].m128i_u16[4];
  if ( v5 > 1 )
  {
    sub_168B9F0(v95, a1, a3[1].m128i_u32[2], 3229, 0);
    if ( v99 )
    {
      sub_AE9DF0(&v97, (__int64)a3, 0x10u);
    }
    else
    {
      if ( !v101 )
        goto LABEL_15;
      v43 = sub_168B9E0(v95);
      v46 = v96;
      if ( v96 )
        v46 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v96 + 32LL))(v96);
      v93 = v46;
      v47 = sub_1587BC0(v43, (__int64 *)&v93, v41, v42, v44, v45);
      sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v100 + 8), (__int64)a3, 0x10u);
    }
    if ( v99 )
    {
      sub_AE9DF0(&v97, 1, 2u);
    }
    else if ( v101 )
    {
      v50 = sub_168B9E0(v95);
      v53 = v96;
      if ( v96 )
        v53 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v96 + 32LL))(v96);
      v93 = v53;
      v54 = sub_1587BC0(v50, (__int64 *)&v93, v48, v49, v51, v52);
      sub_AE9DF0((unsigned __int8 **)(*v54 + 32LL * v100 + 8), 1, 2u);
    }
    goto LABEL_15;
  }
  v88 = 0;
  v93 = nullptr;
  v94 = 0;
  if ( v5 )
  {
    if ( !(unsigned __int8)sub_181EB00(*a1, a3, 0, &v93, &v88) )
      return;
  }
  else
  {
    v93 = (char *)&byte_22F0C30;
  }
  v7 = v94;
  if ( !(unsigned __int8)sub_B07490((__int64)v93, v94, &v89) )
  {
    sub_168B9F0(v95, a1, a3[1].m128i_u32[2], 6592, 0);
    if ( v99 )
    {
      sub_AE9DF0(&v97, (__int64)a3, 0x10u);
      goto LABEL_30;
    }
    if ( v101 )
    {
      v30 = sub_168B9E0(v95);
      v33 = (__int64)v96;
      if ( v96 )
        v33 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v96 + 32LL))(v96);
      v91 = v33;
      v34 = sub_1587BC0(v30, &v91, v28, v29, v31, v32);
      sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v100 + 8), (__int64)a3, 0x10u);
LABEL_30:
      if ( v99 )
      {
        sub_AEC220(&v97, v93, v94);
      }
      else
      {
        if ( !v101 )
          goto LABEL_15;
        v67 = sub_168B9E0(v95);
        v70 = (__int64)v96;
        if ( v96 )
          v70 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v96 + 32LL))(v96);
        v91 = v70;
        v71 = sub_1587BC0(v67, &v91, v65, v66, v68, v69);
        sub_AEC220((unsigned __int8 **)(*v71 + 32LL * v100 + 8), v93, v94);
      }
      if ( v99 )
      {
        v35 = v97;
        v36 = v88;
        if ( v97 )
        {
          v37 = *((unsigned int *)v97 + 106);
          v38 = *((unsigned int *)v97 + 107);
          v39 = v37 + 1;
        }
        else
        {
          v72 = v98;
          v73 = *(_DWORD *)(v98 + 14976);
          if ( v73 )
          {
            v78 = (unsigned int)(v73 - 1);
            *(_DWORD *)(v98 + 14976) = v78;
            v35 = *(unsigned __int8 **)(v72 + 8 * v78 + 14848);
            v79 = *((unsigned int *)v35 + 134);
            *v35 = 0;
            v80 = *((_QWORD *)v35 + 66);
            *((_DWORD *)v35 + 106) = 0;
            v81 = v80 + (v79 << 6);
            while ( v80 != v81 )
            {
              while ( 1 )
              {
                v81 -= 64;
                v82 = *(void **)(v81 + 24);
                if ( v82 == (void *)(v81 + 40) )
                  break;
                operator delete(v82);
                if ( v80 == v81 )
                  goto LABEL_74;
              }
            }
LABEL_74:
            v37 = *((unsigned int *)v35 + 106);
            v38 = *((unsigned int *)v35 + 107);
            *((_DWORD *)v35 + 134) = 0;
            v39 = v37 + 1;
          }
          else
          {
            v74 = operator new(0x3A0u);
            v38 = 8;
            v39 = 1;
            v35 = (unsigned __int8 *)v74;
            *(_BYTE *)v74 = 0;
            *(_QWORD *)(v74 + 96) = v74 + 112;
            *(_QWORD *)(v74 + 128) = v74 + 144;
            *(_QWORD *)(v74 + 160) = v74 + 176;
            *(_QWORD *)(v74 + 192) = v74 + 208;
            *(_QWORD *)(v74 + 224) = v74 + 240;
            *(_QWORD *)(v74 + 256) = v74 + 272;
            *(_QWORD *)(v74 + 288) = v74 + 304;
            *(_QWORD *)(v74 + 320) = v74 + 336;
            *(_QWORD *)(v74 + 352) = v74 + 368;
            *(_QWORD *)(v74 + 384) = v74 + 400;
            *(_QWORD *)(v74 + 416) = v74 + 432;
            *(_QWORD *)(v74 + 104) = 0;
            *(_BYTE *)(v74 + 112) = 0;
            *(_QWORD *)(v74 + 136) = 0;
            *(_BYTE *)(v74 + 144) = 0;
            *(_QWORD *)(v74 + 168) = 0;
            *(_BYTE *)(v74 + 176) = 0;
            *(_QWORD *)(v74 + 200) = 0;
            *(_BYTE *)(v74 + 208) = 0;
            *(_QWORD *)(v74 + 232) = 0;
            *(_BYTE *)(v74 + 240) = 0;
            *(_QWORD *)(v74 + 264) = 0;
            *(_BYTE *)(v74 + 272) = 0;
            *(_QWORD *)(v74 + 296) = 0;
            *(_BYTE *)(v74 + 304) = 0;
            *(_QWORD *)(v74 + 328) = 0;
            *(_BYTE *)(v74 + 336) = 0;
            *(_QWORD *)(v74 + 360) = 0;
            *(_BYTE *)(v74 + 368) = 0;
            *(_QWORD *)(v74 + 392) = 0;
            *(_BYTE *)(v74 + 400) = 0;
            *(_QWORD *)(v74 + 424) = 0x800000000LL;
            *(_QWORD *)(v74 + 528) = v74 + 544;
            *(_QWORD *)(v74 + 536) = 0x600000000LL;
            v37 = 0;
          }
          v97 = v35;
        }
        LODWORD(v91) = v36;
        HIDWORD(v91) = v36;
        LOBYTE(v92) = 1;
        if ( v39 <= v38 )
          goto LABEL_36;
      }
      else
      {
        if ( !v101 )
          goto LABEL_15;
        v57 = sub_168B9E0(v95);
        v60 = (__int64)v96;
        if ( v96 )
          v60 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v96 + 32LL))(v96);
        v90 = v60;
        v61 = sub_1587BC0(v57, &v90, v55, v56, v58, v59);
        v62 = v88;
        v63 = *v61 + 32LL * v100;
        v35 = *(unsigned __int8 **)(v63 + 8);
        if ( v35 )
        {
          v37 = *((unsigned int *)v35 + 106);
          v64 = *((unsigned int *)v35 + 107);
          v39 = v37 + 1;
        }
        else
        {
          v75 = *(_QWORD *)(v63 + 16);
          v76 = *(_DWORD *)(v75 + 14976);
          if ( v76 )
          {
            v83 = (unsigned int)(v76 - 1);
            *(_DWORD *)(v75 + 14976) = v83;
            v35 = *(unsigned __int8 **)(v75 + 8 * v83 + 14848);
            v84 = *((unsigned int *)v35 + 134);
            *v35 = 0;
            v85 = *((_QWORD *)v35 + 66);
            *((_DWORD *)v35 + 106) = 0;
            v86 = v85 + (v84 << 6);
            while ( v85 != v86 )
            {
              while ( 1 )
              {
                v86 -= 64;
                v87 = *(void **)(v86 + 24);
                if ( v87 == (void *)(v86 + 40) )
                  break;
                operator delete(v87);
                if ( v85 == v86 )
                  goto LABEL_79;
              }
            }
LABEL_79:
            v37 = *((unsigned int *)v35 + 106);
            v64 = *((unsigned int *)v35 + 107);
            *((_DWORD *)v35 + 134) = 0;
            v39 = v37 + 1;
          }
          else
          {
            v77 = operator new(0x3A0u);
            v64 = 8;
            v39 = 1;
            v35 = (unsigned __int8 *)v77;
            *(_BYTE *)v77 = 0;
            *(_QWORD *)(v77 + 96) = v77 + 112;
            *(_QWORD *)(v77 + 128) = v77 + 144;
            *(_QWORD *)(v77 + 160) = v77 + 176;
            *(_QWORD *)(v77 + 192) = v77 + 208;
            *(_QWORD *)(v77 + 224) = v77 + 240;
            *(_QWORD *)(v77 + 256) = v77 + 272;
            *(_QWORD *)(v77 + 288) = v77 + 304;
            *(_QWORD *)(v77 + 320) = v77 + 336;
            *(_QWORD *)(v77 + 352) = v77 + 368;
            *(_QWORD *)(v77 + 384) = v77 + 400;
            *(_QWORD *)(v77 + 416) = v77 + 432;
            *(_QWORD *)(v77 + 104) = 0;
            *(_BYTE *)(v77 + 112) = 0;
            *(_QWORD *)(v77 + 136) = 0;
            *(_BYTE *)(v77 + 144) = 0;
            *(_QWORD *)(v77 + 168) = 0;
            *(_BYTE *)(v77 + 176) = 0;
            *(_QWORD *)(v77 + 200) = 0;
            *(_BYTE *)(v77 + 208) = 0;
            *(_QWORD *)(v77 + 232) = 0;
            *(_BYTE *)(v77 + 240) = 0;
            *(_QWORD *)(v77 + 264) = 0;
            *(_BYTE *)(v77 + 272) = 0;
            *(_QWORD *)(v77 + 296) = 0;
            *(_BYTE *)(v77 + 304) = 0;
            *(_QWORD *)(v77 + 328) = 0;
            *(_BYTE *)(v77 + 336) = 0;
            *(_QWORD *)(v77 + 360) = 0;
            *(_BYTE *)(v77 + 368) = 0;
            *(_QWORD *)(v77 + 392) = 0;
            *(_BYTE *)(v77 + 400) = 0;
            *(_QWORD *)(v77 + 424) = 0x800000000LL;
            *(_QWORD *)(v77 + 528) = v77 + 544;
            *(_QWORD *)(v77 + 536) = 0x600000000LL;
            v37 = 0;
          }
          *(_QWORD *)(v63 + 8) = v35;
        }
        LODWORD(v91) = v62;
        HIDWORD(v91) = v62;
        LOBYTE(v92) = 1;
        if ( v39 <= v64 )
          goto LABEL_36;
      }
      sub_2237220(v35 + 416, v35 + 432, v39, 12);
      v37 = *((unsigned int *)v35 + 106);
LABEL_36:
      v40 = *((_QWORD *)v35 + 52) + 12 * v37;
      *(_QWORD *)v40 = v91;
      *(_DWORD *)(v40 + 8) = v92;
      ++*((_DWORD *)v35 + 106);
    }
LABEL_15:
    sub_15F7200(v95);
    return;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v24 = sub_B8C3D0(a2, v7, v8, v9, v10, v11);
    v25 = *v24;
    v26 = *v24 + 8LL * *((unsigned int *)v24 + 2);
    if ( *v24 >= v26 )
    {
      if ( v25 != v26 )
      {
        while ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 118 )
        {
          v26 += 8LL;
          if ( v25 == v26 )
            goto LABEL_6;
        }
        goto LABEL_7;
      }
    }
    else
    {
      v27 = *v24;
      while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 118 )
      {
        v27 += 8LL;
        if ( v26 == v27 )
          goto LABEL_6;
      }
      if ( v27 != v26 )
        goto LABEL_7;
    }
  }
LABEL_6:
  v12 = *(_QWORD *)(sub_168B6C0(a1) + 17448);
  v13 = *(__int64 (**)())(*(_QWORD *)v12 + 584LL);
  if ( v13 != sub_A55EE0 && ((unsigned __int8 (__fastcall *)(__int64, const char *, __int64))v13)(v12, "vfp", 3) )
  {
    sub_168B9F0(v95, a1, *(unsigned int *)(a2 + 24), 6519, 0);
    sub_15F7200(v95);
  }
LABEL_7:
  v14 = sub_168B6C0(a1);
  v15 = (_QWORD *)sub_168B6C0(a1);
  v18 = v15[294];
  v15[304] += 48LL;
  v19 = (__m128i *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15[295] >= (unsigned __int64)&v19[3] && v18 )
    v15[294] = v19 + 3;
  else
    v19 = (__m128i *)sub_986170((__int64)(v15 + 294), 48, 48, 3, v16, v17);
  sub_B07460(v19, v14, a3, v89);
  sub_B8CC60(a2, (__int64)v19, v20, v21, v22, v23);
}
