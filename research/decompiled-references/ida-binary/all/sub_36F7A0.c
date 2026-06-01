__int64 __fastcall sub_36F7A0(__int64 a1, const char *a2)
{
  __int64 v2; // r14
  _QWORD *v3; // r12
  _QWORD *v4; // rbp
  _QWORD *v6; // rax
  __m128i v7; // xmm0
  double v8; // xmm0_8
  __int64 v9; // rdx
  int v10; // eax
  bool v11; // cc
  __int64 v12; // rsi
  __int64 v14; // rax
  struct _Unwind_Exception *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdi

  v3 = (_QWORD *)(a1 + 80);
  v4 = (_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 8) = 0x20284FF000004LL;
  *(_QWORD *)(a1 + 40) = "Patched bytes";
  *(_OWORD *)(a1 + 16) = -1;
  v6 = (_QWORD *)(a1 + 80);
  v7 = _mm_loadl_epi64((const __m128i *)&off_867600);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)&off_8675E0);
  v8 = 0.0;
  do
  {
    *v6 = 0;
    v6 += 3;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( v4 != v6 );
  *(_DWORD *)(a1 + 176) = 0;
  v9 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v15 = (struct _Unwind_Exception *)interr(3449, a2, v9, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v16 = *(_QWORD *)(a1 + 200);
        if ( v16 )
        {
          *(_QWORD *)(a1 + 208) = 0;
          v8 = qfree(v16, a2);
        }
        *(_QWORD *)(a1 + 184) = &off_86FB08;
        remove_event_listener(v2);
        *(_QWORD *)a1 = &stru_86F6A0;
        while ( 1 )
        {
          v17 = *(v4 - 3);
          v4 -= 3;
          if ( v17 )
          {
            v4[1] = 0;
            v8 = qfree(v17, a2, v8);
          }
          if ( v4 == v3 )
            _Unwind_Resume(v15);
        }
      }
      BUG();
    }
    v9 = (unsigned int)v9 & 0xFE07FFFF;
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v9;
  }
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)a1 = pb_chooser_t___vtable;
  *(_QWORD *)(a1 + 184) = pb_chooser_t___vtable_at__184;
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  v10 = *(_DWORD *)(get_eah(a1, a2, v9) + 24);
  v11 = *(_QWORD *)(a1 + 120) <= 9u;
  *(_DWORD *)(a1 + 72) = 204;
  v12 = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 224) = v10;
  if ( v11 )
  {
    v14 = qvector_reserve(a1 + 104, v12, 10, 1);
    *(_QWORD *)(a1 + 104) = v14;
    v12 = v14;
  }
  *(_QWORD *)(a1 + 112) = 10;
  *(_QWORD *)v12 = 0x2E2E747265766552LL;
  *(_BYTE *)(v12 + 8) = 46;
  *(_BYTE *)(*(_QWORD *)(a1 + 104) + 9LL) = 0;
  return hook_event_listener(3, a1 + 184, 0, 1);
}
