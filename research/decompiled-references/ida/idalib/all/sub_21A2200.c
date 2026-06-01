_QWORD *__fastcall sub_21A2200(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rax
  void *v8; // rdi
  size_t v9; // r13
  void *src; // [rsp+0h] [rbp+0h] BYREF
  size_t n; // [rsp+8h] [rbp+8h]
  char vars10; // [rsp+10h] [rbp+10h]

  (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)a2 + 80LL))(&src, a2, a4);
  if ( (vars10 & 1) != 0 )
  {
    v6 = src;
    src = nullptr;
    *a1 = v6;
  }
  else
  {
    v8 = *(void **)(a3 + 32);
    v9 = n;
    if ( *(_QWORD *)(a3 + 24) - (_QWORD)v8 < n )
    {
      sub_227BF10(a3, src, n);
      *a1 = 0;
    }
    else
    {
      if ( n )
      {
        memcpy(v8, src, n);
        *(_QWORD *)(a3 + 32) += v9;
      }
      *a1 = 0;
    }
  }
  sub_111DFC0((__int64 *)&src);
  return a1;
}
