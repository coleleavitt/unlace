__int64 __fastcall sub_451D30(__int64 a1, const char *a2)
{
  double v2; // xmm0_8
  __int64 v3; // rdi
  __int64 *v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r12
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  struct _Unwind_Exception *v15; // r14

  *(_QWORD *)(a1 + 8) = 0x2080440000004LL;
  *(_QWORD *)(a1 + 40) = "Commits";
  *(_OWORD *)(a1 + 16) = -1;
  v9 = _mm_loadl_epi64((const __m128i *)&off_86BC10);
  v10 = (_QWORD *)(a1 + 80);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 5;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&off_86BBE0);
  do
  {
    *v10 = 0;
    v10 += 3;
    *((_OWORD *)v10 - 1) = 0;
  }
  while ( v10 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v11 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v15 = (struct _Unwind_Exception *)interr(3449, a2, v11, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v2 = sub_451C90((__int64 *)(a1 + 216), a2);
        *(_QWORD *)(a1 + 184) = &unk_8729E8;
        unbind_event_handler_all(v7);
        v3 = *(_QWORD *)(a1 + 192);
        if ( v3 )
        {
          *(_QWORD *)(a1 + 200) = 0;
          v2 = qfree(v3, a2, v2);
        }
        *(_QWORD *)a1 = &stru_86F6A0;
        v4 = (__int64 *)(a1 + 152);
        v5 = (__int64 *)(a1 + 56);
        while ( 1 )
        {
          v6 = *v4;
          if ( *v4 )
          {
            v4[1] = 0;
            v2 = qfree(v6, a2, v2);
          }
          v4 -= 3;
          if ( v5 == v4 )
            _Unwind_Resume(v15);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v11 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)a1 = commits_chooser_t___vtable;
  *(_QWORD *)(a1 + 184) = commits_chooser_t___vtable_at__184;
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v12 = sub_426230(a1, a2);
  v13 = sub_417090((__int64)v12);
  bind_event_handler(v13, a1 + 184);
  result = sub_47A0E0(QT::QCoreApplication::self, "commits_widget", "resources/icons/widgets");
  *(_DWORD *)(a1 + 72) = result;
  return result;
}
