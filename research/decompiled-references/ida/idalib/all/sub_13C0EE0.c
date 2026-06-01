__int64 __fastcall sub_13C0EE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v9; // r13
  char *v13; // rdi
  _BYTE *v14; // rdi
  void *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp-10h] [rbp-448h]
  void *v23; // [rsp+18h] [rbp-420h]
  __m128i v24; // [rsp+20h] [rbp-418h] BYREF
  char *v25; // [rsp+30h] [rbp-408h]
  __int16 v26; // [rsp+40h] [rbp-3F8h]
  __m128i v27; // [rsp+50h] [rbp-3E8h] BYREF
  __int16 v28; // [rsp+70h] [rbp-3C8h]
  __m128i v29[3]; // [rsp+80h] [rbp-3B8h] BYREF
  __m128i v30[2]; // [rsp+B0h] [rbp-388h] BYREF
  __int16 v31; // [rsp+D0h] [rbp-368h]
  __m128i v32[3]; // [rsp+E0h] [rbp-358h] BYREF
  _BYTE v33[32]; // [rsp+110h] [rbp-328h] BYREF
  __int16 v34; // [rsp+130h] [rbp-308h]
  _QWORD v35[4]; // [rsp+140h] [rbp-2F8h] BYREF
  __int16 v36; // [rsp+160h] [rbp-2D8h]
  void *v37; // [rsp+170h] [rbp-2C8h] BYREF
  __int64 v38; // [rsp+178h] [rbp-2C0h]
  __int16 v39; // [rsp+190h] [rbp-2A8h]
  void *ptr; // [rsp+1A0h] [rbp-298h] BYREF
  __m128i v41; // [rsp+1A8h] [rbp-290h]
  char v42; // [rsp+1B8h] [rbp-280h] BYREF
  __int16 v43; // [rsp+1C0h] [rbp-278h]
  _BYTE v44[24]; // [rsp+240h] [rbp-1F8h] BYREF
  _WORD v45[68]; // [rsp+258h] [rbp-1E0h] BYREF
  void *v46; // [rsp+2E0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+2E8h] [rbp-150h]
  _BYTE v48[320]; // [rsp+2F8h] [rbp-140h] BYREF

  v9 = a1 + 16;
  if ( a8 )
  {
    v46 = v48;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_A1FE50(&v46, a7, &a7[a8]);
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 280LL) & 1) != 0 )
    {
      v39 = 257;
      v36 = 773;
      v35[0] = a3;
      v45[4] = 257;
      v43 = 257;
      v35[1] = a4;
      v35[2] = ".pcm";
      sub_228A3B0(&v46, v35, &v37, &ptr, v44);
    }
    else
    {
      ptr = &v42;
      v41 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_A1FE50(&ptr, a5, &a5[a6]);
      if ( (unsigned int)sub_13F4110(a2 + 632, &ptr) )
      {
        v13 = (char *)ptr;
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(a1 + 8) = 0;
        *(_BYTE *)(a1 + 16) = 0;
        if ( v13 != &v42 )
          free(v13);
        goto LABEL_8;
      }
      v37 = ptr;
      v38 = v41.m128i_i64[0];
      sub_2246450(v44, &v37);
      v15 = (void *)sub_2287CD0(*(_QWORD *)v44, *(_QWORD *)&v44[8]);
      if ( *(_BYTE **)v44 != &v44[16] )
      {
        v23 = v15;
        operator delete(*(void **)v44);
        v15 = v23;
      }
      *(_QWORD *)v44 = v45;
      LODWORD(v38) = 64;
      *(__m128i *)&v44[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v37 = v15;
      sub_220BA90((unsigned int)&v37, (unsigned int)v44, 36, 0, 0, 1, 0);
      v16 = v20;
      if ( (unsigned int)v38 > 0x40 && v37 )
        operator delete[](v37);
      v24.m128i_i64[0] = a3;
      v39 = 257;
      v30[0].m128i_i64[0] = (__int64)".pcm";
      v36 = 257;
      v27 = *(__m128i *)v44;
      v31 = 259;
      v28 = 261;
      v24.m128i_i64[1] = a4;
      v34 = 257;
      v26 = 773;
      v25 = "-";
      sub_A41580(v29, &v24, &v27, 257, 773, v16);
      sub_A41580(v32, v29, v30, v17, v18, v19);
      sub_228A3B0(&v46, v32, v33, v35, &v37);
      if ( *(_WORD **)v44 != v45 )
        free(*(void **)v44);
      if ( ptr != &v42 )
        free(ptr);
    }
    v14 = v46;
    *(_QWORD *)a1 = v9;
    if ( !v14 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 16) = 0;
      goto LABEL_9;
    }
    sub_13BF290((_QWORD *)a1, v14, (__int64)&v14[si128.m128i_i64[0]]);
LABEL_8:
    v14 = v46;
    if ( v46 == v48 )
      return a1;
LABEL_9:
    free(v14);
    return a1;
  }
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  return a1;
}
