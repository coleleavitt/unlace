_BOOL8 __fastcall sub_6389F0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rbx
  const char *v10; // rsi
  const char *v11; // rdi
  _BOOL8 v12; // rbp
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+8h] [rbp-50h]
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 120) )
  {
    if ( !under_debugger )
      interr(2016);
    BUG();
  }
  v6 = a3 << 6;
  sub_6384A0((__int64)&ptr, a1, (a3 << 6) + *(_QWORD *)(a1 + 112), 0, a5, a6);
  sub_6384A0((__int64)&v16, a2, *(_QWORD *)(a2 + 112) + v6, 0, v7, v8);
  v9 = v16;
  v10 = (const char *)v16;
  if ( !v17 )
    v10 = haystack;
  v11 = haystack;
  if ( v15 )
    v11 = (const char *)ptr;
  v12 = strcmp(v11, v10) != 0;
  if ( v9 )
  {
    v17 = 0;
    qfree(v9);
  }
  if ( ptr )
  {
    v15 = 0;
    qfree(ptr);
  }
  return v12;
}
