__int64 __fastcall sub_3786A0(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r14d
  unsigned int v5; // r15d
  __int64 v6; // rsi
  const char *v7; // rdi
  __int64 v9; // [rsp+0h] [rbp-80h] BYREF
  void *v10; // [rsp+8h] [rbp-78h] BYREF
  __int128 v11; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-60h]
  __int128 v13; // [rsp+28h] [rbp-58h]
  unsigned __int64 v14; // [rsp+40h] [rbp-40h]

  v2 = a1[10];
  v3 = a1[18];
  v14 = __readfsqword(0x28u);
  v5 = a1[26];
  v6 = a1[2];
  v11 = 0;
  v9 = 0;
  v10 = nullptr;
  ptr = nullptr;
  v13 = 0;
  *(_DWORD *)(a2 + 8) = -1;
  if ( (unsigned __int8)get_type_by_tid(&v9, v6)
    && get_tinfo_property4(v9, 294, &v10, v2, v5, (unsigned __int8)v3) != -1 )
  {
    v7 = haystack;
    if ( (_QWORD)v11 )
      v7 = (const char *)v10;
    *(_DWORD *)(a2 + 8) = get_named_type_tid(v7);
  }
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  clear_tinfo_t(&v9);
  return 0;
}

