__int64 __fastcall sub_279C10(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 *v2; // rbx
  __int64 v3; // rdi
  QT::QObject *v4; // r12
  char v5; // al
  bool v6; // zf
  _UNKNOWN **v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  struct _Unwind_Exception *v11; // r13

  v5 = is_diff_merge_mode();
  *(_QWORD *)a1 = &stru_86F6A0;
  v6 = v5 == 0;
  *(_QWORD *)(a1 + 8) = 0xAA020000FF000004LL;
  v7 = &off_860780;
  if ( !v6 )
    v7 = &off_860770;
  *(_QWORD *)(a1 + 40) = "Progress";
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 2;
  *(_QWORD *)(a1 + 56) = "@";
  *(_DWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 64) = v7;
  v8 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( v8 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v9 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v11 = (struct _Unwind_Exception *)interr(3449, "@", v9, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        *(_QWORD *)(a1 + 184) = &merge_progress_chooser_slotpoline_t___vtable;
        QT::QObject::~QObject(v4);
        *(_QWORD *)a1 = &stru_86F6A0;
        v1 = (__int64 *)(a1 + 152);
        v2 = (__int64 *)(a1 + 56);
        while ( 1 )
        {
          v3 = *v1;
          if ( *v1 )
          {
            v1[1] = 0;
            qfree(v3, "@");
          }
          v1 -= 3;
          if ( v1 == v2 )
            _Unwind_Resume(v11);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v9 & 0xFE07FFFF;
  }
  *(_QWORD *)a1 = merge_progress_chooser_t___vtable;
  sub_2799D0((QT::QObject *)(a1 + 184), a1, 0.0);
  *(_QWORD *)(a1 + 208) = 0;
  result = get_merge_handlers(a1 + 208);
  *(_QWORD *)(a1 + 216) = result;
  *(_QWORD *)(a1 + 224) = 0;
  return result;
}
