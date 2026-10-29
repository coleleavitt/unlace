__int64 __fastcall sub_52F580(__int64 *a1, __int64 a2, const char *a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 *v6; // r15
  __int64 v7; // rax
  void *v8; // rbx
  __int64 *v9; // rbx
  unsigned __int64 i; // r12
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rbp
  const char *v14; // rcx
  unsigned __int8 v16; // [rsp+Fh] [rbp-79h]
  void *v17; // [rsp+10h] [rbp-78h] BYREF
  __int128 v18; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+38h] [rbp-50h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v3 = *a1;
  v4 = *(_QWORD *)a2;
  v21 = __readfsqword(0x28u);
  v6 = *(__int64 **)(v3 + 1808);
  v7 = *v6;
  v18 = 0;
  v17 = nullptr;
  if ( (unsigned __int8)sub_6B9E00(*(_QWORD *)(v7 + 1672), &v17, v4) )
  {
    sub_6B9740(&ptr, a3);
    v8 = ptr;
    a3 = haystack;
    if ( (_QWORD)v20 )
      a3 = (const char *)ptr;
  }
  else
  {
    v8 = nullptr;
  }
  ptr = (void *)sub_3BDD60(*(_QWORD **)(*v6 + 1672), v4);
  v16 = sub_7BF170(&ptr, *v6, a3, 0);
  if ( v8 )
    qfree(v8);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v16 )
  {
    v9 = *(__int64 **)(a2 + 16);
    for ( i = 0; i < *(unsigned int *)(a2 + 8); v9 += 4 )
    {
      v11 = *v9;
      ptr = nullptr;
      v20 = 0;
      v12 = sub_52ED50(a1, (__int64)&ptr, v11);
      v13 = ptr;
      if ( v12 > 0 )
      {
        v14 = haystack;
        if ( (_QWORD)v20 )
          v14 = (const char *)ptr;
        sub_52F380(v6, (__int64 *)a2, *v9, (__int64)v14);
      }
      if ( v13 )
        qfree(v13);
      ++i;
    }
  }
  return v16;
}
