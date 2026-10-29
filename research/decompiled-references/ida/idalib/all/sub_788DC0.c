__int64 __fastcall sub_788DC0(__int64 *a1, char a2)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v8; // rax

  v3 = a1[1];
  v4 = *a1;
  if ( !v3 )
  {
    v5 = 1;
    v6 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
LABEL_6:
    v8 = qvector_reserve(a1, v4, v6, 1);
    *a1 = v8;
    v4 = v8;
    goto LABEL_3;
  }
  if ( (unsigned __int64)(v3 - 1) > 0x3FF )
    sub_368890();
  v5 = a1[1];
  v6 = --v3 + 2;
  if ( a1[2] < (unsigned __int64)(v3 + 2) )
    goto LABEL_6;
LABEL_3:
  a1[1] = v6;
  *(_BYTE *)(v4 + v3) = a2;
  *(_BYTE *)(*a1 + v5) = 0;
  return 0;
}
