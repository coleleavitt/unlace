bool __fastcall sub_1ECE60(__int16 *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int16 *v5; // rbx
  int v6; // eax
  __int64 v7; // r12
  _QWORD *v8; // rbx
  struct _Unwind_Exception *v10; // rbp

  v5 = a1;
  if ( *((_BYTE *)a1 + 968) )
  {
    if ( !*((_QWORD *)a1 + 53) )
      goto LABEL_12;
    v6 = *((_DWORD *)a1 + 104);
    if ( v6 == 2 )
    {
      a1 = *((__int16 **)a1 + 112);
    }
    else if ( v6 == 3 )
    {
      a1 = *((__int16 **)a1 + 113);
    }
    else
    {
      a1 = nullptr;
      if ( v6 == 1 )
        a1 = *((__int16 **)v5 + 111);
    }
  }
  else
  {
    a1 = nullptr;
  }
  sub_176E70((QT::QCoreApplication *)a1);
  v7 = *((_QWORD *)v5 + 53);
  if ( !v7 )
  {
LABEL_12:
    v10 = (struct _Unwind_Exception *)sub_1E69C0(a5, (__int64)a1, a2, a3, a4);
    operator delete(v5, 0x10u);
    _Unwind_Resume(v10);
  }
  *(_DWORD *)a2 = v5[207];
  v8 = (_QWORD *)operator new(0x10u);
  v8[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *v8 = &place_sync_pos_t___vtable;
  *(_QWORD *)(a2 + 8) = v8;
  return v8 != nullptr;
}
