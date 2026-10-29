void __fastcall sub_828600(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // r13d
  void **p_ptr; // r8
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // r13d
  _BYTE *v13; // rsi
  char *v14; // rdx
  char *v15; // rdi
  char *v16; // rax
  char *v17; // rdi
  char *v18; // rdx
  char v19; // cl
  char v20; // si
  __int64 v21; // rdx
  char v22; // si
  _BYTE *v23; // rcx
  unsigned int v24; // eax
  char v25; // r12
  unsigned int v26; // r15d
  void *v27; // rdx
  void *v28; // [rsp+0h] [rbp-78h]
  void *v29; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-60h]
  char v31; // [rsp+1Ch] [rbp-5Ch]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+28h] [rbp-50h]
  _BYTE s[64]; // [rsp+38h] [rbp-40h] BYREF

  v8 = *(_DWORD *)(a2 + 8);
  v30 = v8;
  if ( v8 > 0x40 )
  {
    sub_2585B30(&v29);
    v8 = v30;
  }
  else
  {
    v29 = *(void **)a2;
  }
  p_ptr = &ptr;
  v10 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v31 = *(_BYTE *)(a2 + 12);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 13 && ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v24 = sub_6F6DE0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), v10);
    v25 = v31;
    v8 = v24;
    if ( v31 )
      sub_2587D60(&ptr, &v29);
    else
      sub_2587BE0(&ptr, &v29, v24);
    v26 = si128.m128i_i32[0];
    v27 = ptr;
    p_ptr = &ptr;
    if ( v30 > 0x40 && v29 )
    {
      v28 = ptr;
      operator delete[](v29);
      p_ptr = &ptr;
      v27 = v28;
    }
    v29 = v27;
    v30 = v26;
    v31 = v25;
  }
  v12 = v8 >> 3;
  ptr = s;
  v13 = s;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E9A0);
  if ( v12 )
  {
    v14 = &s[v12];
    v15 = s;
    if ( v12 > 8 )
    {
      sub_25D6230(&ptr, s, v12, 1);
      v13 = ptr;
      if ( v12 == si128.m128i_i64[0] )
        goto LABEL_8;
      v15 = (char *)ptr + si128.m128i_i64[0];
      v14 = (char *)ptr + v12;
    }
    memset(v15, 0, v14 - v15);
    v13 = ptr;
LABEL_8:
    si128.m128i_i64[0] = v12;
  }
  sub_2592CE0(&v29, v13, v12, a4, p_ptr);
  v16 = (char *)ptr;
  v17 = (char *)ptr + si128.m128i_i64[0];
  if ( *(_BYTE *)(a1 + 96) )
    goto LABEL_14;
  if ( ptr == v17 )
    goto LABEL_18;
  v18 = v17 - 1;
  if ( ptr < v17 - 1 )
  {
    do
    {
      v19 = *v16;
      v20 = *v18;
      ++v16;
      --v18;
      *(v16 - 1) = v20;
      v18[1] = v19;
    }
    while ( v16 < v18 );
    v16 = (char *)ptr;
    v17 = (char *)ptr + si128.m128i_i64[0];
LABEL_14:
    if ( v16 == v17 )
      goto LABEL_18;
  }
  v21 = 2 * a4;
  do
  {
    v22 = *v16++;
    v23 = (_BYTE *)(v21 + *(_QWORD *)(a1 + 8));
    v21 += 2;
    *v23 = v22;
    v23[1] = 1;
  }
  while ( v16 != v17 );
  v17 = (char *)ptr;
LABEL_18:
  if ( v17 != s )
    free(v17);
  if ( v30 > 0x40 )
  {
    if ( v29 )
      operator delete[](v29);
  }
}

