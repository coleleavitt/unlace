const char *__fastcall sub_14B500(__int64 a1, _QWORD *a2)
{
  __m128i v2; // xmm0
  _QWORD *v3; // rax
  unsigned int v4; // edx
  __int64 strlist_api; // rax
  const char *result; // rax
  struct _Unwind_Exception *v7; // r12
  _QWORD *v8; // rbp

  *(_QWORD *)(a1 + 8) = 0x2008404000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v2 = _mm_loadl_epi64(&off_233B60);
  v3 = (_QWORD *)(a1 + 80);
  *(_QWORD *)a1 = &stru_235898;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)off_233B40);
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( ((v4 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v7 = (struct _Unwind_Exception *)interr();
        if ( *(_QWORD *)(a1 + 184) )
        {
          *(_QWORD *)(a1 + 192) = 0;
          qfree();
        }
        *(_QWORD *)a1 = &stru_235898;
        v8 = (_QWORD *)(a1 + 152);
        while ( 1 )
        {
          if ( *v8 )
          {
            v8[1] = 0;
            qfree();
          }
          v8 -= 3;
          if ( (_QWORD *)(a1 + 56) == v8 )
            _Unwind_Resume(v7);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v4 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v4 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = off_233A90;
  *(_OWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 208) = *a2;
  strlist_api = get_strlist_api();
  *(_QWORD *)(a1 + 216) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)strlist_api + 56LL))(
                            strlist_api,
                            a1 + 208);
  sub_14B3A0((__int64 *)(a1 + 184), (_DWORD *)(a1 + 208));
  result = s1;
  if ( *(_QWORD *)(a1 + 192) )
    result = *(const char **)(a1 + 184);
  *(_QWORD *)(a1 + 40) = result;
  *(_DWORD *)(a1 + 72) = 80;
  return result;
}

