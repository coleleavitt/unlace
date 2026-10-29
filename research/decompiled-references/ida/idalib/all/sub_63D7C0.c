unsigned __int64 __fastcall sub_63D7C0(__int64 a1, __int64 a2, int a3)
{
  int v3; // r12d
  int v4; // ebx
  int first_free_extra_cmtidx; // eax
  int v6; // r13d
  const char *v7; // rdx
  int v8; // eax
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v3 = 1000;
  v12 = __readfsqword(0x28u);
  v4 = a3;
  if ( a3 > 999 )
  {
    v3 = 3000;
    if ( a3 <= 1999 )
      v3 = 2000;
  }
  first_free_extra_cmtidx = get_first_free_extra_cmtidx(a2, a3);
  ptr = nullptr;
  v6 = first_free_extra_cmtidx;
  v11 = 0;
  if ( v4 >= first_free_extra_cmtidx )
    first_free_extra_cmtidx = v4;
  if ( v3 > first_free_extra_cmtidx )
  {
    do
    {
      if ( get_extra_cmt(&ptr, a1, (unsigned int)v4) < 0 )
        break;
      v7 = haystack;
      if ( (_QWORD)v11 )
        v7 = (const char *)ptr;
      update_extra_cmt(a2, (unsigned int)v6, v7);
      ++v4;
      v8 = ++v6;
      if ( v4 >= v6 )
        v8 = v4;
    }
    while ( v3 > v8 );
    if ( ptr )
    {
      *(_QWORD *)&v11 = 0;
      qfree(ptr);
    }
  }
  return v12 - __readfsqword(0x28u);
}
