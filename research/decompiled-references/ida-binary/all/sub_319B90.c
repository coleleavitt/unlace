__int64 __fastcall rs_chooser_t__::vfunc_10(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rsi
  unsigned __int64 v11; // rbx
  unsigned int v12; // ebx
  const char *v14; // r13
  void *v15; // rdi
  __int64 v16; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v9 = nullptr;
  v19 = __readfsqword(0x28u);
  sub_319840((__int64)&src, 0, 0, (__int64)"Add file to list", a2, a3, a4, a5, a6, a7, a8, a9);
  if ( v18 <= 1 )
  {
    v12 = 0;
  }
  else
  {
    v9 = (const char *)src;
    reg_update_strlist("RecentScripts", src, 512, 0, 0);
    v11 = v18;
    if ( v18 > 1 )
    {
      v14 = (const char *)src;
      v15 = (void *)a1[26];
      if ( a1[28] < v18 )
      {
        v16 = qvector_reserve(a1 + 26, a1[26], v18, 1);
        a1[26] = v16;
        v15 = (void *)v16;
      }
      a1[27] = v11;
      v9 = v14;
      memmove(v15, v14, v11 - 1);
      *(_BYTE *)(a1[26] + v11 - 1) = 0;
    }
    else
    {
      a1[27] = 0;
    }
    v12 = 1;
  }
  if ( src )
  {
    v18 = 0;
    qfree(src, v9);
  }
  return v12;
}
