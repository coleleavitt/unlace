unsigned __int64 __fastcall sub_2F15E0(__int64 *a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rbp
  size_t v4; // r12
  size_t v5; // r14
  __int64 v6; // rsi
  __int64 v8; // rax
  char v9[1032]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v10; // [rsp+408h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  format_timestamp(v9, 1024, a2, 0);
  v2 = strlen(v9);
  v3 = a1[1];
  v4 = v2;
  v5 = v2;
  if ( v3 )
  {
    --v3;
    v5 = v2 + v3;
  }
  v6 = *a1;
  if ( a1[2] < v5 + 1 )
  {
    v8 = qvector_reserve(a1, v6, v5 + 1, 1);
    *a1 = v8;
    v6 = v8;
  }
  a1[1] = v5 + 1;
  *(_BYTE *)(v6 + v5) = 0;
  memmove((void *)(v3 + *a1), v9, v4);
  return v10 - __readfsqword(0x28u);
}
