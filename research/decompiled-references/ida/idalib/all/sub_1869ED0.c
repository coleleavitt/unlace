void __fastcall sub_1869ED0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // r12d
  unsigned __int8 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned int *v15; // rax
  unsigned int v16; // r15d
  unsigned int v17; // r14d
  unsigned __int8 *v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // rdx
  unsigned __int8 v24; // bp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r12
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rsi
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  void *v61; // rdi
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  void *v70; // rdi
  __int64 v71; // [rsp+8h] [rbp-100h]
  __int64 v72; // [rsp+8h] [rbp-100h]
  __int64 v73; // [rsp+8h] [rbp-100h]
  __int64 v74; // [rsp+10h] [rbp-F8h]
  __int64 v75; // [rsp+18h] [rbp-F0h]
  __int64 v76; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v77; // [rsp+30h] [rbp-D8h] BYREF
  int v78; // [rsp+38h] [rbp-D0h]
  _QWORD v79[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v81; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+68h] [rbp-A0h]
  char v83; // [rsp+B8h] [rbp-50h]
  unsigned int v84; // [rsp+C0h] [rbp-48h]
  char v85; // [rsp+C4h] [rbp-44h]

  sub_168B9F0((__int64)v79, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v6 = **(_DWORD **)(a1 + 40);
  if ( v83 )
  {
    sub_AE9DF0(&v81, v6, 3u);
  }
  else
  {
    if ( !v85 )
    {
LABEL_3:
      v7 = **(_BYTE **)(a1 + 24);
      goto LABEL_4;
    }
    v12 = sub_168B9E0(v79);
    v13 = v80;
    if ( v80 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 32LL))(v80);
    v77 = v13;
    v14 = sub_1587BC0(v12, (__int64 *)&v77, v8, v9, v10, v11);
    sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * v84 + 8), v6, 3u);
  }
  v15 = *(unsigned int **)(a1 + 32);
  v16 = *v15;
  v17 = v15[1];
  if ( v83 )
  {
    v18 = v81;
    if ( v81 )
    {
      v19 = *((unsigned int *)v81 + 106);
      v20 = *((unsigned int *)v81 + 107);
      v21 = v19 + 1;
    }
    else
    {
      v55 = v82;
      v56 = *(_DWORD *)(v82 + 14976);
      if ( v56 )
      {
        v57 = (unsigned int)(v56 - 1);
        *(_DWORD *)(v82 + 14976) = v57;
        v18 = *(unsigned __int8 **)(v55 + 8 * v57 + 14848);
        v58 = *((unsigned int *)v18 + 134);
        v59 = *((_QWORD *)v18 + 66);
        *v18 = 0;
        *((_DWORD *)v18 + 106) = 0;
        v60 = v59 + (v58 << 6);
        if ( v59 == v60 )
        {
          v21 = 1;
          v19 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v60 -= 64;
              v61 = *(void **)(v60 + 24);
              if ( v61 == (void *)(v60 + 40) )
                break;
              v74 = v60;
              v71 = v59;
              operator delete(v61);
              v59 = v71;
              v60 = v74;
              if ( v71 == v74 )
                goto LABEL_42;
            }
          }
          while ( v59 != v60 );
LABEL_42:
          v19 = *((unsigned int *)v18 + 106);
          v21 = v19 + 1;
        }
        *((_DWORD *)v18 + 134) = 0;
        v20 = *((unsigned int *)v18 + 107);
      }
      else
      {
        v65 = operator new(0x3A0u);
        v20 = 8;
        v21 = 1;
        v18 = (unsigned __int8 *)v65;
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
        v19 = 0;
      }
      v81 = v18;
    }
    v77 = __PAIR64__(v17, v16);
    LOBYTE(v78) = 1;
    if ( v21 <= v20 )
      goto LABEL_13;
LABEL_37:
    sub_2237220(v18 + 416, v18 + 432, v21, 12);
    v19 = *((unsigned int *)v18 + 106);
    goto LABEL_13;
  }
  if ( !v85 )
    goto LABEL_3;
  v50 = sub_168B9E0(v79);
  v51 = v80;
  if ( v80 )
    v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 32LL))(v80);
  v76 = v51;
  v52 = sub_1587BC0(v50, &v76, v46, v47, v48, v49);
  v53 = *v52 + 32LL * v84;
  v18 = *(unsigned __int8 **)(v53 + 8);
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 + 106);
    v54 = *((unsigned int *)v18 + 107);
    v21 = v19 + 1;
  }
  else
  {
    v62 = *(_QWORD *)(v53 + 16);
    v63 = *(_DWORD *)(v62 + 14976);
    if ( v63 )
    {
      v66 = (unsigned int)(v63 - 1);
      *(_DWORD *)(v62 + 14976) = v66;
      v18 = *(unsigned __int8 **)(v62 + 8 * v66 + 14848);
      v67 = *((unsigned int *)v18 + 134);
      v68 = *((_QWORD *)v18 + 66);
      *v18 = 0;
      *((_DWORD *)v18 + 106) = 0;
      v69 = v68 + (v67 << 6);
      if ( v68 == v69 )
      {
        v21 = 1;
        v19 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v69 -= 64;
            v70 = *(void **)(v69 + 24);
            if ( v70 == (void *)(v69 + 40) )
              break;
            v75 = v69;
            v73 = v53;
            operator delete(v70);
            v69 = v75;
            v53 = v73;
            if ( v68 == v75 )
              goto LABEL_54;
          }
        }
        while ( v68 != v69 );
LABEL_54:
        v19 = *((unsigned int *)v18 + 106);
        v21 = v19 + 1;
      }
      *((_DWORD *)v18 + 134) = 0;
      v54 = *((unsigned int *)v18 + 107);
    }
    else
    {
      v72 = v53;
      v64 = operator new(0x3A0u);
      v54 = 8;
      v21 = 1;
      v18 = (unsigned __int8 *)v64;
      *(_BYTE *)v64 = 0;
      *(_QWORD *)(v64 + 96) = v64 + 112;
      *(_QWORD *)(v64 + 128) = v64 + 144;
      *(_QWORD *)(v64 + 160) = v64 + 176;
      *(_QWORD *)(v64 + 192) = v64 + 208;
      *(_QWORD *)(v64 + 224) = v64 + 240;
      *(_QWORD *)(v64 + 256) = v64 + 272;
      *(_QWORD *)(v64 + 288) = v64 + 304;
      *(_QWORD *)(v64 + 320) = v64 + 336;
      *(_QWORD *)(v64 + 352) = v64 + 368;
      *(_QWORD *)(v64 + 384) = v64 + 400;
      *(_QWORD *)(v64 + 416) = v64 + 432;
      *(_QWORD *)(v64 + 104) = 0;
      *(_BYTE *)(v64 + 112) = 0;
      *(_QWORD *)(v64 + 136) = 0;
      *(_BYTE *)(v64 + 144) = 0;
      *(_QWORD *)(v64 + 168) = 0;
      *(_BYTE *)(v64 + 176) = 0;
      *(_QWORD *)(v64 + 200) = 0;
      *(_BYTE *)(v64 + 208) = 0;
      *(_QWORD *)(v64 + 232) = 0;
      *(_BYTE *)(v64 + 240) = 0;
      *(_QWORD *)(v64 + 264) = 0;
      *(_BYTE *)(v64 + 272) = 0;
      *(_QWORD *)(v64 + 296) = 0;
      *(_BYTE *)(v64 + 304) = 0;
      *(_QWORD *)(v64 + 328) = 0;
      *(_BYTE *)(v64 + 336) = 0;
      *(_QWORD *)(v64 + 360) = 0;
      *(_BYTE *)(v64 + 368) = 0;
      *(_QWORD *)(v64 + 392) = 0;
      *(_BYTE *)(v64 + 400) = 0;
      *(_QWORD *)(v64 + 424) = 0x800000000LL;
      v53 = v72;
      *(_QWORD *)(v64 + 528) = v64 + 544;
      *(_QWORD *)(v64 + 536) = 0x600000000LL;
      v19 = 0;
    }
    *(_QWORD *)(v53 + 8) = v18;
  }
  v77 = __PAIR64__(v17, v16);
  LOBYTE(v78) = 1;
  if ( v21 > v54 )
    goto LABEL_37;
LABEL_13:
  v22 = *((_QWORD *)v18 + 52) + 12 * v19;
  *(_QWORD *)v22 = v77;
  *(_DWORD *)(v22 + 8) = v78;
  v23 = *(unsigned __int8 **)(a1 + 24);
  LOBYTE(v22) = v83;
  ++*((_DWORD *)v18 + 106);
  v7 = *v23;
  if ( (_BYTE)v22 )
  {
    sub_AE9DF0(&v81, v7, 2u);
    goto LABEL_15;
  }
LABEL_4:
  if ( !v85 )
    goto LABEL_5;
  v29 = sub_168B9E0(v79);
  v30 = v80;
  if ( v80 )
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 32LL))(v80);
  v77 = v30;
  v31 = sub_1587BC0(v29, (__int64 *)&v77, v25, v26, v27, v28);
  sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v84 + 8), v7, 2u);
LABEL_15:
  v24 = **(_BYTE **)(a1 + 16);
  if ( v83 )
  {
    sub_AE9DF0(&v81, v24, 2u);
  }
  else
  {
    if ( !v85 )
      goto LABEL_5;
    v43 = sub_168B9E0(v79);
    v44 = v80;
    if ( v80 )
      v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 32LL))(v80);
    v77 = v44;
    v45 = sub_1587BC0(v43, (__int64 *)&v77, v39, v40, v41, v42);
    sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * v84 + 8), v24, 2u);
  }
  if ( v83 )
  {
    sub_AE9DF0(&v81, a4, 8u);
  }
  else if ( v85 )
  {
    v34 = sub_168B9E0(v79);
    v37 = v80;
    if ( v80 )
      v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 32LL))(v80);
    v77 = v37;
    v38 = sub_1587BC0(v34, (__int64 *)&v77, v32, v33, v35, v36);
    sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * v84 + 8), a4, 8u);
  }
LABEL_5:
  sub_15F7200(v79);
}
