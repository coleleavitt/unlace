unsigned __int64 __fastcall sub_42BE40(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 i; // rax
  const char *v7; // rdx
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  const char *v10; // rax
  const char *v11; // rcx
  __int64 v13; // [rsp+10h] [rbp-68h] BYREF
  __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  netnode_check(&v13, "$ desktops", 0, 0);
  if ( v13 != -1 )
  {
    v16 = 0;
    ptr = nullptr;
    for ( i = sub_7BF580(&v13, a2, &ptr, 72); i > 0; i = sub_7BF600(&v13, a2, &ptr, v11, 72) )
    {
      v7 = haystack;
      if ( (_QWORD)v16 )
        v7 = (const char *)ptr;
      v8 = sub_7BF490(&v13, a2, v7, 72);
      v9 = v8 - sub_631AD0(**(_QWORD **)(a2 + 1672), 29);
      if ( v9 >= *a3 && v9 < a3[1] )
        v8 = sub_631AD0(**(_QWORD **)(a2 + 1672), 29) + a4 + v9;
      v10 = haystack;
      if ( (_QWORD)v16 )
        v10 = (const char *)ptr;
      v14 = v8;
      sub_7BF4E0(&v13, a2, v10, &v14, 8, 72);
      v11 = haystack;
      if ( (_QWORD)v16 )
        v11 = (const char *)ptr;
    }
    if ( ptr )
    {
      *(_QWORD *)&v16 = 0;
      qfree(ptr);
    }
  }
  return v17 - __readfsqword(0x28u);
}
