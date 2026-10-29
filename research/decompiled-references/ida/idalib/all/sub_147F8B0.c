__int64 __fastcall sub_147F8B0(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5)
{
  __int64 v9; // rax
  int v10; // edx
  __m128i v11; // xmm3
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int16 v17; // ax
  unsigned int v18; // ebp
  int v20; // eax
  __int16 v21; // ax
  __int64 v22; // rdi
  __int64 v23; // rax
  char *v24; // rdx
  __int16 v25; // ax
  unsigned int v26; // ebp
  unsigned int v27; // eax
  __int16 v28; // ax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // edx
  __int64 *v32; // rdi
  unsigned __int16 v33; // ax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // rdi
  unsigned int v37; // eax
  __int16 v38; // ax
  __int64 v39; // [rsp+10h] [rbp-188h] BYREF
  __int128 *v40; // [rsp+18h] [rbp-180h]
  __int16 v41; // [rsp+20h] [rbp-178h]
  __int128 v42; // [rsp+30h] [rbp-168h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-158h]
  __int128 v44; // [rsp+50h] [rbp-148h]
  _QWORD v45[3]; // [rsp+60h] [rbp-138h] BYREF
  _QWORD v46[5]; // [rsp+78h] [rbp-120h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-F8h] BYREF
  _QWORD v48[3]; // [rsp+B0h] [rbp-E8h] BYREF
  char v49; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+D8h] [rbp-C0h]
  char *v51; // [rsp+E0h] [rbp-B8h]
  __int64 v52; // [rsp+E8h] [rbp-B0h]
  char v53; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+100h] [rbp-98h] BYREF
  __m128i v55; // [rsp+108h] [rbp-90h]
  __m128i v56; // [rsp+118h] [rbp-80h]
  __int64 v57; // [rsp+128h] [rbp-70h]
  __m128i v58; // [rsp+130h] [rbp-68h]
  int v59; // [rsp+140h] [rbp-58h]
  __int64 v60; // [rsp+148h] [rbp-50h]
  int v61; // [rsp+150h] [rbp-48h]
  __int16 v62; // [rsp+154h] [rbp-44h]
  char v63; // [rsp+156h] [rbp-42h]

  v9 = *(_QWORD *)(a1 + 80);
  v10 = *(_DWORD *)(a1 + 88);
  v54 = a1;
  v57 = v9;
  LODWORD(v9) = *(_DWORD *)(a1 + 32);
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v55 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v59 = v9;
  v12 = *(unsigned int *)(a1 + 2712);
  v56 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v60 = v12;
  LOWORD(v12) = *(_WORD *)(a1 + 92);
  v13 = *(_QWORD *)(a1 + 8);
  v58 = v11;
  v61 = v10;
  v62 = v12;
  sub_1418D30(v13, 0);
  v63 = 1;
  v42 = 0;
  *(_OWORD *)ptr = 0;
  v44 = 0;
  if ( a5 )
  {
    v14 = *(__int64 **)(a5 + 8);
    if ( v14 )
    {
      v15 = *v14;
      v16 = *((unsigned int *)v14 + 2);
      *(_QWORD *)&v44 = v15;
      *((_QWORD *)&v44 + 1) = v16;
    }
  }
  if ( (unsigned __int8)sub_14D0170(a1, (unsigned int)&v42, 0, 0, 1, 0, 0, 0, 0, 0, 0) )
    goto LABEL_7;
  v17 = *(_WORD *)(a1 + 32);
  if ( v17 == 5 )
  {
    v20 = *(_DWORD *)(a1 + 16);
  }
  else
  {
    if ( v17 != 418 )
    {
LABEL_7:
      v18 = 0;
      goto LABEL_8;
    }
    v20 = *(_DWORD *)(a1 + 20);
    if ( !v20 )
      v20 = *(_DWORD *)(a1 + 16);
  }
  *(_DWORD *)(a1 + 40) = v20;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  sub_14A1B60(a1);
  if ( *(_WORD *)(a1 + 32) != 22 )
    goto LABEL_7;
  sub_146A990(a1);
  v21 = *(_WORD *)(a1 + 32);
  if ( v21 == 23 )
    goto LABEL_47;
  v22 = *(_QWORD *)(a1 + 8);
  if ( v21 == 27 )
  {
    v34 = *(_QWORD *)(v22 + 2944);
    if ( v34 >= *(unsigned int *)(v22 + 2912) )
      v35 = sub_14180A0(v22, 1u);
    else
      v35 = *(_QWORD *)(v22 + 2904) + 24 * v34;
    if ( *(_WORD *)(v35 + 16) == 23 )
      goto LABEL_47;
    v22 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v22 + 56) + 1LL) & 0x10) != 0 && (unsigned int)sub_155CBC0(a1, 0, 1) )
  {
LABEL_47:
    v18 = 1;
    goto LABEL_8;
  }
  v39 = a1;
  v40 = &v42;
  v41 = 0;
  if ( *((_QWORD *)&v42 + 1)
    && (unsigned __int8)sub_169D7E0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), &v42) )
  {
    sub_147B420((__int64)&v39);
  }
  v45[0] = 0;
  v46[2] = a1 + 504;
  v45[1] = v46;
  v46[4] = 0x200000000LL;
  v45[2] = 0x200000000LL;
  v23 = *(_QWORD *)(a1 + 8);
  v46[3] = &v47;
  v24 = *(char **)(v23 + 56);
  v25 = *(_WORD *)(a1 + 32);
  if ( (*v24 < 0 || (v24[89] & 1) != 0) && v25 == 20 )
  {
    v48[1] = &v49;
    v50 = a1 + 504;
    v48[2] = 0x200000000LL;
    v52 = 0x200000000LL;
    v51 = &v53;
    v48[0] = 0;
    sub_14A9F50(a1, v48);
    sub_147F860((__int64)v45, (__int64)v48);
    sub_147A450(v48);
    v25 = *(_WORD *)(a1 + 32);
  }
  v26 = 1;
  if ( a4 )
    v26 = *((_QWORD *)&v42 + 1) != 0;
  if ( v25 == 147 )
  {
    v36 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v36, (int *)(a1 + 16));
    LOBYTE(v37) = sub_147EA80(a1, v26, 0);
    v18 = v37;
    goto LABEL_42;
  }
  LOBYTE(v27) = sub_147EA80(a1, v26, 0);
  v18 = v27;
  if ( (_BYTE)v27 )
    goto LABEL_41;
  v28 = *(_WORD *)(a1 + 32);
  if ( v28 == 5 )
  {
    v32 = *(__int64 **)(a1 + 8);
  }
  else
  {
    if ( v28 != 416 )
      goto LABEL_42;
    v29 = *(_QWORD *)(a1 + 8);
    v30 = *(_QWORD *)(v29 + 2944);
    if ( v30 >= *(unsigned int *)(v29 + 2912) )
    {
      if ( *(_WORD *)(sub_14180A0(v29, 1u) + 16) != 5 )
        goto LABEL_42;
      v32 = *(__int64 **)(a1 + 8);
      v29 = (__int64)v32;
      if ( *(_WORD *)(a1 + 32) != 416 )
        goto LABEL_35;
    }
    else if ( *(_WORD *)(*(_QWORD *)(v29 + 2904) + 24 * v30 + 16) != 5 )
    {
      goto LABEL_42;
    }
    v31 = *(_DWORD *)(a1 + 20);
    if ( !v31 )
      v31 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v31;
    sub_14634E0((__int64 *)v29, (int *)(a1 + 16));
    v32 = *(__int64 **)(a1 + 8);
  }
LABEL_35:
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v32, (int *)(a1 + 16));
  v33 = *(_WORD *)(a1 + 32);
  if ( v33 != 22 )
  {
    if ( v33 <= 0x16u )
    {
      LOBYTE(v18) = v33 != 20;
      goto LABEL_42;
    }
    LOBYTE(v18) = v33 != 72;
    if ( v33 == 23 )
    {
      sub_146A990(a1);
      sub_14A1B60(a1);
      if ( a3 )
      {
        LOBYTE(v18) = *(_WORD *)(a1 + 32) == 37;
        goto LABEL_42;
      }
      v38 = *(_WORD *)(a1 + 32);
      if ( v38 != 62 )
      {
        v18 = a2;
        if ( v38 != 63 && v38 != 24 )
          LOBYTE(v18) = v38 == 150;
        goto LABEL_42;
      }
LABEL_41:
      v18 = 1;
    }
  }
LABEL_42:
  sub_147A450(v45);
  if ( (_BYTE)v41 )
    sub_169D850(*(_QWORD *)(v39 + 96), *(_QWORD *)(*(_QWORD *)(v39 + 96) + 608LL), v40);
  if ( HIBYTE(v41) )
    sub_1564F70(v39);
LABEL_8:
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  sub_147B460((__int64)&v54);
  return v18;
}
