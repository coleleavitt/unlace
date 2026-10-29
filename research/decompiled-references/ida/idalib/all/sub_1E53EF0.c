__int64 __fastcall sub_1E53EF0(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, double a5)
{
  _WORD *v7; // rax
  char v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  char v11; // al
  unsigned __int8 v12; // al
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // r14
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rdx
  __int64 v42; // r15
  void *v43; // rdi
  __int64 v44; // [rsp+0h] [rbp-F0h]
  __int64 v45; // [rsp+10h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+1Ch] [rbp-D4h]
  int v47; // [rsp+24h] [rbp-CCh]
  _QWORD v48[2]; // [rsp+28h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-B8h]
  __int64 v50; // [rsp+48h] [rbp-A8h]
  __int64 v51; // [rsp+50h] [rbp-A0h]
  char v52; // [rsp+A0h] [rbp-50h]
  unsigned int v53; // [rsp+A8h] [rbp-48h]
  char v54; // [rsp+ACh] [rbp-44h]

  if ( !a2 )
    return 1;
  if ( (*(_DWORD *)a2 & 0x4000) != 0 )
  {
    v7 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
    v8 = *(_BYTE *)(a2 + 1);
    v9 = *(_QWORD *)(a2 + 8);
    v10 = (__int64)v7;
    *v7 = *v7 & 0xFE00 | 0x16;
    if ( unk_2CD7484 )
      sub_EE9B50(22);
    v11 = *(_BYTE *)(v10 + 1);
    *(_BYTE *)(v10 + 2) &= 0xF8u;
    *(_QWORD *)(v10 + 8) = v9;
    *(_DWORD *)(v10 + 16) = a3;
    *(_DWORD *)(v10 + 20) = a4;
    *(_BYTE *)(v10 + 1) = v8 & 0x3E | v11 & 1;
    *(_QWORD *)(v10 + 24) = a2;
    v12 = sub_B63820(v10);
    *(_BYTE *)(v10 + 1) = (v12 << 6) | *(_BYTE *)(v10 + 1) & 0x3F;
    *(_BYTE *)(v10 + 2) = *(_BYTE *)(v10 + 2) & 0xF8 | (v12 >> 2) & 7;
    return v10;
  }
  sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), a3, 0x12ACu, 0);
  v14 = sub_EEC8C0(a2, a1 + 8, a5);
  if ( v52 )
  {
    v23 = v50;
    if ( !v50 )
    {
      v28 = v51;
      v29 = *(_DWORD *)(v51 + 14976);
      if ( v29 )
      {
        v34 = (unsigned int)(v29 - 1);
        *(_DWORD *)(v51 + 14976) = v34;
        v23 = *(_QWORD *)(v28 + 8 * v34 + 14848);
        v35 = *(unsigned int *)(v23 + 536);
        *(_BYTE *)v23 = 0;
        v36 = *(_QWORD *)(v23 + 528);
        *(_DWORD *)(v23 + 424) = 0;
        v37 = v36 + (v35 << 6);
        if ( v36 == v37 )
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
              v37 -= 64;
              v38 = *(void **)(v37 + 24);
              if ( v38 == (void *)(v37 + 40) )
                break;
              operator delete(v38);
              if ( v36 == v37 )
                goto LABEL_27;
            }
          }
          while ( v36 != v37 );
LABEL_27:
          v24 = *(unsigned int *)(v23 + 424);
          v26 = v24 + 1;
        }
        *(_DWORD *)(v23 + 536) = 0;
        v25 = *(unsigned int *)(v23 + 428);
      }
      else
      {
        v30 = operator new(0x3A0u);
        v25 = 8;
        v26 = 1;
        v23 = v30;
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
        v24 = 0;
      }
      v50 = v23;
      goto LABEL_14;
    }
  }
  else
  {
    if ( !v54 )
    {
      sub_15F7200(v48);
      return 1;
    }
    v17 = sub_168B9E0(v48);
    v20 = v49;
    if ( v49 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
    v45 = v20;
    v21 = sub_1587BC0(v17, &v45, v15, v16, v18, v19);
    v22 = *v21 + 32LL * v53;
    v23 = *(_QWORD *)(v22 + 8);
    if ( !v23 )
    {
      v31 = *(_QWORD *)(v22 + 16);
      v32 = *(_DWORD *)(v31 + 14976);
      if ( v32 )
      {
        v39 = (unsigned int)(v32 - 1);
        *(_DWORD *)(v31 + 14976) = v39;
        v23 = *(_QWORD *)(v31 + 8 * v39 + 14848);
        v40 = *(unsigned int *)(v23 + 536);
        *(_BYTE *)v23 = 0;
        v41 = *(_QWORD *)(v23 + 528);
        *(_DWORD *)(v23 + 424) = 0;
        v42 = v41 + (v40 << 6);
        while ( v41 != v42 )
        {
          while ( 1 )
          {
            v42 -= 64;
            v43 = *(void **)(v42 + 24);
            if ( v43 == (void *)(v42 + 40) )
              break;
            v44 = v41;
            operator delete(v43);
            v41 = v44;
            if ( v44 == v42 )
              goto LABEL_35;
          }
        }
LABEL_35:
        v24 = *(unsigned int *)(v23 + 424);
        v25 = *(unsigned int *)(v23 + 428);
        *(_DWORD *)(v23 + 536) = 0;
        v26 = v24 + 1;
      }
      else
      {
        v33 = operator new(0x3A0u);
        v25 = 8;
        v26 = 1;
        v23 = v33;
        *(_BYTE *)v33 = 0;
        *(_QWORD *)(v33 + 96) = v33 + 112;
        *(_QWORD *)(v33 + 128) = v33 + 144;
        *(_QWORD *)(v33 + 160) = v33 + 176;
        *(_QWORD *)(v33 + 192) = v33 + 208;
        *(_QWORD *)(v33 + 224) = v33 + 240;
        *(_QWORD *)(v33 + 256) = v33 + 272;
        *(_QWORD *)(v33 + 288) = v33 + 304;
        *(_QWORD *)(v33 + 320) = v33 + 336;
        *(_QWORD *)(v33 + 352) = v33 + 368;
        *(_QWORD *)(v33 + 384) = v33 + 400;
        *(_QWORD *)(v33 + 416) = v33 + 432;
        *(_QWORD *)(v33 + 104) = 0;
        *(_BYTE *)(v33 + 112) = 0;
        *(_QWORD *)(v33 + 136) = 0;
        *(_BYTE *)(v33 + 144) = 0;
        *(_QWORD *)(v33 + 168) = 0;
        *(_BYTE *)(v33 + 176) = 0;
        *(_QWORD *)(v33 + 200) = 0;
        *(_BYTE *)(v33 + 208) = 0;
        *(_QWORD *)(v33 + 232) = 0;
        *(_BYTE *)(v33 + 240) = 0;
        *(_QWORD *)(v33 + 264) = 0;
        *(_BYTE *)(v33 + 272) = 0;
        *(_QWORD *)(v33 + 296) = 0;
        *(_BYTE *)(v33 + 304) = 0;
        *(_QWORD *)(v33 + 328) = 0;
        *(_BYTE *)(v33 + 336) = 0;
        *(_QWORD *)(v33 + 360) = 0;
        *(_BYTE *)(v33 + 368) = 0;
        *(_QWORD *)(v33 + 392) = 0;
        *(_BYTE *)(v33 + 400) = 0;
        *(_QWORD *)(v33 + 424) = 0x800000000LL;
        *(_QWORD *)(v33 + 528) = v33 + 544;
        *(_QWORD *)(v33 + 536) = 0x600000000LL;
        v24 = 0;
      }
      *(_QWORD *)(v22 + 8) = v23;
      goto LABEL_14;
    }
  }
  v24 = *(unsigned int *)(v23 + 424);
  v25 = *(unsigned int *)(v23 + 428);
  v26 = v24 + 1;
LABEL_14:
  v46 = v14;
  LOBYTE(v47) = 1;
  if ( v26 > v25 )
  {
    sub_2237220(v23 + 416, v23 + 432, v26, 12);
    v24 = *(unsigned int *)(v23 + 424);
  }
  v27 = *(_QWORD *)(v23 + 416) + 12 * v24;
  *(_QWORD *)v27 = v46;
  *(_DWORD *)(v27 + 8) = v47;
  ++*(_DWORD *)(v23 + 424);
  sub_15F7200(v48);
  return 1;
}
