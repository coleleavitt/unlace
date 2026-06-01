__int64 __fastcall sub_415A10(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  const char *v4; // rsi
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5 = 0;
  if ( get_tinfo_by_edm_name(&v5, 0, a2) == -1 )
  {
    v2 = 0;
  }
  else
  {
    ptr = nullptr;
    v7 = 0;
    if ( (v5 & 0x100) != 0 && (get_tinfo_pdata(&ptr, v5, 0), (_QWORD)v7) )
      v4 = (const char *)ptr;
    else
      v4 = haystack;
    set_error_string(0, v4);
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      qfree(ptr);
    }
    v2 = -31;
  }
  clear_tinfo_t(&v5);
  return v2;
}
