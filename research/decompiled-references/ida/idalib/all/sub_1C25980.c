__int64 __fastcall sub_1C25980(__int64 *a1, __int64 a2, unsigned int a3, double a4)
{
  char v4; // al
  _DWORD *v5; // r12
  unsigned int v6; // ebp
  void *v9; // rdi
  unsigned __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // r12
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // r15
  __int64 v36; // rbp
  void *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // r15
  void *v42; // rdi
  __int64 v43; // [rsp+8h] [rbp-100h]
  __int64 v44; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v45; // [rsp+24h] [rbp-E4h]
  int v46; // [rsp+2Ch] [rbp-DCh]
  void *v47; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v48; // [rsp+38h] [rbp-D0h]
  char v49; // [rsp+3Ch] [rbp-CCh]
  _QWORD v50[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B8h]
  __int64 v52; // [rsp+60h] [rbp-A8h]
  __int64 v53; // [rsp+68h] [rbp-A0h]
  unsigned __int8 v54; // [rsp+B8h] [rbp-50h]
  unsigned int v55; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v56; // [rsp+C4h] [rbp-44h]

  v4 = *(_BYTE *)(a2 + 2);
  v48 = 1;
  v49 = 0;
  v47 = nullptr;
  v5 = *(_DWORD **)(a2 + 8 * (a3 + (unsigned __int64)((v4 & 8) != 0)) + 40);
  if ( ((*v5 >> 14) & 0xC) != 0 )
    return 0;
  v6 = sub_16D4840(*a1, a2, a3, (__int64)&v47);
  if ( !(_BYTE)v6 )
  {
    v9 = v47;
    if ( v48 > 0x40 )
    {
      if ( (unsigned __int64)(*(_QWORD *)v47 - 5LL) <= 2 || *(_QWORD *)v47 <= 3u )
        goto LABEL_16;
    }
    else
    {
      if ( !v48 )
        return 0;
      v10 = (__int64)((_QWORD)v47 << (64 - (unsigned __int8)v48)) >> (64 - (unsigned __int8)v48);
      if ( v10 - 5 <= 2 || v10 <= 3 )
        return 0;
    }
    if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
    {
      v11 = *(_DWORD *)(a2 + 24);
    }
    else if ( *(char *)(a2 + 2) >= 0
           || (v11 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a2, a4)) == 0 )
    {
      v11 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, a4);
      if ( !v11 )
      {
        if ( *(_DWORD *)(a2 + 16) )
        {
          v13 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
          if ( v13 )
            v11 = sub_EEB7E0(v13, a2, a4);
        }
      }
    }
    sub_168B9F0((__int64)v50, a1, v11, 0x135Cu, 0);
    v12 = sub_EEC8C0((unsigned __int64)v5, (__int64)a1, a4);
    if ( v54 )
    {
      v22 = v52;
      if ( !v52 )
      {
        v27 = v53;
        v28 = *(_DWORD *)(v53 + 14976);
        if ( v28 )
        {
          v33 = (unsigned int)(v28 - 1);
          *(_DWORD *)(v53 + 14976) = v33;
          v22 = *(_QWORD *)(v27 + 8 * v33 + 14848);
          v34 = *(unsigned int *)(v22 + 536);
          *(_BYTE *)v22 = 0;
          v35 = *(_QWORD *)(v22 + 528);
          *(_DWORD *)(v22 + 424) = 0;
          v36 = v35 + (v34 << 6);
          while ( v35 != v36 )
          {
            while ( 1 )
            {
              v36 -= 64;
              v37 = *(void **)(v36 + 24);
              if ( v37 == (void *)(v36 + 40) )
                break;
              operator delete(v37);
              if ( v35 == v36 )
                goto LABEL_45;
            }
          }
LABEL_45:
          v23 = *(unsigned int *)(v22 + 424);
          v24 = *(unsigned int *)(v22 + 428);
          *(_DWORD *)(v22 + 536) = 0;
          v25 = v23 + 1;
        }
        else
        {
          v29 = operator new(0x3A0u);
          v24 = 8;
          v25 = 1;
          v22 = v29;
          *(_BYTE *)v29 = 0;
          *(_QWORD *)(v29 + 96) = v29 + 112;
          *(_QWORD *)(v29 + 128) = v29 + 144;
          *(_QWORD *)(v29 + 160) = v29 + 176;
          *(_QWORD *)(v29 + 192) = v29 + 208;
          *(_QWORD *)(v29 + 224) = v29 + 240;
          *(_QWORD *)(v29 + 256) = v29 + 272;
          *(_QWORD *)(v29 + 288) = v29 + 304;
          *(_QWORD *)(v29 + 320) = v29 + 336;
          *(_QWORD *)(v29 + 352) = v29 + 368;
          *(_QWORD *)(v29 + 384) = v29 + 400;
          *(_QWORD *)(v29 + 416) = v29 + 432;
          *(_QWORD *)(v29 + 104) = 0;
          *(_BYTE *)(v29 + 112) = 0;
          *(_QWORD *)(v29 + 136) = 0;
          *(_BYTE *)(v29 + 144) = 0;
          *(_QWORD *)(v29 + 168) = 0;
          *(_BYTE *)(v29 + 176) = 0;
          *(_QWORD *)(v29 + 200) = 0;
          *(_BYTE *)(v29 + 208) = 0;
          *(_QWORD *)(v29 + 232) = 0;
          *(_BYTE *)(v29 + 240) = 0;
          *(_QWORD *)(v29 + 264) = 0;
          *(_BYTE *)(v29 + 272) = 0;
          *(_QWORD *)(v29 + 296) = 0;
          *(_BYTE *)(v29 + 304) = 0;
          *(_QWORD *)(v29 + 328) = 0;
          *(_BYTE *)(v29 + 336) = 0;
          *(_QWORD *)(v29 + 360) = 0;
          *(_BYTE *)(v29 + 368) = 0;
          *(_QWORD *)(v29 + 392) = 0;
          *(_BYTE *)(v29 + 400) = 0;
          *(_QWORD *)(v29 + 424) = 0x800000000LL;
          *(_QWORD *)(v29 + 528) = v29 + 544;
          *(_QWORD *)(v29 + 536) = 0x600000000LL;
          v23 = 0;
        }
        v52 = v22;
        goto LABEL_29;
      }
    }
    else
    {
      v6 = v56;
      if ( !v56 )
      {
LABEL_13:
        sub_15F7200(v50);
        goto LABEL_14;
      }
      v16 = sub_168B9E0(v50);
      v19 = v51;
      if ( v51 )
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
      v44 = v19;
      v20 = sub_1587BC0(v16, &v44, v14, v15, v17, v18);
      v21 = *v20 + 32LL * v55;
      v22 = *(_QWORD *)(v21 + 8);
      if ( !v22 )
      {
        v30 = *(_QWORD *)(v21 + 16);
        v31 = *(_DWORD *)(v30 + 14976);
        if ( v31 )
        {
          v38 = (unsigned int)(v31 - 1);
          *(_DWORD *)(v30 + 14976) = v38;
          v22 = *(_QWORD *)(v30 + 8 * v38 + 14848);
          v39 = *(unsigned int *)(v22 + 536);
          *(_BYTE *)v22 = 0;
          v40 = *(_QWORD *)(v22 + 528);
          *(_DWORD *)(v22 + 424) = 0;
          v41 = v40 + (v39 << 6);
          while ( v40 != v41 )
          {
            while ( 1 )
            {
              v41 -= 64;
              v42 = *(void **)(v41 + 24);
              if ( v42 == (void *)(v41 + 40) )
                break;
              v43 = v40;
              operator delete(v42);
              v40 = v43;
              if ( v43 == v41 )
                goto LABEL_50;
            }
          }
LABEL_50:
          v23 = *(unsigned int *)(v22 + 424);
          v24 = *(unsigned int *)(v22 + 428);
          *(_DWORD *)(v22 + 536) = 0;
          v25 = v23 + 1;
        }
        else
        {
          v32 = operator new(0x3A0u);
          v24 = 8;
          v25 = 1;
          v22 = v32;
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
          v23 = 0;
        }
        *(_QWORD *)(v21 + 8) = v22;
        goto LABEL_29;
      }
    }
    v23 = *(unsigned int *)(v22 + 424);
    v24 = *(unsigned int *)(v22 + 428);
    v25 = v23 + 1;
LABEL_29:
    v45 = v12;
    LOBYTE(v46) = 1;
    if ( v25 > v24 )
    {
      sub_2237220(v22 + 416, v22 + 432, v25, 12);
      v23 = *(unsigned int *)(v22 + 424);
    }
    v26 = *(_QWORD *)(v22 + 416) + 12 * v23;
    *(_QWORD *)v26 = v45;
    *(_DWORD *)(v26 + 8) = v46;
    v6 = v54;
    ++*(_DWORD *)(v22 + 424);
    goto LABEL_13;
  }
LABEL_14:
  if ( v48 > 0x40 )
  {
    v9 = v47;
    if ( v47 )
LABEL_16:
      operator delete[](v9);
  }
  return v6;
}
