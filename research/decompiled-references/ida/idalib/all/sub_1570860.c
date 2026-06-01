unsigned __int64 __fastcall sub_1570860(const __m128i *a1, __m128i a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbp
  int v7; // ebx
  int v8; // eax
  _QWORD v9[2]; // [rsp+0h] [rbp-38h] BYREF
  char v10; // [rsp+10h] [rbp-28h]

  result = sub_14BFC10(a1, 0, a2);
  if ( result > 1 )
  {
    v6 = a1[6].m128i_i64[0];
    v7 = result & 0xFFFFFFFE;
    v8 = sub_C00A40(result & 0xFFFFFFFFFFFFFFFELL, 0, v3, v4, v5);
    sub_1917B40((unsigned int)v9, v6, *(_QWORD *)(v6 + 608), v8, v7, 0, 0);
    result = 1;
    if ( !v10 )
      return v9[1] & 0xFFFFFFFFFFFFFFFELL;
  }
  return result;
}
