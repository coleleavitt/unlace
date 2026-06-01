__m128i *__fastcall sub_1130710(__m128i *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v8; // rsi
  __int64 v9; // rax
  size_t v10; // rax
  __int64 v11; // rsi
  void (__fastcall *v12)(__int128 *, __int64, void **, int *); // rax
  _BYTE *v13; // rax
  size_t v14; // r12
  _BYTE *v15; // r15
  size_t v16; // rdx
  size_t v17; // r13
  unsigned int v18; // r12d
  __int64 v19; // rdx
  volatile signed __int32 *v20; // r12
  signed __int32 v21; // eax
  signed __int32 v22; // eax
  volatile signed __int32 *v23; // rax
  int v25; // edx
  signed __int32 v26; // edx
  __int64 v27; // rax
  _WORD *v28; // rdi
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  unsigned int v31; // [rsp+8h] [rbp-280h]
  volatile signed __int32 *v32; // [rsp+8h] [rbp-280h]
  char v33; // [rsp+17h] [rbp-271h]
  unsigned int v34; // [rsp+18h] [rbp-270h]
  int v37; // [rsp+40h] [rbp-248h] BYREF
  __int64 v38; // [rsp+48h] [rbp-240h]
  _QWORD v39[4]; // [rsp+50h] [rbp-238h] BYREF
  __int16 v40; // [rsp+70h] [rbp-218h]
  _BYTE v41[32]; // [rsp+80h] [rbp-208h] BYREF
  __int16 v42; // [rsp+A0h] [rbp-1E8h]
  void *v43[2]; // [rsp+B0h] [rbp-1D8h] BYREF
  _WORD v44[16]; // [rsp+C0h] [rbp-1C8h] BYREF
  void *s2; // [rsp+E0h] [rbp-1A8h] BYREF
  size_t n; // [rsp+E8h] [rbp-1A0h]
  _OWORD v47[2]; // [rsp+F0h] [rbp-198h] BYREF
  __int64 v48; // [rsp+110h] [rbp-178h]
  void *ptr; // [rsp+120h] [rbp-168h] BYREF
  __m128i si128; // [rsp+128h] [rbp-160h]
  _BYTE v51[40]; // [rsp+138h] [rbp-150h] BYREF
  __int128 v52; // [rsp+160h] [rbp-128h] BYREF
  __m128i v53; // [rsp+170h] [rbp-118h] BYREF
  __int16 v54; // [rsp+180h] [rbp-108h]
  void *v55; // [rsp+1B0h] [rbp-D8h] BYREF
  __m128i v56; // [rsp+1B8h] [rbp-D0h]
  _WORD v57[96]; // [rsp+1C8h] [rbp-C0h] BYREF

  v8 = *(_BYTE **)(a2 + 16);
  s2 = v47;
  sub_112B630(&s2, v8, (__int64)&v8[*(_QWORD *)(a2 + 24)]);
  v9 = *(_QWORD *)(a2 + 64);
  v47[1] = _mm_loadu_si128((const __m128i *)(a2 + 48));
  v48 = v9;
  v10 = j__strlen("android");
  sub_22BA340(&s2, "android", v10);
  v37 = 0;
  v31 = sub_22B7A20(a2 + 16);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  ptr = v51;
  v38 = std::_V2::system_category((std::_V2 *)(a2 + 16));
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  v12 = *(void (__fastcall **)(__int128 *, __int64, void **, int *))(*(_QWORD *)v11 + 64LL);
  v55 = a3;
  v57[4] = 261;
  v56.m128i_i64[0] = a4;
  v12(&v52, v11, &v55, &v37);
  v33 = 0;
  v34 = 0;
LABEL_2:
  if ( !v37 )
  {
    while ( (_QWORD)v52 )
    {
      v13 = (_BYTE *)sub_228AA60(*(_QWORD *)(v52 + 8), *(_QWORD *)(v52 + 16), 0);
      v14 = n;
      v15 = v13;
      v17 = v16;
      if ( n <= v16 && (!n || !memcmp(v13, s2, n)) )
      {
        if ( si128.m128i_i64[0] | (v17 - v14) )
        {
          if ( !(unsigned __int8)sub_2247970(&v15[v14], v17 - v14, 10, &v55) )
          {
            v18 = (unsigned int)v55;
            if ( v55 == (void *)(unsigned int)v55 && v31 > (unsigned int)v55 && v34 < (unsigned int)v55 )
            {
              si128.m128i_i64[0] = 0;
              sub_A1FE50(&ptr, v15, &v15[v17]);
              v33 = 0;
              v34 = v18;
            }
          }
        }
        else
        {
          sub_A1FE50(&ptr, v15, &v15[v17]);
          v33 = 1;
        }
      }
      v37 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v52 + 16LL))(v52);
      v38 = v19;
      if ( *(_QWORD *)(v52 + 16) )
        goto LABEL_2;
      v20 = *((volatile signed __int32 **)&v52 + 1);
      v52 = 0;
      if ( !v20 )
        goto LABEL_2;
      if ( &_pthread_key_create )
      {
        v21 = _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF);
      }
      else
      {
        v21 = *((_DWORD *)v20 + 2);
        *((_DWORD *)v20 + 2) = v21 - 1;
      }
      if ( v21 != 1 )
        goto LABEL_2;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      if ( &_pthread_key_create )
      {
        v22 = _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF);
      }
      else
      {
        v22 = *((_DWORD *)v20 + 3);
        *((_DWORD *)v20 + 3) = v22 - 1;
      }
      if ( v22 != 1 )
        goto LABEL_2;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 24LL))(v20);
      if ( v37 )
        break;
    }
  }
  v23 = *((volatile signed __int32 **)&v52 + 1);
  if ( *((_QWORD *)&v52 + 1) )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL), 0xFFFFFFFF) != 1 )
        goto LABEL_25;
    }
    else
    {
      v25 = *(_DWORD *)(*((_QWORD *)&v52 + 1) + 8LL);
      *(_DWORD *)(*((_QWORD *)&v52 + 1) + 8LL) = v25 - 1;
      if ( v25 != 1 )
        goto LABEL_25;
    }
    v32 = v23;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
    if ( &_pthread_key_create )
    {
      v26 = _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF);
    }
    else
    {
      v26 = *((_DWORD *)v32 + 3);
      *((_DWORD *)v32 + 3) = v26 - 1;
    }
    if ( v26 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 24LL))(v32);
  }
LABEL_25:
  if ( si128.m128i_i64[0] )
  {
    v55 = v57;
    v56 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(&v55, a3, &a3[a4]);
    v54 = 257;
    v44[8] = 257;
    v42 = 257;
    v39[0] = ptr;
    v40 = 261;
    v39[1] = si128.m128i_i64[0];
    sub_228A3B0(&v55, v39, v41, v43, &v52);
    if ( v33 )
    {
      sub_FC70B0((__int64)&v52, **(_QWORD **)(a2 + 8), 0, 531);
      sub_AEC220((unsigned __int8 **)&v52, v55, v56.m128i_i64[0]);
      v29 = *(_BYTE **)(a2 + 16);
      v30 = (__int64)&v29[*(_QWORD *)(a2 + 24)];
      v43[0] = v44;
      sub_112B630(v43, v29, v30);
      sub_AEC220((unsigned __int8 **)&v52, (_BYTE *)v43[0], (signed __int64)v43[1]);
      if ( v43[0] != v44 )
        operator delete(v43[0]);
      sub_AEA040((__int64)&v52);
    }
    *(_QWORD *)&v52 = &v53;
    sub_112B570(&v52, v55, (__int64)v55 + v56.m128i_i64[0]);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v52 == &v53 )
    {
      a1[1] = _mm_load_si128(&v53);
    }
    else
    {
      a1->m128i_i64[0] = v52;
      a1[1].m128i_i64[0] = v53.m128i_i64[0];
    }
    v27 = *((_QWORD *)&v52 + 1);
    a1[2].m128i_i8[0] = 1;
    v28 = v55;
    a1->m128i_i64[1] = v27;
    if ( v28 != v57 )
      free(v28);
  }
  else
  {
    a1[2].m128i_i64[0] = 0;
    *a1 = 0;
    a1[1] = 0;
  }
  if ( ptr != v51 )
    free(ptr);
  if ( s2 != v47 )
    operator delete(s2);
  return a1;
}
