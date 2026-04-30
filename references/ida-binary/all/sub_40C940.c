__m128i *__fastcall sub_40C940(__m128i *a1, __int64 a2, char a3, char a4, __int64 a5)
{
  char v5; // r13
  __int64 v9; // rdx
  __int64 v11; // rax
  size_t v12; // rax
  const char *v13; // r14
  size_t v14; // rdx
  __m128i ptr; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v5 = 34;
  v9 = a2 + 48;
  v17 = __readfsqword(0x28u);
  if ( a3 )
    v9 = a2 + 72;
  if ( !*(_BYTE *)(a2 + 206) )
  {
    v5 = 37;
    if ( *(_BYTE *)(a2 + 205) )
      v5 = 24;
  }
  v11 = *(_QWORD *)(v9 + 8);
  if ( v11 )
  {
    v12 = v11 - 1;
    v13 = *(const char **)v9;
    v14 = v12 >> 63;
  }
  else
  {
    LOBYTE(v14) = 0;
    v12 = 0;
    v13 = &s1;
  }
  if ( !v13 || (_BYTE)v14 )
  {
    v12 = 0;
    if ( v13 )
      v12 = strlen(v13);
  }
  QT::QString::fromUtf8(&ptr, v12, v13);
  sub_40C430(a1, &ptr, v5, a4, a5);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  return a1;
}
