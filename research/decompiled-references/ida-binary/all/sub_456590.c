__int64 __fastcall sub_456590(__int64 a1, const char *a2)
{
  double v2; // xmm0_8
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r15
  _QWORD *v6; // r12
  __m128i v8; // xmm0
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  int v12; // eax
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 result; // rax
  struct _Unwind_Exception *v18; // rbp
  _QWORD *v19; // [rsp+0h] [rbp-40h]

  v6 = (_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 8) = 0xF0444000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v8 = _mm_loadl_epi64((const __m128i *)&off_86BD90);
  *(_QWORD *)a1 = &stru_86F6A0;
  v9 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = 6;
  *(_DWORD *)(a1 + 72) = -1;
  v19 = (_QWORD *)(a1 + 80);
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)off_86BD60);
  do
  {
    *v9 = 0;
    v9 += 3;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( v9 != v6 );
  *(_DWORD *)(a1 + 176) = 0;
  v10 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v18 = (struct _Unwind_Exception *)interr(3449, a2, v10, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v2 = sub_4564C0((__int64 *)(a1 + 336), a2);
        *(_QWORD *)(a1 + 184) = &unk_8729E8;
        unbind_event_handler_all(v5);
        v3 = *(_QWORD *)(a1 + 192);
        if ( v3 )
        {
          *(_QWORD *)(a1 + 200) = 0;
          v2 = qfree(v3, a2, v2);
        }
        *(_QWORD *)a1 = &stru_86F6A0;
        while ( 1 )
        {
          v4 = *(v6 - 3);
          v6 -= 3;
          if ( v4 )
          {
            v6[1] = 0;
            v2 = qfree(v4, a2, v2);
          }
          if ( v6 == v19 )
            _Unwind_Resume(v18);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v10 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)a1 = users_chooser_t___vtable;
  *(_QWORD *)(a1 + 184) = users_chooser_t___vtable_at__184;
  v11 = QT::QCoreApplication::self;
  *(_OWORD *)(a1 + 200) = 0;
  v12 = sub_47A0E0(v11, "add_user", "resources/icons/actions");
  v13 = QT::QCoreApplication::self;
  *(_DWORD *)(a1 + 224) = 1;
  *(_DWORD *)(a1 + 248) = v12;
  *(_QWORD *)(a1 + 232) = "Add new user...";
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 216) = stdact_desc_t___vtable;
  *(_DWORD *)(a1 + 288) = sub_47A0E0(v13, "delete_user", "resources/icons/actions");
  v14 = QT::QCoreApplication::self;
  *(_QWORD *)(a1 + 272) = "Delete user...";
  *(_DWORD *)(a1 + 264) = 1;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 256) = stdact_desc_t___vtable;
  *(_DWORD *)(a1 + 328) = sub_47A0E0(v14, "edit_user", "resources/icons/actions");
  *(_DWORD *)(a1 + 304) = 1;
  *(_QWORD *)(a1 + 312) = "Edit user...";
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 296) = stdact_desc_t___vtable;
  *(_QWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  v15 = sub_426230(v14, "edit_user");
  v16 = sub_417090((__int64)v15);
  bind_event_handler(v16, a1 + 184);
  result = sub_47A0E0(QT::QCoreApplication::self, "users_widget", "resources/icons/widgets");
  *(_DWORD *)(a1 + 72) = result;
  return result;
}
