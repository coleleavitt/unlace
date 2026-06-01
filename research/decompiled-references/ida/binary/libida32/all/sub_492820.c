unsigned __int64 __fastcall sub_492820(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // r9
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8

  v6 = *a3;
  v7 = a3;
  v8 = *a5;
  v9 = *(unsigned int *)(*a5 + 4 * *a2);
  if ( (_DWORD)v9 == -1 )
    goto LABEL_14;
  v6 = *(unsigned int *)(v8 + 4 * v6);
  if ( (_DWORD)v6 == -1 )
    goto LABEL_14;
  v8 = *(unsigned int *)(v8 + 4 * *a4);
  if ( (int)v9 < (int)v6 )
  {
    if ( (_DWORD)v8 != -1 )
    {
      if ( (int)v8 > (int)v6 )
        return sub_492530(a1, v7);
      if ( (int)v8 > (int)v9 )
      {
        v7 = a4;
        return sub_492530(a1, v7);
      }
LABEL_9:
      v7 = a2;
      return sub_492530(a1, v7);
    }
LABEL_14:
    sub_47DE90(a1, v7, v8, a4, v9, v6);
  }
  if ( (_DWORD)v8 == -1 )
    goto LABEL_14;
  if ( (int)v8 > (int)v9 )
    goto LABEL_9;
  if ( (int)v8 > (int)v6 )
    v7 = a4;
  return sub_492530(a1, v7);
}

