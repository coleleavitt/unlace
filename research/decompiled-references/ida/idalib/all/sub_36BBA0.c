__int64 __fastcall sub_36BBA0(_QWORD *a1)
{
  const char *v1; // rbx
  _BOOL4 v2; // ebp
  __int64 func; // rax

  v1 = haystack;
  v2 = a1[9] != 0;
  if ( a1[6] )
    v1 = (const char *)a1[5];
  func = get_func(a1[1]);
  set_func_cmt(func, v1, v2);
  return 0;
}
