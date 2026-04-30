unsigned __int64 __fastcall sub_1FA760(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  void *v6; // r12
  void *v7; // rdi
  __int64 v9; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  sub_1FA630((__int64)&src);
  v5 = v11;
  if ( v11 <= 1 )
  {
    if ( under_debugger )
      BUG();
    interr(40473, a1, v3, v4, a3);
  }
  v6 = src;
  v7 = (void *)*a2;
  if ( a2[2] < v5 )
  {
    v9 = qvector_reserve(a2, *a2, v5, 1);
    *a2 = v9;
    v7 = (void *)v9;
  }
  a2[1] = v5;
  memmove(v7, v6, v5 - 1);
  *(_BYTE *)(*a2 + v5 - 1) = 0;
  if ( src )
  {
    v11 = 0;
    qfree(src, (const char *)v6);
  }
  return v12 - __readfsqword(0x28u);
}
