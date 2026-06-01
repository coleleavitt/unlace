__m128i *__fastcall sub_110C580(__m128i *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v7; // rsi
  void (__fastcall *v8)(_OWORD *, __int64, void **, int *); // rax
  _BYTE *v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rax
  signed __int32 v15; // edx
  signed __int32 v16; // edx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rax
  __int64 v20; // rsi
  _BYTE *v21; // rdi
  int v22; // r15d
  int v23; // eax
  signed __int32 v24; // eax
  int v25; // [rsp+4h] [rbp-1E4h]
  volatile signed __int32 *v26; // [rsp+18h] [rbp-1D0h]
  int v27; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-1C0h]
  void *v29; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-1B0h]
  __m128i v31; // [rsp+40h] [rbp-1A8h] BYREF
  const char *v32; // [rsp+50h] [rbp-198h] BYREF
  __int16 v33; // [rsp+70h] [rbp-178h]
  char v34[32]; // [rsp+80h] [rbp-168h] BYREF
  __int16 v35; // [rsp+A0h] [rbp-148h]
  _OWORD v36[2]; // [rsp+B0h] [rbp-138h] BYREF
  __int16 v37; // [rsp+D0h] [rbp-118h]
  void *v38[2]; // [rsp+E0h] [rbp-108h] BYREF
  _BYTE v39[16]; // [rsp+F0h] [rbp-F8h] BYREF
  __int16 v40; // [rsp+100h] [rbp-E8h]
  void *ptr; // [rsp+110h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+118h] [rbp-D0h]
  _BYTE v43[192]; // [rsp+128h] [rbp-C0h] BYREF

  v27 = 0;
  v28 = std::_V2::system_category((std::_V2 *)a1);
  v29 = &v31;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  ptr = v43;
  v30 = 0;
  v31.m128i_i8[0] = 0;
  sub_9FC110(&ptr, a3, &a3[a4]);
  v40 = 257;
  v37 = 257;
  v35 = 257;
  v33 = 259;
  v32 = "c++";
  sub_2266670(&ptr, &v32, v34, v36, v38);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  v8 = *(void (__fastcall **)(_OWORD *, __int64, void **, int *))(*(_QWORD *)v7 + 64LL);
  v38[0] = ptr;
  v40 = 261;
  v38[1] = (void *)si128.m128i_i64[0];
  v8(v36, v7, v38, &v27);
  v25 = 0;
LABEL_2:
  if ( !v27 )
  {
    while ( *(_QWORD *)&v36[0] )
    {
      v9 = (_BYTE *)sub_2266D20(*(_QWORD *)(*(_QWORD *)&v36[0] + 8LL), *(_QWORD *)(*(_QWORD *)&v36[0] + 16LL), 0);
      v11 = v9;
      v12 = v10;
      if ( *v9 == 118 )
      {
        if ( v10 )
        {
          v20 = v10 - 1;
          v21 = v9 + 1;
        }
        else
        {
          v21 = v9;
          v20 = 0;
        }
        if ( !(unsigned __int8)sub_2223D10(v21, v20, 10, v38) )
        {
          v22 = (int)v38[0];
          if ( v38[0] == (void *)SLODWORD(v38[0]) && v25 < SLODWORD(v38[0]) )
          {
            v38[0] = v39;
            sub_1107830(v38, v11, (__int64)&v11[v12]);
            sub_9E6D90((__int64)&v29, v38);
            if ( v38[0] != v39 )
              operator delete(v38[0]);
            v25 = v22;
          }
        }
      }
      v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v36[0] + 16LL))(*(_QWORD *)&v36[0]);
      v28 = v13;
      if ( *(_QWORD *)(*(_QWORD *)&v36[0] + 16LL) )
        goto LABEL_2;
      v14 = *((volatile signed __int32 **)&v36[0] + 1);
      v36[0] = 0;
      if ( !v14 )
        goto LABEL_2;
      if ( &_pthread_key_create )
      {
        v15 = _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF);
      }
      else
      {
        v15 = *((_DWORD *)v14 + 2);
        *((_DWORD *)v14 + 2) = v15 - 1;
      }
      if ( v15 != 1 )
        goto LABEL_2;
      v26 = v14;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      if ( &_pthread_key_create )
      {
        v16 = _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF);
      }
      else
      {
        v16 = *((_DWORD *)v26 + 3);
        *((_DWORD *)v26 + 3) = v16 - 1;
      }
      if ( v16 != 1 )
        goto LABEL_2;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 24LL))(v26);
      if ( v27 )
        break;
    }
  }
  v17 = *((volatile signed __int32 **)&v36[0] + 1);
  if ( *((_QWORD *)&v36[0] + 1) )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v36[0] + 1) + 8LL), 0xFFFFFFFF) != 1 )
        goto LABEL_17;
    }
    else
    {
      v23 = *(_DWORD *)(*((_QWORD *)&v36[0] + 1) + 8LL);
      *(_DWORD *)(*((_QWORD *)&v36[0] + 1) + 8LL) = v23 - 1;
      if ( v23 != 1 )
        goto LABEL_17;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
    if ( &_pthread_key_create )
    {
      v24 = _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF);
    }
    else
    {
      v24 = *((_DWORD *)v17 + 3);
      *((_DWORD *)v17 + 3) = v24 - 1;
    }
    if ( v24 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17);
  }
LABEL_17:
  if ( v25 )
  {
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v29 == &v31 )
    {
      a1[1] = _mm_load_si128(&v31);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v29;
      a1[1].m128i_i64[0] = v31.m128i_i64[0];
    }
    v18 = v30;
    v31.m128i_i8[0] = 0;
    v30 = 0;
    a1->m128i_i64[1] = v18;
    v29 = &v31;
  }
  else
  {
    sub_1107FF0(a1, (char *)&byte_22CD811);
  }
  if ( ptr != v43 )
    free(ptr);
  if ( v29 != &v31 )
    operator delete(v29);
  return a1;
}

