__int64 __fastcall sub_37D2F0(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  void (__fastcall *v3)(__int64, __int64, _QWORD); // r12
  __int64 v4; // rax

  result = qword_2CA1698;
  if ( *(_QWORD *)(qword_2CA1698 + 1240) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, a2);
    v3 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL);
    v4 = closing_comment();
    v3(a1, v4, 0);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2);
  }
  return result;
}

