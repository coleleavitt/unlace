void __fastcall sub_1736A10(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  size_t v5; // rbx
  void *v6; // r14
  __int64 v7; // r9
  __int64 *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rcx
  char *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __m128 v39; // [rsp+0h] [rbp-408h] BYREF
  void **p_src; // [rsp+10h] [rbp-3F8h]
  char v41; // [rsp+1Ch] [rbp-3ECh]
  _QWORD v42[2]; // [rsp+20h] [rbp-3E8h] BYREF
  unsigned int v43; // [rsp+30h] [rbp-3D8h]
  _QWORD v44[4]; // [rsp+40h] [rbp-3C8h] BYREF
  void *src; // [rsp+60h] [rbp-3A8h] BYREF
  size_t n; // [rsp+68h] [rbp-3A0h]
  void *ptr; // [rsp+80h] [rbp-388h] BYREF
  __m128i si128; // [rsp+88h] [rbp-380h]
  _BYTE v49[136]; // [rsp+98h] [rbp-370h] BYREF
  __m128i v50; // [rsp+120h] [rbp-2E8h] BYREF
  __int64 *v51; // [rsp+130h] [rbp-2D8h]
  __int64 *v52; // [rsp+138h] [rbp-2D0h]
  __int64 v53; // [rsp+140h] [rbp-2C8h]
  char v54; // [rsp+178h] [rbp-290h]
  __int64 *v55; // [rsp+180h] [rbp-288h]
  __int64 v56; // [rsp+188h] [rbp-280h]
  int v57; // [rsp+190h] [rbp-278h]
  char v58; // [rsp+194h] [rbp-274h]
  __int64 v59; // [rsp+198h] [rbp-270h] BYREF
  __int64 v60; // [rsp+1E0h] [rbp-228h] BYREF
  __int64 v61; // [rsp+1E8h] [rbp-220h]
  int v62[62]; // [rsp+310h] [rbp-F8h] BYREF

  v41 = a4;
  p_src = &src;
  sub_228A9A0(&src, a2, a3, 0);
  v5 = n;
  v6 = src;
  ptr = v49;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( n > 0x80 )
  {
    sub_2236E10(&ptr, v49, n, 1);
    v28 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !n )
      goto LABEL_3;
    v28 = v49;
  }
  memcpy(v28, v6, v5);
  v5 += si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v5;
  sub_228EF50(&ptr, 0);
  v8 = (__int64 *)a1[1];
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 272) + 16LL) + 8LL);
  v50.m128i_i32[0] = 34;
  v50.m128i_i8[4] = 0;
  v50.m128i_i64[1] = 0;
  v51 = nullptr;
  v52 = nullptr;
  v53 = 0;
  v55 = &v59;
  v10 = *v8;
  v54 = 0;
  v11 = *(__int64 (**)(void))(v10 + 48);
  v58 = 1;
  v56 = 8;
  v57 = 0;
  if ( (char *)v11 == (char *)sub_15A1860 )
  {
    v12 = (__int64)(v8 + 3);
  }
  else
  {
    v38 = v11();
    v8 = (__int64 *)a1[1];
    v12 = v38;
    v10 = *v8;
  }
  v13 = *(__int64 (**)(void))(v10 + 40);
  if ( (char *)v13 == (char *)sub_15A1850 )
  {
    v14 = v8[6];
  }
  else
  {
    v39.m128_u64[0] = v12;
    v37 = v13();
    v12 = v39.m128_u64[0];
    v14 = v37;
  }
  v15 = *a1;
  v39.m128_u64[0] = (unsigned __int64)v42;
  v39 = _mm_loadh_ps((const double *)v39.m128_u64);
  sub_16FF270((__int64)&v60, v15, v14, v12, (unsigned int *)&v50, v7, 0);
  sub_17038E0((__int64)&v50);
  v16 = _mm_load_si128((const __m128i *)&v39);
  v17 = *a1;
  v51 = &v60;
  v52 = a1;
  v50 = v16;
  v18 = *(_QWORD **)(v17 + 240);
  v42[0] = 0;
  v42[1] = 0;
  v19 = v18[13];
  v43 = 0;
  v44[0] = &ptr;
  v44[1] = v9;
  v44[2] = &v50;
  if ( v41 )
  {
    v20 = *(unsigned int *)(v19 + 112);
    v21 = *(_QWORD *)(v19 + 48);
  }
  else
  {
    v29 = sub_1436660(v18);
    v34 = sub_1465F30(v29, v15, v30, v31, v32, v33);
    if ( v34 )
      sub_17361E0((__int64)v44, (_BYTE *)(*(_QWORD *)(v34 + 16) + 32LL), **(_QWORD **)(v34 + 16), 0, 0);
    v20 = *(unsigned int *)(v19 + 112);
    v21 = *(_QWORD *)(v19 + 48);
    if ( *(_DWORD *)(v19 + 112) )
    {
      v35 = 0;
      v39.m128_u64[0] = (unsigned __int64)v44;
      do
      {
        v36 = v21 + 16 * v35;
        if ( ((*(_BYTE *)(v36 + 8) >> 3) & 3) != 0 )
        {
          if ( ((*(_BYTE *)(v36 + 8) >> 3) & 3) == 1 )
          {
            sub_17361E0(v39.m128_i64[0], (_BYTE *)(*(_QWORD *)v36 + 32LL), **(_QWORD **)v36, 0, 1);
            v21 = *(_QWORD *)(v19 + 48);
          }
        }
        else
        {
          sub_17361E0(v39.m128_i64[0], (_BYTE *)(*(_QWORD *)v36 + 32LL), **(_QWORD **)v36, 0, 0);
          v21 = *(_QWORD *)(v19 + 48);
        }
        ++v35;
      }
      while ( v20 != v35 );
      v20 = *(unsigned int *)(v19 + 112);
    }
  }
  v22 = *(unsigned int *)(v19 + 116);
  if ( v22 != v20 )
  {
    v39.m128_u64[0] = (unsigned __int64)v44;
    do
    {
      v23 = v21 + 16 * v20;
      if ( ((*(_BYTE *)(v23 + 8) >> 3) & 3) != 0 )
      {
        if ( ((*(_BYTE *)(v23 + 8) >> 3) & 3) == 1 )
        {
          sub_17361E0(v39.m128_i64[0], (_BYTE *)(*(_QWORD *)v23 + 32LL), **(_QWORD **)v23, 0, 1);
          v21 = *(_QWORD *)(v19 + 48);
        }
      }
      else
      {
        sub_17361E0(v39.m128_i64[0], (_BYTE *)(*(_QWORD *)v23 + 32LL), **(_QWORD **)v23, 0, 0);
        v21 = *(_QWORD *)(v19 + 48);
      }
      ++v20;
    }
    while ( v22 != v20 );
    v20 = *(unsigned int *)(v19 + 116);
  }
  v24 = (*(_QWORD *)(v19 + 56) - v21) >> 4;
  if ( v24 != v20 )
  {
    v39.m128_u64[0] = (unsigned __int64)v44;
    while ( 1 )
    {
      v25 = 16 * v20 + v21;
      if ( ((*(_BYTE *)(v25 + 8) >> 3) & 3) != 0 )
      {
        if ( ((*(_BYTE *)(v25 + 8) >> 3) & 3) == 1 )
          sub_17361E0(v39.m128_i64[0], (_BYTE *)(*(_QWORD *)v25 + 32LL), **(_QWORD **)v25, 1, 1);
      }
      else
      {
        sub_17361E0(v39.m128_i64[0], (_BYTE *)(*(_QWORD *)v25 + 32LL), **(_QWORD **)v25, 1, 0);
      }
      if ( ++v20 == v24 )
        break;
      v21 = *(_QWORD *)(v19 + 48);
    }
  }
  v26 = a1[1];
  v27 = 0;
  if ( v60 != v61 )
    v27 = v60;
  if ( v26 )
    sub_1700D50(*a1, v26, v62, v27, -1431655765 * ((v61 - v60) >> 5));
  operator delete(v42[0], 16LL * v43, 8);
  sub_1700A70((__int64)&v60);
  if ( ptr != v49 )
    free(ptr);
  if ( src != p_src + 2 )
    operator delete(src);
}
