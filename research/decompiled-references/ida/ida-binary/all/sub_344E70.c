unsigned __int64 __fastcall sub_344E70(__int64 a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rbp
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r12
  __m128i v12; // xmm0
  _QWORD *v13; // rax
  __int64 v14; // rdx
  struct _Unwind_Exception *v16; // r13

  *(_QWORD *)(a1 + 8) = 0x800FF000004LL;
  *(_QWORD *)(a1 + 40) = "Navigation history";
  *(_OWORD *)(a1 + 16) = -1;
  v12 = _mm_loadl_epi64((const __m128i *)&off_866930);
  v13 = (_QWORD *)(a1 + 80);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 3;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)&off_8BCA10);
  do
  {
    *v13 = 0;
    v13 += 3;
    *((_OWORD *)v13 - 1) = 0;
  }
  while ( v13 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v14 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v16 = (struct _Unwind_Exception *)interr(3449, a2, v14, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        sub_194630((__int64 *)(a1 + 232), (__int64)a2, v2, v3, v4);
        sub_194630((__int64 *)(a1 + 200), (__int64)a2, v5, v6, v7);
        *(_QWORD *)(a1 + 184) = &off_86FB08;
        remove_event_listener(v11);
        *(_QWORD *)a1 = &stru_86F6A0;
        v8 = (__int64 *)(a1 + 152);
        v9 = (__int64 *)(a1 + 56);
        while ( 1 )
        {
          v10 = *v8;
          if ( *v8 )
          {
            v8[1] = 0;
            qfree(v10, a2);
          }
          v8 -= 3;
          if ( v9 == v8 )
            _Unwind_Resume(v16);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v14 & 0xFE07FFFF;
  }
  *(_QWORD *)a1 = navigation_history_chooser_t___vtable;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 184) = navigation_history_chooser_t::view_events_listener_t___vtable;
  hook_event_listener(5, a1 + 184, 0, 0);
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 224) = -1;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  return sub_3448E0(a1, (const char *)(a1 + 184));
}
