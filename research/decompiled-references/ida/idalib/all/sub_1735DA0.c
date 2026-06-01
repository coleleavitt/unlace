void __fastcall sub_1735DA0(__int64 a1, const void *a2, size_t a3, char a4)
{
  size_t v7; // rax
  char v8; // bp
  char *v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  char **v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  char **v20; // rdi
  char *v21; // r13
  size_t v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 (*v26)(void); // rdx
  __int64 v27; // r15
  __int64 (*v28)(void); // rax
  __m128 v29; // xmm0
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  double v36[2]; // [rsp+8h] [rbp-1B0h] BYREF
  char **v37; // [rsp+18h] [rbp-1A0h] BYREF
  void *ptr; // [rsp+20h] [rbp-198h] BYREF
  __m128i si128; // [rsp+28h] [rbp-190h]
  _BYTE v40[72]; // [rsp+38h] [rbp-180h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-138h] BYREF
  __m128i v42; // [rsp+90h] [rbp-128h]
  int v43; // [rsp+A0h] [rbp-118h]
  __int128 v44; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-100h]
  char v46; // [rsp+C0h] [rbp-F8h]
  __int64 v47; // [rsp+C8h] [rbp-F0h]
  __int64 v48; // [rsp+D0h] [rbp-E8h]
  __int64 v49; // [rsp+D8h] [rbp-E0h]
  unsigned __int128 v50; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-C8h]
  __int64 v52; // [rsp+F8h] [rbp-C0h]
  __int64 v53; // [rsp+100h] [rbp-B8h]
  __int64 v54; // [rsp+108h] [rbp-B0h]
  _QWORD *v55; // [rsp+110h] [rbp-A8h]
  __int64 v56; // [rsp+118h] [rbp-A0h]
  _QWORD v57[10]; // [rsp+120h] [rbp-98h] BYREF
  __int64 v58; // [rsp+170h] [rbp-48h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  ptr = v40;
  if ( a3 > 0x40 )
  {
    sub_2236E10(&ptr, v40, a3, 1);
    v9 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !a3 )
    {
      v7 = 0;
      v8 = 47;
      si128.m128i_i64[0] = 0;
      if ( !a4 )
      {
        v8 = 62;
        if ( !**(_BYTE **)a1 )
          v8 = 34;
      }
      goto LABEL_12;
    }
    v9 = v40;
  }
  memcpy(v9, a2, a3);
  v7 = a3 + si128.m128i_i64[0];
  v8 = 47;
  si128.m128i_i64[0] = v7;
  if ( !a4 )
  {
    v8 = 34;
    if ( **(_BYTE **)a1 )
      v8 = 62;
  }
  if ( si128.m128i_i64[1] < v7 + 1 )
  {
    sub_2236E10(&ptr, v40, v7 + 1, 1);
    v7 = si128.m128i_i64[0];
  }
LABEL_12:
  *((_BYTE *)ptr + v7) = v8;
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v50 = ptr;
  *((_QWORD *)&v50 + 1) = ++si128.m128i_i64[0];
  if ( (unsigned __int8)sub_10E92B0((__int64 *)v10, &v50, &v37) )
    goto LABEL_13;
  v13 = *(unsigned int *)(v10 + 16);
  v14 = v37;
  v15 = *(_DWORD *)(v10 + 8) + 1;
  v16 = (unsigned int)(3 * v13);
  v41[0] = v37;
  if ( 4 * v15 >= (unsigned int)v16 )
  {
    sub_10FCC90(v10, 2 * v13, v13, v16, v11, v12);
LABEL_30:
    sub_10E92B0((__int64 *)v10, &v50, v41);
    v14 = (char **)v41[0];
    v15 = *(_DWORD *)(v10 + 8) + 1;
    goto LABEL_18;
  }
  v17 = (unsigned int)(v13 - *(_DWORD *)(v10 + 12) - v15);
  if ( (unsigned int)v17 <= (unsigned int)v13 >> 3 )
  {
    sub_10FCC90(v10, v13, v13, v17, v11, v12);
    goto LABEL_30;
  }
LABEL_18:
  v18 = *v14 + 1 == nullptr;
  *(_DWORD *)(v10 + 8) = v15;
  if ( !v18 )
    --*(_DWORD *)(v10 + 12);
  v19 = *(_QWORD *)(a1 + 16);
  *(__m128i *)v14 = _mm_load_si128((const __m128i *)&v50);
  v20 = *(char ***)(v19 + 184);
  LOWORD(v53) = 261;
  v50 = __PAIR128__(si128.m128i_u64[0], (unsigned __int64)ptr);
  v21 = sub_15A4EB0(v20, (const void ***)&v50, v13, v17, v11, v12);
  v22 = 0;
  if ( v21 )
    v22 = j__strlen(v21);
  v14[1] = (char *)v22;
  v23 = *(_QWORD *)(a1 + 24);
  *v14 = v21;
  v24 = *(__int64 **)(v23 + 8);
  v25 = *v24;
  v26 = *(__int64 (**)(void))(*v24 + 48);
  if ( (char *)v26 == (char *)sub_15A1860 )
  {
    v27 = (__int64)(v24 + 3);
  }
  else
  {
    v27 = v26();
    v25 = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL);
  }
  v28 = *(__int64 (**)(void))(v25 + 40);
  if ( (char *)v28 != (char *)sub_15A1850 )
    *(_QWORD *)&v36[0] = v28();
  *(_QWORD *)&v36[0] = v27;
  v55 = v57;
  v56 = 0x400000000LL;
  v29 = _mm_loadh_ps(v36);
  v57[8] = &v58;
  v50 = (unsigned __int128)v29;
  v57[9] = 0x200000000LL;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  sub_15A2F70((__int64)&v50, (__int64)v21);
  v30 = *(_QWORD *)(a1 + 16);
  v35 = sub_15A5CA0((__int64)&v50, (__int64)v21, v31, v32, v33, v34);
  v41[0] = 0;
  v41[1] = v35;
  v42 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v44 = 0;
  v43 = 0;
  v46 = v46 & 0x80 | 0x40;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  sub_1706C30(v30, (__int64)v41);
  sub_1705410((__int64)&v44);
  sub_1704B40(&v50);
LABEL_13:
  if ( ptr != v40 )
    free(ptr);
}
