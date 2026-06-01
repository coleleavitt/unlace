__int64 __fastcall sub_31E6E0(__int64 a1, const char *a2)
{
  __int64 v2; // rdi
  __m128i v4; // xmm0
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  struct _Unwind_Exception *v8; // rbp

  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 8) = 0x2FF000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v4 = _mm_loadl_epi64((const __m128i *)&off_865CB0);
  v5 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 2;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)off_865C70);
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v5 );
  *(_DWORD *)(a1 + 176) = 0;
  v6 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v8 = (struct _Unwind_Exception *)interr(3449, a2, v6, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v2 = *(_QWORD *)(a1 + 8544);
        if ( v2 )
        {
          *(_QWORD *)(a1 + 8552) = 0;
          qfree(v2, a2);
        }
        sub_319CD0(a1 + 4280);
        *(_QWORD *)a1 = &unk_870060;
        sub_1AB100((_QWORD *)a1, a2);
        _Unwind_Resume(v8);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v6 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 4280) = 0;
  *(_QWORD *)a1 = snapman_t___vtable;
  *(_QWORD *)(a1 + 4288) = 0;
  *(_QWORD *)(a1 + 4416) = 0;
  *(_QWORD *)(a1 + 8520) = 0;
  *(_QWORD *)(a1 + 8544) = 0;
  *(_QWORD *)(a1 + 8584) = 0;
  *(_OWORD *)(a1 + 8528) = 0;
  *(_OWORD *)(a1 + 8552) = 0;
  qstrncpy(a1 + 180, a2, 4096);
  result = sub_31E550((_QWORD *)a1, a2);
  *(_DWORD *)(a1 + 32) = 90;
  *(_DWORD *)(a1 + 72) = 185;
  return result;
}
