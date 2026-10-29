unsigned __int64 __fastcall sub_4A7E00(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // r9
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8

  v6 = *a3;
  v7 = a3;
  v8 = *a5;
  v9 = *(_QWORD *)(*a5 + 8 * *a2);
  if ( v9 == -1 )
    goto LABEL_14;
  v6 = *(_QWORD *)(v8 + 8 * v6);
  if ( v6 == -1 )
    goto LABEL_14;
  v8 = *(_QWORD *)(v8 + 8 * *a4);
  if ( v9 < v6 )
  {
    if ( v8 != -1 )
    {
      if ( v8 > v6 )
        return sub_4A7AD0(a1, v7);
      if ( v8 > v9 )
      {
        v7 = a4;
        return sub_4A7AD0(a1, v7);
      }
LABEL_9:
      v7 = a2;
      return sub_4A7AD0(a1, v7);
    }
LABEL_14:
    sub_4929B0(a1, v7, v8, a4, v9, v6);
  }
  if ( v8 == -1 )
    goto LABEL_14;
  if ( v8 > v9 )
    goto LABEL_9;
  if ( v8 > v6 )
    v7 = a4;
  return sub_4A7AD0(a1, v7);
}
