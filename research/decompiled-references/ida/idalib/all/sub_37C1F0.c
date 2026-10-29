__int64 __fastcall sub_37C1F0(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // zf
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r14
  size_t v8; // rax
  int v9; // eax
  void *v10; // rdi
  size_t v12; // [rsp+0h] [rbp-98h]
  size_t n; // [rsp+8h] [rbp-90h]
  __int64 v14; // [rsp+18h] [rbp-80h] BYREF
  void *v15; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-60h]
  __int128 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  unsigned __int64 v20; // [rsp+58h] [rbp-40h]

  v2 = haystack;
  v3 = a1[6] == 0;
  v20 = __readfsqword(0x28u);
  v5 = a1[1];
  if ( !v3 )
    v2 = (const char *)a1[5];
  v6 = a1[9];
  v7 = a1[13];
  *(_QWORD *)(a2 + 8) = -5;
  v14 = 0;
  if ( (unsigned __int8)get_type_by_tid(&v14, v5) )
  {
    v15 = nullptr;
    ptr = nullptr;
    v16 = 0;
    v18 = 0;
    if ( v2 )
    {
      v8 = strlen(v2);
      if ( v8 )
      {
        n = v8;
        v12 = v8 + 1;
        v15 = (void *)qvector_reserve(&v15, 0, v8 + 1, 1);
        *(_QWORD *)&v16 = v12;
        memmove(v15, v2, n);
        *((_BYTE *)v15 + n) = 0;
      }
    }
    v19 = v6;
    v9 = set_tinfo_property4(&v14, 20, &v15, v7, -1, 0);
    v10 = ptr;
    *(_QWORD *)(a2 + 8) = v9;
    if ( v10 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v10);
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
  }
  clear_tinfo_t(&v14);
  return 0;
}
