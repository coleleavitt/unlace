__int64 __fastcall sub_14B87C0(__int64 a1, double a2, __m128 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int16 v5; // ax
  unsigned int v6; // eax
  __int16 v7; // ax
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 *v17; // rdx
  __int64 *v18; // r9
  __int64 *v19; // r8
  __int64 v20; // rax
  unsigned int v21; // r10d
  void *v22; // rax
  size_t v23; // rdx
  __int64 v24; // [rsp+0h] [rbp-CC8h]
  _BYTE *v25; // [rsp+0h] [rbp-CC8h]
  __int64 *v26; // [rsp+0h] [rbp-CC8h]
  __int64 *v27; // [rsp+0h] [rbp-CC8h]
  __int64 *v28; // [rsp+8h] [rbp-CC0h]
  unsigned int v29; // [rsp+8h] [rbp-CC0h]
  unsigned int v30; // [rsp+10h] [rbp-CB8h]
  _BYTE *v31; // [rsp+10h] [rbp-CB8h]
  __int64 v32; // [rsp+28h] [rbp-CA0h] BYREF
  _QWORD v33[3]; // [rsp+30h] [rbp-C98h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-C80h]
  const char *v35; // [rsp+50h] [rbp-C78h]
  __int64 v36[3]; // [rsp+60h] [rbp-C68h] BYREF
  void *v37; // [rsp+78h] [rbp-C50h]
  __int64 v38; // [rsp+88h] [rbp-C40h] BYREF
  _DWORD v39[10]; // [rsp+F0h] [rbp-BD8h] BYREF
  void *v40; // [rsp+118h] [rbp-BB0h]
  __int64 v41; // [rsp+128h] [rbp-BA0h] BYREF
  __int64 v42; // [rsp+138h] [rbp-B90h] BYREF
  void *ptr; // [rsp+140h] [rbp-B88h]
  __int64 v44; // [rsp+150h] [rbp-B78h] BYREF
  void *v45; // [rsp+170h] [rbp-B58h]
  int v46; // [rsp+17Ch] [rbp-B4Ch]
  _QWORD v47[2]; // [rsp+220h] [rbp-AA8h] BYREF
  __int128 v48; // [rsp+230h] [rbp-A98h]
  __int64 v49; // [rsp+240h] [rbp-A88h]
  __int64 v50; // [rsp+248h] [rbp-A80h]
  __int64 v51; // [rsp+250h] [rbp-A78h]
  int v52; // [rsp+258h] [rbp-A70h]
  __int64 v53; // [rsp+260h] [rbp-A68h]
  __int64 v54; // [rsp+270h] [rbp-A58h]
  unsigned int v55; // [rsp+278h] [rbp-A50h]
  unsigned int v56; // [rsp+27Ch] [rbp-A4Ch]
  int v57; // [rsp+280h] [rbp-A48h]
  __int64 v58; // [rsp+288h] [rbp-A40h]
  __int64 v59; // [rsp+290h] [rbp-A38h]
  int v60; // [rsp+298h] [rbp-A30h]
  __int64 *v61; // [rsp+2A0h] [rbp-A28h] BYREF
  __int64 v62; // [rsp+2A8h] [rbp-A20h]
  __int64 v63; // [rsp+2B0h] [rbp-A18h] BYREF
  __int16 v64; // [rsp+4F0h] [rbp-7D8h]
  __int64 v65; // [rsp+4F8h] [rbp-7D0h]
  _QWORD *v66; // [rsp+500h] [rbp-7C8h]
  __int64 v67; // [rsp+508h] [rbp-7C0h]
  _QWORD v68[5]; // [rsp+510h] [rbp-7B8h] BYREF
  _QWORD v69[242]; // [rsp+538h] [rbp-790h] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v3 = *(_DWORD *)(a1 + 40);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  sub_2233820(v33);
  v33[2] = v4;
  v34 = v3;
  v33[0] = &off_2B552D0;
  v35 = "block literal parsing";
  sub_146B5E0(&v32, a1, 0x400049u, 1, 0);
  sub_18C7EB0(*(_QWORD *)(a1 + 96), v3, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
  sub_147A4A0((__int64)v39, a1 + 504);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v47[0] = v39;
  v47[1] = 0;
  v61 = &v63;
  v62 = 0x400000000LL;
  v68[2] = v42;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  LOBYTE(v64) = (((v39[0] >> 12) & 0x7F) == 69) | v64 & 0xFE;
  v66 = v68;
  HIBYTE(v5) = HIBYTE(v64) & 0xFC;
  v54 = 0;
  LOBYTE(v5) = v64 & 1 | 4;
  v57 = 16;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v65 = 0;
  v67 = 0x200000000LL;
  v68[3] = v69;
  v68[4] = 0x200000000LL;
  v69[2] = qword_2CD8AE0;
  memset(&v69[3], 0, 40);
  v64 = v5;
  v6 = *(_DWORD *)(a1 + 16);
  v69[232] = 0;
  v55 = v6;
  v56 = v6;
  v7 = *(_WORD *)(a1 + 32);
  if ( v7 == 22 )
  {
    sub_149CF20((const __m128i *)a1, (__int64)v47, (__m128i)0LL, a3);
    HIDWORD(v54) = v3;
    v52 = 0;
    v53 = 0;
    LODWORD(v54) = v3;
    if ( (v64 & 1) != 0 || ((*(_DWORD *)v47[0] >> 12) & 0x7F) == 0x45 )
      goto LABEL_7;
  }
  else
  {
    if ( v7 != 24 )
    {
      sub_14B6F90((const __m128i *)a1, v3, (__m128i)0LL, a3);
      goto LABEL_5;
    }
    sub_15ABA00(
      (unsigned int)v36,
      1,
      0,
      0,
      0,
      0,
      0,
      0,
      1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      v3,
      v3,
      (__int64)v47,
      0,
      0,
      0,
      0);
    v15 = (unsigned int)v62;
    v16 = (unsigned int)v62 + 1LL;
    if ( v16 > HIDWORD(v62) )
    {
      if ( v61 > v36 || v36 >= &v61[18 * (unsigned int)v62] )
      {
        sub_1497B50((__int64)&v61, v16);
        v17 = v61;
        v15 = (unsigned int)v62;
        v18 = v36;
      }
      else
      {
        v27 = v61;
        sub_1497B50((__int64)&v61, v16);
        v17 = v61;
        v15 = (unsigned int)v62;
        v18 = (char *)v61 + (char *)v36 - (char *)v27;
      }
    }
    else
    {
      v17 = v61;
      v18 = v36;
    }
    v19 = &v17[18 * v15];
    *(_DWORD *)v19 = *(_DWORD *)v18;
    *((_DWORD *)v19 + 1) = *((_DWORD *)v18 + 1);
    *((_DWORD *)v19 + 2) = *((_DWORD *)v18 + 2);
    v20 = *((_QWORD *)v18 + 2);
    v19[4] = 0x200000000LL;
    v19[2] = v20;
    v21 = *((_DWORD *)v18 + 8);
    v22 = v19 + 5;
    v19[3] = (__int64)(v19 + 5);
    if ( v21 && v19 + 3 != (__int64 *)(v18 + 24) )
    {
      v23 = 8LL * v21;
      if ( v21 <= 2uLL
        || (v31 = v18,
            v29 = v21,
            v26 = v19,
            sub_2237220(v19 + 3, v19 + 5, v21, 8),
            v18 = v31,
            v19 = v26,
            v21 = v29,
            v22 = (void *)v26[3],
            (v23 = 8LL * *((unsigned int *)v31 + 8)) != 0) )
      {
        v30 = v21;
        v28 = v19;
        v25 = v18;
        memcpy(v22, *((const void **)v18 + 3), v23);
        v21 = v30;
        v19 = v28;
        v18 = v25;
      }
      *((_DWORD *)v19 + 8) = v21;
    }
    a3 = (__m128)_mm_loadu_si128((const __m128i *)(v18 + 56));
    *(__m128 *)(v19 + 7) = a3;
    *(__m128i *)(v19 + 9) = _mm_loadu_si128((const __m128i *)(v18 + 72));
    *(__m128i *)(v19 + 11) = _mm_loadu_si128((const __m128i *)(v18 + 88));
    *(__m128i *)(v19 + 13) = _mm_loadu_si128((const __m128i *)(v18 + 104));
    *(__m128i *)(v19 + 15) = _mm_loadu_si128((const __m128i *)(v18 + 120));
    v19[17] = *((_QWORD *)v18 + 17);
    LODWORD(v62) = v62 + 1;
    if ( v3 )
      v56 = v3;
    if ( v37 != &v38 )
      free(v37);
  }
  if ( *(_WORD *)(a1 + 32) == 189 )
    sub_14B5E30((const __m128i *)a1, (__int64)v47, (__m128i)0LL, a3);
  sub_18C4CC0(*(_QWORD *)(a1 + 96), v3, v47, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
LABEL_5:
  if ( *(_WORD *)(a1 + 32) != 24 )
  {
    sub_1564840(v36, a1, a1 + 16, 1614);
    sub_AEA040((__int64)v36);
LABEL_7:
    v8 = v3;
    v9 = 1;
    sub_190F3C0(*(_QWORD *)(a1 + 96), v8, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
    goto LABEL_8;
  }
  v11 = *(_QWORD *)(a1 + 96);
  sub_18C7FE0(v11, 6, 0);
  v12 = sub_153CA60(a1, 0);
  if ( v32 )
  {
    v24 = v12;
    sub_1564F70(v32);
    v12 = v24;
    v32 = 0;
  }
  v13 = *(_QWORD *)(a1 + 96);
  if ( v12 == 1 )
  {
    sub_190F3C0(v13, v3, *(_QWORD *)(v13 + 608));
    v14 = 1;
  }
  else
  {
    v14 = sub_1931970(v13, v3, v12 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v13 + 608));
  }
  v9 = v14;
  sub_190D5E0(v11);
LABEL_8:
  sub_147A7A0((char *)v47);
  if ( v46 )
    free(v45);
  sub_15DCED0(v42, &v42);
  if ( ptr != &v44 )
    free(ptr);
  if ( v40 != &v41 )
    free(v40);
  if ( v32 )
    sub_1564F70(v32);
  v33[0] = &off_2B552D0;
  sub_22338A0(v33);
  return v9;
}
