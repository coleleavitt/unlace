__int64 __fastcall make_name_user(void *a1)
{
  _QWORD *v1; // rbp
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( (sub_3BE900(v1, (unsigned __int64)a1, 4) & 0x4000) == 0 )
    return 0;
  sub_3D00D0(v1, a1, 0x8000);
  if ( (unsigned __int8)sub_4CDF30(v1, (unsigned __int64)a1) )
  {
    sub_4CB2B0(v1, (__int64)a1);
  }
  else
  {
    sub_4E0050(*v1, a1);
    sub_52CCE0(2, 0, (_DWORD)a1, v3, v4, v5);
    mark_builtin_widgets(4, 0, 1);
  }
  return 1;
}
