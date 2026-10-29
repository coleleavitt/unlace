const char *__fastcall sub_1021A70(__int64 a1, int a2, _BYTE *a3)
{
  int v4; // r12d
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // al
  char v11; // [rsp+Fh] [rbp-69h] BYREF
  __m128i v12[2]; // [rsp+10h] [rbp-68h] BYREF
  char v13; // [rsp+30h] [rbp-48h]

  v12[0].m128i_i8[0] = 0;
  v4 = sub_101D5E0((unsigned int *)a1, a2);
  v5 = (_DWORD *)sub_101FA50(a1, v4, v12);
  if ( v12[0].m128i_i8[0] || !v5 )
  {
    v6 = 0;
    v4 = 0;
  }
  else
  {
    v6 = (a2 & 0x7FFFFFFF) - (*v5 & 0x7FFFFFFF);
    if ( a2 < 0 )
    {
      v7 = sub_10217D0(a1, v5, v6);
      v4 = v7;
      v6 = HIDWORD(v7);
    }
  }
  v11 = 0;
  v8 = sub_101FA50(a1, v4, &v11);
  if ( v11 || *(char *)(v8 + 3) < 0 )
  {
    if ( a3 )
      *a3 = 1;
    return "<<<<INVALID BUFFER>>>>";
  }
  sub_101D9A0(
    v12,
    (__int64 *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL),
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16),
    0);
  v9 = v13;
  if ( a3 )
    *a3 = v13 ^ 1;
  if ( !v9 )
    return "<<<<INVALID BUFFER>>>>";
  return (const char *)(v12[0].m128i_i64[0] + v6);
}
