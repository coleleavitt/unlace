unsigned __int64 __fastcall sub_18F45A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  _QWORD *v6; // rax
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 *v11; // rdi
  unsigned int *v12; // r9
  _QWORD *v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
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
  unsigned __int64 v44; // [rsp+1Ch] [rbp-D4h]
  int v45; // [rsp+24h] [rbp-CCh]
  _QWORD v46[2]; // [rsp+28h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+38h] [rbp-B8h]
  __int64 v48; // [rsp+48h] [rbp-A8h]
  __int64 v49; // [rsp+50h] [rbp-A0h]
  char v50; // [rsp+A0h] [rbp-50h]
  unsigned int v51; // [rsp+A8h] [rbp-48h]
  char v52; // [rsp+ACh] [rbp-44h]

  if ( **(_DWORD **)a1 == 9 )
  {
    v9 = *(_QWORD *)((**(_QWORD **)(a1 + 16) & 0xFFFFFFFFFFFFFFFELL) + 8);
    v10 = sub_B5FF90(v9, a2, a3, a4, a5);
    if ( !BYTE1(v10) )
      return sub_18F40B0(*(_QWORD *)(a1 + 8), **(_DWORD **)(a1 + 24), *(_QWORD **)(a1 + 16), *(_QWORD **)(a1 + 32), a6);
    v11 = *(__int64 **)(a1 + 8);
    v12 = *(unsigned int **)(a1 + 24);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
      || **(_BYTE **)(a1 + 40) == **(_BYTE **)(a1 + 48) )
    {
      return sub_186B8D0(v11, v10, *v12, 0);
    }
    sub_168B9F0((__int64)v46, v11 + 1, *v12, 0x14C5u, 0);
    if ( **(_BYTE **)(a1 + 40) )
      v13 = *(_QWORD **)(a1 + 16);
    else
      v13 = *(_QWORD **)(a1 + 32);
    v14 = sub_EEC8C0(*v13 & 0xFFFFFFFFFFFFFFFELL, (__int64)(v11 + 1), a6);
    v15 = v14;
    v16 = HIDWORD(v14);
    if ( v50 )
    {
      v17 = v48;
      if ( !v48 )
      {
        v30 = v49;
        v31 = *(_DWORD *)(v49 + 14976);
        if ( v31 )
        {
          v32 = (unsigned int)(v31 - 1);
          *(_DWORD *)(v49 + 14976) = v32;
          v17 = *(_QWORD *)(v30 + 8 * v32 + 14848);
          v33 = *(unsigned int *)(v17 + 536);
          *(_BYTE *)v17 = 0;
          v34 = *(_QWORD *)(v17 + 528);
          *(_DWORD *)(v17 + 424) = 0;
          v35 = v34 + (v33 << 6);
          while ( v34 != v35 )
          {
            while ( 1 )
            {
              v35 -= 64;
              v36 = *(void **)(v35 + 24);
              if ( v36 == (void *)(v35 + 40) )
                break;
              operator delete(v36);
              if ( v34 == v35 )
                goto LABEL_33;
            }
          }
LABEL_33:
          *(_DWORD *)(v17 + 536) = 0;
        }
        else
        {
          v17 = operator new(0x3A0u);
          *(_BYTE *)v17 = 0;
          *(_QWORD *)(v17 + 96) = v17 + 112;
          *(_QWORD *)(v17 + 128) = v17 + 144;
          *(_QWORD *)(v17 + 160) = v17 + 176;
          *(_QWORD *)(v17 + 192) = v17 + 208;
          *(_QWORD *)(v17 + 224) = v17 + 240;
          *(_QWORD *)(v17 + 256) = v17 + 272;
          *(_QWORD *)(v17 + 288) = v17 + 304;
          *(_QWORD *)(v17 + 320) = v17 + 336;
          *(_QWORD *)(v17 + 352) = v17 + 368;
          *(_QWORD *)(v17 + 384) = v17 + 400;
          *(_QWORD *)(v17 + 416) = v17 + 432;
          *(_BYTE *)(v17 + 112) = 0;
          *(_QWORD *)(v17 + 104) = 0;
          *(_QWORD *)(v17 + 136) = 0;
          *(_BYTE *)(v17 + 144) = 0;
          *(_QWORD *)(v17 + 168) = 0;
          *(_BYTE *)(v17 + 176) = 0;
          *(_QWORD *)(v17 + 200) = 0;
          *(_BYTE *)(v17 + 208) = 0;
          *(_QWORD *)(v17 + 232) = 0;
          *(_BYTE *)(v17 + 240) = 0;
          *(_QWORD *)(v17 + 264) = 0;
          *(_BYTE *)(v17 + 272) = 0;
          *(_QWORD *)(v17 + 296) = 0;
          *(_BYTE *)(v17 + 304) = 0;
          *(_QWORD *)(v17 + 328) = 0;
          *(_BYTE *)(v17 + 336) = 0;
          *(_QWORD *)(v17 + 360) = 0;
          *(_BYTE *)(v17 + 368) = 0;
          *(_QWORD *)(v17 + 392) = 0;
          *(_BYTE *)(v17 + 400) = 0;
          *(_QWORD *)(v17 + 424) = 0x800000000LL;
          *(_QWORD *)(v17 + 528) = v17 + 544;
          *(_QWORD *)(v17 + 536) = 0x600000000LL;
        }
        v48 = v17;
      }
    }
    else
    {
      if ( !v52 )
      {
LABEL_14:
        sub_15F7200(v46);
        return 0;
      }
      v22 = sub_168B9E0(v46);
      v25 = v47;
      if ( v47 )
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
      v43 = v25;
      v26 = sub_1587BC0(v22, &v43, v20, v21, v23, v24);
      v27 = *v26 + 32LL * v51;
      v17 = *(_QWORD *)(v27 + 8);
      if ( !v17 )
      {
        v28 = *(_QWORD *)(v27 + 16);
        v29 = *(_DWORD *)(v28 + 14976);
        if ( v29 )
        {
          v37 = (unsigned int)(v29 - 1);
          *(_DWORD *)(v28 + 14976) = v37;
          v17 = *(_QWORD *)(v28 + 8 * v37 + 14848);
          v38 = *(unsigned int *)(v17 + 536);
          *(_BYTE *)v17 = 0;
          v39 = *(_QWORD *)(v17 + 528);
          *(_DWORD *)(v17 + 424) = 0;
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
                goto LABEL_38;
            }
          }
LABEL_38:
          *(_DWORD *)(v17 + 536) = 0;
        }
        else
        {
          v17 = operator new(0x3A0u);
          *(_BYTE *)v17 = 0;
          *(_QWORD *)(v17 + 96) = v17 + 112;
          *(_QWORD *)(v17 + 128) = v17 + 144;
          *(_QWORD *)(v17 + 160) = v17 + 176;
          *(_QWORD *)(v17 + 192) = v17 + 208;
          *(_QWORD *)(v17 + 224) = v17 + 240;
          *(_QWORD *)(v17 + 256) = v17 + 272;
          *(_QWORD *)(v17 + 288) = v17 + 304;
          *(_QWORD *)(v17 + 320) = v17 + 336;
          *(_QWORD *)(v17 + 352) = v17 + 368;
          *(_QWORD *)(v17 + 384) = v17 + 400;
          *(_QWORD *)(v17 + 416) = v17 + 432;
          *(_BYTE *)(v17 + 112) = 0;
          *(_QWORD *)(v17 + 104) = 0;
          *(_QWORD *)(v17 + 136) = 0;
          *(_BYTE *)(v17 + 144) = 0;
          *(_QWORD *)(v17 + 168) = 0;
          *(_BYTE *)(v17 + 176) = 0;
          *(_QWORD *)(v17 + 200) = 0;
          *(_BYTE *)(v17 + 208) = 0;
          *(_QWORD *)(v17 + 232) = 0;
          *(_BYTE *)(v17 + 240) = 0;
          *(_QWORD *)(v17 + 264) = 0;
          *(_BYTE *)(v17 + 272) = 0;
          *(_QWORD *)(v17 + 296) = 0;
          *(_BYTE *)(v17 + 304) = 0;
          *(_QWORD *)(v17 + 328) = 0;
          *(_BYTE *)(v17 + 336) = 0;
          *(_QWORD *)(v17 + 360) = 0;
          *(_BYTE *)(v17 + 368) = 0;
          *(_QWORD *)(v17 + 392) = 0;
          *(_BYTE *)(v17 + 400) = 0;
          *(_QWORD *)(v17 + 424) = 0x800000000LL;
          *(_QWORD *)(v17 + 528) = v17 + 544;
          *(_QWORD *)(v17 + 536) = 0x600000000LL;
        }
        *(_QWORD *)(v27 + 8) = v17;
      }
    }
    v44 = __PAIR64__(v16, v15);
    LOBYTE(v45) = 1;
    v18 = *(unsigned int *)(v17 + 424);
    if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 428) )
    {
      sub_2237220(v17 + 416, v17 + 432, v18 + 1, 12);
      v18 = *(unsigned int *)(v17 + 424);
    }
    v19 = *(_QWORD *)(v17 + 416) + 12 * v18;
    *(_QWORD *)v19 = v44;
    *(_DWORD *)(v19 + 8) = v45;
    ++*(_DWORD *)(v17 + 424);
    goto LABEL_14;
  }
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL);
  if ( (*(_BYTE *)(v6[290] + 1LL) & 8) != 0 )
    return v6[2330];
  else
    return v6[2340];
}
