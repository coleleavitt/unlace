unsigned __int64 __fastcall sub_1E503F0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rdi
  unsigned int v8; // r13d
  unsigned __int64 v10; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r15
  __int64 v34; // rbp
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r15
  void *v40; // rdi
  __int64 v41; // [rsp+8h] [rbp-F0h]
  __int64 v42; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v43; // [rsp+24h] [rbp-D4h]
  int v44; // [rsp+2Ch] [rbp-CCh]
  _QWORD v45[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-B8h]
  __int64 v47; // [rsp+50h] [rbp-A8h]
  __int64 v48; // [rsp+58h] [rbp-A0h]
  char v49; // [rsp+A8h] [rbp-50h]
  unsigned int v50; // [rsp+B0h] [rbp-48h]
  char v51; // [rsp+B4h] [rbp-44h]

  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v7 + 17) & 1) != 0 )
    return sub_A781D0(*(_QWORD *)(a1 + 248), a2, a5);
  v8 = a3;
  v10 = HIDWORD(a3);
  if ( sub_F57E80(v7) )
    return sub_A781D0(*(_QWORD *)(a1 + 248), a2, a5);
  sub_168B9F0((__int64)v45, (__int64 *)(a1 + 8), a4, 0x12ACu, 0);
  if ( v49 )
  {
    v20 = v47;
    if ( !v47 )
    {
      v25 = v48;
      v26 = *(_DWORD *)(v48 + 14976);
      if ( v26 )
      {
        v31 = (unsigned int)(v26 - 1);
        *(_DWORD *)(v48 + 14976) = v31;
        v20 = *(_QWORD *)(v25 + 8 * v31 + 14848);
        v32 = *(unsigned int *)(v20 + 536);
        *(_BYTE *)v20 = 0;
        v33 = *(_QWORD *)(v20 + 528);
        *(_DWORD *)(v20 + 424) = 0;
        v34 = v33 + (v32 << 6);
        while ( v33 != v34 )
        {
          while ( 1 )
          {
            v34 -= 64;
            v35 = *(void **)(v34 + 24);
            if ( v35 == (void *)(v34 + 40) )
              break;
            operator delete(v35);
            if ( v33 == v34 )
              goto LABEL_25;
          }
        }
LABEL_25:
        v21 = *(unsigned int *)(v20 + 424);
        v22 = *(unsigned int *)(v20 + 428);
        *(_DWORD *)(v20 + 536) = 0;
        v23 = v21 + 1;
      }
      else
      {
        v27 = operator new(0x3A0u);
        v22 = 8;
        v23 = 1;
        v20 = v27;
        *(_BYTE *)v27 = 0;
        *(_QWORD *)(v27 + 96) = v27 + 112;
        *(_QWORD *)(v27 + 128) = v27 + 144;
        *(_QWORD *)(v27 + 160) = v27 + 176;
        *(_QWORD *)(v27 + 192) = v27 + 208;
        *(_QWORD *)(v27 + 224) = v27 + 240;
        *(_QWORD *)(v27 + 256) = v27 + 272;
        *(_QWORD *)(v27 + 288) = v27 + 304;
        *(_QWORD *)(v27 + 320) = v27 + 336;
        *(_QWORD *)(v27 + 352) = v27 + 368;
        *(_QWORD *)(v27 + 384) = v27 + 400;
        *(_QWORD *)(v27 + 416) = v27 + 432;
        *(_QWORD *)(v27 + 104) = 0;
        *(_BYTE *)(v27 + 112) = 0;
        *(_QWORD *)(v27 + 136) = 0;
        *(_BYTE *)(v27 + 144) = 0;
        *(_QWORD *)(v27 + 168) = 0;
        *(_BYTE *)(v27 + 176) = 0;
        *(_QWORD *)(v27 + 200) = 0;
        *(_BYTE *)(v27 + 208) = 0;
        *(_QWORD *)(v27 + 232) = 0;
        *(_BYTE *)(v27 + 240) = 0;
        *(_QWORD *)(v27 + 264) = 0;
        *(_BYTE *)(v27 + 272) = 0;
        *(_QWORD *)(v27 + 296) = 0;
        *(_BYTE *)(v27 + 304) = 0;
        *(_QWORD *)(v27 + 328) = 0;
        *(_BYTE *)(v27 + 336) = 0;
        *(_QWORD *)(v27 + 360) = 0;
        *(_BYTE *)(v27 + 368) = 0;
        *(_QWORD *)(v27 + 392) = 0;
        *(_BYTE *)(v27 + 400) = 0;
        *(_QWORD *)(v27 + 424) = 0x800000000LL;
        *(_QWORD *)(v27 + 528) = v27 + 544;
        *(_QWORD *)(v27 + 536) = 0x600000000LL;
        v21 = 0;
      }
      v47 = v20;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( v51 )
  {
    v14 = sub_168B9E0(v45);
    v17 = v46;
    if ( v46 )
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
    v42 = v17;
    v18 = sub_1587BC0(v14, &v42, v12, v13, v15, v16);
    v19 = *v18 + 32LL * v50;
    v20 = *(_QWORD *)(v19 + 8);
    if ( !v20 )
    {
      v28 = *(_QWORD *)(v19 + 16);
      v29 = *(_DWORD *)(v28 + 14976);
      if ( v29 )
      {
        v36 = (unsigned int)(v29 - 1);
        *(_DWORD *)(v28 + 14976) = v36;
        v20 = *(_QWORD *)(v28 + 8 * v36 + 14848);
        v37 = *(unsigned int *)(v20 + 536);
        *(_BYTE *)v20 = 0;
        v38 = *(_QWORD *)(v20 + 528);
        *(_DWORD *)(v20 + 424) = 0;
        v37 <<= 6;
        v39 = v38 + v37;
        v41 = v38;
        while ( v41 != v39 )
        {
          while ( 1 )
          {
            v39 -= 64;
            v40 = *(void **)(v39 + 24);
            if ( v40 == (void *)(v39 + 40) )
              break;
            operator delete(v40);
            if ( v41 == v39 )
              goto LABEL_29;
          }
        }
LABEL_29:
        v21 = *(unsigned int *)(v20 + 424);
        v22 = *(unsigned int *)(v20 + 428);
        *(_DWORD *)(v20 + 536) = 0;
        v23 = v21 + 1;
      }
      else
      {
        v30 = operator new(0x3A0u);
        v22 = 8;
        v23 = 1;
        v20 = v30;
        *(_BYTE *)v30 = 0;
        *(_QWORD *)(v30 + 96) = v30 + 112;
        *(_QWORD *)(v30 + 128) = v30 + 144;
        *(_QWORD *)(v30 + 160) = v30 + 176;
        *(_QWORD *)(v30 + 192) = v30 + 208;
        *(_QWORD *)(v30 + 224) = v30 + 240;
        *(_QWORD *)(v30 + 256) = v30 + 272;
        *(_QWORD *)(v30 + 288) = v30 + 304;
        *(_QWORD *)(v30 + 320) = v30 + 336;
        *(_QWORD *)(v30 + 352) = v30 + 368;
        *(_QWORD *)(v30 + 384) = v30 + 400;
        *(_QWORD *)(v30 + 416) = v30 + 432;
        *(_QWORD *)(v30 + 104) = 0;
        *(_BYTE *)(v30 + 112) = 0;
        *(_QWORD *)(v30 + 136) = 0;
        *(_BYTE *)(v30 + 144) = 0;
        *(_QWORD *)(v30 + 168) = 0;
        *(_BYTE *)(v30 + 176) = 0;
        *(_QWORD *)(v30 + 200) = 0;
        *(_BYTE *)(v30 + 208) = 0;
        *(_QWORD *)(v30 + 232) = 0;
        *(_BYTE *)(v30 + 240) = 0;
        *(_QWORD *)(v30 + 264) = 0;
        *(_BYTE *)(v30 + 272) = 0;
        *(_QWORD *)(v30 + 296) = 0;
        *(_BYTE *)(v30 + 304) = 0;
        *(_QWORD *)(v30 + 328) = 0;
        *(_BYTE *)(v30 + 336) = 0;
        *(_QWORD *)(v30 + 360) = 0;
        *(_BYTE *)(v30 + 368) = 0;
        *(_QWORD *)(v30 + 392) = 0;
        *(_BYTE *)(v30 + 400) = 0;
        *(_QWORD *)(v30 + 424) = 0x800000000LL;
        *(_QWORD *)(v30 + 528) = v30 + 544;
        *(_QWORD *)(v30 + 536) = 0x600000000LL;
        v21 = 0;
      }
      *(_QWORD *)(v19 + 8) = v20;
      goto LABEL_11;
    }
LABEL_10:
    v21 = *(unsigned int *)(v20 + 424);
    v22 = *(unsigned int *)(v20 + 428);
    v23 = v21 + 1;
LABEL_11:
    v43 = __PAIR64__(v10, v8);
    LOBYTE(v44) = 1;
    if ( v23 > v22 )
    {
      sub_2237220(v20 + 416, v20 + 432, v23, 12);
      v21 = *(unsigned int *)(v20 + 424);
    }
    v24 = *(_QWORD *)(v20 + 416) + 12 * v21;
    *(_QWORD *)v24 = v43;
    *(_DWORD *)(v24 + 8) = v44;
    ++*(_DWORD *)(v20 + 424);
  }
  sub_15F7200(v45);
  return 0;
}
