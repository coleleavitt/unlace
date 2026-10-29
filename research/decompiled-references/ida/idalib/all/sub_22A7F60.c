__int64 __fastcall sub_22A7F60(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 *v9; // r12
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // r13d
  __int64 *v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm1
  bool v18; // zf
  void *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r12
  char *v22; // rax
  _QWORD *v23; // rdi
  unsigned int v24; // eax
  unsigned int v25; // r13d
  __int64 *v26; // r12
  __int64 *v27; // rax
  __int64 v28; // r9
  __int64 v29; // rbp
  __int64 v30; // r12
  char *v31; // r15
  char *v32; // rax
  size_t v33; // r13
  __int64 v34; // rax
  __int64 v35; // r8
  char v36; // al
  int v37; // eax
  __int64 v38; // rbx
  __int64 *v39; // r14
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  __m128i v43; // xmm0
  unsigned int v44; // eax
  __int64 v45; // [rsp+8h] [rbp-C0h]
  __int64 v47; // [rsp+20h] [rbp-A8h]
  __int64 v48; // [rsp+28h] [rbp-A0h]
  __int64 v49; // [rsp+38h] [rbp-90h]
  __int64 *v50; // [rsp+48h] [rbp-80h] BYREF
  __int64 v51; // [rsp+50h] [rbp-78h] BYREF
  __m128i si128; // [rsp+58h] [rbp-70h] BYREF
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v54; // [rsp+78h] [rbp-50h]
  __int64 v55; // [rsp+7Ch] [rbp-4Ch]
  char v56; // [rsp+88h] [rbp-40h]

  v7 = a1;
  sub_22B10D0(&ptr, a3, a4, &off_2BF0960, 39, a6, &off_2BF1200, 84);
  if ( !v56 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return v7;
  }
  v51 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  if ( !(_DWORD)v55
    || (sub_2244BF0((__int64)&v51, v54),
        v28 = v51,
        v47 = v51,
        *(__int64 *)((char *)si128.m128i_i64 + 4) = v55,
        !si128.m128i_i32[0]) )
  {
    if ( a4 == 4 )
      goto LABEL_24;
    goto LABEL_6;
  }
  v49 = a4;
  v29 = 0;
  v30 = 8LL * si128.m128i_u32[0] + 8;
  v45 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1);
  v31 = (char *)ptr;
  v32 = (char *)ptr;
  while ( 1 )
  {
    v38 = *(_QWORD *)&v32[v29];
    v39 = (__int64 *)(v28 + v29);
    if ( v38 )
    {
      if ( v38 != -8 )
        break;
    }
    *v39 = v38;
    v30 += 4;
    if ( v29 == v45 )
      goto LABEL_37;
LABEL_34:
    v32 = (char *)ptr;
    v28 = v51;
    v29 += 8;
  }
  v33 = *(_QWORD *)v38;
  v34 = sub_22300B0(*(_QWORD *)v38 + 17LL, 8);
  v35 = v34;
  if ( v33 )
  {
    v48 = v34;
    memcpy((void *)(v34 + 16), (const void *)(v38 + 16), v33);
    v35 = v48;
  }
  *(_BYTE *)(v35 + v33 + 16) = 0;
  v36 = *(_BYTE *)(v38 + 8);
  *(_QWORD *)v35 = v33;
  *(_BYTE *)(v35 + 8) = v36;
  v37 = *(_DWORD *)&v31[v30];
  *v39 = v35;
  *(_DWORD *)(v47 + v30) = v37;
  v30 += 4;
  if ( v29 != v45 )
    goto LABEL_34;
LABEL_37:
  v7 = a1;
  if ( v49 == 4 )
  {
LABEL_24:
    if ( *a3 == 942945592 )
    {
      v24 = sub_2244B30((__int64)"spe", 3);
      v25 = sub_2244CB0((__int64)&v51, "spe", 3u, v24);
      v26 = (__int64 *)(v51 + 8LL * v25);
      if ( *v26 )
      {
        if ( *v26 != -8 )
        {
          sub_10298F0(&v50, v26, 0);
          v27 = v50;
          goto LABEL_42;
        }
        --si128.m128i_i32[2];
      }
      v40 = sub_22300B0(20, 8);
      *(_WORD *)(v40 + 16) = 28787;
      *(_BYTE *)(v40 + 18) = 101;
      *(_BYTE *)(v40 + 19) = 0;
      *(_QWORD *)v40 = 3;
      *(_BYTE *)(v40 + 8) = 0;
      *v26 = v40;
      ++si128.m128i_i32[1];
      v41 = sub_22450D0((__int64)&v51, v25);
      sub_10298F0(&v50, (__int64 *)(v51 + 8LL * v41), 0);
      v27 = v50;
LABEL_42:
      *(_BYTE *)(*v27 + 8) = 1;
    }
  }
LABEL_6:
  sub_10298F0(&v50, (__int64 *)(v51 + 8LL * si128.m128i_u32[0]), 1);
  v9 = v50;
  v10 = sub_2244B30((__int64)"quadword-atomics", 16);
  v11 = sub_2244E60(&v51, "quadword-atomics", 0x10u, v10);
  if ( v11 == -1 )
    sub_10298F0(&v50, (__int64 *)(v51 + 8LL * si128.m128i_u32[0]), 1);
  else
    sub_10298F0(&v50, (__int64 *)(v51 + 8LL * v11), 1);
  if ( v9 != v50 && !(unsigned __int8)sub_22B7EA0(a2) )
  {
    v12 = sub_2244B30((__int64)"quadword-atomics", 16);
    v13 = sub_2244CB0((__int64)&v51, "quadword-atomics", 0x10u, v12);
    v14 = (__int64 *)(v51 + 8LL * v13);
    if ( *v14 )
    {
      if ( *v14 != -8 )
      {
        sub_10298F0(&v50, v14, 0);
        v15 = v50;
        goto LABEL_13;
      }
      --si128.m128i_i32[2];
    }
    v42 = sub_22300B0(33, 8);
    v43 = _mm_load_si128((const __m128i *)&xmmword_23ABE20);
    *(_BYTE *)(v42 + 32) = 0;
    *(__m128i *)(v42 + 16) = v43;
    *(_QWORD *)v42 = 16;
    *(_BYTE *)(v42 + 8) = 0;
    *v14 = v42;
    ++si128.m128i_i32[1];
    v44 = sub_22450D0((__int64)&v51, v13);
    sub_10298F0(&v50, (__int64 *)(v51 + 8LL * v44), 0);
    v15 = v50;
LABEL_13:
    *(_BYTE *)(*v15 + 8) = 0;
  }
  v16 = v51;
  v17 = _mm_loadu_si128(&si128);
  *(_BYTE *)(v7 + 24) = 1;
  v18 = v56 == 0;
  *(_QWORD *)v7 = v16;
  *(__m128i *)(v7 + 8) = v17;
  if ( !v18 )
  {
    v19 = ptr;
    if ( (_DWORD)v55 && v54 )
    {
      v20 = 0;
      v21 = 8LL * (v54 - 1) + 8;
      v22 = (char *)ptr;
      do
      {
        v23 = *(_QWORD **)&v22[v20];
        if ( v23 && v23 != (_QWORD *)-8LL )
        {
          operator delete(v23, *v23 + 17LL, 8);
          v22 = (char *)ptr;
        }
        v20 += 8;
      }
      while ( v20 != v21 );
      v19 = v22;
    }
    free(v19);
  }
  return v7;
}
