__int64 __fastcall sub_558790(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned __int8 v10; // [rsp+Fh] [rbp-39h]

  v10 = sub_182A680(a1, *(_QWORD *)a2, *(_QWORD *)a3, a4);
  if ( !v10 )
    return 0;
  v6 = 0;
  if ( *(_DWORD *)(a2 + 16) )
  {
LABEL_3:
    v7 = 0;
    while ( v7 < *(_DWORD *)(a3 + 16) )
    {
      v8 = v7++;
      if ( (unsigned __int8)sub_182A680(
                              a1,
                              *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v8),
                              *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v6),
                              a4) )
      {
        if ( (unsigned int)++v6 < *(_DWORD *)(a2 + 16) )
          goto LABEL_3;
        return v10;
      }
    }
    return 0;
  }
  return v10;
}

