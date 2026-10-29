void __fastcall sub_1518B20(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned __int16 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int128 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int128 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i si128; // xmm0
  unsigned int v15; // edx
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int128 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rbp
  _QWORD *v25; // rax
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  unsigned __int16 v28; // ax
  __int16 v29; // ax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rdi
  __int64 *v34; // rax
  int v35; // edx
  int v36; // esi
  unsigned __int16 v37; // si
  __int64 *v38; // rdi
  unsigned int v39; // eax
  unsigned __int16 v40; // di
  __int64 v41; // rcx
  unsigned int v42; // edx
  unsigned __int16 v43; // si
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // [rsp+10h] [rbp-168h]
  __int64 v47; // [rsp+18h] [rbp-160h]
  void *v48; // [rsp+20h] [rbp-158h] BYREF
  __m128i v49; // [rsp+28h] [rbp-150h]
  void *v50; // [rsp+40h] [rbp-138h] BYREF
  signed __int64 v51; // [rsp+48h] [rbp-130h]
  _BYTE v52[16]; // [rsp+50h] [rbp-128h] BYREF
  __m128i v53; // [rsp+60h] [rbp-118h] BYREF
  __int128 v54; // [rsp+70h] [rbp-108h]
  __int64 v55; // [rsp+80h] [rbp-F8h]
  __m128i v56[2]; // [rsp+90h] [rbp-E8h] BYREF
  __int16 v57; // [rsp+B0h] [rbp-C8h]
  __m128i v58; // [rsp+C0h] [rbp-B8h] BYREF
  char *v59; // [rsp+D0h] [rbp-A8h]
  __int64 v60; // [rsp+D8h] [rbp-A0h]
  __int64 v61; // [rsp+E0h] [rbp-98h]
  __int64 v62; // [rsp+F0h] [rbp-88h] BYREF
  int v63; // [rsp+F8h] [rbp-80h]
  void *ptr; // [rsp+100h] [rbp-78h]
  __int64 v65; // [rsp+108h] [rbp-70h]
  _BYTE v66[104]; // [rsp+110h] [rbp-68h] BYREF

  v5 = *(_WORD *)(a1 + 92);
  sub_1514BE0(a1, a2, a3);
  if ( !*a2 )
  {
    while ( 1 )
    {
      do
        v62 = 0x1C1001700190042LL;
      while ( !(unsigned __int8)sub_15680D0(a1, &v62, 4, 2) );
      v28 = *(_WORD *)(a1 + 92);
      if ( *(_WORD *)(a1 + 32) == 25 )
        break;
LABEL_33:
      if ( v5 <= v28 || (v29 = *(_WORD *)(a1 + 32), v29 != 25) && v29 != 66 )
      {
LABEL_38:
        sub_1564820(&v62, a1, *(unsigned int *)(a1 + 16), 2044);
        sub_15038B0((unsigned __int8 **)&v62);
        sub_AEA040((__int64)&v62);
        return;
      }
      sub_1504200(a1);
    }
    if ( v5 <= v28 )
      goto LABEL_38;
    if ( !v28 )
    {
LABEL_46:
      v38 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v38, (int *)(a1 + 16));
      v28 = *(_WORD *)(a1 + 92);
      goto LABEL_33;
    }
    v42 = *(_DWORD *)(a1 + 2792);
    if ( !v42 )
    {
LABEL_64:
      *(_WORD *)(a1 + 92) = v28 - 1;
      goto LABEL_46;
    }
    v43 = *(_WORD *)(a1 + 88);
    v44 = *(_QWORD *)(a1 + 2784) + 24LL * v42 - 24;
    while ( 1 )
    {
      if ( v43 == *(_WORD *)(v44 + 14) )
      {
        if ( *(_DWORD *)(v44 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_59;
      }
      else if ( v43 > *(_WORD *)(v44 + 14) )
      {
        goto LABEL_59;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v44 + 16) && *(_WORD *)(v44 + 18) >= v28 )
        goto LABEL_64;
LABEL_59:
      --v42;
      v44 -= 24;
      *(_DWORD *)(a1 + 2792) = v42;
      if ( !v42 )
        goto LABEL_64;
    }
  }
  v6 = *(unsigned int *)(a1 + 16);
  if ( *(_WORD *)(a1 + 32) == 64 )
  {
    *(_DWORD *)(a1 + 40) = v6;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  }
  else
  {
    sub_1564820(&v62, a1, v6, 2167);
    sub_1503D30((unsigned __int8 **)&v62, (__int64)"=");
    v7 = *a2;
    v57 = 259;
    v56[0].m128i_i64[0] = (__int64)"\"";
    *(_QWORD *)&v8 = sub_20F3F70(v7);
    LOWORD(v55) = 1283;
    v54 = v8;
    v53.m128i_i64[0] = (__int64)"context set name \"";
    v59 = "\"";
    v58.m128i_i64[0] = (__int64)&v53;
    v60 = v56[0].m128i_i64[1];
    LOWORD(v61) = 770;
    sub_2253560(&v50, &v58);
    sub_AEC220((unsigned __int8 **)&v62, v50, v51);
    if ( v50 != v52 )
      operator delete(v50);
    sub_AEA040((__int64)&v62);
  }
  v9 = *(unsigned int *)(a1 + 16);
  if ( *(_WORD *)(a1 + 32) == 24 )
  {
    ++*(_WORD *)(a1 + 92);
    v27 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = v9;
    sub_14634E0(v27, (int *)(a1 + 16));
  }
  else
  {
    sub_1564820(&v62, a1, v9, 2167);
    sub_1503D30((unsigned __int8 **)&v62, (__int64)"{");
    v10 = *a2;
    v57 = 259;
    v56[0].m128i_i64[0] = (__int64)"\"";
    *(_QWORD *)&v11 = sub_20F3F70(v10);
    LOWORD(v55) = 1283;
    v53.m128i_i64[0] = (__int64)"'=' that follows the context set name \"";
    v54 = v11;
    sub_A41580(&v58, &v53, v56, (__int64)"'=' that follows the context set name \"", v12, v13);
    sub_2253560(&v50, &v58);
    sub_AEC220((unsigned __int8 **)&v62, v50, v51);
    if ( v50 != v52 )
      operator delete(v50);
    sub_AEA040((__int64)&v62);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v48 = nullptr;
  v46 = (__int64)(a2 + 2);
  v49 = si128;
  while ( 1 )
  {
    v15 = *a2;
    v62 = 0;
    v63 = 0;
    ptr = v66;
    v65 = 0x100000000LL;
    sub_1515380((const __m128i *)a1, (__int64)&v62, v15, (__int64)&v48, si128);
    if ( v63 && (_DWORD)v65 )
    {
      v30 = a2[4];
      v31 = *((_QWORD *)a2 + 1);
      v32 = v30 + 1;
      v33 = v31 + 56 * v30;
      v34 = &v62;
      if ( v30 + 1 > (unsigned __int64)a2[5] )
      {
        v47 = *((_QWORD *)a2 + 1);
        if ( v31 > (unsigned __int64)&v62 || v33 <= (unsigned __int64)&v62 )
        {
          sub_EC11D0(v46, v32);
          v33 = *((_QWORD *)a2 + 1) + 56LL * a2[4];
          v34 = &v62;
        }
        else
        {
          sub_EC11D0(v46, v32);
          v45 = *((_QWORD *)a2 + 1);
          v34 = (__int64 *)((char *)&v62 + v45 - v47);
          v33 = v45 + 56LL * a2[4];
        }
      }
      *(_QWORD *)v33 = *v34;
      v35 = *((_DWORD *)v34 + 2);
      *(_QWORD *)(v33 + 24) = 0x100000000LL;
      *(_DWORD *)(v33 + 8) = v35;
      v36 = *((_DWORD *)v34 + 6);
      *(_QWORD *)(v33 + 16) = v33 + 32;
      if ( v36 )
        sub_15070E0((__int64 *)(v33 + 16), v34 + 2);
      ++a2[4];
    }
    if ( ptr == v66 )
      break;
    free(ptr);
    v16 = *(_WORD *)(a1 + 32);
    v17 = *(unsigned int *)(a1 + 16);
    if ( v16 != 66 )
      goto LABEL_15;
LABEL_28:
    v26 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = v17;
    sub_14634E0(v26, (int *)(a1 + 16));
  }
  v16 = *(_WORD *)(a1 + 32);
  v17 = *(unsigned int *)(a1 + 16);
  if ( v16 == 66 )
    goto LABEL_28;
LABEL_15:
  if ( v16 == 25 )
  {
    v37 = *(_WORD *)(a1 + 92);
    if ( !v37 )
    {
LABEL_44:
      *(_DWORD *)(a1 + 40) = v17;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      goto LABEL_19;
    }
    v39 = *(_DWORD *)(a1 + 2792);
    if ( !v39 )
    {
LABEL_55:
      *(_WORD *)(a1 + 92) = v37 - 1;
      goto LABEL_44;
    }
    v40 = *(_WORD *)(a1 + 88);
    v41 = *(_QWORD *)(a1 + 2784) + 24LL * v39 - 24;
    while ( 1 )
    {
      if ( v40 == *(_WORD *)(v41 + 14) )
      {
        if ( *(_DWORD *)(v41 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_50;
      }
      else if ( v40 > *(_WORD *)(v41 + 14) )
      {
        goto LABEL_50;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v41 + 16) && v37 <= *(_WORD *)(v41 + 18) )
        goto LABEL_55;
LABEL_50:
      --v39;
      v41 -= 24;
      *(_DWORD *)(a1 + 2792) = v39;
      if ( !v39 )
        goto LABEL_55;
    }
  }
  sub_1564820(&v62, a1, v17, 2167);
  sub_1503D30((unsigned __int8 **)&v62, (__int64)"}");
  v18 = *a2;
  v56[0].m128i_i64[0] = (__int64)"\"";
  v57 = 259;
  *(_QWORD *)&v19 = sub_20F3F70(v18);
  LOWORD(v55) = 1283;
  v53.m128i_i64[0] = (__int64)"context selectors for the context set \"";
  v54 = v19;
  sub_A41580(&v58, &v53, v56, (__int64)"context selectors for the context set \"", v20, v21);
  sub_2253560(&v50, &v58);
  sub_AEC220((unsigned __int8 **)&v62, v50, v51);
  if ( v50 != v52 )
    operator delete(v50);
  sub_AEA040((__int64)&v62);
LABEL_19:
  v22 = (char *)v48;
  if ( v49.m128i_i32[1] && v49.m128i_i32[0] )
  {
    v23 = 0;
    v24 = 8LL * (unsigned int)(v49.m128i_i32[0] - 1) + 8;
    do
    {
      v25 = *(_QWORD **)&v22[v23];
      if ( v25 != (_QWORD *)-8LL )
      {
        if ( v25 )
        {
          operator delete(*(_QWORD *)&v22[v23], *v25 + 17LL, 8);
          v22 = (char *)v48;
        }
      }
      v23 += 8;
    }
    while ( v24 != v23 );
  }
  free(v22);
}
