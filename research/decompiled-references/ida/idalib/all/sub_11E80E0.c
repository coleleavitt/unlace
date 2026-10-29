void __fastcall sub_11E80E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char **v7; // rax
  const char *v8; // r12
  size_t v9; // rax
  size_t v10; // rbp
  _BYTE *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 (__fastcall *v14)(__int64, __m128i *); // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rax
  _QWORD v23[4]; // [rsp+20h] [rbp-198h] BYREF
  __int16 v24; // [rsp+40h] [rbp-178h]
  __m128i v25[2]; // [rsp+50h] [rbp-168h] BYREF
  __int16 v26; // [rsp+70h] [rbp-148h]
  __m128i v27[2]; // [rsp+80h] [rbp-138h] BYREF
  __int16 v28; // [rsp+A0h] [rbp-118h]
  __m128i v29[2]; // [rsp+B0h] [rbp-108h] BYREF
  __int16 v30; // [rsp+D0h] [rbp-E8h]
  _BYTE ptr[24]; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v32[192]; // [rsp+F8h] [rbp-C0h] BYREF

  v7 = *(const char ***)(*(_QWORD *)*a1 + 48LL);
  v8 = *v7;
  if ( *v7 )
  {
    v9 = j__strlen(*v7);
    v10 = v9;
    *(_QWORD *)ptr = v32;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v9 > 0x80 )
    {
      sub_2236E10(ptr, v32, v9, 1);
      v11 = (_BYTE *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
LABEL_4:
      memcpy(v11, v8, v10);
      v10 += *(_QWORD *)&ptr[8];
      goto LABEL_5;
    }
    if ( v9 )
    {
      v11 = v32;
      goto LABEL_4;
    }
  }
  else
  {
    v10 = 0;
    *(_QWORD *)ptr = v32;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  }
LABEL_5:
  v12 = a1[1];
  *(_QWORD *)&ptr[8] = v10;
  if ( *(_DWORD *)(v12 + 44) == 30 )
  {
    v27[0].m128i_i64[0] = (__int64)"DriverKit";
    v28 = 259;
    v29[0].m128i_i64[0] = (__int64)"System";
    v30 = 259;
    v24 = 257;
    v26 = 257;
    sub_228A3B0(ptr, v29, v27, v25, v23);
  }
  v30 = 257;
  v28 = 257;
  v26 = 257;
  v24 = 261;
  v23[1] = a5;
  v23[0] = a4;
  sub_228A3B0(ptr, v23, v25, v27, v29);
  v13 = sub_112C5D0(*(_QWORD *)(a1[2] + 24LL));
  v14 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v13 + 96LL);
  v29[0] = *(__m128i *)ptr;
  v30 = 261;
  if ( v14(v13, v29) )
  {
    v18 = a1[3];
    v19 = a1[4];
    v28 = 261;
    v26 = 261;
    v27[0] = *(__m128i *)ptr;
    v25[0].m128i_i64[0] = a2;
    v25[0].m128i_i64[1] = a3;
    sub_A41580(v29, v25, v27, v15, v16, v17);
    v20 = sub_10DA6C0(v19, (__int64)v29);
    sub_10DC5D0(v18, v20);
  }
  if ( *(_BYTE **)ptr != v32 )
    free(*(void **)ptr);
}
