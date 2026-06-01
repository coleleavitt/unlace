__int64 __fastcall mr_chooser_t__::vfunc_11(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx

  v2 = (_QWORD *)a1[24];
  if ( (unsigned __int64)a2 >= v2[1] )
    return -1;
  v3 = (_QWORD *)(*v2 + 80LL * (_QWORD)a2);
  if ( !v3
    || (unsigned int)sub_1698A0(
                       1,
                       (int)"HIDECANCEL\nAUTOHIDE REGISTRY\nDo you really want to delete region %a..%a?",
                       *v3,
                       v3[1]) != 1 )
  {
    return -1;
  }
  sub_2631A0((_QWORD *)a1[24], a2, (__int64)a1, v4, v5, v6);
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  v9 = v8;
  if ( !v8 )
    return -1;
  result = v8 - 1;
  if ( (unsigned __int64)a2 < v9 )
    return (__int64)a2;
  return result;
}
