__int64 __fastcall sub_422920(__int64 a1, const char *a2)
{
  double v2; // xmm0_8
  __int64 v3; // rdi
  __int64 *v4; // r12
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r13
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  int v13; // eax
  _QWORD *v14; // rdi
  int v15; // eax
  _QWORD *v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 result; // rax
  struct _Unwind_Exception *v21; // rbp

  *(_QWORD *)(a1 + 8) = 0xF0443000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v9 = _mm_loadl_epi64((const __m128i *)&off_86AC28);
  v10 = (_QWORD *)(a1 + 80);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = 5;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&off_86AC00);
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
        v21 = (struct _Unwind_Exception *)interr(3449, a2, v11, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v2 = sub_422860((__int64 *)(a1 + 336), a2);
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
            _Unwind_Resume(v21);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v11 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)a1 = sites_chooser_t___vtable;
  *(_QWORD *)(a1 + 184) = sites_chooser_t___vtable_at__184;
  v12 = QT::QCoreApplication::self;
  *(_OWORD *)(a1 + 200) = 0;
  v13 = sub_47A0E0(v12, "add_site", "resources/icons/actions");
  v14 = QT::QCoreApplication::self;
  *(_DWORD *)(a1 + 224) = 1;
  *(_DWORD *)(a1 + 248) = v13;
  *(_QWORD *)(a1 + 216) = chooser_stdact_desc_t___vtable;
  *(_QWORD *)(a1 + 232) = "Add new site...";
  *(_QWORD *)(a1 + 240) = 0;
  v15 = sub_47A0E0(v14, "delete_site", "resources/icons/actions");
  v16 = QT::QCoreApplication::self;
  *(_QWORD *)(a1 + 256) = chooser_stdact_desc_t___vtable;
  *(_QWORD *)(a1 + 272) = "Delete site...";
  *(_DWORD *)(a1 + 264) = 1;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 288) = v15;
  v17 = sub_47A0E0(v16, "edit_site", "resources/icons/actions");
  *(_QWORD *)(a1 + 296) = chooser_stdact_desc_t___vtable;
  *(_DWORD *)(a1 + 304) = 1;
  *(_QWORD *)(a1 + 312) = "Edit site...";
  *(_QWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 328) = v17;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 360) = -1;
  *(_OWORD *)(a1 + 344) = 0;
  v18 = sub_426230(v16, "edit_site");
  v19 = sub_417090(v18);
  bind_event_handler(v19, a1 + 184);
  result = sub_47A0E0(QT::QCoreApplication::self, "sites_widget", "resources/icons/widgets");
  *(_DWORD *)(a1 + 72) = result;
  return result;
}
