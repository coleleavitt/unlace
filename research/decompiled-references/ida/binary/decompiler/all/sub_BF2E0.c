bool __fastcall sub_BF2E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi

  if ( (unsigned int)(*(_DWORD *)a2 - 42) > 0xA )
    return 1;
  if ( *(_BYTE *)(a2 + 64) == 7 )
  {
    v4 = *(_QWORD *)(a1 + 328);
    v5 = *(unsigned int *)(a2 + 72);
    if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 64) )
      sub_B6D60(a1);
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8 * v5);
    if ( !v6 )
    {
      if ( !under_debugger )
        sub_37EA20(52545);
      BUG();
    }
    v7 = sub_1204A0(*(_QWORD *)(v6 + 48));
    if ( v7 )
    {
      v8 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        goto LABEL_10;
      v9 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v9 )
      {
        while ( (*(_BYTE *)v9 & 2) == 0 )
        {
          v11 = *(_QWORD *)(v9 + 24);
          if ( v7 < v11 )
          {
            v9 = *(_QWORD *)(v9 + 8);
          }
          else
          {
            if ( v11 >= v7 )
            {
              if ( v8 == (_QWORD *)v9 )
                break;
              return 1;
            }
            v9 = *(_QWORD *)(v9 + 16);
          }
        }
LABEL_10:
        v10 = sub_11DF40(v7, 1);
        if ( v10 )
          return *(_QWORD *)(v10 + 24) != *(_QWORD *)(a2 + 24);
      }
    }
    return 1;
  }
  return 0;
}
