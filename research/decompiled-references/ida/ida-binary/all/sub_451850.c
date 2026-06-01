__int64 (__fastcall **__fastcall sub_451850(__int64 a1, const char *a2))()
{
  __int64 *v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __m128i v5; // xmm0
  _QWORD *v6; // rax
  __int64 v7; // rdx
  struct _Unwind_Exception *v9; // r14

  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 8) = 0x2000646000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v5 = _mm_loadl_epi64((const __m128i *)&off_86BC08);
  v6 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 2;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)&off_86BB90);
  do
  {
    *v6 = 0;
    v6 += 3;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( v6 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v7 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v9 = (struct _Unwind_Exception *)interr(3449, a2, v7, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v2 = (__int64 *)(a1 + 152);
        v3 = (__int64 *)(a1 + 56);
        while ( 1 )
        {
          v4 = *v2;
          if ( *v2 )
          {
            v2[1] = 0;
            qfree(v4, a2);
          }
          v2 -= 3;
          if ( v2 == v3 )
            _Unwind_Resume(v9);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v7 & 0xFE07FFFF;
  }
  *(_DWORD *)(a1 + 180) = (_DWORD)a2;
  *(_QWORD *)a1 = commit_files_chooser_t___vtable;
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  return commit_files_chooser_t___vtable;
}
