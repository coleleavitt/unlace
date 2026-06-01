bool __fastcall sub_389000(double a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdi
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( dword_8BA580 < (unsigned __int64)xmmword_8CC438 )
  {
    v11 = qword_8CC430 + ((__int64)dword_8BA580 << 8);
    a3 = v11 + 88;
    sub_388840((int *)v11, (__int64 *)(v11 + 88), a4, a5, a1);
  }
  v5 = qalloc_or_throw(184);
  *(_QWORD *)v5 = &stru_86F6A0;
  *(_QWORD *)(v5 + 8) = 0x2088011000004LL;
  *(_QWORD *)(v5 + 40) = "@0:1412[]\nCall Stack";
  *(_OWORD *)(v5 + 16) = -1;
  v6 = (_QWORD *)(v5 + 80);
  v7 = _mm_loadl_epi64((const __m128i *)&off_867FB8);
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 48) = 3;
  *(_DWORD *)(v5 + 72) = -1;
  *(__m128i *)(v5 + 56) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)&off_867FA0);
  do
  {
    *v6 = 0;
    v6 += 3;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( v6 != (_QWORD *)(v5 + 176) );
  *(_DWORD *)(v5 + 176) = 0;
  v8 = *(unsigned int *)(v5 + 12);
  v9 = ((*(_DWORD *)(v5 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v5 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v5 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a3, v8, v9, 0.0);
      BUG();
    }
    v8 = (unsigned int)v8 & 0xFE07FFFF;
    *(_BYTE *)(v5 + 11) = ((*(_DWORD *)(v5 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v5 + 12) = v8;
  }
  *(_DWORD *)(v5 + 72) = 131;
  *(_QWORD *)v5 = st_chooser_t___vtable;
  v12[0] = 0;
  return sub_4AED50(v5, v12, v8, v9) == 0;
}
