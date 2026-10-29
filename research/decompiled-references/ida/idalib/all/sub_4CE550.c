__int64 __fastcall sub_4CE550(__int64 *a1, void *a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  if ( (sub_3BE900(a1, (unsigned __int64)a2, 4) & 0x4000) == 0 )
    return 0;
  sub_3CFE00(a1, a2, 0x8000);
  sub_4CB130(a1, (__int64)a2);
  if ( (unsigned __int8)sub_4CDF30(a1, (unsigned __int64)a2) )
  {
    sub_4CB2B0(a1, (__int64)a2);
  }
  else
  {
    sub_4E0050(*a1, a2);
    sub_52CCE0(2, 0, (_DWORD)a2, v3, v4, v5);
    mark_builtin_widgets(4, 0, 1);
  }
  return 1;
}
