__int64 __fastcall sub_3A42C0(__int64 a1, __int64 a2, unsigned int a3, int a4, _QWORD *a5, __int64 a6)
{
  _QWORD *v6; // rdi
  __int64 *v7; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rdi
  const char *v12; // rsi
  __m128 v13; // xmm0
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rsi
  struct _Unwind_Exception *v20; // r14

  v12 = (const char *)a3;
  v13 = _mm_loadh_ps((const double *)(*(_QWORD *)a6 + 24LL));
  v14 = *(_QWORD *)(*(_QWORD *)a6 + 8LL);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_DWORD *)(a1 + 8) = -16777212;
  *(_DWORD *)(a1 + 12) = a4 & 0xFFFFFFFB;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 48) = v14;
  v15 = (_QWORD *)(a1 + 80);
  *(__m128 *)(a1 + 56) = v13;
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
    *v15 = 0;
    v15 += 3;
    *((_OWORD *)v15 - 1) = 0;
  }
  while ( v15 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v16 = *(unsigned int *)(a1 + 12);
  v17 = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v20 = (struct _Unwind_Exception *)interr(3449, v12, v16, v17, 0.0);
        v6 = *(_QWORD **)(a1 + 192);
        if ( v6 )
          sub_141CE0(v6);
        sub_3A42A0((__int64 *)(a1 + 184));
        *(_QWORD *)a1 = &stru_86F6A0;
        v7 = (__int64 *)(a1 + 152);
        v8 = (__int64 *)(a1 + 56);
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            v7[1] = 0;
            qfree(v9, v12);
          }
          v7 -= 3;
          if ( v8 == v7 )
            _Unwind_Resume(v20);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v16 & 0xFE07FFFF;
  }
  *(_QWORD *)a1 = til_chooser_t___vtable;
  *(_QWORD *)(a1 + 184) = *a5;
  *a5 = 0;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)a6;
  *(_QWORD *)a6 = 0;
  result = *(_QWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 72) = (_DWORD)v12;
  v19 = *(_QWORD *)(result + 48);
  if ( v19 )
    return filter_tlc(*(_QWORD *)(a1 + 184), v19, *(_QWORD *)(result + 56), v17, 0.0);
  return result;
}
