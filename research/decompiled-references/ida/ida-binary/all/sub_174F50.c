void __fastcall sub_174F50(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rcx

  if ( a1[29] && (*(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 272LL))() )
  {
    v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL);
    if ( v4 == sub_172FC0 )
      (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, 0, 0);
    else
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v4)(a1, a2, a3);
  }
}
