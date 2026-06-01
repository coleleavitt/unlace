__int64 __fastcall sub_225F840(__int64 a1, __m128i *a2)
{
  bool v3; // zf
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  unsigned int v6; // r13d
  void *v8; // rax
  unsigned int v9; // eax
  __m128i v10; // xmm0
  char **v11; // rdx
  __int64 v12; // rax
  void *v13; // rax
  int v14; // edx
  void *v15; // rdi
  void *v16; // rdi
  char **v17; // [rsp+8h] [rbp-4A0h]
  char **v18; // [rsp+8h] [rbp-4A0h]
  char **v19; // [rsp+8h] [rbp-4A0h]
  char v20; // [rsp+1Fh] [rbp-489h] BYREF
  void *v21; // [rsp+20h] [rbp-488h] BYREF
  __m128i si128; // [rsp+28h] [rbp-480h]
  _BYTE v23[136]; // [rsp+38h] [rbp-470h] BYREF
  void *v24; // [rsp+C0h] [rbp-3E8h] BYREF
  __m128i v25; // [rsp+C8h] [rbp-3E0h]
  _BYTE v26[136]; // [rsp+D8h] [rbp-3D0h] BYREF
  void *ptr; // [rsp+160h] [rbp-348h] BYREF
  __m128i v28; // [rsp+168h] [rbp-340h]
  _BYTE v29[136]; // [rsp+178h] [rbp-330h] BYREF
  __int64 *v30; // [rsp+200h] [rbp-2A8h] BYREF
  __m128i v31; // [rsp+208h] [rbp-2A0h]
  __int64 v32; // [rsp+218h] [rbp-290h] BYREF
  __int64 *v33; // [rsp+298h] [rbp-210h] BYREF
  __m128i v34; // [rsp+2A0h] [rbp-208h]
  __int64 v35; // [rsp+2B0h] [rbp-1F8h] BYREF
  void *v36[2]; // [rsp+330h] [rbp-178h] BYREF
  __m128i v37; // [rsp+340h] [rbp-168h] BYREF
  __int64 v38; // [rsp+350h] [rbp-158h]
  void *v39; // [rsp+3C8h] [rbp-E0h] BYREF
  __m128i v40; // [rsp+3D0h] [rbp-D8h]
  _BYTE v41[128]; // [rsp+3E0h] [rbp-C8h] BYREF
  char v42; // [rsp+460h] [rbp-48h]

  v3 = *(_BYTE *)(a1 + 328) == 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v21 = v23;
  v24 = v26;
  v25 = si128;
  ptr = v29;
  v28 = si128;
  if ( v3 || (*(_BYTE *)(a1 + 320) & 1) != 0 )
  {
    v4 = _mm_loadu_si128(a2);
    v5 = _mm_loadu_si128(a2 + 1);
    v38 = a2[2].m128i_i64[0];
    *(__m128i *)v36 = v4;
    v37 = v5;
  }
  else
  {
    sub_22538C0((const char **)a2, (__int64)&ptr);
    v8 = *(void **)(a1 + 168);
    LOWORD(v38) = 261;
    v36[0] = v8;
    v36[1] = *(void **)(a1 + 176);
    sub_228E8C0(v36, &ptr);
    LOWORD(v38) = 261;
    v36[0] = ptr;
    v36[1] = (void *)v28.m128i_i64[0];
  }
  sub_22538C0((const char **)v36, (__int64)&v21);
  LOWORD(v38) = 261;
  v36[0] = v21;
  v36[1] = (void *)si128.m128i_i64[0];
  v6 = sub_228B230(v36, &v20);
  if ( !v6 )
  {
    if ( v20 )
    {
      LOWORD(v38) = 261;
      v36[0] = v21;
      v36[1] = (void *)si128.m128i_i64[0];
      v9 = sub_228E700(v36, &v24, 0);
      v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v6 = v9;
      if ( !v9 )
      {
        v31 = v10;
        v30 = &v32;
        if ( si128.m128i_i64[0] )
        {
          sub_9C3DB0((void **)&v30, (const void **)&v21);
          v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        }
        v34 = v10;
        v33 = &v35;
        if ( v25.m128i_i64[0] )
        {
          sub_9C3DB0((void **)&v33, (const void **)&v24);
          v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        }
        v11 = (char **)(a1 + 16);
        v12 = v31.m128i_i64[0];
        if ( *(_BYTE *)(a1 + 328) )
        {
          v42 &= ~1u;
          v36[0] = &v37.m128i_u64[1];
          v36[1] = nullptr;
          v37.m128i_i64[0] = 128;
          if ( v31.m128i_i64[0] )
          {
            sub_9C3C90((char **)v36, (char **)&v30);
            v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
            v11 = (char **)(a1 + 16);
          }
          v40 = v10;
          v39 = v41;
          if ( v34.m128i_i64[0] )
          {
            v17 = v11;
            sub_9C3C90((char **)&v39, (char **)&v33);
            v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
            v11 = v17;
          }
          if ( (*(_BYTE *)(a1 + 320) & 1) == 0 )
          {
            v15 = *(void **)(a1 + 168);
            if ( v15 != (void *)(a1 + 192) )
            {
              v18 = v11;
              free(v15);
              v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
              v11 = v18;
            }
            v16 = *(void **)(a1 + 16);
            if ( v16 != (void *)(a1 + 40) )
            {
              v19 = v11;
              free(v16);
              v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
              v11 = v19;
            }
          }
          v13 = v36[1];
          if ( (v42 & 1) != 0 )
          {
            v14 = (int)v36[0];
            *(_BYTE *)(a1 + 320) |= 1u;
            *(_QWORD *)(a1 + 24) = v13;
            *(_DWORD *)(a1 + 16) = v14;
          }
          else
          {
            *(_BYTE *)(a1 + 320) &= ~1u;
            *(_QWORD *)(a1 + 16) = a1 + 40;
            *(_QWORD *)(a1 + 24) = 0;
            *(_QWORD *)(a1 + 32) = 128;
            if ( v13 )
            {
              sub_9C3C90(v11, (char **)v36);
              v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
            }
            *(__m128i *)(a1 + 176) = v10;
            v3 = v40.m128i_i64[0] == 0;
            *(_QWORD *)(a1 + 168) = a1 + 192;
            if ( !v3 )
              sub_9C3C90((char **)(a1 + 168), (char **)&v39);
            if ( (v42 & 1) == 0 )
            {
              if ( v39 != v41 )
                free(v39);
              if ( v36[0] != &v37.m128i_u64[1] )
                free(v36[0]);
            }
          }
        }
        else
        {
          *(_BYTE *)(a1 + 320) &= ~1u;
          *(_QWORD *)(a1 + 16) = a1 + 40;
          *(_QWORD *)(a1 + 24) = 0;
          *(_QWORD *)(a1 + 32) = 128;
          if ( v12 )
          {
            sub_9C3C90((char **)(a1 + 16), (char **)&v30);
            v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          }
          *(__m128i *)(a1 + 176) = v10;
          v3 = v34.m128i_i64[0] == 0;
          *(_QWORD *)(a1 + 168) = a1 + 192;
          if ( !v3 )
            sub_9C3C90((char **)(a1 + 168), (char **)&v33);
          *(_BYTE *)(a1 + 328) = 1;
        }
        v6 = 0;
        sub_2258610((__int64)&v30);
        std::_V2::system_category((std::_V2 *)&v30);
      }
    }
    else
    {
      v6 = 20;
      std::_V2::generic_category((std::_V2 *)v36);
    }
  }
  if ( ptr != v29 )
    free(ptr);
  if ( v24 != v26 )
    free(v24);
  if ( v21 != v23 )
    free(v21);
  return v6;
}
