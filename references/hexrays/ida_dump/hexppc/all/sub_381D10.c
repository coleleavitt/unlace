unsigned __int64 __fastcall sub_381D10(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  size_t v5; // rax
  __int64 v6; // rbp
  size_t v7; // r12
  size_t v8; // r14
  __int64 v9; // rsi
  __int64 v11; // rax
  char v12[1032]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v13; // [rsp+408h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v12[0] = 0;
  format_c_number(v12, 1024, a2, a3, a4, a5);
  v5 = strlen(v12);
  v6 = a1[1];
  v7 = v5;
  v8 = v5;
  if ( v6 )
  {
    --v6;
    v8 = v5 + v6;
  }
  v9 = *a1;
  if ( a1[2] < v8 + 1 )
  {
    v11 = qvector_reserve(a1, v9, v8 + 1, 1);
    *a1 = v11;
    v9 = v11;
  }
  a1[1] = v8 + 1;
  *(_BYTE *)(v9 + v8) = 0;
  memmove((void *)(v6 + *a1), v12, v7);
  return v13 - __readfsqword(0x28u);
}
