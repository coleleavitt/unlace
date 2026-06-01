void __fastcall sub_941030(unsigned __int64 a1, __int64 a2)
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
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  _QWORD *v17; // rax
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned int v23; // esi
  size_t v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r13
  _DWORD *v27; // r12
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rcx
  char v34; // si
  __int64 v35; // rcx
  char v36; // si
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  char *v40; // rdi
  _QWORD *v41; // rax
  char **exception; // r13
  unsigned int v43; // [rsp+Ch] [rbp-8Ch]
  __int64 v44[4]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v45; // [rsp+30h] [rbp-68h] BYREF
  __int64 v46; // [rsp+38h] [rbp-60h] BYREF
  __int64 v47; // [rsp+40h] [rbp-58h]
  __int64 v48; // [rsp+48h] [rbp-50h]
  __int64 v49; // [rsp+50h] [rbp-48h]
  int v50; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(&v45, "arith");
  v5 = sub_15DA4C0(v4 + 560, &v45);
  sub_966710(a1, a2, v5);
  *(_QWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 56) = qword_1C6E820;
  *(_QWORD *)(a1 + 72) = 0;
  v6 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  sub_182CBA0(v6, a1 + 80);
  *(_BYTE *)(a1 + 84) &= ~1u;
  v7 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 96) = 1;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 1;
  *(_QWORD *)(a1 + 120) = 0;
  sub_182CBA0(v7, a1 + 112);
  *(_BYTE *)(a1 + 116) &= ~1u;
  v8 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)a1 = off_1C6FAC0;
  *(_QWORD *)(a1 + 56) = off_1C6FC80;
  v9 = *(_QWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 112) = 1;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = v9 + 248;
  sub_16669D0(a1 + 144, v8);
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = a1;
  *(_QWORD *)(a1 + 176) = a1 + 144;
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
  *(_QWORD *)(a1 + 184) = v10;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 192) = 8;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(__m128i *)(a1 + 344) = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  v11 = (_DWORD *)sub_186B270(0x40u);
  v12 = *(_QWORD **)(a1 + 240);
  v11[1] = 0x80000000;
  v11[3] = 0x80000000;
  v11[5] = 0x80000000;
  v11[7] = 0x80000000;
  v11[9] = 0x80000000;
  v11[11] = 0x80000000;
  v11[13] = 0x80000000;
  v11[15] = 0x80000000;
  *(_QWORD *)(a1 + 360) = v11;
  *(_QWORD *)(a1 + 368) = 8;
  *(_DWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 1;
  *(_QWORD *)(a1 + 416) = 0;
  v45 = -1;
  v46 = 0;
  v47 = 0;
  v48 = 1;
  v49 = 0;
  v50 = -2;
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
    {
      v21 = 3 * v13 + 1;
      v22 = v21 & 0xFFFFFFFE;
      v23 = v21 >> 1;
      v43 = v23;
      v24 = 16 * (v22 + v23) + 8;
      if ( 48 * (int)v13 + 8 >= (unsigned int)v24 || (unsigned int)v13 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v44, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v44);
        sub_233E40((__int64)v44);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = sub_186B270(v24);
      v26 = *(_QWORD *)(a1 + 240);
      v27 = (_DWORD *)v25;
      v12 = (_QWORD *)(v25 + 8);
      if ( v26 )
      {
        v28 = *(unsigned int *)(v26 - 4);
        v29 = v12;
        v30 = 3 * v28;
        v27[1] = v28;
        v31 = (_QWORD *)v26;
        v32 = (_QWORD *)(v26 + 16 * v30);
        if ( v32 != (_QWORD *)v26 )
        {
          do
          {
            v33 = *v31;
            v34 = *((_BYTE *)v29 + 12);
            v31 += 6;
            v29 += 6;
            *(v29 - 6) = v33;
            *((_DWORD *)v29 - 10) = *((_DWORD *)v31 - 10);
            *((_BYTE *)v29 - 36) = v34 & 0xFC | *((_BYTE *)v31 - 36) & 3;
            v35 = *(v31 - 4);
            *(v31 - 4) = 0;
            v36 = *((_BYTE *)v29 - 20);
            *(v29 - 4) = v35;
            *((_DWORD *)v29 - 6) = *((_DWORD *)v31 - 6);
            *((_BYTE *)v29 - 20) = v36 & 0xFC | *((_BYTE *)v31 - 20) & 3;
            v37 = *(v31 - 2);
            *(v31 - 2) = 0;
            *(v29 - 2) = v37;
            *((_DWORD *)v29 - 2) = *((_DWORD *)v31 - 2);
          }
          while ( v32 != v31 );
        }
        v38 = *(unsigned int *)(v26 - 4);
        if ( (_DWORD)v38 )
        {
          v39 = v26 + 48 * v38;
          do
          {
            v40 = (char *)(v26 + 8);
            v26 += 48;
            sub_25A130(v40);
          }
          while ( v26 != v39 );
          v26 = *(_QWORD *)(a1 + 240);
        }
        sub_186B220((void *)(v26 - 8));
        v17 = &v12[6 * (unsigned int)v27[1]];
      }
      else
      {
        *(_DWORD *)(v25 + 4) = 0;
        v17 = (_QWORD *)(v25 + 8);
      }
      v15 = v45;
      *(_QWORD *)(a1 + 240) = v12;
      v16 = HIDWORD(v45);
      *v27 = v43;
    }
    else
    {
      v14 = 3 * v13;
      v15 = -1;
      v16 = -1;
      v17 = &v12[2 * v14];
    }
  }
  else
  {
    v41 = (_QWORD *)sub_186B270(0x68u);
    v12 = v41 + 1;
    *v41 = 2;
    v15 = v45;
    *(_QWORD *)(a1 + 240) = v41 + 1;
    v16 = HIDWORD(v45);
    v17 = v41 + 1;
  }
  *((_DWORD *)v17 + 1) = v16;
  v18 = v46;
  *(_DWORD *)v17 = v15;
  *((_DWORD *)v17 + 2) = v18;
  *((_BYTE *)v17 + 12) = BYTE4(v46) & 3 | *((_BYTE *)v17 + 12) & 0xFC;
  v19 = v47;
  v47 = 0;
  v17[2] = v19;
  *((_DWORD *)v17 + 6) = v48;
  *((_BYTE *)v17 + 28) = BYTE4(v48) & 3 | *((_BYTE *)v17 + 28) & 0xFC;
  v20 = v49;
  v49 = 0;
  v17[4] = v20;
  *((_DWORD *)v17 + 10) = v50;
  ++*((_DWORD *)v12 - 1);
  sub_25A130((char *)&v46);
}

