__int64 (__fastcall **__fastcall sub_2731B0(__int64 a1, __int64 a2, __int64 a3))()
{
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __m128 v8; // xmm0
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  struct _Unwind_Exception *v13; // r14

  v6 = *(_QWORD *)(a2 + 80);
  v8 = _mm_loadh_ps((const double *)(a2 + 72));
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 8) = 0x70000000FF000004LL;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 48) = v6;
  v9 = (_QWORD *)(a1 + 80);
  *(__m128 *)(a1 + 56) = v8;
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
    *v9 = 0;
    v9 += 3;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( v9 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v10 = *(unsigned int *)(a1 + 12);
  v11 = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v13 = (struct _Unwind_Exception *)interr(3449, a2, a3, v10, 0.0);
        v3 = (__int64 *)(a1 + 152);
        v4 = (__int64 *)(a1 + 56);
        while ( 1 )
        {
          v5 = *v3;
          if ( *v3 )
          {
            v3[1] = 0;
            qfree(v5, (const char *)a2);
          }
          v3 -= 3;
          if ( v4 == v3 )
            _Unwind_Resume(v13);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = v11;
    *(_DWORD *)(a1 + 12) = v10 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = a3;
  *(_QWORD *)a1 = diff_source_generic_chooser_t___vtable;
  *(_QWORD *)(a1 + 192) = a2;
  return diff_source_generic_chooser_t___vtable;
}
