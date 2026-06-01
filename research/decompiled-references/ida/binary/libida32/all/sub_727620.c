void __noreturn sub_727620(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rbx
  void *ptr; // [rsp+0h] [rbp-108h] BYREF
  __int128 v4; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-D0h]

  v2 = a1;
  v6 = __readfsqword(0x28u);
  if ( a1 )
    v2 = sub_780220(a1) + 24;
  ptr = nullptr;
  v4 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 15, 1);
  *(_QWORD *)&v4 = 15;
  strcpy((char *)ptr, "AUTOHIDE NONE\n");
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 8) > 1u )
      sub_357520((__int64 *)&ptr);
    sub_357520((__int64 *)&ptr);
  }
  va_start(va, a2);
  sub_357460((__int64 *)&ptr);
  sub_375400();
}

