__int64 __fastcall sub_1A12760(
        __int64 a1,
        unsigned __int64 **a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        double a7)
{
  unsigned __int64 *v9; // rbp
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rbp
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // r15
  void *v36; // rdi
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  void *v45; // rdi
  __int64 v46; // [rsp+0h] [rbp-F8h]
  __int64 v47; // [rsp+0h] [rbp-F8h]
  __int64 v48; // [rsp+8h] [rbp-F0h]
  __int64 v49; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+24h] [rbp-D4h]
  int v51; // [rsp+2Ch] [rbp-CCh]
  __int64 v52; // [rsp+30h] [rbp-C8h] BYREF
  int v53; // [rsp+38h] [rbp-C0h]
  int v54; // [rsp+3Ch] [rbp-BCh]
  __int64 v55; // [rsp+40h] [rbp-B8h]
  char v56; // [rsp+48h] [rbp-B0h]
  __int64 v57; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+58h] [rbp-A0h]
  __int64 v59; // [rsp+98h] [rbp-60h]
  int v60; // [rsp+A0h] [rbp-58h]
  char v61; // [rsp+A8h] [rbp-50h]
  __int64 v62; // [rsp+B0h] [rbp-48h]

  v9 = *a2;
  v10 = (*a2)[29];
  if ( (*(_BYTE *)(v10 + 1) & 0x10) != 0
    && (*(_BYTE *)(v10 + 89) & 1) == 0
    && (*(char *)v10 >= 0 || *(_DWORD *)(v10 + 152) > 0xB532B7Fu) )
  {
    if ( a3 )
      a4 = a5;
    a6 = a4;
  }
  v11 = sub_EEB7E0(*a2[1], (__int64)a2, a7);
  sub_168B9F0((__int64)&v52, (__int64 *)v9 + 1, v11, a6, 0);
  v12 = sub_EEC8C0(*a2[1], (__int64)(v9 + 1), a7);
  if ( v61 )
  {
    v23 = v57;
    if ( !v57 )
    {
      v30 = v58;
      v31 = *(_DWORD *)(v58 + 14976);
      if ( v31 )
      {
        v32 = (unsigned int)(v31 - 1);
        *(_DWORD *)(v58 + 14976) = v32;
        v23 = *(_QWORD *)(v30 + 8 * v32 + 14848);
        v33 = *(unsigned int *)(v23 + 536);
        *(_BYTE *)v23 = 0;
        v34 = *(_QWORD *)(v23 + 528);
        *(_DWORD *)(v23 + 424) = 0;
        v35 = v34 + (v33 << 6);
        if ( v34 == v35 )
        {
          v26 = 1;
          v24 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v35 -= 64;
              v36 = *(void **)(v35 + 24);
              if ( v36 == (void *)(v35 + 40) )
                break;
              v46 = v34;
              operator delete(v36);
              v34 = v46;
              if ( v46 == v35 )
                goto LABEL_24;
            }
          }
          while ( v34 != v35 );
LABEL_24:
          v24 = *(unsigned int *)(v23 + 424);
          v26 = v24 + 1;
        }
        *(_DWORD *)(v23 + 536) = 0;
        v25 = *(unsigned int *)(v23 + 428);
      }
      else
      {
        v40 = operator new(0x3A0u);
        v25 = 8;
        v26 = 1;
        v23 = v40;
        *(_BYTE *)v40 = 0;
        *(_QWORD *)(v40 + 96) = v40 + 112;
        *(_QWORD *)(v40 + 128) = v40 + 144;
        *(_QWORD *)(v40 + 160) = v40 + 176;
        *(_QWORD *)(v40 + 192) = v40 + 208;
        *(_QWORD *)(v40 + 224) = v40 + 240;
        *(_QWORD *)(v40 + 256) = v40 + 272;
        *(_QWORD *)(v40 + 288) = v40 + 304;
        *(_QWORD *)(v40 + 320) = v40 + 336;
        *(_QWORD *)(v40 + 352) = v40 + 368;
        *(_QWORD *)(v40 + 384) = v40 + 400;
        *(_QWORD *)(v40 + 416) = v40 + 432;
        *(_QWORD *)(v40 + 104) = 0;
        *(_BYTE *)(v40 + 112) = 0;
        *(_QWORD *)(v40 + 136) = 0;
        *(_BYTE *)(v40 + 144) = 0;
        *(_QWORD *)(v40 + 168) = 0;
        *(_BYTE *)(v40 + 176) = 0;
        *(_QWORD *)(v40 + 200) = 0;
        *(_BYTE *)(v40 + 208) = 0;
        *(_QWORD *)(v40 + 232) = 0;
        *(_BYTE *)(v40 + 240) = 0;
        *(_QWORD *)(v40 + 264) = 0;
        *(_BYTE *)(v40 + 272) = 0;
        *(_QWORD *)(v40 + 296) = 0;
        *(_BYTE *)(v40 + 304) = 0;
        *(_QWORD *)(v40 + 328) = 0;
        *(_BYTE *)(v40 + 336) = 0;
        *(_QWORD *)(v40 + 360) = 0;
        *(_BYTE *)(v40 + 368) = 0;
        *(_QWORD *)(v40 + 392) = 0;
        *(_BYTE *)(v40 + 400) = 0;
        *(_QWORD *)(v40 + 424) = 0x800000000LL;
        *(_QWORD *)(v40 + 528) = v40 + 544;
        *(_QWORD *)(v40 + 536) = 0x600000000LL;
        v24 = 0;
      }
      v57 = v23;
      goto LABEL_15;
    }
  }
  else
  {
    if ( !BYTE4(v62) )
    {
      v13 = v52;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v13;
      *(_DWORD *)(a1 + 8) = v53;
      *(_DWORD *)(a1 + 12) = v54;
      *(_QWORD *)(a1 + 16) = v55;
      *(_BYTE *)(a1 + 24) = v56;
      goto LABEL_6;
    }
    v17 = sub_168B9E0(&v52);
    v20 = v55;
    if ( v55 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
    v49 = v20;
    v21 = sub_1587BC0(v17, &v49, v15, v16, v18, v19);
    v22 = *v21 + 32LL * (unsigned int)v62;
    v23 = *(_QWORD *)(v22 + 8);
    if ( !v23 )
    {
      v37 = *(_QWORD *)(v22 + 16);
      v38 = *(_DWORD *)(v37 + 14976);
      if ( v38 )
      {
        v41 = (unsigned int)(v38 - 1);
        *(_DWORD *)(v37 + 14976) = v41;
        v23 = *(_QWORD *)(v37 + 8 * v41 + 14848);
        v42 = *(unsigned int *)(v23 + 536);
        *(_BYTE *)v23 = 0;
        v43 = *(_QWORD *)(v23 + 528);
        *(_DWORD *)(v23 + 424) = 0;
        v44 = v43 + (v42 << 6);
        if ( v43 == v44 )
        {
          v26 = 1;
          v24 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v44 -= 64;
              v45 = *(void **)(v44 + 24);
              if ( v45 == (void *)(v44 + 40) )
                break;
              v48 = v43;
              v47 = v44;
              operator delete(v45);
              v44 = v47;
              v43 = v48;
              if ( v48 == v47 )
                goto LABEL_38;
            }
          }
          while ( v43 != v44 );
LABEL_38:
          v24 = *(unsigned int *)(v23 + 424);
          v26 = v24 + 1;
        }
        *(_DWORD *)(v23 + 536) = 0;
        v25 = *(unsigned int *)(v23 + 428);
      }
      else
      {
        v39 = operator new(0x3A0u);
        v25 = 8;
        v26 = 1;
        v23 = v39;
        *(_BYTE *)v39 = 0;
        *(_QWORD *)(v39 + 96) = v39 + 112;
        *(_QWORD *)(v39 + 128) = v39 + 144;
        *(_QWORD *)(v39 + 160) = v39 + 176;
        *(_QWORD *)(v39 + 192) = v39 + 208;
        *(_QWORD *)(v39 + 224) = v39 + 240;
        *(_QWORD *)(v39 + 256) = v39 + 272;
        *(_QWORD *)(v39 + 288) = v39 + 304;
        *(_QWORD *)(v39 + 320) = v39 + 336;
        *(_QWORD *)(v39 + 352) = v39 + 368;
        *(_QWORD *)(v39 + 384) = v39 + 400;
        *(_QWORD *)(v39 + 416) = v39 + 432;
        *(_QWORD *)(v39 + 104) = 0;
        *(_BYTE *)(v39 + 112) = 0;
        *(_QWORD *)(v39 + 136) = 0;
        *(_BYTE *)(v39 + 144) = 0;
        *(_QWORD *)(v39 + 168) = 0;
        *(_BYTE *)(v39 + 176) = 0;
        *(_QWORD *)(v39 + 200) = 0;
        *(_BYTE *)(v39 + 208) = 0;
        *(_QWORD *)(v39 + 232) = 0;
        *(_BYTE *)(v39 + 240) = 0;
        *(_QWORD *)(v39 + 264) = 0;
        *(_BYTE *)(v39 + 272) = 0;
        *(_QWORD *)(v39 + 296) = 0;
        *(_BYTE *)(v39 + 304) = 0;
        *(_QWORD *)(v39 + 328) = 0;
        *(_BYTE *)(v39 + 336) = 0;
        *(_QWORD *)(v39 + 360) = 0;
        *(_BYTE *)(v39 + 368) = 0;
        *(_QWORD *)(v39 + 392) = 0;
        *(_BYTE *)(v39 + 400) = 0;
        *(_QWORD *)(v39 + 424) = 0x800000000LL;
        *(_QWORD *)(v39 + 528) = v39 + 544;
        *(_QWORD *)(v39 + 536) = 0x600000000LL;
        v24 = 0;
      }
      *(_QWORD *)(v22 + 8) = v23;
      goto LABEL_15;
    }
  }
  v24 = *(unsigned int *)(v23 + 424);
  v25 = *(unsigned int *)(v23 + 428);
  v26 = v24 + 1;
LABEL_15:
  v50 = v12;
  LOBYTE(v51) = 1;
  if ( v26 > v25 )
  {
    sub_2237220(v23 + 416, v23 + 432, v26, 12);
    v24 = *(unsigned int *)(v23 + 424);
  }
  v27 = *(_QWORD *)(v23 + 416) + 12 * v24;
  *(_QWORD *)v27 = v50;
  *(_DWORD *)(v27 + 8) = v51;
  v28 = v52;
  ++*(_DWORD *)(v23 + 424);
  LOBYTE(v27) = v61;
  *(_QWORD *)a1 = v28;
  LODWORD(v28) = v53;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 8) = v28;
  *(_DWORD *)(a1 + 12) = v54;
  *(_QWORD *)(a1 + 16) = v55;
  *(_BYTE *)(a1 + 24) = v56;
  if ( (_BYTE)v27 )
  {
    sub_FC70F0(a1 + 32, (__int64)&v57);
    v29 = v59;
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v29;
    *(_DWORD *)(a1 + 112) = v60;
  }
LABEL_6:
  *(_QWORD *)(a1 + 128) = v62;
  sub_15F7200(&v52);
  return a1;
}
