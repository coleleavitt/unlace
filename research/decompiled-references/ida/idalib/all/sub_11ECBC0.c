_QWORD *__fastcall sub_11ECBC0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r14
  int v3; // eax
  size_t v4; // rax
  __m128i v5; // xmm0
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  size_t v9; // rax
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  _BYTE *v12; // rax
  __int64 v13; // rdx
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  __m128i v17; // [rsp+0h] [rbp-C8h] BYREF
  void *v18[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __m128i si128; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v22[24]; // [rsp+48h] [rbp-80h] BYREF
  void *v23; // [rsp+60h] [rbp-68h] BYREF
  __int64 v24; // [rsp+68h] [rbp-60h]
  __int64 v25; // [rsp+70h] [rbp-58h] BYREF

  (*(void (__fastcall **)(void **))(*(_QWORD *)a2 + 520LL))(&ptr);
  sub_22B9ED0(&v23, &ptr);
  if ( ptr != &si128.m128i_u64[1] )
    operator delete(ptr);
  v2 = a1 + 2;
  if ( !*(_BYTE *)(a2 + 3928) )
  {
    v6 = v23;
    v7 = v24;
    *a1 = v2;
    sub_11E4760(a1, v6, (__int64)&v6[v7]);
    goto LABEL_13;
  }
  ptr = v22;
  v3 = *(_DWORD *)(a2 + 3932);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  switch ( v3 )
  {
    case 3:
      v15 = j__strlen("watchos");
      sub_A1FE50(&ptr, "watchos", &aWatchos_0[v15]);
      goto LABEL_17;
    case 2:
      v9 = j__strlen("tvos");
      sub_A1FE50(&ptr, "tvos", &aAttributeAvail_5[v9 + 23]);
      goto LABEL_17;
    case 4:
      v16 = j__strlen("driverkit");
      sub_A1FE50(&ptr, "driverkit", &aDriverkit_0[v16]);
      goto LABEL_17;
  }
  if ( (unsigned int)(v3 - 1) > 1 )
  {
    if ( v3 != 5 )
      goto LABEL_9;
    v12 = (_BYTE *)sub_22B6740(31);
    sub_A1FE50(&ptr, v12, &v12[v13]);
LABEL_17:
    if ( *(_DWORD *)(a2 + 3932) != 1 )
      goto LABEL_18;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a2 + 3936) <= 2u )
  {
    v14 = j__strlen("ios");
    sub_A1FE50(&ptr, "ios", &aDebuggerIos[v14 + 9]);
    goto LABEL_17;
  }
LABEL_9:
  v4 = j__strlen("macosx");
  sub_A1FE50(&ptr, "macosx", &aMacosx[v4]);
  if ( *(_DWORD *)(a2 + 3932) != 1 )
  {
LABEL_18:
    v5 = _mm_loadu_si128((const __m128i *)(a2 + 3940));
    goto LABEL_19;
  }
LABEL_10:
  if ( *(_DWORD *)(a2 + 3936) != 2 )
    goto LABEL_18;
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 3956));
LABEL_19:
  v17 = v5;
  sub_2257830(v18, &v17);
  sub_A1FE50(&ptr, (_BYTE *)v18[0], (_BYTE *)v18[0] + (unsigned __int64)v18[1]);
  if ( v18[0] != &v19 )
    operator delete(v18[0]);
  sub_22BA720(&v23, ptr, si128.m128i_i64[0]);
  v10 = v23;
  v11 = v24;
  *a1 = v2;
  sub_11E4760(a1, v10, (__int64)&v10[v11]);
  if ( ptr != v22 )
    free(ptr);
LABEL_13:
  if ( v23 != &v25 )
    operator delete(v23);
  return a1;
}
