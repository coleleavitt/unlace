__int64 __fastcall sub_2DC230(_QWORD *a1, const char *a2)
{
  __int64 *v3; // r12
  void (__fastcall *v5)(_QWORD); // rax
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  __int64 v9; // rax

  v3 = (__int64 *)a1[310];
  if ( (_BYTE)a2 )
  {
    if ( v3 )
      return 0;
    v8 = *(__int64 (**)())(*a1 + 1144LL);
    if ( v8 == sub_2DB470 )
      return 0;
    v9 = v8();
    a1[310] = v9;
    if ( !v9 )
      return 0;
  }
  else
  {
    if ( !v3 )
      return 0;
    v5 = *(void (__fastcall **)(_QWORD))(*v3 + 8);
    if ( (char *)v5 == (char *)merge_progress_chooser_t__::vfunc_1 )
    {
      v6 = v3 + 19;
      *v3 = (__int64)merge_progress_chooser_t___vtable;
      v3[23] = (__int64)&merge_progress_chooser_slotpoline_t___vtable;
      QT::QObject::~QObject((QT::QObject *)(v3 + 23));
      *v3 = (__int64)&stru_86F6A0;
      do
      {
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
        }
        v6 -= 3;
      }
      while ( v6 != v3 + 7 );
      qfree(v3, a2);
    }
    else
    {
      v5(a1[310]);
    }
    a1[310] = 0;
  }
  sub_4E4640(a1 + 38, 7, 0);
  return 1;
}
