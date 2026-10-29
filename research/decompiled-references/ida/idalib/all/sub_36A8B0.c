__int64 __fastcall sub_36A8B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // rsi
  __int64 v5; // rax
  void *v6; // rdi
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v9; // [rsp+8h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  ptr = nullptr;
  if ( (unsigned __int8)get_tid_name(&ptr, v3) )
  {
    v4 = haystack;
    if ( (_QWORD)v9 )
      v4 = (const char *)ptr;
    v5 = (unsigned __int8)del_named_type(0, v4, 1);
  }
  else
  {
    v5 = 0;
  }
  v6 = ptr;
  *(_QWORD *)(a2 + 8) = v5;
  if ( v6 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v6);
  }
  return 0;
}
