__int64 __fastcall sub_1E53840(__int64 a1, unsigned __int64 a2, unsigned int a3, double a4)
{
  __int64 result; // rax
  _WORD *v6; // rax
  char v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  char v10; // al
  unsigned __int8 v11; // al
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // r14
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r15
  void *v41; // rdi
  __int64 v42; // [rsp+0h] [rbp-F0h]
  __int64 v43; // [rsp+10h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+1Ch] [rbp-D4h]
  int v45; // [rsp+24h] [rbp-CCh]
  _QWORD v46[2]; // [rsp+28h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+38h] [rbp-B8h]
  __int64 v48; // [rsp+48h] [rbp-A8h]
  __int64 v49; // [rsp+50h] [rbp-A0h]
  char v50; // [rsp+A0h] [rbp-50h]
  unsigned int v51; // [rsp+A8h] [rbp-48h]
  char v52; // [rsp+ACh] [rbp-44h]

  result = 1;
  if ( !a2 )
    return result;
  if ( (*(_DWORD *)a2 & 0x4000) != 0 )
  {
    v6 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
    v7 = *(_BYTE *)(a2 + 1);
    v8 = *(_QWORD *)(a2 + 8);
    v9 = (__int64)v6;
    *v6 = *v6 & 0xFE00 | 0x16;
    if ( unk_2CD7484 )
      sub_EE9B50(22);
    v10 = *(_BYTE *)(v9 + 1);
    *(_BYTE *)(v9 + 2) &= 0xF8u;
    *(_QWORD *)(v9 + 8) = v8;
    *(_DWORD *)(v9 + 16) = a3;
    *(_DWORD *)(v9 + 20) = 0;
    *(_BYTE *)(v9 + 1) = v7 & 0x3E | v10 & 1;
    *(_QWORD *)(v9 + 24) = a2;
    v11 = sub_B63820(v9);
    *(_BYTE *)(v9 + 1) = (v11 << 6) | *(_BYTE *)(v9 + 1) & 0x3F;
    *(_BYTE *)(v9 + 2) = *(_BYTE *)(v9 + 2) & 0xF8 | (v11 >> 2) & 7;
    return v9;
  }
  sub_168B9F0((__int64)v46, (__int64 *)(a1 + 8), a3, 0x12ACu, 0);
  v12 = sub_EEC8C0(a2, a1 + 8, a4);
  if ( v50 )
  {
    v21 = v48;
    if ( !v48 )
    {
      v26 = v49;
      v27 = *(_DWORD *)(v49 + 14976);
      if ( v27 )
      {
        v32 = (unsigned int)(v27 - 1);
        *(_DWORD *)(v49 + 14976) = v32;
        v21 = *(_QWORD *)(v26 + 8 * v32 + 14848);
        v33 = *(unsigned int *)(v21 + 536);
        *(_BYTE *)v21 = 0;
        v34 = *(_QWORD *)(v21 + 528);
        *(_DWORD *)(v21 + 424) = 0;
        v35 = v34 + (v33 << 6);
        if ( v34 == v35 )
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
              v35 -= 64;
              v36 = *(void **)(v35 + 24);
              if ( v36 == (void *)(v35 + 40) )
                break;
              operator delete(v36);
              if ( v34 == v35 )
                goto LABEL_27;
            }
          }
          while ( v34 != v35 );
LABEL_27:
          v22 = *(unsigned int *)(v21 + 424);
          v24 = v22 + 1;
        }
        *(_DWORD *)(v21 + 536) = 0;
        v23 = *(unsigned int *)(v21 + 428);
      }
      else
      {
        v28 = operator new(0x3A0u);
        v23 = 8;
        v24 = 1;
        v21 = v28;
        *(_BYTE *)v28 = 0;
        *(_QWORD *)(v28 + 96) = v28 + 112;
        *(_QWORD *)(v28 + 128) = v28 + 144;
        *(_QWORD *)(v28 + 160) = v28 + 176;
        *(_QWORD *)(v28 + 192) = v28 + 208;
        *(_QWORD *)(v28 + 224) = v28 + 240;
        *(_QWORD *)(v28 + 256) = v28 + 272;
        *(_QWORD *)(v28 + 288) = v28 + 304;
        *(_QWORD *)(v28 + 320) = v28 + 336;
        *(_QWORD *)(v28 + 352) = v28 + 368;
        *(_QWORD *)(v28 + 384) = v28 + 400;
        *(_QWORD *)(v28 + 416) = v28 + 432;
        *(_QWORD *)(v28 + 104) = 0;
        *(_BYTE *)(v28 + 112) = 0;
        *(_QWORD *)(v28 + 136) = 0;
        *(_BYTE *)(v28 + 144) = 0;
        *(_QWORD *)(v28 + 168) = 0;
        *(_BYTE *)(v28 + 176) = 0;
        *(_QWORD *)(v28 + 200) = 0;
        *(_BYTE *)(v28 + 208) = 0;
        *(_QWORD *)(v28 + 232) = 0;
        *(_BYTE *)(v28 + 240) = 0;
        *(_QWORD *)(v28 + 264) = 0;
        *(_BYTE *)(v28 + 272) = 0;
        *(_QWORD *)(v28 + 296) = 0;
        *(_BYTE *)(v28 + 304) = 0;
        *(_QWORD *)(v28 + 328) = 0;
        *(_BYTE *)(v28 + 336) = 0;
        *(_QWORD *)(v28 + 360) = 0;
        *(_BYTE *)(v28 + 368) = 0;
        *(_QWORD *)(v28 + 392) = 0;
        *(_BYTE *)(v28 + 400) = 0;
        *(_QWORD *)(v28 + 424) = 0x800000000LL;
        *(_QWORD *)(v28 + 528) = v28 + 544;
        *(_QWORD *)(v28 + 536) = 0x600000000LL;
        v22 = 0;
      }
      v48 = v21;
      goto LABEL_14;
    }
  }
  else
  {
    if ( !v52 )
    {
      sub_15F7200(v46);
      return 1;
    }
    v15 = sub_168B9E0(v46);
    v18 = v47;
    if ( v47 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
    v43 = v18;
    v19 = sub_1587BC0(v15, &v43, v13, v14, v16, v17);
    v20 = *v19 + 32LL * v51;
    v21 = *(_QWORD *)(v20 + 8);
    if ( !v21 )
    {
      v29 = *(_QWORD *)(v20 + 16);
      v30 = *(_DWORD *)(v29 + 14976);
      if ( v30 )
      {
        v37 = (unsigned int)(v30 - 1);
        *(_DWORD *)(v29 + 14976) = v37;
        v21 = *(_QWORD *)(v29 + 8 * v37 + 14848);
        v38 = *(unsigned int *)(v21 + 536);
        *(_BYTE *)v21 = 0;
        v39 = *(_QWORD *)(v21 + 528);
        *(_DWORD *)(v21 + 424) = 0;
        v40 = v39 + (v38 << 6);
        while ( v39 != v40 )
        {
          while ( 1 )
          {
            v40 -= 64;
            v41 = *(void **)(v40 + 24);
            if ( v41 == (void *)(v40 + 40) )
              break;
            v42 = v39;
            operator delete(v41);
            v39 = v42;
            if ( v42 == v40 )
              goto LABEL_35;
          }
        }
LABEL_35:
        v22 = *(unsigned int *)(v21 + 424);
        v23 = *(unsigned int *)(v21 + 428);
        *(_DWORD *)(v21 + 536) = 0;
        v24 = v22 + 1;
      }
      else
      {
        v31 = operator new(0x3A0u);
        v23 = 8;
        v24 = 1;
        v21 = v31;
        *(_BYTE *)v31 = 0;
        *(_QWORD *)(v31 + 96) = v31 + 112;
        *(_QWORD *)(v31 + 128) = v31 + 144;
        *(_QWORD *)(v31 + 160) = v31 + 176;
        *(_QWORD *)(v31 + 192) = v31 + 208;
        *(_QWORD *)(v31 + 224) = v31 + 240;
        *(_QWORD *)(v31 + 256) = v31 + 272;
        *(_QWORD *)(v31 + 288) = v31 + 304;
        *(_QWORD *)(v31 + 320) = v31 + 336;
        *(_QWORD *)(v31 + 352) = v31 + 368;
        *(_QWORD *)(v31 + 384) = v31 + 400;
        *(_QWORD *)(v31 + 416) = v31 + 432;
        *(_QWORD *)(v31 + 104) = 0;
        *(_BYTE *)(v31 + 112) = 0;
        *(_QWORD *)(v31 + 136) = 0;
        *(_BYTE *)(v31 + 144) = 0;
        *(_QWORD *)(v31 + 168) = 0;
        *(_BYTE *)(v31 + 176) = 0;
        *(_QWORD *)(v31 + 200) = 0;
        *(_BYTE *)(v31 + 208) = 0;
        *(_QWORD *)(v31 + 232) = 0;
        *(_BYTE *)(v31 + 240) = 0;
        *(_QWORD *)(v31 + 264) = 0;
        *(_BYTE *)(v31 + 272) = 0;
        *(_QWORD *)(v31 + 296) = 0;
        *(_BYTE *)(v31 + 304) = 0;
        *(_QWORD *)(v31 + 328) = 0;
        *(_BYTE *)(v31 + 336) = 0;
        *(_QWORD *)(v31 + 360) = 0;
        *(_BYTE *)(v31 + 368) = 0;
        *(_QWORD *)(v31 + 392) = 0;
        *(_BYTE *)(v31 + 400) = 0;
        *(_QWORD *)(v31 + 424) = 0x800000000LL;
        *(_QWORD *)(v31 + 528) = v31 + 544;
        *(_QWORD *)(v31 + 536) = 0x600000000LL;
        v22 = 0;
      }
      *(_QWORD *)(v20 + 8) = v21;
      goto LABEL_14;
    }
  }
  v22 = *(unsigned int *)(v21 + 424);
  v23 = *(unsigned int *)(v21 + 428);
  v24 = v22 + 1;
LABEL_14:
  v44 = v12;
  LOBYTE(v45) = 1;
  if ( v24 > v23 )
  {
    sub_2237220(v21 + 416, v21 + 432, v24, 12);
    v22 = *(unsigned int *)(v21 + 424);
  }
  v25 = *(_QWORD *)(v21 + 416) + 12 * v22;
  *(_QWORD *)v25 = v44;
  *(_DWORD *)(v25 + 8) = v45;
  ++*(_DWORD *)(v21 + 424);
  sub_15F7200(v46);
  return 1;
}
