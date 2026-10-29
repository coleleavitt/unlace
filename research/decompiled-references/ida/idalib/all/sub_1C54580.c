void __fastcall sub_1C54580(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  unsigned __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int16 v10; // ax
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // r15
  void *v33; // rdi
  __int64 v34; // rax
  char *v35; // r8
  char *v36; // rdx
  char v37; // si
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  void *v47; // rdi
  __int64 v48; // [rsp+0h] [rbp-F8h]
  __int64 v49; // [rsp+0h] [rbp-F8h]
  __int64 v50; // [rsp+8h] [rbp-F0h]
  __int64 v51; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+24h] [rbp-D4h]
  int v53; // [rsp+2Ch] [rbp-CCh]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+38h] [rbp-C0h]
  _QWORD v56[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-A8h]
  __int64 v58; // [rsp+58h] [rbp-A0h]
  char v59; // [rsp+A8h] [rbp-50h]
  unsigned int v60; // [rsp+B0h] [rbp-48h]
  char v61; // [rsp+B4h] [rbp-44h]

  v5 = a2;
  v6 = sub_EEB7E0(a1, a2, a4);
  sub_168B9F0((__int64)&ptr, (__int64 *)(a3 + 8), v6, 0x1B96u, 0);
  v7 = sub_EEC8C0(a2, a3 + 8, a4);
  if ( v59 )
  {
    v21 = v57;
    if ( !v57 )
    {
      v27 = v58;
      v28 = *(_DWORD *)(v58 + 14976);
      if ( v28 )
      {
        v29 = (unsigned int)(v28 - 1);
        *(_DWORD *)(v58 + 14976) = v29;
        v21 = *(_QWORD *)(v27 + 8 * v29 + 14848);
        v30 = *(unsigned int *)(v21 + 536);
        v31 = *(_QWORD *)(v21 + 528);
        *(_BYTE *)v21 = 0;
        *(_DWORD *)(v21 + 424) = 0;
        v32 = v31 + (v30 << 6);
        if ( v31 == v32 )
        {
          v24 = 1;
          v22 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v32 -= 64;
              v33 = *(void **)(v32 + 24);
              if ( v33 == (void *)(v32 + 40) )
                break;
              v48 = v31;
              operator delete(v33);
              v31 = v48;
              if ( v48 == v32 )
                goto LABEL_26;
            }
          }
          while ( v31 != v32 );
LABEL_26:
          v22 = *(unsigned int *)(v21 + 424);
          v24 = v22 + 1;
        }
        *(_DWORD *)(v21 + 536) = 0;
        v23 = *(unsigned int *)(v21 + 428);
      }
      else
      {
        v42 = operator new(0x3A0u);
        v23 = 8;
        v24 = 1;
        v21 = v42;
        *(_BYTE *)v42 = 0;
        *(_QWORD *)(v42 + 96) = v42 + 112;
        *(_QWORD *)(v42 + 128) = v42 + 144;
        *(_QWORD *)(v42 + 160) = v42 + 176;
        *(_QWORD *)(v42 + 192) = v42 + 208;
        *(_QWORD *)(v42 + 224) = v42 + 240;
        *(_QWORD *)(v42 + 256) = v42 + 272;
        *(_QWORD *)(v42 + 288) = v42 + 304;
        *(_QWORD *)(v42 + 320) = v42 + 336;
        *(_QWORD *)(v42 + 352) = v42 + 368;
        *(_QWORD *)(v42 + 384) = v42 + 400;
        *(_QWORD *)(v42 + 416) = v42 + 432;
        *(_QWORD *)(v42 + 104) = 0;
        *(_BYTE *)(v42 + 112) = 0;
        *(_QWORD *)(v42 + 136) = 0;
        *(_BYTE *)(v42 + 144) = 0;
        *(_QWORD *)(v42 + 168) = 0;
        *(_BYTE *)(v42 + 176) = 0;
        *(_QWORD *)(v42 + 200) = 0;
        *(_BYTE *)(v42 + 208) = 0;
        *(_QWORD *)(v42 + 232) = 0;
        *(_BYTE *)(v42 + 240) = 0;
        *(_QWORD *)(v42 + 264) = 0;
        *(_BYTE *)(v42 + 272) = 0;
        *(_QWORD *)(v42 + 296) = 0;
        *(_BYTE *)(v42 + 304) = 0;
        *(_QWORD *)(v42 + 328) = 0;
        *(_BYTE *)(v42 + 336) = 0;
        *(_QWORD *)(v42 + 360) = 0;
        *(_BYTE *)(v42 + 368) = 0;
        *(_QWORD *)(v42 + 392) = 0;
        *(_BYTE *)(v42 + 400) = 0;
        *(_QWORD *)(v42 + 424) = 0x800000000LL;
        *(_QWORD *)(v42 + 528) = v42 + 544;
        *(_QWORD *)(v42 + 536) = 0x600000000LL;
        v22 = 0;
      }
      v57 = v21;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( v61 )
  {
    v17 = sub_168B9E0(&ptr);
    v18 = v56[0];
    if ( v56[0] )
      v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v56[0] + 32LL))(v56[0]);
    v51 = v18;
    v19 = sub_1587BC0(v17, &v51, v13, v14, v15, v16);
    v20 = *v19 + 32LL * v60;
    v21 = *(_QWORD *)(v20 + 8);
    if ( !v21 )
    {
      v39 = *(_QWORD *)(v20 + 16);
      v40 = *(_DWORD *)(v39 + 14976);
      if ( v40 )
      {
        v43 = (unsigned int)(v40 - 1);
        *(_DWORD *)(v39 + 14976) = v43;
        v21 = *(_QWORD *)(v39 + 8 * v43 + 14848);
        v44 = *(unsigned int *)(v21 + 536);
        v45 = *(_QWORD *)(v21 + 528);
        *(_BYTE *)v21 = 0;
        *(_DWORD *)(v21 + 424) = 0;
        v46 = v45 + (v44 << 6);
        if ( v45 == v46 )
        {
          v24 = 1;
          v22 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v46 -= 64;
              v47 = *(void **)(v46 + 24);
              if ( v47 == (void *)(v46 + 40) )
                break;
              v50 = v45;
              v49 = v46;
              operator delete(v47);
              v46 = v49;
              v45 = v50;
              if ( v50 == v49 )
                goto LABEL_44;
            }
          }
          while ( v45 != v46 );
LABEL_44:
          v22 = *(unsigned int *)(v21 + 424);
          v24 = v22 + 1;
        }
        *(_DWORD *)(v21 + 536) = 0;
        v23 = *(unsigned int *)(v21 + 428);
      }
      else
      {
        v41 = operator new(0x3A0u);
        v23 = 8;
        v24 = 1;
        v21 = v41;
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
        v22 = 0;
      }
      *(_QWORD *)(v20 + 8) = v21;
      goto LABEL_15;
    }
LABEL_14:
    v22 = *(unsigned int *)(v21 + 424);
    v23 = *(unsigned int *)(v21 + 428);
    v24 = v22 + 1;
LABEL_15:
    v52 = v7;
    LOBYTE(v53) = 1;
    if ( v24 > v23 )
    {
      sub_2237220(v21 + 416, v21 + 432, v24, 12);
      v22 = *(unsigned int *)(v21 + 424);
    }
    v25 = *(_QWORD *)(v21 + 416) + 12 * v22;
    *(_QWORD *)v25 = v52;
    *(_DWORD *)(v25 + 8) = v53;
    ++*(_DWORD *)(v21 + 424);
  }
  sub_15F7200(&ptr);
  v8 = v56;
  v9 = 0;
  ptr = v56;
  v55 = 0x800000000LL;
  while ( 1 )
  {
    v8[v9] = v5;
    v9 = (unsigned int)(v55 + 1);
    LODWORD(v55) = v55 + 1;
    v10 = *(_WORD *)v5 & 0x1FF;
    if ( v10 != 20 )
      break;
    v11 = v9 + 1;
    v5 = *(_QWORD *)(v5 + 24);
    if ( v9 + 1 <= (unsigned __int64)HIDWORD(v55) )
      goto LABEL_6;
LABEL_20:
    sub_2237220(&ptr, v56, v11, 8);
    v9 = (unsigned int)v55;
LABEL_6:
    v8 = ptr;
  }
  if ( ((v10 + 433) & 0x1FFu) > 9 )
  {
    v12 = ptr;
    if ( ptr == v56 )
      return;
    goto LABEL_9;
  }
  v26 = *(_QWORD *)(v5 + 16);
  if ( ((*(_WORD *)v26 + 433) & 0x1FFu) > 9 || ((*(_WORD *)(v26 + 2) >> 3) & 0x7F) != 4 )
  {
    v5 = *(_QWORD *)(v5 + 16);
    v11 = v9 + 1;
    if ( v9 + 1 <= (unsigned __int64)HIDWORD(v55) )
      goto LABEL_6;
    goto LABEL_20;
  }
  v34 = *(_QWORD *)(v26 + 16);
  *(_QWORD *)(v5 + 16) = v34;
  v12 = ptr;
  v35 = (char *)ptr + 8 * v9;
  v36 = (char *)ptr;
  v37 = 2 * ((*(_BYTE *)(v34 + 1) >> 1) & 3);
  if ( ptr != v35 )
  {
    do
    {
      v38 = *(_QWORD *)v36;
      v36 += 8;
      *(_BYTE *)(v38 + 1) = v37 | *(_BYTE *)(v38 + 1) & 0xF9;
    }
    while ( v35 != v36 );
    v12 = ptr;
  }
  if ( v12 != v56 )
LABEL_9:
    free(v12);
}
