void __fastcall sub_93EF40(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  unsigned int v5; // eax
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  _QWORD *v16; // rax
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // r12d
  size_t v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rdi
  _QWORD *v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rcx
  char v32; // r9
  __int64 v33; // rcx
  char v34; // r9
  __int64 v35; // rcx
  char v36; // r9
  __int64 v37; // rcx
  char v38; // r9
  __int64 v39; // rax
  __int64 v40; // r15
  char *v41; // rdi
  _QWORD *v42; // rax
  char **exception; // r13
  _DWORD *v44; // [rsp+0h] [rbp-B8h]
  __int64 v45[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+30h] [rbp-88h] BYREF
  __int64 v47; // [rsp+38h] [rbp-80h] BYREF
  __int64 v48; // [rsp+40h] [rbp-78h] BYREF
  __int64 v49; // [rsp+48h] [rbp-70h]
  __int64 v50; // [rsp+50h] [rbp-68h]
  __int64 v51; // [rsp+58h] [rbp-60h] BYREF
  __int64 v52; // [rsp+60h] [rbp-58h]
  __int64 v53; // [rsp+68h] [rbp-50h]
  __int64 v54; // [rsp+70h] [rbp-48h]
  int v55; // [rsp+78h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(&v46, "arith");
  v5 = sub_15DA4C0(v4 + 560, &v46);
  sub_966710(a1, a2, v5);
  *(_QWORD *)(a1 + 56) = qword_1C6E820;
  v46 = 1;
  v47 = 0;
  v48 = 1;
  v49 = 0;
  sub_182CBA0(qword_1C7F2C0, &v48);
  BYTE4(v48) &= ~1u;
  LODWORD(v48) = 1;
  sub_894960(a1 + 64, (__int64)&v46);
  sub_25A130((char *)&v46);
  v46 = 0;
  v47 = 0;
  v48 = 1;
  v49 = 0;
  sub_182CBA0(qword_1C7F2C0, &v48);
  *(_QWORD *)(a1 + 128) = 0;
  v6 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 1;
  *(_QWORD *)(a1 + 152) = 0;
  BYTE4(v48) &= ~1u;
  LODWORD(v48) = 1;
  sub_27B950((__int64)v6, a1 + 128, (int *)&v46);
  *(_QWORD *)(a1 + 160) = 0;
  v7 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 1;
  *(_QWORD *)(a1 + 184) = 0;
  sub_27B950((__int64)v7, a1 + 160, &qword_1C7F280);
  sub_25A130((char *)&v46);
  v8 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)a1 = off_1C6F8C8;
  *(_QWORD *)(a1 + 56) = off_1C6FA88;
  v9 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = v9 + 248;
  sub_16669D0(a1 + 208, v8);
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = a1;
  *(_QWORD *)(a1 + 240) = a1 + 208;
  v10 = sub_186B270(0x180u);
  *(_QWORD *)(v10 + 32) = 0;
  *(_OWORD *)v10 = 0;
  *(_OWORD *)(v10 + 16) = 0;
  *(_OWORD *)(v10 + 48) = 0;
  *(_OWORD *)(v10 + 64) = 0;
  *(_OWORD *)(v10 + 96) = 0;
  *(_OWORD *)(v10 + 112) = 0;
  *(_OWORD *)(v10 + 144) = 0;
  *(_OWORD *)(v10 + 160) = 0;
  *(_OWORD *)(v10 + 192) = 0;
  *(_OWORD *)(v10 + 208) = 0;
  *(_OWORD *)(v10 + 240) = 0;
  *(_OWORD *)(v10 + 256) = 0;
  *(_OWORD *)(v10 + 288) = 0;
  *(_OWORD *)(v10 + 304) = 0;
  *(_OWORD *)(v10 + 336) = 0;
  *(_OWORD *)(v10 + 352) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_DWORD *)(v10 + 88) = 0;
  *(_QWORD *)(v10 + 128) = 0;
  *(_DWORD *)(v10 + 136) = 0;
  *(_QWORD *)(v10 + 176) = 0;
  *(_DWORD *)(v10 + 184) = 0;
  *(_QWORD *)(v10 + 224) = 0;
  *(_DWORD *)(v10 + 232) = 0;
  *(_QWORD *)(v10 + 272) = 0;
  *(_DWORD *)(v10 + 280) = 0;
  *(_QWORD *)(v10 + 320) = 0;
  *(_DWORD *)(v10 + 328) = 0;
  *(_QWORD *)(v10 + 368) = 0;
  *(_DWORD *)(v10 + 376) = 0;
  *(_QWORD *)(a1 + 248) = v10;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 256) = 8;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(__m128i *)(a1 + 408) = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  v11 = (_DWORD *)sub_186B270(0x40u);
  v12 = *(_QWORD **)(a1 + 304);
  v11[1] = 0x80000000;
  v11[3] = 0x80000000;
  v11[5] = 0x80000000;
  v11[7] = 0x80000000;
  v11[9] = 0x80000000;
  v11[11] = 0x80000000;
  v11[13] = 0x80000000;
  v11[15] = 0x80000000;
  *(_QWORD *)(a1 + 424) = v11;
  *(_QWORD *)(a1 + 432) = 8;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 1;
  *(_QWORD *)(a1 + 480) = 0;
  v46 = -1;
  v47 = 0;
  v48 = 0;
  v49 = 1;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 1;
  v54 = 0;
  v55 = -2;
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
    {
      v21 = (unsigned int)(3 * v13 + 1) >> 1;
      v22 = 80 * v21 + 8;
      if ( 80 * (int)v13 + 8 >= (unsigned int)v22 || (unsigned int)v13 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v45, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v45);
        sub_233E40((__int64)v45);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = sub_186B270(v22);
      v24 = *(_QWORD *)(a1 + 304);
      v44 = (_DWORD *)v23;
      v12 = (_QWORD *)(v23 + 8);
      if ( v24 )
      {
        v25 = v23;
        v26 = *(unsigned int *)(v24 - 4);
        v27 = v12;
        v28 = 5 * v26;
        *(_DWORD *)(v25 + 4) = v26;
        v29 = (_QWORD *)v24;
        v30 = (_QWORD *)(v24 + 16 * v28);
        if ( v30 != (_QWORD *)v24 )
        {
          do
          {
            v31 = *v29;
            v32 = *((_BYTE *)v27 + 12);
            v29 += 10;
            v27 += 10;
            *(v27 - 10) = v31;
            *((_DWORD *)v27 - 18) = *((_DWORD *)v29 - 18);
            *((_BYTE *)v27 - 68) = v32 & 0xFC | *((_BYTE *)v29 - 68) & 3;
            v33 = *(v29 - 8);
            *(v29 - 8) = 0;
            v34 = *((_BYTE *)v27 - 52);
            *(v27 - 8) = v33;
            *((_DWORD *)v27 - 14) = *((_DWORD *)v29 - 14);
            *((_BYTE *)v27 - 52) = v34 & 0xFC | *((_BYTE *)v29 - 52) & 3;
            v35 = *(v29 - 6);
            *(v29 - 6) = 0;
            v36 = *((_BYTE *)v27 - 36);
            *(v27 - 6) = v35;
            *((_DWORD *)v27 - 10) = *((_DWORD *)v29 - 10);
            *((_BYTE *)v27 - 36) = v36 & 0xFC | *((_BYTE *)v29 - 36) & 3;
            v37 = *(v29 - 4);
            *(v29 - 4) = 0;
            v38 = *((_BYTE *)v27 - 20);
            *(v27 - 4) = v37;
            *((_DWORD *)v27 - 6) = *((_DWORD *)v29 - 6);
            *((_BYTE *)v27 - 20) = v38 & 0xFC | *((_BYTE *)v29 - 20) & 3;
            *(v27 - 2) = *(v29 - 2);
            LODWORD(v37) = *((_DWORD *)v29 - 2);
            *(v29 - 2) = 0;
            *((_DWORD *)v27 - 2) = v37;
          }
          while ( v30 != v29 );
        }
        v39 = *(unsigned int *)(v24 - 4);
        if ( (_DWORD)v39 )
        {
          v40 = v24 + 80 * v39;
          do
          {
            sub_25A130((char *)(v24 + 40));
            v41 = (char *)(v24 + 8);
            v24 += 80;
            sub_25A130(v41);
          }
          while ( v24 != v40 );
          v24 = *(_QWORD *)(a1 + 304);
        }
        sub_186B220((void *)(v24 - 8));
        v16 = &v12[10 * (unsigned int)v44[1]];
      }
      else
      {
        *(_DWORD *)(v23 + 4) = 0;
        v16 = (_QWORD *)(v23 + 8);
      }
      v15 = v46;
      *(_QWORD *)(a1 + 304) = v12;
      v14 = HIDWORD(v46);
      *v44 = v21;
    }
    else
    {
      v14 = -1;
      v15 = -1;
      v16 = &v12[10 * v13];
    }
  }
  else
  {
    v42 = (_QWORD *)sub_186B270(0xA8u);
    v12 = v42 + 1;
    *v42 = 2;
    v15 = v46;
    *(_QWORD *)(a1 + 304) = v42 + 1;
    v14 = HIDWORD(v46);
    v16 = v42 + 1;
  }
  *((_DWORD *)v16 + 1) = v14;
  v17 = v47;
  *(_DWORD *)v16 = v15;
  *((_DWORD *)v16 + 2) = v17;
  *((_BYTE *)v16 + 12) = BYTE4(v47) & 3 | *((_BYTE *)v16 + 12) & 0xFC;
  v18 = v48;
  v48 = 0;
  v16[2] = v18;
  *((_DWORD *)v16 + 6) = v49;
  *((_BYTE *)v16 + 28) = BYTE4(v49) & 3 | *((_BYTE *)v16 + 28) & 0xFC;
  v19 = v50;
  v50 = 0;
  v16[4] = v19;
  *((_DWORD *)v16 + 10) = v51;
  *((_BYTE *)v16 + 44) = BYTE4(v51) & 3 | *((_BYTE *)v16 + 44) & 0xFC;
  v20 = v52;
  v52 = 0;
  v16[6] = v20;
  *((_DWORD *)v16 + 14) = v53;
  *((_BYTE *)v16 + 60) = BYTE4(v53) & 3 | *((_BYTE *)v16 + 60) & 0xFC;
  v16[8] = v54;
  v54 = 0;
  *((_DWORD *)v16 + 18) = v55;
  ++*((_DWORD *)v12 - 1);
  sub_25A130((char *)&v51);
  sub_25A130((char *)&v47);
}

