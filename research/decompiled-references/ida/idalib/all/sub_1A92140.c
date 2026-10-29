void __fastcall sub_1A92140(__int64 *a1, unsigned __int64 a2, __int64 a3, __m128i a4, double a5)
{
  unsigned __int64 v7; // rax
  unsigned __int16 v8; // dx
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rsi
  int v12; // ebx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  char *v21; // r12
  unsigned __int64 v22; // rbx
  _BYTE *v23; // rax
  _BYTE *v24; // r15
  signed __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rbx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rbx
  unsigned __int64 v38; // rax
  void *v39; // r15
  __int64 v40; // rbx
  void *v41; // rdi
  int v42; // r13d
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  void *v49; // r15
  __int64 v50; // r13
  void *v51; // rdi
  int v52; // ebx
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // r15
  __int64 v57; // rbx
  void *v58; // rdi
  __int64 v59; // rbx
  void *v60; // rdi
  int v61; // r12d
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // r15
  __int64 v69; // r12
  void *v70; // rdi
  char *v71; // [rsp+8h] [rbp-D0h]
  char *v72; // [rsp+8h] [rbp-D0h]
  __int64 v73; // [rsp+18h] [rbp-C0h] BYREF
  _DWORD v74[2]; // [rsp+20h] [rbp-B8h] BYREF
  char v75; // [rsp+28h] [rbp-B0h]
  _BYTE v76[20]; // [rsp+2Ch] [rbp-ACh] BYREF
  __int64 v77; // [rsp+40h] [rbp-98h]
  _WORD v78[8]; // [rsp+48h] [rbp-90h] BYREF
  char v79; // [rsp+58h] [rbp-80h]
  int v80; // [rsp+60h] [rbp-78h] BYREF
  int v81; // [rsp+64h] [rbp-74h]
  char v82; // [rsp+68h] [rbp-70h]
  __int64 v83; // [rsp+6Ch] [rbp-6Ch]
  char v84; // [rsp+74h] [rbp-64h]
  void *v85; // [rsp+78h] [rbp-60h]
  __int64 v86; // [rsp+80h] [rbp-58h]
  char v87[16]; // [rsp+88h] [rbp-50h] BYREF
  char v88; // [rsp+98h] [rbp-40h]

  v7 = sub_BFB900(a2);
  v8 = *(_WORD *)v7 & 0x1FF;
  if ( v8 == 26 )
    v8 = **(_WORD **)(v7 + 16) & 0x1FF;
  if ( (unsigned int)v8 - 128 <= 1 )
    goto LABEL_4;
  if ( v8 <= 0x75u )
  {
    if ( v8 != 91 )
      goto LABEL_37;
  }
  else if ( v8 > 0x77u )
  {
LABEL_37:
    v44 = *a1;
    v45 = sub_EEC140(a2);
    v12 = sub_15F0EF0(v44, v45, 0, a4, a5);
    goto LABEL_8;
  }
LABEL_4:
  v9 = *a1;
  v10 = sub_EEC140(a2);
  v11 = v10;
  v12 = sub_15F0EF0(v9, v10, 0, a4, a5);
  v74[0] = sub_EEB7E0(a2, v11, *(double *)a4.m128i_i64);
  v74[1] = v74[0];
  *(_QWORD *)&v76[12] = v78;
  *(_QWORD *)v76 = 0;
  v76[8] = 0;
  v79 = 0;
  v75 = 0;
  v77 = 1;
  v78[0] = 40;
  v13 = sub_1589170(a3, v74);
  v83 = 0;
  v84 = 0;
  v85 = v87;
  v88 = 0;
  v80 = v12;
  v81 = v12;
  v82 = 0;
  v86 = 1;
  strcpy(v87, ")");
  sub_1589170(v13, &v80);
  if ( v85 != v87 )
    operator delete(v85);
  if ( *(_WORD **)&v76[12] != v78 )
    operator delete(*(void **)&v76[12]);
LABEL_8:
  v84 = 0;
  v14 = *(_BYTE *)(a3 + 120) == 0;
  v85 = v87;
  v83 = 0;
  v88 = 0;
  v80 = v12;
  v81 = v12;
  v82 = 0;
  qmemcpy(&v76[4], " ? YES : NO", 11);
  strcpy(v87, " ? YES : NO");
  v86 = 11;
  if ( !v14 )
  {
    if ( !v12 )
      return;
    v15 = *(_QWORD *)(a3 + 32);
    if ( v15 )
    {
      v16 = *(unsigned int *)(v15 + 536);
      v17 = *(unsigned int *)(v15 + 540);
      v18 = v16 + 1;
      v19 = v16 << 6;
    }
    else
    {
      v46 = *(_QWORD *)(a3 + 40);
      v47 = *(_DWORD *)(v46 + 14976);
      if ( v47 )
      {
        v54 = (unsigned int)(v47 - 1);
        *(_DWORD *)(v46 + 14976) = v54;
        v15 = *(_QWORD *)(v46 + 8 * v54 + 14848);
        v55 = *(unsigned int *)(v15 + 536);
        *(_BYTE *)v15 = 0;
        v56 = *(_QWORD *)(v15 + 528);
        *(_DWORD *)(v15 + 424) = 0;
        v57 = v56 + (v55 << 6);
        while ( v56 != v57 )
        {
          while ( 1 )
          {
            v57 -= 64;
            v58 = *(void **)(v57 + 24);
            if ( v58 == (void *)(v57 + 40) )
              break;
            operator delete(v58);
            if ( v56 == v57 )
              goto LABEL_57;
          }
        }
LABEL_57:
        *(_DWORD *)(v15 + 536) = 0;
        v17 = *(unsigned int *)(v15 + 540);
      }
      else
      {
        v48 = operator new(0x3A0u);
        v17 = 6;
        v15 = v48;
        *(_BYTE *)v48 = 0;
        *(_QWORD *)(v48 + 96) = v48 + 112;
        *(_QWORD *)(v48 + 128) = v48 + 144;
        *(_QWORD *)(v48 + 160) = v48 + 176;
        *(_QWORD *)(v48 + 192) = v48 + 208;
        *(_QWORD *)(v48 + 224) = v48 + 240;
        *(_QWORD *)(v48 + 256) = v48 + 272;
        *(_QWORD *)(v48 + 288) = v48 + 304;
        *(_QWORD *)(v48 + 320) = v48 + 336;
        *(_QWORD *)(v48 + 352) = v48 + 368;
        *(_QWORD *)(v48 + 384) = v48 + 400;
        *(_QWORD *)(v48 + 416) = v48 + 432;
        *(_QWORD *)(v48 + 104) = 0;
        *(_BYTE *)(v48 + 112) = 0;
        *(_QWORD *)(v48 + 136) = 0;
        *(_BYTE *)(v48 + 144) = 0;
        *(_QWORD *)(v48 + 168) = 0;
        *(_BYTE *)(v48 + 176) = 0;
        *(_QWORD *)(v48 + 200) = 0;
        *(_BYTE *)(v48 + 208) = 0;
        *(_QWORD *)(v48 + 232) = 0;
        *(_BYTE *)(v48 + 240) = 0;
        *(_QWORD *)(v48 + 264) = 0;
        *(_BYTE *)(v48 + 272) = 0;
        *(_QWORD *)(v48 + 296) = 0;
        *(_BYTE *)(v48 + 304) = 0;
        *(_QWORD *)(v48 + 328) = 0;
        *(_BYTE *)(v48 + 336) = 0;
        *(_QWORD *)(v48 + 360) = 0;
        *(_BYTE *)(v48 + 368) = 0;
        *(_QWORD *)(v48 + 392) = 0;
        *(_BYTE *)(v48 + 400) = 0;
        *(_QWORD *)(v48 + 424) = 0x800000000LL;
        *(_QWORD *)(v48 + 528) = v48 + 544;
        *(_QWORD *)(v48 + 536) = 0x600000000LL;
      }
      *(_QWORD *)(a3 + 32) = v15;
      v19 = 0;
      v18 = 1;
    }
    v20 = *(_QWORD *)(v15 + 528);
    v21 = (char *)&v80;
    v22 = v20 + v19;
    if ( v17 >= v18 )
    {
LABEL_13:
      *(_QWORD *)v22 = *(_QWORD *)v21;
      *(_DWORD *)(v22 + 8) = *((_DWORD *)v21 + 2);
      *(_QWORD *)(v22 + 12) = *(_QWORD *)(v21 + 12);
      *(_DWORD *)(v22 + 20) = *((_DWORD *)v21 + 5);
      v23 = (_BYTE *)(v22 + 40);
      *(_QWORD *)(v22 + 24) = v22 + 40;
      v24 = *((_BYTE **)v21 + 3);
      v25 = *((_QWORD *)v21 + 4);
      if ( &v24[v25] && !v24 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v25 > 0xF )
      {
        if ( v25 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v23 = (_BYTE *)operator new(v25 + 1);
        *(_QWORD *)(v22 + 40) = v25;
        *(_QWORD *)(v22 + 24) = v23;
      }
      else
      {
        if ( v25 == 1 )
        {
          *(_BYTE *)(v22 + 40) = *v24;
LABEL_18:
          *(_QWORD *)(v22 + 32) = v25;
          v23[v25] = 0;
          *(_BYTE *)(v22 + 56) = v21[56];
          ++*(_DWORD *)(v15 + 536);
          goto LABEL_19;
        }
        if ( !v25 )
          goto LABEL_18;
      }
      memcpy(v23, v24, v25);
      v23 = *(_BYTE **)(v22 + 24);
      goto LABEL_18;
    }
    v49 = (void *)(v15 + 544);
    if ( v20 <= (unsigned __int64)&v80 && v22 > (unsigned __int64)&v80 )
    {
      v72 = (char *)&v80 - v20;
      v50 = sub_2237400(v15 + 528, v15 + 544, v18, 64, v74);
      sub_9EF810((__int64 *)(v15 + 528), v50);
      v51 = *(void **)(v15 + 528);
      v52 = v74[0];
      if ( v51 != v49 )
        free(v51);
      *(_DWORD *)(v15 + 540) = v52;
      v53 = *(unsigned int *)(v15 + 536);
      *(_QWORD *)(v15 + 528) = v50;
      v21 = &v72[v50];
      v22 = v50 + (v53 << 6);
      goto LABEL_13;
    }
    v59 = sub_2237400(v15 + 528, v15 + 544, v18, 64, v74);
    sub_9EF810((__int64 *)(v15 + 528), v59);
    v60 = *(void **)(v15 + 528);
    v61 = v74[0];
    if ( v60 != v49 )
      goto LABEL_59;
    goto LABEL_60;
  }
  if ( !*(_BYTE *)(a3 + 132) )
    return;
  v28 = sub_168B9E0((_QWORD *)a3);
  v31 = *(_QWORD *)(a3 + 16);
  if ( v31 )
    v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 32LL))(*(_QWORD *)(a3 + 16));
  v73 = v31;
  v32 = sub_1587BC0(v28, &v73, v26, v27, v29, v30);
  if ( v80 && v81 )
  {
    v33 = *v32 + 32LL * *(unsigned int *)(a3 + 128);
    v15 = *(_QWORD *)(v33 + 8);
    if ( v15 )
    {
      v34 = *(unsigned int *)(v15 + 536);
      v35 = *(unsigned int *)(v15 + 540);
      v36 = v34 + 1;
      v37 = v34 << 6;
    }
    else
    {
      v63 = *(_QWORD *)(v33 + 16);
      v64 = *(_DWORD *)(v63 + 14976);
      if ( v64 )
      {
        v66 = (unsigned int)(v64 - 1);
        *(_DWORD *)(v63 + 14976) = v66;
        v15 = *(_QWORD *)(v63 + 8 * v66 + 14848);
        v67 = *(unsigned int *)(v15 + 536);
        *(_BYTE *)v15 = 0;
        v68 = *(_QWORD *)(v15 + 528);
        *(_DWORD *)(v15 + 424) = 0;
        v69 = v68 + (v67 << 6);
        while ( v68 != v69 )
        {
          while ( 1 )
          {
            v69 -= 64;
            v70 = *(void **)(v69 + 24);
            if ( v70 == (void *)(v69 + 40) )
              break;
            operator delete(v70);
            if ( v68 == v69 )
              goto LABEL_68;
          }
        }
LABEL_68:
        *(_DWORD *)(v15 + 536) = 0;
        v35 = *(unsigned int *)(v15 + 540);
      }
      else
      {
        v65 = operator new(0x3A0u);
        v35 = 6;
        v15 = v65;
        *(_BYTE *)v65 = 0;
        *(_QWORD *)(v65 + 96) = v65 + 112;
        *(_QWORD *)(v65 + 128) = v65 + 144;
        *(_QWORD *)(v65 + 160) = v65 + 176;
        *(_QWORD *)(v65 + 192) = v65 + 208;
        *(_QWORD *)(v65 + 224) = v65 + 240;
        *(_QWORD *)(v65 + 256) = v65 + 272;
        *(_QWORD *)(v65 + 288) = v65 + 304;
        *(_QWORD *)(v65 + 320) = v65 + 336;
        *(_QWORD *)(v65 + 352) = v65 + 368;
        *(_QWORD *)(v65 + 384) = v65 + 400;
        *(_QWORD *)(v65 + 416) = v65 + 432;
        *(_QWORD *)(v65 + 104) = 0;
        *(_BYTE *)(v65 + 112) = 0;
        *(_QWORD *)(v65 + 136) = 0;
        *(_BYTE *)(v65 + 144) = 0;
        *(_QWORD *)(v65 + 168) = 0;
        *(_BYTE *)(v65 + 176) = 0;
        *(_QWORD *)(v65 + 200) = 0;
        *(_BYTE *)(v65 + 208) = 0;
        *(_QWORD *)(v65 + 232) = 0;
        *(_BYTE *)(v65 + 240) = 0;
        *(_QWORD *)(v65 + 264) = 0;
        *(_BYTE *)(v65 + 272) = 0;
        *(_QWORD *)(v65 + 296) = 0;
        *(_BYTE *)(v65 + 304) = 0;
        *(_QWORD *)(v65 + 328) = 0;
        *(_BYTE *)(v65 + 336) = 0;
        *(_QWORD *)(v65 + 360) = 0;
        *(_BYTE *)(v65 + 368) = 0;
        *(_QWORD *)(v65 + 392) = 0;
        *(_BYTE *)(v65 + 400) = 0;
        *(_QWORD *)(v65 + 424) = 0x800000000LL;
        *(_QWORD *)(v65 + 528) = v65 + 544;
        *(_QWORD *)(v65 + 536) = 0x600000000LL;
      }
      *(_QWORD *)(v33 + 8) = v15;
      v36 = 1;
      v37 = 0;
    }
    v38 = *(_QWORD *)(v15 + 528);
    v21 = (char *)&v80;
    v22 = v38 + v37;
    if ( v35 >= v36 )
      goto LABEL_13;
    v39 = (void *)(v15 + 544);
    if ( v38 <= (unsigned __int64)&v80 && v22 > (unsigned __int64)&v80 )
    {
      v71 = (char *)&v80 - v38;
      v40 = sub_2237400(v15 + 528, v15 + 544, v36, 64, v74);
      sub_9EF810((__int64 *)(v15 + 528), v40);
      v41 = *(void **)(v15 + 528);
      v42 = v74[0];
      if ( v39 != v41 )
        free(v41);
      v43 = *(unsigned int *)(v15 + 536);
      *(_QWORD *)(v15 + 528) = v40;
      *(_DWORD *)(v15 + 540) = v42;
      v21 = &v71[v40];
      v22 = (v43 << 6) + v40;
      goto LABEL_13;
    }
    v59 = sub_2237400(v15 + 528, v15 + 544, v36, 64, v74);
    sub_9EF810((__int64 *)(v15 + 528), v59);
    v60 = *(void **)(v15 + 528);
    v61 = v74[0];
    if ( v39 != v60 )
LABEL_59:
      free(v60);
LABEL_60:
    v62 = *(unsigned int *)(v15 + 536);
    *(_QWORD *)(v15 + 528) = v59;
    *(_DWORD *)(v15 + 540) = v61;
    v21 = (char *)&v80;
    v22 = (v62 << 6) + v59;
    goto LABEL_13;
  }
LABEL_19:
  if ( v85 != v87 )
    operator delete(v85);
}
