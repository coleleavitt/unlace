__int64 __fastcall sub_37CBF0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  const char *v4; // rsi
  const char *v5; // rsi
  unsigned int v6; // ebx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v9; // [rsp+8h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 16) == 0;
  v10 = __readfsqword(0x28u);
  v9 = 0;
  v4 = haystack;
  ptr = nullptr;
  if ( !v2 )
    v4 = *(const char **)(a1 + 8);
  if ( (unsigned __int8)eval_idc_snippet(0, v4, &ptr, 0) )
  {
    *(_QWORD *)(a2 + 8) = 1;
    v6 = 0;
  }
  else
  {
    v5 = haystack;
    if ( (_QWORD)v9 )
      v5 = (const char *)ptr;
    v6 = throw_idc_exception(a2, v5);
  }
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  return v6;
}
