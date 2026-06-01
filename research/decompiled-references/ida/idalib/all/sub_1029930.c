__int64 __fastcall sub_1029930(__int64 a1, __int64 a2, unsigned __int64 a3, void **p_ptr)
{
  __int64 v4; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  void *v11; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  char *v16; // rbp
  char *v17; // r12
  size_t v18; // r14
  char v19; // dl
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // r9
  void *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // r12
  char *v28; // rax
  _QWORD *v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // r10d
  __int64 *v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // eax
  bool v35; // [rsp+Bh] [rbp-BDh]
  unsigned int v36; // [rsp+Ch] [rbp-BCh]
  __int64 *v37; // [rsp+10h] [rbp-B8h]
  __int64 v38; // [rsp+10h] [rbp-B8h]
  __int64 v39; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+28h] [rbp-A0h]
  __int64 *v41; // [rsp+38h] [rbp-90h]
  __int64 v42; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-80h]
  __int64 *v44; // [rsp+58h] [rbp-70h] BYREF
  void *src; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-60h]
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  __m128i v48; // [rsp+78h] [rbp-50h]

  v4 = a1;
  v42 = a2;
  v43 = a3;
  if ( !a3 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 1;
    return v4;
  }
  LOBYTE(ptr) = 58;
  v7 = sub_2246AB0(&v42, &ptr, 1, 0);
  if ( v7 == -1 )
  {
    v39 = v42;
    v40 = v43;
    if ( v43 )
      goto LABEL_45;
LABEL_36:
    *(_BYTE *)(a1 + 16) = 0;
    return v4;
  }
  v8 = v43;
  v9 = v7 + 1;
  if ( v7 + 1 > v43 )
  {
    if ( v7 <= v43 )
      v8 = v7;
    v39 = v42;
    v40 = v8;
    if ( v8 )
      goto LABEL_45;
    goto LABEL_36;
  }
  v10 = v43 - v9;
  v11 = (void *)(v42 + v9);
  v39 = v42;
  if ( v7 <= v43 )
    v8 = v7;
  v40 = v8;
  if ( !v8 )
    goto LABEL_36;
  src = v11;
  v46 = v10;
  if ( !v10 )
  {
LABEL_45:
    *(_BYTE *)(a1 + 16) = 1;
    *(_QWORD *)a1 = v39;
    *(_QWORD *)(a1 + 8) = v40;
    return v4;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  ptr = nullptr;
  if ( !p_ptr )
    p_ptr = &ptr;
  v48 = si128;
  while ( 1 )
  {
    LOBYTE(v44) = 58;
    v13 = sub_2246AB0(&src, &v44, 1, 0);
    if ( v13 == -1 )
    {
      v16 = (char *)src;
      v13 = v46;
      v15 = 0;
      v17 = nullptr;
    }
    else
    {
      v14 = v13 + 1;
      if ( v13 + 1 > v46 )
      {
        v14 = v46;
        v15 = 0;
      }
      else
      {
        v15 = v46 - v14;
      }
      v16 = (char *)src;
      v17 = (char *)src + v14;
      if ( v13 > v46 )
        v13 = v46;
    }
    v18 = v13 - 1;
    v19 = v16[v13 - 1];
    if ( !v13 )
      v18 = 0;
    if ( ((v19 - 43) & 0xFD) != 0 )
      break;
    v35 = v19 == 43;
    v20 = sub_2244B30(v16, v18);
    v21 = sub_2244CB0(p_ptr, v16, v18, v20);
    v24 = (__int64 *)((char *)*p_ptr + 8 * v21);
    if ( *v24 )
    {
      if ( *v24 != -8 )
      {
        v4 = a1;
        sub_10298F0(&v44, v24, 0);
        *(_BYTE *)(a1 + 16) = 0;
        goto LABEL_24;
      }
      --*((_DWORD *)p_ptr + 4);
    }
    v37 = v24;
    v36 = v21;
    v30 = sub_22300B0(v18 + 17, 8, v21, v22, v23, v24);
    v31 = v36;
    v32 = v37;
    v33 = v30;
    if ( v18 )
    {
      v41 = v37;
      v38 = v30;
      memcpy((void *)(v30 + 16), v16, v18);
      v32 = v41;
      v33 = v38;
      v31 = v36;
    }
    *(_BYTE *)(v33 + v18 + 16) = 0;
    *(_QWORD *)v33 = v18;
    *(_BYTE *)(v33 + 8) = v35;
    *v32 = v33;
    ++*((_DWORD *)p_ptr + 3);
    v34 = sub_22450D0(p_ptr, v31);
    sub_10298F0(&v44, (__int64 *)*p_ptr + v34, 0);
    src = v17;
    v46 = v15;
    if ( !v15 )
    {
      v4 = a1;
      *(_QWORD *)a1 = v39;
      *(_BYTE *)(a1 + 16) = 1;
      *(_QWORD *)(a1 + 8) = v40;
      goto LABEL_24;
    }
  }
  v4 = a1;
  *(_BYTE *)(a1 + 16) = 0;
LABEL_24:
  v25 = ptr;
  if ( v48.m128i_i32[1] && v48.m128i_i32[0] )
  {
    v26 = 0;
    v27 = 8LL * (unsigned int)(v48.m128i_i32[0] - 1) + 8;
    v28 = (char *)ptr;
    do
    {
      v29 = *(_QWORD **)&v28[v26];
      if ( v29 != (_QWORD *)-8LL && v29 )
      {
        operator delete(v29, *v29 + 17LL, 8);
        v28 = (char *)ptr;
      }
      v26 += 8;
    }
    while ( v26 != v27 );
    v25 = v28;
  }
  free(v25);
  return v4;
}
