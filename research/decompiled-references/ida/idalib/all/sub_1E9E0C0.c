__int64 __fastcall sub_1E9E0C0(__int64 *a1, __int64 a2, unsigned int *a3, __int64 a4, double a5)
{
  unsigned int *v5; // r15
  unsigned int *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rbp
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r15
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r14
  void *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // r14
  void *v48; // rdi
  unsigned __int8 v49; // [rsp+8h] [rbp-100h]
  unsigned __int8 v50; // [rsp+8h] [rbp-100h]
  __int64 v51; // [rsp+8h] [rbp-100h]
  __int64 v52; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+24h] [rbp-E4h]
  int v54; // [rsp+2Ch] [rbp-DCh]
  void *v55; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v56; // [rsp+38h] [rbp-D0h]
  char v57; // [rsp+3Ch] [rbp-CCh]
  _QWORD v58[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B8h]
  __int64 v60; // [rsp+60h] [rbp-A8h]
  __int64 v61; // [rsp+68h] [rbp-A0h]
  unsigned __int8 v62; // [rsp+B8h] [rbp-50h]
  unsigned int v63; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v64; // [rsp+C4h] [rbp-44h]

  v5 = &a3[a4];
  if ( v5 == a3 )
    return 0;
  v8 = a3;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *v8;
      v11 = 8 * v10;
      if ( ((**(_DWORD **)(8 * v10 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) >> 14) & 0xC) != 0 )
        goto LABEL_3;
      v12 = *a1;
      v56 = 1;
      v55 = nullptr;
      v57 = 0;
      result = sub_16D4840(v12, a2, v10, (__int64)&v55);
      if ( (_BYTE)result )
        goto LABEL_26;
      v14 = v56;
      if ( v57 )
      {
        LODWORD(v15) = (_DWORD)v55;
        if ( v56 <= 0x40 )
          goto LABEL_10;
        break;
      }
      if ( v56 > 0x40 )
        break;
      if ( v56 )
      {
        LODWORD(v15) = (__int64)((_QWORD)v55 << (64 - (unsigned __int8)v56)) >> (64 - (unsigned __int8)v56);
        goto LABEL_10;
      }
      if ( (v9 & 1) != 0 )
        goto LABEL_21;
      v9 |= 1uLL;
LABEL_3:
      if ( v5 == ++v8 )
        return 0;
    }
    v15 = *(_QWORD *)v55;
LABEL_10:
    if ( (unsigned __int64)(int)v15 > 7 )
      std::__throw_out_of_range_fmt("%s: __position (which is %zu) >= _Nb (which is %zu)", "bitset::test", (int)v15, 8u);
    if ( ((1LL << v15) & v9) != 0 )
      break;
    v9 |= 1LL << v15;
    if ( v56 <= 0x40 || !v55 )
      goto LABEL_3;
    operator delete[](v55);
    if ( v5 == ++v8 )
      return 0;
  }
LABEL_21:
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v16 = *(_DWORD *)(a2 + 24);
  }
  else if ( *(char *)(a2 + 2) >= 0
         || (v16 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), v56, a5)) == 0 )
  {
    v16 = sub_EEB7E0(*(_QWORD *)(a2 + 32), v14, a5);
    if ( !v16 )
    {
      if ( *(_DWORD *)(a2 + 16) )
      {
        v19 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
        if ( v19 )
          v16 = sub_EEB7E0(v19, v14, a5);
      }
    }
  }
  sub_168B9F0((__int64)v58, a1, v16, 0x156Bu, 0);
  v17 = sub_EEC8C0(*(_QWORD *)(v11 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), (__int64)a1, a5);
  if ( v62 )
  {
    v20 = v60;
    if ( !v60 )
    {
      v36 = v61;
      v37 = *(_DWORD *)(v61 + 14976);
      if ( v37 )
      {
        v44 = (unsigned int)(v37 - 1);
        *(_DWORD *)(v61 + 14976) = v44;
        v20 = *(_QWORD *)(v36 + 8 * v44 + 14848);
        v45 = *(unsigned int *)(v20 + 536);
        *(_BYTE *)v20 = 0;
        v46 = *(_QWORD *)(v20 + 528);
        *(_DWORD *)(v20 + 424) = 0;
        v47 = v46 + (v45 << 6);
        while ( v46 != v47 )
        {
          while ( 1 )
          {
            v47 -= 64;
            v48 = *(void **)(v47 + 24);
            if ( v48 == (void *)(v47 + 40) )
              break;
            operator delete(v48);
            if ( v46 == v47 )
              goto LABEL_59;
          }
        }
LABEL_59:
        v21 = *(unsigned int *)(v20 + 424);
        v22 = *(unsigned int *)(v20 + 428);
        *(_DWORD *)(v20 + 536) = 0;
        v23 = v21 + 1;
      }
      else
      {
        v38 = operator new(0x3A0u);
        v22 = 8;
        v23 = 1;
        v20 = v38;
        *(_BYTE *)v38 = 0;
        *(_QWORD *)(v38 + 96) = v38 + 112;
        *(_QWORD *)(v38 + 128) = v38 + 144;
        *(_QWORD *)(v38 + 160) = v38 + 176;
        *(_QWORD *)(v38 + 192) = v38 + 208;
        *(_QWORD *)(v38 + 224) = v38 + 240;
        *(_QWORD *)(v38 + 256) = v38 + 272;
        *(_QWORD *)(v38 + 288) = v38 + 304;
        *(_QWORD *)(v38 + 320) = v38 + 336;
        *(_QWORD *)(v38 + 352) = v38 + 368;
        *(_QWORD *)(v38 + 384) = v38 + 400;
        *(_QWORD *)(v38 + 416) = v38 + 432;
        *(_QWORD *)(v38 + 104) = 0;
        *(_BYTE *)(v38 + 112) = 0;
        *(_QWORD *)(v38 + 136) = 0;
        *(_BYTE *)(v38 + 144) = 0;
        *(_QWORD *)(v38 + 168) = 0;
        *(_BYTE *)(v38 + 176) = 0;
        *(_QWORD *)(v38 + 200) = 0;
        *(_BYTE *)(v38 + 208) = 0;
        *(_QWORD *)(v38 + 232) = 0;
        *(_BYTE *)(v38 + 240) = 0;
        *(_QWORD *)(v38 + 264) = 0;
        *(_BYTE *)(v38 + 272) = 0;
        *(_QWORD *)(v38 + 296) = 0;
        *(_BYTE *)(v38 + 304) = 0;
        *(_QWORD *)(v38 + 328) = 0;
        *(_BYTE *)(v38 + 336) = 0;
        *(_QWORD *)(v38 + 360) = 0;
        *(_BYTE *)(v38 + 368) = 0;
        *(_QWORD *)(v38 + 392) = 0;
        *(_BYTE *)(v38 + 400) = 0;
        *(_QWORD *)(v38 + 424) = 0x800000000LL;
        *(_QWORD *)(v38 + 528) = v38 + 544;
        *(_QWORD *)(v38 + 536) = 0x600000000LL;
        v21 = 0;
      }
      v60 = v20;
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  v18 = v64;
  if ( v64 )
  {
    v27 = sub_168B9E0(v58);
    v30 = v59;
    if ( v59 )
      v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
    v52 = v30;
    v31 = sub_1587BC0(v27, &v52, v25, v26, v28, v29);
    v32 = *v31 + 32LL * v63;
    v20 = *(_QWORD *)(v32 + 8);
    if ( !v20 )
    {
      v33 = *(_QWORD *)(v32 + 16);
      v34 = *(_DWORD *)(v33 + 14976);
      if ( v34 )
      {
        v39 = (unsigned int)(v34 - 1);
        *(_DWORD *)(v33 + 14976) = v39;
        v20 = *(_QWORD *)(v33 + 8 * v39 + 14848);
        v40 = *(unsigned int *)(v20 + 536);
        *(_BYTE *)v20 = 0;
        v41 = *(_QWORD *)(v20 + 528);
        *(_DWORD *)(v20 + 424) = 0;
        v42 = v41 + (v40 << 6);
        while ( v41 != v42 )
        {
          while ( 1 )
          {
            v42 -= 64;
            v43 = *(void **)(v42 + 24);
            if ( v43 == (void *)(v42 + 40) )
              break;
            v51 = v41;
            operator delete(v43);
            v41 = v51;
            if ( v51 == v42 )
              goto LABEL_54;
          }
        }
LABEL_54:
        v21 = *(unsigned int *)(v20 + 424);
        v22 = *(unsigned int *)(v20 + 428);
        *(_DWORD *)(v20 + 536) = 0;
        v23 = v21 + 1;
      }
      else
      {
        v35 = operator new(0x3A0u);
        v22 = 8;
        v23 = 1;
        v20 = v35;
        *(_BYTE *)v35 = 0;
        *(_QWORD *)(v35 + 96) = v35 + 112;
        *(_QWORD *)(v35 + 128) = v35 + 144;
        *(_QWORD *)(v35 + 160) = v35 + 176;
        *(_QWORD *)(v35 + 192) = v35 + 208;
        *(_QWORD *)(v35 + 224) = v35 + 240;
        *(_QWORD *)(v35 + 256) = v35 + 272;
        *(_QWORD *)(v35 + 288) = v35 + 304;
        *(_QWORD *)(v35 + 320) = v35 + 336;
        *(_QWORD *)(v35 + 352) = v35 + 368;
        *(_QWORD *)(v35 + 384) = v35 + 400;
        *(_QWORD *)(v35 + 416) = v35 + 432;
        *(_QWORD *)(v35 + 104) = 0;
        *(_BYTE *)(v35 + 112) = 0;
        *(_QWORD *)(v35 + 136) = 0;
        *(_BYTE *)(v35 + 144) = 0;
        *(_QWORD *)(v35 + 168) = 0;
        *(_BYTE *)(v35 + 176) = 0;
        *(_QWORD *)(v35 + 200) = 0;
        *(_BYTE *)(v35 + 208) = 0;
        *(_QWORD *)(v35 + 232) = 0;
        *(_BYTE *)(v35 + 240) = 0;
        *(_QWORD *)(v35 + 264) = 0;
        *(_BYTE *)(v35 + 272) = 0;
        *(_QWORD *)(v35 + 296) = 0;
        *(_BYTE *)(v35 + 304) = 0;
        *(_QWORD *)(v35 + 328) = 0;
        *(_BYTE *)(v35 + 336) = 0;
        *(_QWORD *)(v35 + 360) = 0;
        *(_BYTE *)(v35 + 368) = 0;
        *(_QWORD *)(v35 + 392) = 0;
        *(_BYTE *)(v35 + 400) = 0;
        *(_QWORD *)(v35 + 424) = 0x800000000LL;
        *(_QWORD *)(v35 + 528) = v35 + 544;
        *(_QWORD *)(v35 + 536) = 0x600000000LL;
        v21 = 0;
      }
      *(_QWORD *)(v32 + 8) = v20;
      goto LABEL_36;
    }
LABEL_35:
    v21 = *(unsigned int *)(v20 + 424);
    v22 = *(unsigned int *)(v20 + 428);
    v23 = v21 + 1;
LABEL_36:
    v53 = v17;
    LOBYTE(v54) = 1;
    if ( v23 > v22 )
    {
      sub_2237220(v20 + 416, v20 + 432, v23, 12);
      v21 = *(unsigned int *)(v20 + 424);
    }
    v24 = *(_QWORD *)(v20 + 416) + 12 * v21;
    *(_QWORD *)v24 = v53;
    *(_DWORD *)(v24 + 8) = v54;
    v18 = v62;
    ++*(_DWORD *)(v20 + 424);
  }
  v49 = v18;
  sub_15F7200(v58);
  result = v49;
LABEL_26:
  if ( v56 > 0x40 && v55 )
  {
    v50 = result;
    operator delete[](v55);
    return v50;
  }
  return result;
}
