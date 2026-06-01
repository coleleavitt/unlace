__int64 __fastcall sub_36A610(_QWORD *a1, __int64 a2)
{
  const char *v2; // rbp
  bool v3; // zf
  __int64 v4; // rdx
  const char *v5; // rdx
  __int64 tinfo_by_edm_name; // rax
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v2 = haystack;
  v3 = a1[6] == 0;
  v4 = a1[1];
  v11 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = (const char *)a1[5];
  *(_QWORD *)(a2 + 8) = 0;
  ptr = nullptr;
  v10 = 0;
  if ( (unsigned __int8)sub_6B9E00(*(_QWORD *)(qword_2CCB598 + 1672), &ptr, v4) )
  {
    v5 = haystack;
    v8 = 0;
    if ( (_QWORD)v10 )
      v5 = (const char *)ptr;
    tinfo_by_edm_name = get_tinfo_by_edm_name(&v8, 0, v5);
    if ( tinfo_by_edm_name != -1 )
      *(_QWORD *)(a2 + 8) = (unsigned int)set_tinfo_property4(&v8, 23, tinfo_by_edm_name, v2, 0, 0) == 0;
    clear_tinfo_t(&v8);
  }
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  return 0;
}
