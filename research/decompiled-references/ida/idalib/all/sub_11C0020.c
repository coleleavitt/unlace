__int64 __fastcall sub_11C0020(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rax
  __m128i v14; // [rsp+10h] [rbp-168h] BYREF
  __int64 v15; // [rsp+20h] [rbp-158h]
  __int64 v16; // [rsp+28h] [rbp-150h]
  __int16 v17; // [rsp+30h] [rbp-148h]
  __m128i v18[2]; // [rsp+40h] [rbp-138h] BYREF
  __int16 v19; // [rsp+60h] [rbp-118h]
  __m128i v20; // [rsp+70h] [rbp-108h] BYREF
  const char *v21; // [rsp+80h] [rbp-F8h] BYREF
  __int16 v22; // [rsp+90h] [rbp-E8h]
  _BYTE ptr[24]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v24[192]; // [rsp+B8h] [rbp-C0h] BYREF

  LOBYTE(v5) = sub_12AFEA0() | (a1[15] != 13);
  if ( (_BYTE)v5 )
  {
    (*(void (__fastcall **)(__m128i *, _DWORD *, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 304LL))(
      &v20,
      a1,
      a2,
      a4,
      a5,
      1,
      0);
    *(_QWORD *)ptr = v24;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(ptr, v20.m128i_i64[0], (_BYTE *)(v20.m128i_i64[0] + v20.m128i_i64[1]));
    if ( (const char **)v20.m128i_i64[0] != &v21 )
      operator delete((void *)v20.m128i_i64[0]);
    v22 = 773;
    v20 = *(__m128i *)ptr;
    v21 = ".syms";
    if ( (unsigned int)sub_228C1E0(&v20, 0) )
    {
      v5 = 0;
    }
    else
    {
      v19 = 259;
      v14.m128i_i64[0] = (__int64)"--dynamic-list=";
      v17 = 1283;
      v15 = *(_QWORD *)ptr;
      v18[0].m128i_i64[0] = (__int64)".syms";
      v16 = *(_QWORD *)&ptr[8];
      sub_A41580(&v20, &v14, v18, v8, v9, v10);
      v12 = sub_10DA6C0(a2, (__int64)&v20);
      sub_10DC5D0(a3, v12);
    }
    if ( *(_BYTE **)ptr != v24 )
      free(*(void **)ptr);
  }
  else
  {
    return 1;
  }
  return v5;
}
