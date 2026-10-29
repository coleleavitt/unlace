__int64 __fastcall sub_3791D0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  const char *v4; // rsi
  unsigned int v5; // ebx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 16) == 0;
  v9 = __readfsqword(0x28u);
  v8 = 0;
  v4 = haystack;
  ptr = nullptr;
  if ( !v2 )
    v4 = *(const char **)(a1 + 8);
  if ( (unsigned __int8)eval_idc_snippet(0, v4, &ptr, 0) )
  {
    *(_DWORD *)(a2 + 8) = 1;
    v5 = 0;
  }
  else
  {
    v5 = throw_idc_exception();
  }
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
  return v5;
}

