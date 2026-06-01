__int64 __fastcall sub_16AAEC0(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned int v18; // r14d
  unsigned int v19; // r13d
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // r12
  void *v28; // rdi
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // r13
  void *v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-60h]
  __int64 v39; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+24h] [rbp-44h]
  int v41; // [rsp+2Ch] [rbp-3Ch]

  if ( *(_BYTE *)(a1 + 120) )
  {
    v14 = *(_QWORD *)(a1 + 32);
    v18 = *a2;
    v19 = a2[2];
    if ( v14 )
    {
      v15 = *(unsigned int *)(v14 + 424);
      v20 = *(unsigned int *)(v14 + 428);
      v17 = v15 + 1;
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 40);
      v23 = *(_DWORD *)(v22 + 14976);
      if ( v23 )
      {
        v24 = (unsigned int)(v23 - 1);
        *(_DWORD *)(v22 + 14976) = v24;
        v14 = *(_QWORD *)(v22 + 8 * v24 + 14848);
        v25 = *(unsigned int *)(v14 + 536);
        *(_BYTE *)v14 = 0;
        v26 = *(_QWORD *)(v14 + 528);
        *(_DWORD *)(v14 + 424) = 0;
        v27 = v26 + (v25 << 6);
        if ( v26 == v27 )
        {
          v17 = 1;
          v15 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v27 -= 64;
              v28 = *(void **)(v27 + 24);
              if ( v28 == (void *)(v27 + 40) )
                break;
              operator delete(v28);
              if ( v26 == v27 )
                goto LABEL_18;
            }
          }
          while ( v26 != v27 );
LABEL_18:
          v15 = *(unsigned int *)(v14 + 424);
          v17 = v15 + 1;
        }
        *(_DWORD *)(v14 + 536) = 0;
        v20 = *(unsigned int *)(v14 + 428);
      }
      else
      {
        v32 = operator new(0x3A0u);
        v20 = 8;
        v17 = 1;
        v14 = v32;
        *(_BYTE *)v32 = 0;
        *(_QWORD *)(v32 + 96) = v32 + 112;
        *(_QWORD *)(v32 + 128) = v32 + 144;
        *(_QWORD *)(v32 + 160) = v32 + 176;
        *(_QWORD *)(v32 + 192) = v32 + 208;
        *(_QWORD *)(v32 + 224) = v32 + 240;
        *(_QWORD *)(v32 + 256) = v32 + 272;
        *(_QWORD *)(v32 + 288) = v32 + 304;
        *(_QWORD *)(v32 + 320) = v32 + 336;
        *(_QWORD *)(v32 + 352) = v32 + 368;
        *(_QWORD *)(v32 + 384) = v32 + 400;
        *(_QWORD *)(v32 + 416) = v32 + 432;
        *(_QWORD *)(v32 + 104) = 0;
        *(_BYTE *)(v32 + 112) = 0;
        *(_QWORD *)(v32 + 136) = 0;
        *(_BYTE *)(v32 + 144) = 0;
        *(_QWORD *)(v32 + 168) = 0;
        *(_BYTE *)(v32 + 176) = 0;
        *(_QWORD *)(v32 + 200) = 0;
        *(_BYTE *)(v32 + 208) = 0;
        *(_QWORD *)(v32 + 232) = 0;
        *(_BYTE *)(v32 + 240) = 0;
        *(_QWORD *)(v32 + 264) = 0;
        *(_BYTE *)(v32 + 272) = 0;
        *(_QWORD *)(v32 + 296) = 0;
        *(_BYTE *)(v32 + 304) = 0;
        *(_QWORD *)(v32 + 328) = 0;
        *(_BYTE *)(v32 + 336) = 0;
        *(_QWORD *)(v32 + 360) = 0;
        *(_BYTE *)(v32 + 368) = 0;
        *(_QWORD *)(v32 + 392) = 0;
        *(_BYTE *)(v32 + 400) = 0;
        *(_QWORD *)(v32 + 424) = 0x800000000LL;
        *(_QWORD *)(v32 + 528) = v32 + 544;
        *(_QWORD *)(v32 + 536) = 0x600000000LL;
        v15 = 0;
      }
      *(_QWORD *)(a1 + 32) = v14;
    }
    v40 = __PAIR64__(v19, v18);
    LOBYTE(v41) = 1;
    if ( v17 <= v20 )
      goto LABEL_13;
LABEL_9:
    sub_2237220(v14 + 416, v14 + 432, v17, 12);
    v15 = *(unsigned int *)(v14 + 424);
LABEL_13:
    v21 = *(_QWORD *)(v14 + 416) + 12 * v15;
    *(_QWORD *)v21 = v40;
    *(_DWORD *)(v21 + 8) = v41;
    ++*(_DWORD *)(v14 + 424);
    return a1;
  }
  if ( *(_BYTE *)(a1 + 132) )
  {
    v8 = sub_168B9E0((_QWORD *)a1);
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 32LL))(*(_QWORD *)(a1 + 16));
    v39 = v9;
    v10 = sub_1587BC0(v8, &v39, v4, v5, v6, v7);
    v11 = *a2;
    v12 = a2[2];
    v13 = *v10 + 32LL * *(unsigned int *)(a1 + 128);
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
    {
      v15 = *(unsigned int *)(v14 + 424);
      v16 = *(unsigned int *)(v14 + 428);
      v17 = v15 + 1;
    }
    else
    {
      v29 = *(_QWORD *)(v13 + 16);
      v30 = *(_DWORD *)(v29 + 14976);
      if ( v30 )
      {
        v33 = (unsigned int)(v30 - 1);
        *(_DWORD *)(v29 + 14976) = v33;
        v14 = *(_QWORD *)(v29 + 8 * v33 + 14848);
        v34 = *(unsigned int *)(v14 + 536);
        *(_BYTE *)v14 = 0;
        v35 = *(_QWORD *)(v14 + 528);
        *(_DWORD *)(v14 + 424) = 0;
        v36 = v35 + (v34 << 6);
        if ( v35 == v36 )
        {
          v17 = 1;
          v15 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v36 -= 64;
              v37 = *(void **)(v36 + 24);
              if ( v37 == (void *)(v36 + 40) )
                break;
              v38 = v35;
              operator delete(v37);
              v35 = v38;
              if ( v38 == v36 )
                goto LABEL_30;
            }
          }
          while ( v35 != v36 );
LABEL_30:
          v15 = *(unsigned int *)(v14 + 424);
          v17 = v15 + 1;
        }
        *(_DWORD *)(v14 + 536) = 0;
        v16 = *(unsigned int *)(v14 + 428);
      }
      else
      {
        v31 = operator new(0x3A0u);
        v16 = 8;
        v17 = 1;
        v14 = v31;
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
        v15 = 0;
      }
      *(_QWORD *)(v13 + 8) = v14;
    }
    v40 = __PAIR64__(v12, v11);
    LOBYTE(v41) = 1;
    if ( v17 <= v16 )
      goto LABEL_13;
    goto LABEL_9;
  }
  return a1;
}
