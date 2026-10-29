int __fastcall sub_6511B0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, const char *a5)
{
  __int64 v8; // r15
  int v9; // eax
  int result; // eax

  v8 = *(_QWORD *)(a1 + 1672);
  v9 = *(_DWORD *)(v8 + 2608) + 1;
  if ( *(_DWORD *)(v8 + 2608) == -1 )
    v9 = 1;
  *(_DWORD *)(v8 + 2608) = v9;
  mark_builtin_widgets(1024, 0, 1);
  result = sub_6B8D40(v8);
  if ( (a3 & 1) == 0 )
    return sub_64C820(a1, a2, a3, a4, a5);
  return result;
}
