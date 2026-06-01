void __fastcall sub_225FE00(__int64 a1, char a2)
{
  char **v2; // r14
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // eax
  __m128i v14; // xmm0
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // [rsp+0h] [rbp-3E8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-3E0h]
  _BYTE v19[136]; // [rsp+18h] [rbp-3D0h] BYREF
  void *ptr; // [rsp+A0h] [rbp-348h] BYREF
  __m128i v21; // [rsp+A8h] [rbp-340h]
  _BYTE v22[136]; // [rsp+B8h] [rbp-330h] BYREF
  __int64 *v23; // [rsp+140h] [rbp-2A8h] BYREF
  __m128i v24; // [rsp+148h] [rbp-2A0h]
  __int64 v25; // [rsp+158h] [rbp-290h] BYREF
  _BYTE *v26; // [rsp+1D8h] [rbp-210h] BYREF
  __m128i v27; // [rsp+1E0h] [rbp-208h]
  _BYTE v28[128]; // [rsp+1F0h] [rbp-1F8h] BYREF
  void *v29; // [rsp+270h] [rbp-178h] BYREF
  __int64 v30; // [rsp+278h] [rbp-170h]
  __int64 v31; // [rsp+280h] [rbp-168h]
  _WORD v32[64]; // [rsp+288h] [rbp-160h] BYREF
  void *v33; // [rsp+308h] [rbp-E0h] BYREF
  __m128i v34; // [rsp+310h] [rbp-D8h]
  _BYTE v35[128]; // [rsp+320h] [rbp-C8h] BYREF
  char v36; // [rsp+3A0h] [rbp-48h]

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_2C75EB0;
  *(_BYTE *)(a1 + 328) = 0;
  if ( !a2 )
  {
    v2 = (char **)(a1 + 16);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v17 = v19;
    ptr = v22;
    v21 = si128;
    v4 = sub_228DB00((std::_V2 *)&v17);
    if ( v4 )
    {
      v11 = v5;
      if ( *(_BYTE *)(a1 + 328) )
      {
        v36 |= 1u;
        LODWORD(v29) = v4;
        v30 = v5;
        if ( (*(_BYTE *)(a1 + 320) & 1) != 0 || (sub_2258610((__int64)v2), v11 = v30, (v36 & 1) != 0) )
        {
          v13 = (int)v29;
          *(_BYTE *)(a1 + 320) |= 1u;
          *(_QWORD *)(a1 + 24) = v11;
          *(_DWORD *)(a1 + 16) = v13;
        }
        else
        {
          *(_BYTE *)(a1 + 320) &= ~1u;
          v14 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          *(_QWORD *)(a1 + 16) = a1 + 40;
          *(_QWORD *)(a1 + 24) = 0;
          *(_QWORD *)(a1 + 32) = 128;
          if ( v11 )
          {
            sub_9C3C90(v2, (char **)&v29);
            v14 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          }
          *(__m128i *)(a1 + 176) = v14;
          v12 = v34.m128i_i64[0] == 0;
          *(_QWORD *)(a1 + 168) = a1 + 192;
          if ( !v12 )
            sub_9C3C90((char **)(a1 + 168), (char **)&v33);
          if ( (v36 & 1) == 0 )
            sub_2258610((__int64)&v29);
        }
      }
      else
      {
        *(_BYTE *)(a1 + 320) |= 1u;
        *(_DWORD *)(a1 + 16) = v4;
        *(_QWORD *)(a1 + 24) = v5;
        *(_BYTE *)(a1 + 328) = 1;
      }
    }
    else
    {
      v32[4] = 261;
      v29 = v17;
      v30 = si128.m128i_i64[0];
      v6 = sub_228E700(&v29, &ptr, 0);
      v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v23 = &v25;
      v24 = v7;
      if ( v6 )
      {
        if ( si128.m128i_i64[0] )
        {
          sub_9C3DB0((void **)&v23, (const void **)&v17);
          v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          v26 = v28;
          v27 = v7;
          if ( si128.m128i_i64[0] )
          {
            sub_9C3DB0((void **)&v26, (const void **)&v17);
            v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          }
        }
        else
        {
          v27 = v7;
          v26 = v28;
        }
      }
      else
      {
        if ( si128.m128i_i64[0] )
        {
          sub_9C3DB0((void **)&v23, (const void **)&v17);
          v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        }
        v27 = v7;
        v26 = v28;
        if ( v21.m128i_i64[0] )
        {
          sub_9C3DB0((void **)&v26, (const void **)&ptr);
          v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        }
      }
      v8 = v24.m128i_i64[0];
      if ( *(_BYTE *)(a1 + 328) )
      {
        v36 &= ~1u;
        v29 = v32;
        v30 = 0;
        v31 = 128;
        if ( v24.m128i_i64[0] )
        {
          sub_9C3C90((char **)&v29, (char **)&v23);
          v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        }
        v34 = v7;
        v33 = v35;
        if ( v27.m128i_i64[0] )
        {
          sub_9C3C90((char **)&v33, &v26);
          v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        }
        if ( (*(_BYTE *)(a1 + 320) & 1) == 0 )
        {
          v15 = *(void **)(a1 + 168);
          if ( v15 != (void *)(a1 + 192) )
          {
            free(v15);
            v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          }
          v16 = *(void **)(a1 + 16);
          if ( v16 != (void *)(a1 + 40) )
          {
            free(v16);
            v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          }
        }
        v9 = v30;
        if ( (v36 & 1) != 0 )
        {
          *(_BYTE *)(a1 + 320) |= 1u;
          v10 = (int)v29;
          *(_QWORD *)(a1 + 24) = v9;
          *(_DWORD *)(a1 + 16) = v10;
        }
        else
        {
          *(_BYTE *)(a1 + 320) &= ~1u;
          *(_QWORD *)(a1 + 16) = a1 + 40;
          *(_QWORD *)(a1 + 24) = 0;
          *(_QWORD *)(a1 + 32) = 128;
          if ( v9 )
          {
            sub_9C3C90(v2, (char **)&v29);
            v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          }
          *(__m128i *)(a1 + 176) = v7;
          v12 = v34.m128i_i64[0] == 0;
          *(_QWORD *)(a1 + 168) = a1 + 192;
          if ( !v12 )
            sub_9C3C90((char **)(a1 + 168), (char **)&v33);
          if ( (v36 & 1) == 0 )
          {
            if ( v33 != v35 )
              free(v33);
            if ( v29 != v32 )
              free(v29);
          }
        }
      }
      else
      {
        *(_BYTE *)(a1 + 320) &= ~1u;
        *(_QWORD *)(a1 + 16) = a1 + 40;
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = 128;
        if ( v8 )
        {
          sub_9C3C90(v2, (char **)&v23);
          v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        }
        *(__m128i *)(a1 + 176) = v7;
        v12 = v27.m128i_i64[0] == 0;
        *(_QWORD *)(a1 + 168) = a1 + 192;
        if ( !v12 )
          sub_9C3C90((char **)(a1 + 168), &v26);
        *(_BYTE *)(a1 + 328) = 1;
      }
      sub_2258610((__int64)&v23);
    }
    if ( ptr != v22 )
      free(ptr);
    if ( v17 != v19 )
      free(v17);
  }
}
