__int64 __fastcall sub_1E580(__int64 *a1)
{
  int v1; // eax
  unsigned __int64 v2; // rcx
  __int64 i; // rax
  unsigned __int64 v5; // rcx
  __int64 j; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = getinf(5);
  if ( v1 != 18 && v1 != 25 )
  {
    if ( v1 != 11 )
      return 0;
    v2 = a1[1];
    if ( v2 <= 0x12 )
    {
      v7 = *a1;
      if ( (unsigned __int64)a1[2] <= 0x12 )
      {
        v9 = qvector_reserve(a1, v7, 19, 8);
        v2 = a1[1];
        *a1 = v9;
        v7 = v9;
      }
      memset((void *)(v7 + 8 * v2), 0, 8 * (19 - v2));
    }
    else if ( v2 == 19 )
    {
      goto LABEL_7;
    }
    a1[1] = 19;
LABEL_7:
    for ( i = 0; i != 152; i += 8 )
      *(_QWORD *)(*a1 + i) = *(_QWORD *)((char *)&unk_218A0 + i);
    return 1;
  }
  v5 = a1[1];
  if ( v5 <= 0x16 )
  {
    v8 = *a1;
    if ( (unsigned __int64)a1[2] <= 0x16 )
    {
      v10 = qvector_reserve(a1, v8, 23, 8);
      v5 = a1[1];
      *a1 = v10;
      v8 = v10;
    }
    memset((void *)(v8 + 8 * v5), 0, 8 * (23 - v5));
  }
  else if ( v5 == 23 )
  {
    goto LABEL_14;
  }
  a1[1] = 23;
LABEL_14:
  for ( j = 0; j != 184; j += 8 )
    *(_QWORD *)(*a1 + j) = *(_QWORD *)((char *)&unk_21940 + j);
  return 1;
}
