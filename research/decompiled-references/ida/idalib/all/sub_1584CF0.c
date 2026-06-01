void __fastcall sub_1584CF0(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        double a7,
        _BYTE *a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  char *v19; // r13
  char *v20; // rsi
  char *v21; // rdi
  __int64 *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rdi
  __int64 (*v27)(void); // rax
  unsigned __int64 v28; // rax
  int v29; // eax
  signed __int64 v31; // [rsp+8h] [rbp-120h]
  int v32; // [rsp+8h] [rbp-120h]
  int v33; // [rsp+10h] [rbp-118h]
  _BYTE *v36; // [rsp+20h] [rbp-108h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-100h]
  int v38; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-E0h] BYREF
  unsigned __int64 v40; // [rsp+50h] [rbp-D8h]
  int v41; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE *v42; // [rsp+68h] [rbp-C0h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp-B8h]
  int v44; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-A0h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp-98h]
  __int64 v47; // [rsp+A0h] [rbp-88h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-80h] BYREF
  int v49; // [rsp+B8h] [rbp-70h]
  void *ptr[2]; // [rsp+C0h] [rbp-68h] BYREF
  int v51; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-50h] BYREF

  v12 = 0;
  if ( a11 )
  {
    if ( a5 <= 0xA )
      v12 = dword_261B900[a5];
    sub_168B9B0(ptr, *(_QWORD *)(a1 + 16) + 8LL, v12);
    sub_AEC220((unsigned __int8 **)ptr, a2, a3);
    sub_157E260((unsigned __int8 **)ptr, a4);
    sub_AEC220((unsigned __int8 **)ptr, a8, a9);
    sub_157E4A0((unsigned __int8 **)ptr, a6);
    v38 = a10;
    sub_1582CA0((__int64)&v39, (_BYTE **)ptr);
    if ( ptr[0] && ptr[1] )
      sub_1580C40((unsigned __int64)ptr[1], (unsigned __int64)ptr[0]);
    sub_168B9B0(ptr, *(_QWORD *)(a1 + 16) + 8LL, 5996);
    sub_AEC220((unsigned __int8 **)ptr, *(_BYTE **)a11, *(_QWORD *)(a11 + 8));
    v41 = a10;
    sub_1582CA0((__int64)&v42, (_BYTE **)ptr);
    if ( ptr[0] && ptr[1] )
      sub_1580C40((unsigned __int64)ptr[1], (unsigned __int64)ptr[0]);
    if ( *(_BYTE *)(a1 + 64) && a5 == 1 )
    {
      sub_168B9B0(ptr, *(_QWORD *)(a1 + 16) + 8LL, 6016);
      sub_AE9DF0((unsigned __int8 **)ptr, *(_QWORD *)(a4 + 40), 9u);
      v44 = *(_DWORD *)(a4 + 24);
      sub_1582CA0((__int64)&v45, (_BYTE **)ptr);
      if ( ptr[0] && ptr[1] )
        sub_1580C40((unsigned __int64)ptr[1], (unsigned __int64)ptr[0]);
      ptr[1] = (void *)0x100000000LL;
      ptr[0] = &v51;
      v51 = v41;
      sub_1582CA0((__int64)&v52, &v42);
      v17 = (unsigned int)(LODWORD(ptr[1]) + 1);
      v18 = v17 + 1;
      ++LODWORD(ptr[1]);
      if ( v17 + 1 > (unsigned __int64)HIDWORD(ptr[1]) )
      {
        if ( ptr[0] > &v44 || &v44 >= (int *)((char *)ptr[0] + 32 * v17) )
        {
          v19 = (char *)sub_2237400(ptr, &v51, v18, 32, &v47);
          sub_15825A0((__int64)ptr, (__int64)v19);
          if ( ptr[0] == &v51 )
          {
            ptr[0] = v19;
            v17 = LODWORD(ptr[1]);
            HIDWORD(ptr[1]) = v47;
            v20 = (char *)&v44;
          }
          else
          {
            v32 = v47;
            free(ptr[0]);
            v20 = (char *)&v44;
            ptr[0] = v19;
            v17 = LODWORD(ptr[1]);
            HIDWORD(ptr[1]) = v32;
          }
        }
        else
        {
          v31 = (char *)&v44 - (char *)ptr[0];
          v19 = (char *)sub_2237400(ptr, &v51, v18, 32, &v47);
          sub_15825A0((__int64)ptr, (__int64)v19);
          if ( ptr[0] == &v51 )
          {
            ptr[0] = v19;
            HIDWORD(ptr[1]) = v47;
          }
          else
          {
            v33 = v47;
            free(ptr[0]);
            ptr[0] = v19;
            HIDWORD(ptr[1]) = v33;
          }
          v17 = LODWORD(ptr[1]);
          v20 = &v19[v31];
        }
      }
      else
      {
        v19 = (char *)ptr[0];
        v20 = (char *)&v44;
      }
      v21 = &v19[32 * v17];
      *(_DWORD *)v21 = *(_DWORD *)v20;
      sub_1582CA0((__int64)(v21 + 8), (_BYTE **)v20 + 1);
      ++LODWORD(ptr[1]);
      if ( *(_BYTE *)(a1 + 64) && *(_QWORD *)(a1 + 56) )
      {
        sub_168B9B0(&v36, *(_QWORD *)(a1 + 16) + 8LL, 6416);
        v22 = *(__int64 **)(a1 + 56);
        sub_157E260(&v36, (__int64)v22);
        v26 = *(_QWORD **)(a1 + 56);
        v27 = *(__int64 (**)(void))(*v26 + 64LL);
        if ( (char *)v27 == (char *)sub_6EF210 )
        {
          v22 = &v47;
          v28 = sub_B7F750(v26, &v47, (__int64)sub_6EF210, v23, v24, v25);
        }
        else
        {
          v28 = v27();
        }
        LODWORD(v47) = sub_EEB7E0(v28, (__int64)v22, a7);
        sub_1582CA0((__int64)&si128, &v36);
        if ( v36 && v37 )
          sub_1580C40(v37, (unsigned __int64)v36);
        sub_1582650((__int64)ptr, (unsigned __int64)&v47);
        if ( si128.m128i_i64[0] && si128.m128i_i64[1] )
          sub_1580C40(si128.m128i_u64[1], si128.m128i_u64[0]);
      }
      sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v38, (__int64)ptr);
      sub_CB7910((__int64)ptr);
      if ( v45 && v46 )
        sub_1580C40(v46, v45);
    }
    else
    {
      sub_1584910((__int64)ptr, a1, (__int64)&v41, a7);
      sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v38, (__int64)ptr);
      sub_CB7910((__int64)ptr);
    }
    if ( v42 && v43 )
      sub_1580C40(v43, (unsigned __int64)v42);
    v15 = v39;
    if ( v39 )
    {
      v16 = v40;
      if ( v40 )
LABEL_18:
        sub_1580C40(v16, v15);
    }
  }
  else
  {
    if ( a5 <= 0xA )
      v12 = dword_261B8C0[a5];
    sub_168B9B0(ptr, *(_QWORD *)(a1 + 16) + 8LL, v12);
    sub_AEC220((unsigned __int8 **)ptr, a2, a3);
    sub_157E260((unsigned __int8 **)ptr, a4);
    sub_AEC220((unsigned __int8 **)ptr, a8, a9);
    sub_157E4A0((unsigned __int8 **)ptr, a6);
    v44 = a10;
    sub_1582CA0((__int64)&v45, (_BYTE **)ptr);
    if ( ptr[0] && ptr[1] )
      sub_1580C40((unsigned __int64)ptr[1], (unsigned __int64)ptr[0]);
    if ( *(_BYTE *)(a1 + 64) && a5 == 1 )
    {
      sub_168B9B0(ptr, *(_QWORD *)(a1 + 16) + 8LL, 6016);
      v29 = *(_DWORD *)(a4 + 24);
      si128 = _mm_load_si128((const __m128i *)ptr);
      LODWORD(v47) = v29;
      v49 = v51;
      sub_1584910((__int64)ptr, a1, (__int64)&v47, *(double *)si128.m128i_i64);
      sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v44, (__int64)ptr);
      sub_CB7910((__int64)ptr);
      if ( si128.m128i_i64[0] && si128.m128i_i64[1] )
        sub_1580C40(si128.m128i_u64[1], si128.m128i_u64[0]);
    }
    else
    {
      sub_1583E80(ptr, a1, a7);
      sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v44, (__int64)ptr);
      sub_CB7910((__int64)ptr);
    }
    v15 = v45;
    if ( v45 )
    {
      v16 = v46;
      if ( v46 )
        goto LABEL_18;
    }
  }
}
