__int64 __fastcall sub_1C2E40(__int64 *a1, signed __int64 *a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 v7; // rsi
  signed __int64 v8; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r9

  v4 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 2 )
  {
    v10 = *(__int64 **)(a3 + 8);
    v11 = *v10;
    v12 = *v10 + 24 * v10[1];
    if ( *v10 != v12 )
    {
      v8 = 0x8000000000000000LL;
      v7 = 0x7FFFFFFFFFFFFFFFLL;
      do
      {
        if ( *(_DWORD *)v11 == 1 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( v7 > v13 )
            v7 = *(_QWORD *)(v11 + 8);
          if ( v8 < v13 + *(unsigned __int16 *)(v11 + 18) )
            v8 = v13 + *(unsigned __int16 *)(v11 + 18);
        }
        v11 += 24;
      }
      while ( v11 != v12 );
      if ( v7 != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_5;
    }
    return 0;
  }
  if ( v4 > 2 )
  {
    if ( (unsigned int)(v4 - 3) > 3 )
    {
LABEL_22:
      if ( !under_debugger )
        sub_3835A0(51147);
      BUG();
    }
    return 0;
  }
  if ( v4 != 1 )
    goto LABEL_22;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = a4 + v7;
LABEL_5:
  if ( a1 )
    *a1 = v7;
  if ( a2 )
    *a2 = v8;
  return 1;
}
