__int64 __fastcall sub_19016D0(
        __int64 *a1,
        unsigned int a2,
        int a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v17; // rdi
  __int64 v18; // rbp
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r13
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r15
  __int64 v41; // r13
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // r15
  void *v47; // rdi
  __int64 v48; // [rsp+8h] [rbp-100h]
  int v49; // [rsp+10h] [rbp-F8h]
  int v50; // [rsp+14h] [rbp-F4h]
  int v51; // [rsp+18h] [rbp-F0h]
  __int64 v52; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v53; // [rsp+34h] [rbp-D4h]
  int v54; // [rsp+3Ch] [rbp-CCh]
  _QWORD v55[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B8h]
  __int64 v57; // [rsp+60h] [rbp-A8h]
  __int64 v58; // [rsp+68h] [rbp-A0h]
  char v59; // [rsp+B8h] [rbp-50h]
  unsigned int v60; // [rsp+C0h] [rbp-48h]
  char v61; // [rsp+C4h] [rbp-44h]

  if ( (*(_WORD *)a6 & 0x1FF) != 0xF5
    || (v17 = *(_QWORD *)(a6 + 8), (v17 & 1) != 0)
    || (*(_BYTE *)(v17 + 28) & 0x7Fu) - 40 > 6 )
  {
    v18 = *a1;
    return sub_1C415E0(v18, a2, a3, a4, a5, a6, a8, a9, a10, a11, a12, a13, 1, a14, a15);
  }
  if ( *(char *)(v17 + 28) < 0 )
    return 1;
  v51 = a6;
  v50 = a5;
  v49 = a3;
  v20 = sub_B73640(v17);
  a3 = v49;
  a5 = v50;
  LODWORD(a6) = v51;
  v18 = *a1;
  if ( (*(_DWORD *)v20 & 0x10000) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 34 )
  {
    return sub_1C415E0(v18, a2, a3, a4, a5, a6, a8, a9, a10, a11, a12, a13, 1, a14, a15);
  }
  if ( a4 )
  {
    v21 = sub_EEB7E0(a4, a2, a7);
    sub_168B9F0((__int64)v55, (__int64 *)(v18 + 8), v21, 0x1106u, 0);
    v22 = sub_EEC8C0(a4, v18 + 8, a7);
    if ( v59 )
    {
      v23 = v57;
      if ( !v57 )
      {
        v36 = v58;
        v37 = *(_DWORD *)(v58 + 14976);
        if ( v37 )
        {
          v38 = (unsigned int)(v37 - 1);
          *(_DWORD *)(v58 + 14976) = v38;
          v23 = *(_QWORD *)(v36 + 8 * v38 + 14848);
          v39 = *(unsigned int *)(v23 + 536);
          *(_BYTE *)v23 = 0;
          v40 = *(_QWORD *)(v23 + 528);
          *(_DWORD *)(v23 + 424) = 0;
          v41 = v40 + (v39 << 6);
          while ( v40 != v41 )
          {
            while ( 1 )
            {
              v41 -= 64;
              v42 = *(void **)(v41 + 24);
              if ( v42 == (void *)(v41 + 40) )
                break;
              operator delete(v42);
              if ( v40 == v41 )
                goto LABEL_32;
            }
          }
LABEL_32:
          *(_DWORD *)(v23 + 536) = 0;
        }
        else
        {
          v23 = operator new(0x3A0u);
          *(_BYTE *)v23 = 0;
          *(_QWORD *)(v23 + 96) = v23 + 112;
          *(_QWORD *)(v23 + 128) = v23 + 144;
          *(_QWORD *)(v23 + 160) = v23 + 176;
          *(_QWORD *)(v23 + 192) = v23 + 208;
          *(_QWORD *)(v23 + 224) = v23 + 240;
          *(_QWORD *)(v23 + 256) = v23 + 272;
          *(_QWORD *)(v23 + 288) = v23 + 304;
          *(_QWORD *)(v23 + 320) = v23 + 336;
          *(_QWORD *)(v23 + 352) = v23 + 368;
          *(_QWORD *)(v23 + 384) = v23 + 400;
          *(_QWORD *)(v23 + 416) = v23 + 432;
          *(_BYTE *)(v23 + 112) = 0;
          *(_QWORD *)(v23 + 104) = 0;
          *(_QWORD *)(v23 + 136) = 0;
          *(_BYTE *)(v23 + 144) = 0;
          *(_QWORD *)(v23 + 168) = 0;
          *(_BYTE *)(v23 + 176) = 0;
          *(_QWORD *)(v23 + 200) = 0;
          *(_BYTE *)(v23 + 208) = 0;
          *(_QWORD *)(v23 + 232) = 0;
          *(_BYTE *)(v23 + 240) = 0;
          *(_QWORD *)(v23 + 264) = 0;
          *(_BYTE *)(v23 + 272) = 0;
          *(_QWORD *)(v23 + 296) = 0;
          *(_BYTE *)(v23 + 304) = 0;
          *(_QWORD *)(v23 + 328) = 0;
          *(_BYTE *)(v23 + 336) = 0;
          *(_QWORD *)(v23 + 360) = 0;
          *(_BYTE *)(v23 + 368) = 0;
          *(_QWORD *)(v23 + 392) = 0;
          *(_BYTE *)(v23 + 400) = 0;
          *(_QWORD *)(v23 + 424) = 0x800000000LL;
          *(_QWORD *)(v23 + 528) = v23 + 544;
          *(_QWORD *)(v23 + 536) = 0x600000000LL;
        }
        v57 = v23;
      }
    }
    else
    {
      if ( !v61 )
      {
LABEL_13:
        sub_15F7200(v55);
        return 1;
      }
      v28 = sub_168B9E0(v55);
      v31 = v56;
      if ( v56 )
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 32LL))(v56);
      v52 = v31;
      v32 = sub_1587BC0(v28, &v52, v26, v27, v29, v30);
      v33 = *v32 + 32LL * v60;
      v23 = *(_QWORD *)(v33 + 8);
      if ( !v23 )
      {
        v34 = *(_QWORD *)(v33 + 16);
        v35 = *(_DWORD *)(v34 + 14976);
        if ( v35 )
        {
          v43 = (unsigned int)(v35 - 1);
          *(_DWORD *)(v34 + 14976) = v43;
          v23 = *(_QWORD *)(v34 + 8 * v43 + 14848);
          v44 = *(unsigned int *)(v23 + 536);
          *(_BYTE *)v23 = 0;
          v45 = *(_QWORD *)(v23 + 528);
          *(_DWORD *)(v23 + 424) = 0;
          v46 = v45 + (v44 << 6);
          while ( v45 != v46 )
          {
            while ( 1 )
            {
              v46 -= 64;
              v47 = *(void **)(v46 + 24);
              if ( v47 == (void *)(v46 + 40) )
                break;
              v48 = v45;
              operator delete(v47);
              v45 = v48;
              if ( v48 == v46 )
                goto LABEL_37;
            }
          }
LABEL_37:
          *(_DWORD *)(v23 + 536) = 0;
        }
        else
        {
          v23 = operator new(0x3A0u);
          *(_BYTE *)v23 = 0;
          *(_QWORD *)(v23 + 96) = v23 + 112;
          *(_QWORD *)(v23 + 128) = v23 + 144;
          *(_QWORD *)(v23 + 160) = v23 + 176;
          *(_QWORD *)(v23 + 192) = v23 + 208;
          *(_QWORD *)(v23 + 224) = v23 + 240;
          *(_QWORD *)(v23 + 256) = v23 + 272;
          *(_QWORD *)(v23 + 288) = v23 + 304;
          *(_QWORD *)(v23 + 320) = v23 + 336;
          *(_QWORD *)(v23 + 352) = v23 + 368;
          *(_QWORD *)(v23 + 384) = v23 + 400;
          *(_QWORD *)(v23 + 416) = v23 + 432;
          *(_BYTE *)(v23 + 112) = 0;
          *(_QWORD *)(v23 + 104) = 0;
          *(_QWORD *)(v23 + 136) = 0;
          *(_BYTE *)(v23 + 144) = 0;
          *(_QWORD *)(v23 + 168) = 0;
          *(_BYTE *)(v23 + 176) = 0;
          *(_QWORD *)(v23 + 200) = 0;
          *(_BYTE *)(v23 + 208) = 0;
          *(_QWORD *)(v23 + 232) = 0;
          *(_BYTE *)(v23 + 240) = 0;
          *(_QWORD *)(v23 + 264) = 0;
          *(_BYTE *)(v23 + 272) = 0;
          *(_QWORD *)(v23 + 296) = 0;
          *(_BYTE *)(v23 + 304) = 0;
          *(_QWORD *)(v23 + 328) = 0;
          *(_BYTE *)(v23 + 336) = 0;
          *(_QWORD *)(v23 + 360) = 0;
          *(_BYTE *)(v23 + 368) = 0;
          *(_QWORD *)(v23 + 392) = 0;
          *(_BYTE *)(v23 + 400) = 0;
          *(_QWORD *)(v23 + 424) = 0x800000000LL;
          *(_QWORD *)(v23 + 528) = v23 + 544;
          *(_QWORD *)(v23 + 536) = 0x600000000LL;
        }
        *(_QWORD *)(v33 + 8) = v23;
      }
    }
    v53 = v22;
    LOBYTE(v54) = 1;
    v24 = *(unsigned int *)(v23 + 424);
    if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(v23 + 428) )
    {
      sub_2237220(v23 + 416, v23 + 432, v24 + 1, 12);
      v24 = *(unsigned int *)(v23 + 424);
    }
    v25 = *(_QWORD *)(v23 + 416) + 12 * v24;
    *(_QWORD *)v25 = v53;
    *(_DWORD *)(v25 + 8) = v54;
    ++*(_DWORD *)(v23 + 424);
    goto LABEL_13;
  }
  return sub_1A89A90(*(_QWORD *)(v18 + 736), a2, a12, v20, a13);
}
