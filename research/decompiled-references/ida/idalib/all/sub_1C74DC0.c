__int64 __fastcall sub_1C74DC0(
        __int64 *a1,
        __int64 a2,
        unsigned __int32 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        unsigned __int64 a13,
        int a14,
        __int64 *a15,
        __int64 a16)
{
  __int64 v18; // rdi
  __int64 v19; // rbp
  _QWORD *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r15
  __int64 v42; // r13
  void *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // r15
  void *v48; // rdi
  __int64 v49; // [rsp+8h] [rbp-100h]
  unsigned __int32 v50; // [rsp+10h] [rbp-F8h]
  unsigned int v51; // [rsp+14h] [rbp-F4h]
  __int64 v52; // [rsp+18h] [rbp-F0h]
  __int64 v53; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+34h] [rbp-D4h]
  int v55; // [rsp+3Ch] [rbp-CCh]
  _QWORD v56[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B8h]
  __int64 v58; // [rsp+60h] [rbp-A8h]
  __int64 v59; // [rsp+68h] [rbp-A0h]
  char v60; // [rsp+B8h] [rbp-50h]
  unsigned int v61; // [rsp+C0h] [rbp-48h]
  char v62; // [rsp+C4h] [rbp-44h]

  if ( (*(_WORD *)a6 & 0x1FF) != 0xF5
    || (v18 = *(_QWORD *)(a6 + 8), (v18 & 1) != 0)
    || (*(_BYTE *)(v18 + 28) & 0x7Fu) - 40 > 6 )
  {
    v19 = *a1;
    return sub_1C415E0(v19, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, 1, a15, a16);
  }
  if ( *(char *)(v18 + 28) < 0 )
    return 1;
  v52 = a6;
  v51 = a5;
  v50 = a3;
  v21 = (_QWORD *)sub_B73640(v18);
  a2 = (unsigned int)a2;
  a3 = v50;
  a5 = v51;
  a6 = v52;
  v19 = *a1;
  if ( (*(_DWORD *)v21 & 0x10000) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 34 )
  {
    return sub_1C415E0(v19, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, 1, a15, a16);
  }
  if ( a4 )
  {
    v22 = sub_EEB7E0(a4, (unsigned int)a2, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v56, (__int64 *)(v19 + 8), v22, 0x1106u, 0);
    v23 = sub_EEC8C0(a4, v19 + 8, *(double *)a7.m128_u64);
    if ( v60 )
    {
      v24 = v58;
      if ( !v58 )
      {
        v37 = v59;
        v38 = *(_DWORD *)(v59 + 14976);
        if ( v38 )
        {
          v39 = (unsigned int)(v38 - 1);
          *(_DWORD *)(v59 + 14976) = v39;
          v24 = *(_QWORD *)(v37 + 8 * v39 + 14848);
          v40 = *(unsigned int *)(v24 + 536);
          *(_BYTE *)v24 = 0;
          v41 = *(_QWORD *)(v24 + 528);
          *(_DWORD *)(v24 + 424) = 0;
          v42 = v41 + (v40 << 6);
          while ( v41 != v42 )
          {
            while ( 1 )
            {
              v42 -= 64;
              v43 = *(void **)(v42 + 24);
              if ( v43 == (void *)(v42 + 40) )
                break;
              operator delete(v43);
              if ( v41 == v42 )
                goto LABEL_32;
            }
          }
LABEL_32:
          *(_DWORD *)(v24 + 536) = 0;
        }
        else
        {
          v24 = operator new(0x3A0u);
          *(_BYTE *)v24 = 0;
          *(_QWORD *)(v24 + 96) = v24 + 112;
          *(_QWORD *)(v24 + 128) = v24 + 144;
          *(_QWORD *)(v24 + 160) = v24 + 176;
          *(_QWORD *)(v24 + 192) = v24 + 208;
          *(_QWORD *)(v24 + 224) = v24 + 240;
          *(_QWORD *)(v24 + 256) = v24 + 272;
          *(_QWORD *)(v24 + 288) = v24 + 304;
          *(_QWORD *)(v24 + 320) = v24 + 336;
          *(_QWORD *)(v24 + 352) = v24 + 368;
          *(_QWORD *)(v24 + 384) = v24 + 400;
          *(_QWORD *)(v24 + 416) = v24 + 432;
          *(_BYTE *)(v24 + 112) = 0;
          *(_QWORD *)(v24 + 104) = 0;
          *(_QWORD *)(v24 + 136) = 0;
          *(_BYTE *)(v24 + 144) = 0;
          *(_QWORD *)(v24 + 168) = 0;
          *(_BYTE *)(v24 + 176) = 0;
          *(_QWORD *)(v24 + 200) = 0;
          *(_BYTE *)(v24 + 208) = 0;
          *(_QWORD *)(v24 + 232) = 0;
          *(_BYTE *)(v24 + 240) = 0;
          *(_QWORD *)(v24 + 264) = 0;
          *(_BYTE *)(v24 + 272) = 0;
          *(_QWORD *)(v24 + 296) = 0;
          *(_BYTE *)(v24 + 304) = 0;
          *(_QWORD *)(v24 + 328) = 0;
          *(_BYTE *)(v24 + 336) = 0;
          *(_QWORD *)(v24 + 360) = 0;
          *(_BYTE *)(v24 + 368) = 0;
          *(_QWORD *)(v24 + 392) = 0;
          *(_BYTE *)(v24 + 400) = 0;
          *(_QWORD *)(v24 + 424) = 0x800000000LL;
          *(_QWORD *)(v24 + 528) = v24 + 544;
          *(_QWORD *)(v24 + 536) = 0x600000000LL;
        }
        v58 = v24;
      }
    }
    else
    {
      if ( !v62 )
      {
LABEL_13:
        sub_15F7200(v56);
        return 1;
      }
      v29 = sub_168B9E0(v56);
      v32 = v57;
      if ( v57 )
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 32LL))(v57);
      v53 = v32;
      v33 = sub_1587BC0(v29, &v53, v27, v28, v30, v31);
      v34 = *v33 + 32LL * v61;
      v24 = *(_QWORD *)(v34 + 8);
      if ( !v24 )
      {
        v35 = *(_QWORD *)(v34 + 16);
        v36 = *(_DWORD *)(v35 + 14976);
        if ( v36 )
        {
          v44 = (unsigned int)(v36 - 1);
          *(_DWORD *)(v35 + 14976) = v44;
          v24 = *(_QWORD *)(v35 + 8 * v44 + 14848);
          v45 = *(unsigned int *)(v24 + 536);
          *(_BYTE *)v24 = 0;
          v46 = *(_QWORD *)(v24 + 528);
          *(_DWORD *)(v24 + 424) = 0;
          v47 = v46 + (v45 << 6);
          while ( v46 != v47 )
          {
            while ( 1 )
            {
              v47 -= 64;
              v48 = *(void **)(v47 + 24);
              if ( v48 == (void *)(v47 + 40) )
                break;
              v49 = v46;
              operator delete(v48);
              v46 = v49;
              if ( v49 == v47 )
                goto LABEL_37;
            }
          }
LABEL_37:
          *(_DWORD *)(v24 + 536) = 0;
        }
        else
        {
          v24 = operator new(0x3A0u);
          *(_BYTE *)v24 = 0;
          *(_QWORD *)(v24 + 96) = v24 + 112;
          *(_QWORD *)(v24 + 128) = v24 + 144;
          *(_QWORD *)(v24 + 160) = v24 + 176;
          *(_QWORD *)(v24 + 192) = v24 + 208;
          *(_QWORD *)(v24 + 224) = v24 + 240;
          *(_QWORD *)(v24 + 256) = v24 + 272;
          *(_QWORD *)(v24 + 288) = v24 + 304;
          *(_QWORD *)(v24 + 320) = v24 + 336;
          *(_QWORD *)(v24 + 352) = v24 + 368;
          *(_QWORD *)(v24 + 384) = v24 + 400;
          *(_QWORD *)(v24 + 416) = v24 + 432;
          *(_BYTE *)(v24 + 112) = 0;
          *(_QWORD *)(v24 + 104) = 0;
          *(_QWORD *)(v24 + 136) = 0;
          *(_BYTE *)(v24 + 144) = 0;
          *(_QWORD *)(v24 + 168) = 0;
          *(_BYTE *)(v24 + 176) = 0;
          *(_QWORD *)(v24 + 200) = 0;
          *(_BYTE *)(v24 + 208) = 0;
          *(_QWORD *)(v24 + 232) = 0;
          *(_BYTE *)(v24 + 240) = 0;
          *(_QWORD *)(v24 + 264) = 0;
          *(_BYTE *)(v24 + 272) = 0;
          *(_QWORD *)(v24 + 296) = 0;
          *(_BYTE *)(v24 + 304) = 0;
          *(_QWORD *)(v24 + 328) = 0;
          *(_BYTE *)(v24 + 336) = 0;
          *(_QWORD *)(v24 + 360) = 0;
          *(_BYTE *)(v24 + 368) = 0;
          *(_QWORD *)(v24 + 392) = 0;
          *(_BYTE *)(v24 + 400) = 0;
          *(_QWORD *)(v24 + 424) = 0x800000000LL;
          *(_QWORD *)(v24 + 528) = v24 + 544;
          *(_QWORD *)(v24 + 536) = 0x600000000LL;
        }
        *(_QWORD *)(v34 + 8) = v24;
      }
    }
    v54 = v23;
    LOBYTE(v55) = 1;
    v25 = *(unsigned int *)(v24 + 424);
    if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(v24 + 428) )
    {
      sub_2237220(v24 + 416, v24 + 432, v25 + 1, 12);
      v25 = *(unsigned int *)(v24 + 424);
    }
    v26 = *(_QWORD *)(v24 + 416) + 12 * v25;
    *(_QWORD *)v26 = v54;
    *(_DWORD *)(v26 + 8) = v55;
    ++*(_DWORD *)(v24 + 424);
    goto LABEL_13;
  }
  return sub_1A89A90(*(__int64 **)(v19 + 736), (unsigned int)a2, a13, v21, a14, a7, a8);
}
