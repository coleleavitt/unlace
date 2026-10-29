unsigned __int64 __fastcall strhtml_diff_printer_t__::vfunc_2(__int64 *a1, int a2, const char *a3)
{
  size_t v5; // rax
  __int64 v6; // r12
  size_t v7; // r13
  size_t v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+18h] [rbp-70h]

  v11 = __readfsqword(0x28u);
  if ( a2 == 4 )
  {
    sub_16FAA0(a1 + 1, (__int64)"<span style=\"color: brown;\">%s</span>", a3);
  }
  else if ( a2 == 2 && a3 )
  {
    v5 = strlen(a3);
    v6 = a1[2];
    v7 = v5;
    v8 = v5;
    if ( v6 )
    {
      --v6;
      v8 = v5 + v6;
    }
    v9 = a1[1];
    if ( a1[3] < v8 + 1 )
    {
      v10 = qvector_reserve(a1 + 1, v9, v8 + 1, 1);
      a1[1] = v10;
      v9 = v10;
    }
    a1[2] = v8 + 1;
    *(_BYTE *)(v9 + v8) = 0;
    memmove((void *)(v6 + a1[1]), a3, v7);
  }
  return v11 - __readfsqword(0x28u);
}
