__int64 *__fastcall sub_2BDDC0(_DWORD *a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v6; // r13
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v11; // rax

  v6 = a2[1];
  if ( !v6 )
  {
    v9 = *a2;
    v8 = 1;
    v7 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_3;
LABEL_5:
    v11 = qvector_reserve(a2, v9, v7, 1);
    *a2 = v11;
    v9 = v11;
    goto LABEL_3;
  }
  v7 = v6 + 1;
  v8 = a2[1];
  v9 = *a2;
  --v6;
  if ( a2[2] < v7 )
    goto LABEL_5;
LABEL_3:
  a2[1] = v7;
  *(_BYTE *)(v9 + v6) = 60;
  *(_BYTE *)(*a2 + v8) = 0;
  sub_1C7B80(a3, a1, a2, a1[20], 0);
  return sub_FAAD0(a2, (__int64)"> at %a", a4);
}
