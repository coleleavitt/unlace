bool __fastcall sub_15A490(__int16 *a1, __int64 a2)
{
  __int16 *v2; // rbx
  __int64 v3; // r12
  _QWORD *v4; // rbx
  struct _Unwind_Exception *v6; // rbp

  v2 = a1;
  if ( *((_BYTE *)a1 + 992) )
  {
    if ( !*((_QWORD *)a1 + 60) )
      goto LABEL_8;
    a1 = nullptr;
    if ( *((_DWORD *)v2 + 118) == 1 )
      a1 = *((__int16 **)v2 + 107);
  }
  else
  {
    a1 = nullptr;
  }
  sub_91A70((unsigned __int8 *)a1);
  v3 = *((_QWORD *)v2 + 60);
  if ( !v3 )
  {
LABEL_8:
    v6 = (struct _Unwind_Exception *)sub_158B30(a1);
    operator delete(v2, 0x10u);
    _Unwind_Resume(v6);
  }
  *(_DWORD *)a2 = v2[235];
  v4 = (_QWORD *)operator new(0x10u);
  v4[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *v4 = &off_235538;
  *(_QWORD *)(a2 + 8) = v4;
  return v4 != nullptr;
}

