__int64 __fastcall sub_3829E0(_QWORD *a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbp
  unsigned __int64 item_end; // rax

  sub_381B20((__int64)a1, a2);
  v4 = *(_QWORD *)(a1[12] + 8LL);
  if ( !v4 )
  {
    a2 = " ";
    (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 136LL))(a1, " ", 0);
    v4 = *(_QWORD *)(a1[12] + 8LL);
  }
  item_end = get_item_end(a1[2], a2, v2, v3);
  sub_382820((__int64)a1, item_end);
  return (unsigned int)v4;
}
