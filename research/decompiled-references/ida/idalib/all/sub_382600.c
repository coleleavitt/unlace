unsigned __int64 __fastcall sub_382600(__int64 a1, __int64 a2)
{
  const char *v4; // rdx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rsi
  const char *v8; // rdx
  char v9; // al
  int v10; // eax
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v15 = 0;
  ptr = nullptr;
  get_ea_name(&ptr, *(_QWORD *)(a2 + 24), 23, 0);
  v4 = haystack;
  if ( (_QWORD)v15 )
    v4 = (const char *)ptr;
  sub_3804E0(a1, (__int64)"START OF FUNCTION CHUNK FOR %s", v4);
  v12 = 0;
  func_parent_iterator_set(&v12, a2);
  v5 = v12;
  v13 = 0;
  if ( v12 )
  {
    if ( *(char *)(v12 + 17) >= 0 )
      goto LABEL_13;
    if ( *(int *)(v12 + 32) > 0 )
    {
      while ( 1 )
      {
        v6 = v13;
        v7 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8LL * v13);
        if ( *(_QWORD *)(a2 + 24) != v7 )
        {
          get_ea_name(&ptr, v7, 23, 0);
          v8 = haystack;
          if ( (_QWORD)v15 )
            v8 = (const char *)ptr;
          v9 = sub_3804E0(a1, (__int64)"  ADDITIONAL PARENT FUNCTION %s", v8);
          v5 = v12;
          if ( v9 )
            break;
          v6 = v13;
        }
        v10 = v6 + 1;
        if ( v10 >= *(_DWORD *)(v5 + 32) )
          break;
        v13 = v10;
      }
    }
    if ( v5 )
LABEL_13:
      lock_func_range(v5, 0);
  }
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  return v16 - __readfsqword(0x28u);
}
