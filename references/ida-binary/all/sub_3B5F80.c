__int64 __fastcall sub_3B5F80(__int64 *a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rbp
  __int64 v3; // r13
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax

  v1 = a1[1];
  if ( v1 <= 0x50 )
  {
    v9 = *a1;
    if ( (unsigned __int64)a1[2] <= 0x50 )
    {
      v10 = qvector_reserve(a1, v9, 81, 1);
      v1 = a1[1];
      *a1 = v10;
      v9 = v10;
    }
    memset((void *)(v9 + v1), 0, 81 - v1);
    a1[1] = 81;
  }
  else if ( v1 != 81 )
  {
    a1[1] = 81;
  }
  *(_BYTE *)(*a1 + 80) = 0;
  v2 = a1[1];
  if ( !v2 )
  {
    v5 = *a1;
    v4 = 4;
    v3 = 3;
    if ( (unsigned __int64)a1[2] >= 4 )
      goto LABEL_6;
LABEL_8:
    v8 = qvector_reserve(a1, v5, v4, 1);
    *a1 = v8;
    v5 = v8;
    goto LABEL_6;
  }
  v3 = v2 + 2;
  v4 = v2 + 3;
  v5 = *a1;
  --v2;
  if ( a1[2] < v4 )
    goto LABEL_8;
LABEL_6:
  a1[1] = v4;
  *(_BYTE *)(v5 + v3) = 0;
  v7 = *a1 + v2;
  *(_WORD *)v7 = 11822;
  *(_BYTE *)(v7 + 2) = 46;
  return 11822;
}
