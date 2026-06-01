/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100010AF0
// Address: 0x0000000100010AF0

//----- (0000000100010AF0) ----------------------------------------------------
__int64 __fastcall sub_100010AF0(const __m128i *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int8 *v7; // rax
  unsigned __int64 *v8; // r15
  __int64 result; // rax
  __int64 v10; // rsi
  unsigned __int64 *v11; // rdx
  unsigned int v12; // r13d
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-58h] BYREF
  _OWORD v17[2]; // [rsp+10h] [rbp-50h] BYREF

  if ( a2 - (unsigned __int64)a1 < 0x18 || a2 <= (unsigned __int64)a1 )
  {
    memset(v17, 0, 24);
    v7 = (__int8 *)a2;
    if ( !a4 )
      goto LABEL_6;
    goto LABEL_5;
  }
  *(_QWORD *)&v17[1] = a1[1].i64[0];
  v17[0] = _mm_loadu_si128(a1);
  v7 = &a1[1].i8[8];
  if ( a4 )
  {
LABEL_5:
    LODWORD(v17[0]) = _byteswap_ulong(v17[0]);
    *(__m128i *)((char *)v17 + 8) = _mm_shuffle_epi8(
                                      _mm_loadu_si128((const __m128i *)((char *)v17 + 8)),
                                      (__m128i)xmmword_10008FEB0);
  }
LABEL_6:
  v8 = (unsigned __int64 *)v7;
  result = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int8 *, unsigned __int64))(*(_QWORD *)a3 + 216LL))(
             a3,
             v17,
             v7,
             a2);
  v10 = DWORD1(v17[1]);
  LOBYTE(v11) = (_DWORD)result == 0 && DWORD1(v17[1]) != 0;
  if ( (_BYTE)v11 == 1 )
  {
    if ( (unsigned __int64)v8 < a2 )
    {
      v11 = v8;
      v12 = 0;
      while ( a2 - (unsigned __int64)v11 > 7 )
      {
        v13 = *v11;
        v16 = v13;
        v14 = v11 + 1;
        v15 = HIDWORD(v13);
        if ( a4 )
          goto LABEL_13;
LABEL_14:
        result = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64 *, unsigned __int64))(*(_QWORD *)a3 + 224LL))(
                   a3,
                   &v16,
                   v11,
                   a2);
        if ( (_DWORD)result )
          return result;
        ++v12;
        v10 = DWORD1(v17[1]);
        if ( v12 >= DWORD1(v17[1]) )
          return 0;
        v11 = v14;
        if ( (unsigned __int64)v14 >= a2 )
          goto LABEL_17;
      }
      v16 = 0;
      LODWORD(v15) = 0;
      LODWORD(v13) = 0;
      v14 = (unsigned __int64 *)a2;
      if ( !a4 )
        goto LABEL_14;
LABEL_13:
      v16 = _byteswap_uint64(__PAIR64__(v13, v15));
      goto LABEL_14;
    }
LABEL_17:
    if ( !byte_1000AE249 )
      sub_100010070((int)"Inconsistent number of tools %u in LC_BUILD_VERSION command", v10, v11);
    byte_1000AE249 = 1;
    return 0;
  }
  return result;
}
// 100010C49: variable 'v11' is possibly undefined
// 10008FEB0: using guessed type __int128 xmmword_10008FEB0;
// 1000AE249: using guessed type char byte_1000AE249;
