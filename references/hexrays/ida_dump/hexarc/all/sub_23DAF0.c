__int64 __fastcall sub_23DAF0(__int64 a1, _QWORD *a2)
{
  __int64 tinfo_size; // r12

  if ( *(_DWORD *)(a1 + 8) == 48
    && (tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0), get_tinfo_size(0, *a2, 0) == tinfo_size) )
  {
    copy_tinfo_t(a1 + 48, a2);
  }
  else
  {
    sub_23DA00((__int64 *)a1, (__int64)a2);
  }
  return a1;
}
