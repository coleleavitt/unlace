__int64 __fastcall sub_692E60(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rsi

  if ( a3 )
  {
    if ( a2 >> 3 )
    {
      if ( !under_debugger )
        interr(871);
      BUG();
    }
  }
  else if ( a2 <= 0x7FFE )
  {
    return sub_692580(a1, a2);
  }
  if ( a1 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v7 = v4 + 1;
      v6 = a1[1];
      v5 = *a1;
      --v4;
      if ( a1[2] >= v7 )
        goto LABEL_6;
    }
    else
    {
      v5 = *a1;
      v6 = 1;
      v7 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_6;
    }
    v5 = qvector_reserve(a1, v5, v7, 1);
    *a1 = v5;
LABEL_6:
    a1[1] = v7;
    *(_BYTE *)(v5 + v4) = -1;
    *(_BYTE *)(*a1 + v6) = 0;
    v8 = a1[1];
    if ( v8 )
    {
      v9 = v8 + 1;
      v10 = a1[1];
      v11 = *a1;
      --v8;
      if ( a1[2] >= v9 )
      {
LABEL_8:
        a1[1] = v9;
        *(_BYTE *)(v11 + v8) = -1;
        *(_BYTE *)(*a1 + v10) = 0;
        return sub_6926A0(a1, a2);
      }
    }
    else
    {
      v11 = *a1;
      v10 = 1;
      v9 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_8;
    }
    v11 = qvector_reserve(a1, v11, v9, 1);
    *a1 = v11;
    goto LABEL_8;
  }
  return 0;
}

