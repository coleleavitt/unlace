__int64 __fastcall sub_60A170(__int64 *a1, int a2, __int64 a3, int a4)
{
  unsigned int v5; // ebx
  __int64 v8; // [rsp+18h] [rbp-58h] BYREF
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v10; // [rsp+28h] [rbp-48h]
  unsigned __int64 v11; // [rsp+38h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  v8 = 0;
  v5 = sub_694940(a1, &v8, a3);
  if ( (_BYTE)v5 )
  {
    ptr = nullptr;
    v10 = 0;
    if ( get_ea_name(&ptr, a3, 0, 0) < 0 )
      get_ea_name(&ptr, a3, 64, 0);
    sub_5A2A70(a1, (char **)&ptr, (const char *)ptr, &v8, (a4 >> 4) & 1);
    v5 = print_tinfo(a2, 0, 0, 0, a4, (unsigned int)&v8, (__int64)ptr, 0);
    if ( ptr )
    {
      *(_QWORD *)&v10 = 0;
      qfree(ptr);
    }
  }
  clear_tinfo_t(&v8);
  return v5;
}
