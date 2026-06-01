__int64 __fastcall sub_5EE240(__int64 *a1, int a2, __int64 a3, int a4)
{
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+Ch] [rbp-64h]
  __int64 v8; // [rsp+18h] [rbp-58h] BYREF
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v10; // [rsp+28h] [rbp-48h]
  unsigned __int64 v11; // [rsp+38h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  v8 = 0;
  v7 = a3;
  v5 = sub_674C60(a1, &v8, a3);
  if ( (_BYTE)v5 )
  {
    ptr = nullptr;
    v10 = 0;
    if ( get_ea_name(&ptr, v7, 0, 0) < 0 )
      get_ea_name(&ptr, v7, 64, 0);
    sub_588980(a1, (char **)&ptr, (const char *)ptr, &v8, (a4 >> 4) & 1);
    v5 = print_tinfo(a2, 0, 0, 0, a4, (int)&v8, (__int64)ptr, 0);
    if ( ptr )
    {
      *(_QWORD *)&v10 = 0;
      qfree(ptr);
    }
  }
  clear_tinfo_t(&v8);
  return v5;
}

