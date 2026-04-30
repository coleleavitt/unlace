void __fastcall sub_4C7E80(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  _QWORD *v11; // r14
  __int64 v12; // rdx

  v6 = *a1;
  v7 = a1[2];
  if ( *a1 )
  {
    v8 = *a2;
    if ( *(int *)v6 <= 1 )
    {
      v9 = a1[1];
      v10 = (v6 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(v6 + 8) - ((__int64)(v9 - v10) >> 3) != v7 )
      {
        *(_QWORD *)(v9 + 8 * v7) = v8;
        ++a1[2];
        goto LABEL_5;
      }
      if ( !v7 && v9 != v10 )
      {
        *(_QWORD *)(v9 - 8) = v8;
        a1[1] -= 8;
        ++a1[2];
        goto LABEL_5;
      }
    }
  }
  else
  {
    v8 = *a2;
  }
  sub_4C7D20(a1, 0, 1, nullptr, nullptr, a6);
  v11 = (_QWORD *)(a1[1] + 8 * v7);
  v12 = a1[2];
  if ( v7 < v12 )
  {
    memmove(v11 + 1, v11, 8 * (v12 - v7));
    v12 = a1[2];
  }
  a1[2] = v12 + 1;
  *v11 = v8;
LABEL_5:
  if ( !*a1 || *(int *)*a1 > 1 )
    sub_1C92D0((__int64)a1, 0, 0, 0, a5, a6);
}
