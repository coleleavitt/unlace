__int64 (__fastcall **__fastcall sub_552010(__int64 a1, const char *a2, __int64 a3))()
{
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rdi
  const char *v6; // rax
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  struct _Unwind_Exception *v13; // r14

  v6 = "License chooser";
  if ( (_BYTE)a3 )
    v6 = "Borrow chooser";
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 40) = v6;
  *(_OWORD *)(a1 + 16) = -1;
  v8 = _mm_loadl_epi64((const __m128i *)&off_86E5D0);
  v9 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 8) = 0x20082FF000004LL;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 6;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)off_86E5A0);
  do
  {
    *v9 = 0;
    v9 += 3;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v9 );
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
            qfree(v5, a2);
          }
          v3 -= 3;
          if ( v3 == v4 )
            _Unwind_Resume(v13);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = v11;
    *(_DWORD *)(a1 + 12) = v10 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)a1 = liblicui::license_chooser_t___vtable;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_BYTE *)(a1 + 240) = a3;
  *(_DWORD *)(a1 + 72) = 126;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  return liblicui::license_chooser_t___vtable;
}
