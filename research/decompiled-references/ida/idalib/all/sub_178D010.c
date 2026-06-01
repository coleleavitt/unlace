__int64 __fastcall sub_178D010(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __m128i a5)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 *v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // rbx
  unsigned __int8 v21; // al
  _QWORD *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  size_t v29; // rax
  __int64 v30; // rax
  __m128i si128; // xmm0
  char v32; // r13
  unsigned __int64 v33; // r8
  size_t v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // r14
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // r15
  __int64 v57; // r14
  void *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // rdx
  __int64 v62; // r15
  void *v63; // rdi
  __int64 v64; // [rsp+0h] [rbp-128h]
  __int64 v65; // [rsp+0h] [rbp-128h]
  unsigned __int64 v66; // [rsp+18h] [rbp-110h] BYREF
  __int64 v67; // [rsp+28h] [rbp-100h] BYREF
  __int64 v68; // [rsp+34h] [rbp-F4h]
  int v69; // [rsp+3Ch] [rbp-ECh]
  _QWORD v70[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+50h] [rbp-D8h]
  __int64 v72; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v73; // [rsp+60h] [rbp-C8h]
  __int64 v74; // [rsp+68h] [rbp-C0h]
  __int128 v75; // [rsp+98h] [rbp-90h]
  __int64 v76; // [rsp+A8h] [rbp-80h]
  __int64 *v77; // [rsp+B0h] [rbp-78h]
  __int64 v78; // [rsp+B8h] [rbp-70h]
  unsigned int v79; // [rsp+C0h] [rbp-68h]
  char v80; // [rsp+C4h] [rbp-64h]
  __int64 v81; // [rsp+C8h] [rbp-60h] BYREF
  __m128i v82; // [rsp+D0h] [rbp-58h]
  __int64 v83; // [rsp+E0h] [rbp-48h]

  v6 = a2;
  v66 = a3;
  v7 = sub_178B340((unsigned __int64)a1, a2, "co_await", 8, 0, a5);
  if ( !v7 )
    return 1;
  v12 = v66;
  v13 = v7;
  v14 = *(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 13 && ((*(_WORD *)(v14 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v38 = sub_1907C70(a1, v66);
    if ( v38 == 1 )
      return 1;
    v66 = v38 & 0xFFFFFFFFFFFFFFFELL;
  }
  v15 = *(_QWORD *)(v13 + 184);
  v16 = (__int64 *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*v16 + 17) & 4) == 0 )
  {
    v23 = sub_F63270(*v16, v12, v8, v9, v10, v11);
    v24 = *(_QWORD *)(*(_QWORD *)(sub_15F1640((__int64)a1, 1) + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v28 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 25;
    if ( (unsigned int)v28 > 1 )
      v24 = sub_F63050(v24, 1, v28, v25);
    v70[0] = *(_QWORD *)(v24 + 24);
    if ( sub_1782A90(v70, 1, v28, v25, v26, v27) )
      sub_1782B40(v66, 1);
    v64 = a1[30];
    v29 = j__strlen("await_transform");
    v30 = sub_6F3470(v64 + 552, "await_transform", v29);
    v70[1] = &v72;
    v71 = 0x800000000LL;
    v75 = 0;
    v78 = v30;
    v70[0] = 0;
    v76 = 0;
    v77 = a1;
    v79 = v6;
    sub_B85890(&v81, v30);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
    v83 = 0x101010000LL;
    v82 = si128;
    sub_1A395A0(v70);
    if ( v23 )
      v23 += 8;
    *(_WORD *)((char *)&v83 + 3) = 0;
    v32 = sub_1A48440(a1, v70, v23, 0);
    sub_169D230((__int64)v70);
    v33 = v66;
    if ( !v32
      || (v34 = j__strlen("await_transform"),
          v35 = sub_17840A0((__int64)a1, v15, v6, "await_transform", v34, (__int64)&v66, si128),
          v33 = v35 & 0xFFFFFFFFFFFFFFFELL,
          v35 != 1) )
    {
      v37 = sub_1783580((__int64)a1, v6, v33, a4);
      if ( v37 != 1 )
        return sub_178C3D0((unsigned __int64)a1, v6, v66, v37 & 0xFFFFFFFFFFFFFFFELL, 0, si128);
      return 1;
    }
    sub_168B9F0((__int64)v70, a1 + 1, v6, 0x16E0u, 0);
    v36 = sub_EEC8C0(v66, (__int64)(a1 + 1), *(double *)si128.m128i_i64);
    if ( (_BYTE)v78 )
    {
      v39 = v73;
      if ( !v73 )
      {
        v52 = v74;
        v53 = *(_DWORD *)(v74 + 14976);
        if ( v53 )
        {
          v54 = (unsigned int)(v53 - 1);
          *(_DWORD *)(v74 + 14976) = v54;
          v39 = *(_QWORD *)(v52 + 8 * v54 + 14848);
          v55 = *(unsigned int *)(v39 + 536);
          *(_BYTE *)v39 = 0;
          v56 = *(_QWORD *)(v39 + 528);
          *(_DWORD *)(v39 + 424) = 0;
          v57 = v56 + (v55 << 6);
          while ( v56 != v57 )
          {
            while ( 1 )
            {
              v57 -= 64;
              v58 = *(void **)(v57 + 24);
              if ( v58 == (void *)(v57 + 40) )
                break;
              operator delete(v58);
              if ( v56 == v57 )
                goto LABEL_41;
            }
          }
LABEL_41:
          *(_DWORD *)(v39 + 536) = 0;
        }
        else
        {
          v39 = operator new(0x3A0u);
          *(_BYTE *)v39 = 0;
          *(_QWORD *)(v39 + 96) = v39 + 112;
          *(_QWORD *)(v39 + 128) = v39 + 144;
          *(_QWORD *)(v39 + 160) = v39 + 176;
          *(_QWORD *)(v39 + 192) = v39 + 208;
          *(_QWORD *)(v39 + 224) = v39 + 240;
          *(_QWORD *)(v39 + 256) = v39 + 272;
          *(_QWORD *)(v39 + 288) = v39 + 304;
          *(_QWORD *)(v39 + 320) = v39 + 336;
          *(_QWORD *)(v39 + 352) = v39 + 368;
          *(_QWORD *)(v39 + 384) = v39 + 400;
          *(_QWORD *)(v39 + 416) = v39 + 432;
          *(_BYTE *)(v39 + 112) = 0;
          *(_QWORD *)(v39 + 104) = 0;
          *(_QWORD *)(v39 + 136) = 0;
          *(_BYTE *)(v39 + 144) = 0;
          *(_QWORD *)(v39 + 168) = 0;
          *(_BYTE *)(v39 + 176) = 0;
          *(_QWORD *)(v39 + 200) = 0;
          *(_BYTE *)(v39 + 208) = 0;
          *(_QWORD *)(v39 + 232) = 0;
          *(_BYTE *)(v39 + 240) = 0;
          *(_QWORD *)(v39 + 264) = 0;
          *(_BYTE *)(v39 + 272) = 0;
          *(_QWORD *)(v39 + 296) = 0;
          *(_BYTE *)(v39 + 304) = 0;
          *(_QWORD *)(v39 + 328) = 0;
          *(_BYTE *)(v39 + 336) = 0;
          *(_QWORD *)(v39 + 360) = 0;
          *(_BYTE *)(v39 + 368) = 0;
          *(_QWORD *)(v39 + 392) = 0;
          *(_BYTE *)(v39 + 400) = 0;
          *(_QWORD *)(v39 + 424) = 0x800000000LL;
          *(_QWORD *)(v39 + 528) = v39 + 544;
          *(_QWORD *)(v39 + 536) = 0x600000000LL;
        }
        v73 = v39;
      }
    }
    else
    {
      if ( !v80 )
      {
LABEL_18:
        sub_15F7200(v70);
        return 1;
      }
      v44 = sub_168B9E0(v70);
      v47 = v71;
      if ( v71 )
        v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
      v67 = v47;
      v48 = sub_1587BC0(v44, &v67, v42, v43, v45, v46);
      v49 = *v48 + 32LL * v79;
      v39 = *(_QWORD *)(v49 + 8);
      if ( !v39 )
      {
        v50 = *(_QWORD *)(v49 + 16);
        v51 = *(_DWORD *)(v50 + 14976);
        if ( v51 )
        {
          v59 = (unsigned int)(v51 - 1);
          *(_DWORD *)(v50 + 14976) = v59;
          v39 = *(_QWORD *)(v50 + 8 * v59 + 14848);
          v60 = *(unsigned int *)(v39 + 536);
          *(_BYTE *)v39 = 0;
          v61 = *(_QWORD *)(v39 + 528);
          *(_DWORD *)(v39 + 424) = 0;
          v62 = v61 + (v60 << 6);
          while ( v61 != v62 )
          {
            while ( 1 )
            {
              v62 -= 64;
              v63 = *(void **)(v62 + 24);
              if ( v63 == (void *)(v62 + 40) )
                break;
              v65 = v61;
              operator delete(v63);
              v61 = v65;
              if ( v65 == v62 )
                goto LABEL_46;
            }
          }
LABEL_46:
          *(_DWORD *)(v39 + 536) = 0;
        }
        else
        {
          v39 = operator new(0x3A0u);
          *(_BYTE *)v39 = 0;
          *(_QWORD *)(v39 + 96) = v39 + 112;
          *(_QWORD *)(v39 + 128) = v39 + 144;
          *(_QWORD *)(v39 + 160) = v39 + 176;
          *(_QWORD *)(v39 + 192) = v39 + 208;
          *(_QWORD *)(v39 + 224) = v39 + 240;
          *(_QWORD *)(v39 + 256) = v39 + 272;
          *(_QWORD *)(v39 + 288) = v39 + 304;
          *(_QWORD *)(v39 + 320) = v39 + 336;
          *(_QWORD *)(v39 + 352) = v39 + 368;
          *(_QWORD *)(v39 + 384) = v39 + 400;
          *(_QWORD *)(v39 + 416) = v39 + 432;
          *(_BYTE *)(v39 + 112) = 0;
          *(_QWORD *)(v39 + 104) = 0;
          *(_QWORD *)(v39 + 136) = 0;
          *(_BYTE *)(v39 + 144) = 0;
          *(_QWORD *)(v39 + 168) = 0;
          *(_BYTE *)(v39 + 176) = 0;
          *(_QWORD *)(v39 + 200) = 0;
          *(_BYTE *)(v39 + 208) = 0;
          *(_QWORD *)(v39 + 232) = 0;
          *(_BYTE *)(v39 + 240) = 0;
          *(_QWORD *)(v39 + 264) = 0;
          *(_BYTE *)(v39 + 272) = 0;
          *(_QWORD *)(v39 + 296) = 0;
          *(_BYTE *)(v39 + 304) = 0;
          *(_QWORD *)(v39 + 328) = 0;
          *(_BYTE *)(v39 + 336) = 0;
          *(_QWORD *)(v39 + 360) = 0;
          *(_BYTE *)(v39 + 368) = 0;
          *(_QWORD *)(v39 + 392) = 0;
          *(_BYTE *)(v39 + 400) = 0;
          *(_QWORD *)(v39 + 424) = 0x800000000LL;
          *(_QWORD *)(v39 + 528) = v39 + 544;
          *(_QWORD *)(v39 + 536) = 0x600000000LL;
        }
        *(_QWORD *)(v49 + 8) = v39;
      }
    }
    v68 = v36;
    LOBYTE(v69) = 1;
    v40 = *(unsigned int *)(v39 + 424);
    if ( v40 + 1 > (unsigned __int64)*(unsigned int *)(v39 + 428) )
    {
      sub_2237220(v39 + 416, v39 + 432, v40 + 1, 12);
      v40 = *(unsigned int *)(v39 + 424);
    }
    v41 = *(_QWORD *)(v39 + 416) + 12 * v40;
    *(_QWORD *)v41 = v68;
    *(_DWORD *)(v41 + 8) = v69;
    ++*(_DWORD *)(v39 + 424);
    goto LABEL_18;
  }
  v17 = (_QWORD *)a1[31];
  v18 = v17[2384];
  v19 = v66;
  v20 = sub_EEE9A0(40, v17, 8u);
  *(_WORD *)v20 = *(_WORD *)v20 & 0xFE00 | 0x46;
  if ( unk_2CD7484 )
    sub_EE9B50(70);
  *(_WORD *)(v20 + 1) &= 0xF801u;
  *(_QWORD *)(v20 + 8) = v18;
  *(_DWORD *)(v20 + 16) = v6;
  *(_QWORD *)(v20 + 24) = v19;
  *(_QWORD *)(v20 + 32) = a4;
  v21 = sub_B63980(v20);
  *(_BYTE *)(v20 + 1) = (v21 << 6) | *(_BYTE *)(v20 + 1) & 0x3F;
  *(_BYTE *)(v20 + 2) = *(_BYTE *)(v20 + 2) & 0xF8 | (v21 >> 2) & 7;
  return v20;
}
