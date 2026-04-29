unsigned __int64 __fastcall sub_385E90(__int64 *a1)
{
  size_t v1; // rax
  __int64 v2; // rbp
  size_t v3; // r12
  size_t v4; // r14
  __int64 v5; // rsi
  __int64 v7; // rax
  char v8[1032]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v8[0] = 0;
  format_c_number();
  v1 = strlen(v8);
  v2 = a1[1];
  v3 = v1;
  v4 = v1;
  if ( v2 )
  {
    --v2;
    v4 = v1 + v2;
  }
  v5 = *a1;
  if ( a1[2] < v4 + 1 )
  {
    v7 = qvector_reserve((__int64)a1, v5, v4 + 1, 1);
    *a1 = v7;
    v5 = v7;
  }
  a1[1] = v4 + 1;
  *(_BYTE *)(v5 + v4) = 0;
  memmove((void *)(v2 + *a1), v8, v3);
  return v9 - __readfsqword(0x28u);
}
