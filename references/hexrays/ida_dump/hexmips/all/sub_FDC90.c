__int64 __fastcall sub_FDC90(__int64 *a1, char a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rax

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 1;
    v4 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
LABEL_5:
    v8 = qvector_reserve(a1, v6, v4, 1);
    *a1 = v8;
    v6 = v8;
    goto LABEL_3;
  }
  v4 = v3 + 1;
  v5 = a1[1];
  v6 = *a1;
  --v3;
  if ( a1[2] < v4 )
    goto LABEL_5;
LABEL_3:
  a1[1] = v4;
  *(_BYTE *)(v6 + v3) = a2;
  result = *a1;
  *(_BYTE *)(*a1 + v5) = 0;
  return result;
}
