unsigned __int64 __fastcall sub_510C40(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  const char *v3; // rdx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  if ( a3 && sub_510AC0(*(_QWORD **)(*(_QWORD *)a1 + 1760LL), (__int64 *)&ptr, *a3, a3[2], 0) > 0 )
    v3 = (const char *)ptr;
  else
    v3 = "?";
  sub_3804E0(a2, (__int64)"end of '%s'", v3);
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr);
  }
  return v7 - __readfsqword(0x28u);
}
