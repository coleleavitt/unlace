__int64 __fastcall snapman_t__::vfunc_13(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8544) + 16 * a2);
  if ( (unsigned int)sub_1698A0(
                       0,
                       (int)"AUTOHIDE NONE\nHIDECANCEL\nDo you want to restore the following database snapshot:\n%s",
                       v2 + 10) == 1 )
  {
    sub_31F500(a1, v2, 0, 0);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8584) + 64LL))(*(_QWORD *)(a1 + 8584), 1);
  }
  return -1;
}
