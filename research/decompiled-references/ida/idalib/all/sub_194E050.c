unsigned __int64 __fastcall sub_194E050(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  void **v16; // rsi
  void **v17; // rax
  unsigned __int64 v18; // rbx

  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1946010(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0)),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v14 = v13;
    v15 = 0;
    if ( (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
LABEL_7:
      v18 = sub_A77770(*(_QWORD *)(*a1 + 248), v14, v15, (unsigned __int8 *)(a3 + 48));
      sub_1EA6140(a2, v18, 16, 8);
      return v18;
    }
    v16 = *(void ***)(a4 + 8);
    if ( !v16 )
      v16 = (void **)sub_A81910(*(_QWORD **)(*a1 + 248), *(_QWORD *)(a3 + 40), 0);
    v17 = sub_1946B40(a1, v16, a5, a6);
    if ( v17 )
    {
      v15 = (__int64)*v17;
      goto LABEL_7;
    }
  }
  return 0;
}
