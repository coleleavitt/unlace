__int64 __fastcall sub_1AF5920(__int64 *a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rsi
  __int64 v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-30h] BYREF
  char v14; // [rsp+10h] [rbp-28h] BYREF

  v13 = a3;
  if ( (a3 & 1) != 0 )
  {
    v8 = (__int64 *)((a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v9 = (__int64 *)((a3 & 0xFFFFFFFFFFFFFFFELL) + 8LL * *(unsigned int *)(a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( v9 == v8 )
      return a3;
LABEL_3:
    if ( a4 )
    {
      if ( a2 )
      {
        do
        {
          v10 = *v8++;
          sub_17B7670(*a1, v10, a2, 0, a5, a6);
        }
        while ( v9 != v8 );
      }
    }
    else
    {
      do
      {
        v12 = *v8++;
        sub_B88650(v12, 1);
      }
      while ( v9 != v8 );
    }
    return a3;
  }
  v9 = (__int64 *)&v14;
  v8 = &v13;
  if ( a3 )
    goto LABEL_3;
  return 0;
}
