__int64 *__fastcall sub_21BBCA0(__int64 *a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  char *v9; // rax
  int v10; // ebp
  unsigned __int64 v11; // rdx
  void *v12; // rax
  int v13; // eax
  void *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int *v30; // r14
  unsigned int v31; // ebp
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 (__fastcall **v37)(_QWORD); // rax
  __int64 (__fastcall *v38)(__int64, void *, __int64); // r14
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  const char *v44; // rbp
  __int64 v45; // rax
  int v46; // eax
  __int64 (__fastcall **v47)(_QWORD); // rax
  __int64 (__fastcall *v48)(__int64, void *, __int64); // rax
  __int64 (__fastcall *v49)(__int64, void *, __int64); // rax
  int v50; // eax
  int v51; // r13d
  size_t v52; // r12
  int v53; // ebp
  int v54; // eax
  __int64 v55; // r12
  char *v56; // r15
  __int64 v57; // r13
  __int64 v58; // [rsp-8h] [rbp-260h]
  __m128 v59; // [rsp+0h] [rbp-258h] BYREF
  __int64 (__fastcall *v60)(__int64, void *, __int64); // [rsp+18h] [rbp-240h]
  int v61; // [rsp+24h] [rbp-234h]
  __int64 *v62; // [rsp+28h] [rbp-230h]
  __int64 v63; // [rsp+30h] [rbp-228h]
  char *v64; // [rsp+38h] [rbp-220h]
  __int64 v65; // [rsp+48h] [rbp-210h] BYREF
  char *v66; // [rsp+50h] [rbp-208h] BYREF
  unsigned __int64 v67; // [rsp+58h] [rbp-200h]
  _QWORD v68[2]; // [rsp+60h] [rbp-1F8h] BYREF
  __m128 v69; // [rsp+70h] [rbp-1E8h] BYREF
  __m128i v70; // [rsp+80h] [rbp-1D8h]
  __int64 v71; // [rsp+90h] [rbp-1C8h]
  __int64 v72; // [rsp+A0h] [rbp-1B8h]
  _QWORD v73[2]; // [rsp+D0h] [rbp-188h] BYREF
  char *v74; // [rsp+E0h] [rbp-178h]
  unsigned __int64 v75; // [rsp+E8h] [rbp-170h]
  __int16 v76; // [rsp+F0h] [rbp-168h]
  void *ptr; // [rsp+100h] [rbp-158h] BYREF
  __m128i si128; // [rsp+108h] [rbp-150h]
  _BYTE v79[320]; // [rsp+118h] [rbp-140h] BYREF

  v7 = (unsigned int)*a4;
  v8 = *(_QWORD *)(a3 + 176);
  v62 = a1;
  v9 = *(char **)(v8 + 8 * v7);
  v10 = v7;
  v11 = 0;
  v64 = v9;
  v66 = v9;
  if ( v9 )
    v11 = strlen(v9);
  v12 = *(void **)(a2 + 80);
  v67 = v11;
  ptr = v12;
  si128.m128i_i64[0] = *(unsigned int *)(a2 + 88);
  if ( (unsigned __int8)sub_21BABE0((__int64 *)&ptr, v66, v11) )
  {
    *a4 = v10 + 1;
    v13 = *(_DWORD *)(a2 + 64);
    if ( v13 )
      sub_21B97F0((__m128 *)&ptr, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v13 - 1), a2);
    else
      sub_21B97F0((__m128 *)&ptr, 0, 0);
    v14 = ptr;
    v15 = si128.m128i_i64[0];
    v16 = operator new(0x58u);
    sub_21B5910(v16, (__int64)v14, v15, (__int64)v66, v67, v10, (__int64)v64, 0);
LABEL_7:
    *v62 = v16;
    return v62;
  }
  v18 = *(_QWORD *)(a2 + 152);
  v19 = *(_QWORD *)(a2 + 144);
  v59.m128_u64[0] = *(_QWORD *)(a2 + 32) + 80LL * *(_QWORD *)(a2 + 40);
  v20 = sub_2246FB0(&v66, v19, v18, 0);
  v23 = v67;
  v24 = 0;
  if ( v20 < v67 )
  {
    v23 = v20;
    v24 = v67 - v20;
  }
  v25 = *(unsigned int *)(a2 + 72);
  v68[1] = v24;
  v68[0] = &v66[v23];
  v26 = *(_QWORD *)(a2 + 24);
  v70 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v27 = (_DWORD *)(*(_QWORD *)(a2 + 32) + 80 * v25);
  v71 = v26;
  v30 = sub_21BAA70(v27, v59.m128_i64[0], (__int64)v68, v24, v21, v22, (__int64 *)v70.m128i_i64[0], v70.m128i_i64[1]);
  v61 = *a4;
  if ( (unsigned int *)v59.m128_u64[0] == v30 )
    goto LABEL_32;
  v63 = 0;
  v60 = (__int64 (__fastcall *)(__int64, void *, __int64))v73;
  do
  {
    v31 = sub_21BADF0(
            *(void ***)(a2 + 8),
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 24),
            v30,
            v66,
            v67,
            *(_BYTE *)(a2 + 48));
    if ( v31 )
    {
      sub_21B97F0((__m128 *)&ptr, (__int64)v30, a2);
      sub_21BA060(
        v60,
        (const __m128i *)&ptr,
        (__int64 (__fastcall ***)(_QWORD))a3,
        *(_QWORD *)(*(_QWORD *)(a3 + 176) + 8LL * (unsigned int)*a4),
        v31,
        0,
        a4);
      if ( v73[0] )
      {
        *v62 = v73[0];
        return v62;
      }
      if ( v31 == 2 )
      {
        v32 = v63;
        if ( *((_BYTE *)ptr + 44) == 3 )
          v32 = (__int64)v30;
        v63 = v32;
      }
      if ( *a4 != v61 )
      {
        *v62 = 0;
        return v62;
      }
    }
    v30 += 20;
  }
  while ( (unsigned int *)v59.m128_u64[0] != v30 );
  if ( !v63 )
    goto LABEL_32;
  sub_21B97F0(&v69, v63, a2);
  if ( v66[2] == 61 )
  {
LABEL_47:
    v53 = (*a4)++;
    v54 = *(_DWORD *)(a2 + 68);
    if ( v54 )
      sub_21B97F0((__m128 *)&ptr, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v54 - 1), a2);
    else
      sub_21B97F0((__m128 *)&ptr, 0, 0);
    v55 = si128.m128i_i64[0];
    v56 = v66;
    v57 = v67;
    v59.m128_u64[0] = (unsigned __int64)ptr;
    v16 = operator new(0x58u);
    sub_21B5910(v16, v59.m128_i64[0], v55, (__int64)v56, v57, v53, (__int64)v64, 0);
    goto LABEL_7;
  }
  v33 = v67;
  if ( v67 >= 2 )
    v33 = 2;
  sub_21BA060(&v65, (const __m128i *)&v69, (__int64 (__fastcall ***)(_QWORD))a3, (__int64)v66, v33, 1, a4);
  v29 = v58;
  if ( !v65 )
  {
LABEL_32:
    if ( v66[1] != 45 )
    {
      v41 = v67;
      if ( v67 >= 2 )
        v41 = 2;
      v42 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a3 + 16LL))(
              a3,
              v66,
              v41,
              v28,
              v29);
      v43 = 0;
      v44 = (const char *)v42;
      v45 = v67;
      if ( v67 > 1 )
      {
        v43 = v67 - 2;
        v45 = 2;
      }
      LOBYTE(v72) = 45;
      v74 = &v66[v45];
      v46 = *a4;
      ptr = v79;
      v59.m128_i32[0] = v46;
      v47 = *(__int64 (__fastcall ***)(_QWORD))a3;
      v73[0] = v72;
      v48 = (__int64 (__fastcall *)(__int64, void *, __int64))v47[2];
      v75 = v43;
      v76 = 1288;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v60 = v48;
      sub_22538C0(v73, &ptr);
      v49 = (__int64 (__fastcall *)(__int64, void *, __int64))v60(a3, ptr, si128.m128i_i64[0]);
      if ( ptr != v79 )
      {
        v60 = v49;
        free(ptr);
        v49 = v60;
      }
      *(_QWORD *)(*(_QWORD *)(a3 + 176) + 8LL * v59.m128_u32[0]) = v49;
      v50 = *(_DWORD *)(a2 + 68);
      if ( v50 )
        sub_21B97F0((__m128 *)&ptr, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v50 - 1), a2);
      else
        sub_21B97F0((__m128 *)&ptr, 0, 0);
      v59.m128_u64[0] = si128.m128i_i64[0];
      v51 = *a4;
      v52 = 0;
      v59 = _mm_loadh_ps((const double *)v59.m128_u64);
      if ( v44 )
        v52 = strlen(v44);
      v16 = operator new(0x58u);
      sub_21B5910(v16, v59.m128_i64[0], v59.m128_i64[1], (__int64)v44, v52, v51, (__int64)v44, 0);
      goto LABEL_7;
    }
    goto LABEL_47;
  }
  v34 = v67;
  v35 = 0;
  if ( v67 > 1 )
  {
    v35 = v67 - 2;
    v34 = 2;
  }
  v36 = (unsigned int)*a4;
  LOBYTE(v72) = 45;
  v74 = &v66[v34];
  v37 = *(__int64 (__fastcall ***)(_QWORD))a3;
  v76 = 1288;
  v73[0] = v72;
  v75 = v35;
  ptr = v79;
  v38 = (__int64 (__fastcall *)(__int64, void *, __int64))v37[2];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  sub_22538C0(v73, &ptr);
  v39 = v38(a3, ptr, si128.m128i_i64[0]);
  if ( ptr != v79 )
    free(ptr);
  v40 = v65;
  *(_QWORD *)(*(_QWORD *)(a3 + 176) + 8 * v36) = v39;
  *v62 = v40;
  return v62;
}
