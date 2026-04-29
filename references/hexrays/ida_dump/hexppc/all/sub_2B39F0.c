unsigned __int64 __fastcall sub_2B39F0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  size_t v4; // r12
  __int64 v5; // rbp
  void *v6; // r15
  size_t v7; // r13
  __int64 v8; // rsi
  __int64 v10; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)n = 0;
  src = nullptr;
  sub_2B34C0((__int64 *)&src, v3, nullptr);
  v4 = n[0];
  v5 = a2[1];
  v6 = src;
  v7 = n[0];
  if ( v5 )
  {
    --v5;
    v7 = n[0] + v5;
  }
  v8 = *a2;
  if ( a2[2] < v7 + 1 )
  {
    v10 = qvector_reserve(a2, v8, v7 + 1, 1);
    *a2 = v10;
    v8 = v10;
  }
  a2[1] = v7 + 1;
  *(_BYTE *)(v8 + v7) = 0;
  memmove((void *)(v5 + *a2), v6, v4);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v13 - __readfsqword(0x28u);
}
