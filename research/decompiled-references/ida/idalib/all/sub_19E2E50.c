void __fastcall sub_19E2E50(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // r13
  unsigned int *v7; // rax
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rax
  char v17; // dl
  unsigned int *v18; // rax
  unsigned __int8 *v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rdx
  __int64 v47; // r15
  void *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  void *v54; // rdi
  __int64 v55; // [rsp+0h] [rbp-F8h]
  __int64 v56; // [rsp+0h] [rbp-F8h]
  __int64 v57; // [rsp+8h] [rbp-F0h]
  __int64 v58; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v59; // [rsp+20h] [rbp-D8h] BYREF
  int v60; // [rsp+28h] [rbp-D0h]
  _QWORD v61[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v63; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A0h]
  char v65; // [rsp+A8h] [rbp-50h]
  unsigned int v66; // [rsp+B0h] [rbp-48h]
  char v67; // [rsp+B4h] [rbp-44h]

  sub_168B9F0((__int64)v61, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = *(__int64 **)(a1 + 24);
  v6 = *v5;
  if ( v65 )
  {
    sub_AE9DF0(&v63, *v5, 9u);
    v17 = v65;
  }
  else
  {
    if ( !v67 )
    {
      v7 = *(unsigned int **)(a1 + 16);
      v8 = *v7;
      v9 = v7[1];
      goto LABEL_4;
    }
    v14 = sub_168B9E0(v61);
    v15 = v62;
    if ( v62 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
    v59 = v15;
    v16 = sub_1587BC0(v14, (__int64 *)&v59, v10, v11, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v66 + 8), v6, 9u);
    v17 = v65;
  }
  v18 = *(unsigned int **)(a1 + 16);
  v8 = *v18;
  v9 = v18[1];
  if ( !v17 )
  {
LABEL_4:
    if ( !v67 )
      goto LABEL_5;
    v33 = sub_168B9E0(v61);
    v36 = v62;
    if ( v62 )
      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
    v58 = v36;
    v37 = sub_1587BC0(v33, &v58, v31, v32, v34, v35);
    v38 = *v37 + 32LL * v66;
    v19 = *(unsigned __int8 **)(v38 + 8);
    if ( !v19 )
    {
      v39 = *(_QWORD *)(v38 + 16);
      v40 = *(_DWORD *)(v39 + 14976);
      if ( v40 )
      {
        v50 = (unsigned int)(v40 - 1);
        *(_DWORD *)(v39 + 14976) = v50;
        v19 = *(unsigned __int8 **)(v39 + 8 * v50 + 14848);
        v51 = *((unsigned int *)v19 + 134);
        *v19 = 0;
        v52 = *((_QWORD *)v19 + 66);
        *((_DWORD *)v19 + 106) = 0;
        v53 = v52 + (v51 << 6);
        if ( v52 == v53 )
        {
          v22 = 1;
          v20 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v53 -= 64;
              v54 = *(void **)(v53 + 24);
              if ( v54 == (void *)(v53 + 40) )
                break;
              v57 = v52;
              v56 = v53;
              operator delete(v54);
              v53 = v56;
              v52 = v57;
              if ( v57 == v56 )
                goto LABEL_40;
            }
          }
          while ( v52 != v53 );
LABEL_40:
          v20 = *((unsigned int *)v19 + 106);
          v22 = v20 + 1;
        }
        *((_DWORD *)v19 + 134) = 0;
        v21 = *((unsigned int *)v19 + 107);
      }
      else
      {
        v41 = operator new(0x3A0u);
        v21 = 8;
        v22 = 1;
        v19 = (unsigned __int8 *)v41;
        *(_BYTE *)v41 = 0;
        *(_QWORD *)(v41 + 96) = v41 + 112;
        *(_QWORD *)(v41 + 128) = v41 + 144;
        *(_QWORD *)(v41 + 160) = v41 + 176;
        *(_QWORD *)(v41 + 192) = v41 + 208;
        *(_QWORD *)(v41 + 224) = v41 + 240;
        *(_QWORD *)(v41 + 256) = v41 + 272;
        *(_QWORD *)(v41 + 288) = v41 + 304;
        *(_QWORD *)(v41 + 320) = v41 + 336;
        *(_QWORD *)(v41 + 352) = v41 + 368;
        *(_QWORD *)(v41 + 384) = v41 + 400;
        *(_QWORD *)(v41 + 416) = v41 + 432;
        *(_QWORD *)(v41 + 104) = 0;
        *(_BYTE *)(v41 + 112) = 0;
        *(_QWORD *)(v41 + 136) = 0;
        *(_BYTE *)(v41 + 144) = 0;
        *(_QWORD *)(v41 + 168) = 0;
        *(_BYTE *)(v41 + 176) = 0;
        *(_QWORD *)(v41 + 200) = 0;
        *(_BYTE *)(v41 + 208) = 0;
        *(_QWORD *)(v41 + 232) = 0;
        *(_BYTE *)(v41 + 240) = 0;
        *(_QWORD *)(v41 + 264) = 0;
        *(_BYTE *)(v41 + 272) = 0;
        *(_QWORD *)(v41 + 296) = 0;
        *(_BYTE *)(v41 + 304) = 0;
        *(_QWORD *)(v41 + 328) = 0;
        *(_BYTE *)(v41 + 336) = 0;
        *(_QWORD *)(v41 + 360) = 0;
        *(_BYTE *)(v41 + 368) = 0;
        *(_QWORD *)(v41 + 392) = 0;
        *(_BYTE *)(v41 + 400) = 0;
        *(_QWORD *)(v41 + 424) = 0x800000000LL;
        *(_QWORD *)(v41 + 528) = v41 + 544;
        *(_QWORD *)(v41 + 536) = 0x600000000LL;
        v20 = 0;
      }
      *(_QWORD *)(v38 + 8) = v19;
      goto LABEL_13;
    }
LABEL_12:
    v20 = *((unsigned int *)v19 + 106);
    v21 = *((unsigned int *)v19 + 107);
    v22 = v20 + 1;
    goto LABEL_13;
  }
  v19 = v63;
  if ( v63 )
    goto LABEL_12;
  v42 = v64;
  v43 = *(_DWORD *)(v64 + 14976);
  if ( v43 )
  {
    v44 = (unsigned int)(v43 - 1);
    *(_DWORD *)(v64 + 14976) = v44;
    v19 = *(unsigned __int8 **)(v42 + 8 * v44 + 14848);
    v45 = *((unsigned int *)v19 + 134);
    *v19 = 0;
    v46 = *((_QWORD *)v19 + 66);
    *((_DWORD *)v19 + 106) = 0;
    v47 = v46 + (v45 << 6);
    if ( v46 == v47 )
    {
      v22 = 1;
      v20 = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v47 -= 64;
          v48 = *(void **)(v47 + 24);
          if ( v48 == (void *)(v47 + 40) )
            break;
          v55 = v46;
          operator delete(v48);
          v46 = v55;
          if ( v55 == v47 )
            goto LABEL_31;
        }
      }
      while ( v46 != v47 );
LABEL_31:
      v20 = *((unsigned int *)v19 + 106);
      v22 = v20 + 1;
    }
    *((_DWORD *)v19 + 134) = 0;
    v21 = *((unsigned int *)v19 + 107);
  }
  else
  {
    v49 = operator new(0x3A0u);
    v21 = 8;
    v22 = 1;
    v19 = (unsigned __int8 *)v49;
    *(_BYTE *)v49 = 0;
    *(_QWORD *)(v49 + 96) = v49 + 112;
    *(_QWORD *)(v49 + 128) = v49 + 144;
    *(_QWORD *)(v49 + 160) = v49 + 176;
    *(_QWORD *)(v49 + 192) = v49 + 208;
    *(_QWORD *)(v49 + 224) = v49 + 240;
    *(_QWORD *)(v49 + 256) = v49 + 272;
    *(_QWORD *)(v49 + 288) = v49 + 304;
    *(_QWORD *)(v49 + 320) = v49 + 336;
    *(_QWORD *)(v49 + 352) = v49 + 368;
    *(_QWORD *)(v49 + 384) = v49 + 400;
    *(_QWORD *)(v49 + 416) = v49 + 432;
    *(_QWORD *)(v49 + 104) = 0;
    *(_BYTE *)(v49 + 112) = 0;
    *(_QWORD *)(v49 + 136) = 0;
    *(_BYTE *)(v49 + 144) = 0;
    *(_QWORD *)(v49 + 168) = 0;
    *(_BYTE *)(v49 + 176) = 0;
    *(_QWORD *)(v49 + 200) = 0;
    *(_BYTE *)(v49 + 208) = 0;
    *(_QWORD *)(v49 + 232) = 0;
    *(_BYTE *)(v49 + 240) = 0;
    *(_QWORD *)(v49 + 264) = 0;
    *(_BYTE *)(v49 + 272) = 0;
    *(_QWORD *)(v49 + 296) = 0;
    *(_BYTE *)(v49 + 304) = 0;
    *(_QWORD *)(v49 + 328) = 0;
    *(_BYTE *)(v49 + 336) = 0;
    *(_QWORD *)(v49 + 360) = 0;
    *(_BYTE *)(v49 + 368) = 0;
    *(_QWORD *)(v49 + 392) = 0;
    *(_BYTE *)(v49 + 400) = 0;
    *(_QWORD *)(v49 + 424) = 0x800000000LL;
    *(_QWORD *)(v49 + 528) = v49 + 544;
    *(_QWORD *)(v49 + 536) = 0x600000000LL;
    v20 = 0;
  }
  v63 = v19;
LABEL_13:
  v59 = __PAIR64__(v9, v8);
  LOBYTE(v60) = 1;
  if ( v22 > v21 )
  {
    sub_2237220(v19 + 416, v19 + 432, v22, 12);
    v20 = *((unsigned int *)v19 + 106);
  }
  v23 = *((_QWORD *)v19 + 52) + 12 * v20;
  *(_QWORD *)v23 = v59;
  *(_DWORD *)(v23 + 8) = v60;
  LOBYTE(v23) = v65;
  ++*((_DWORD *)v19 + 106);
  if ( (_BYTE)v23 )
  {
    sub_AE9DF0(&v63, a4, 8u);
    goto LABEL_6;
  }
LABEL_5:
  if ( v67 )
  {
    v26 = sub_168B9E0(v61);
    v29 = v62;
    if ( v62 )
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
    v59 = v29;
    v30 = sub_1587BC0(v26, (__int64 *)&v59, v24, v25, v27, v28);
    sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v66 + 8), a4, 8u);
  }
LABEL_6:
  sub_15F7200(v61);
}
