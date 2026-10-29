__int64 __fastcall sub_417CD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 result; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r14
  int v11; // eax

  v3 = a2;
  v4 = a1;
  result = a2;
  if ( !a1 )
    return result;
  result = a1;
  if ( !a2 )
    return result;
  v7 = sub_417AB0((const char **)a1, (const char **)a2, a3);
  if ( v7 <= 0 )
  {
    if ( v7 )
    {
      v8 = *(_DWORD *)(a3 + 32);
    }
    else
    {
      v8 = *(_DWORD *)(a3 + 32);
      if ( v8 )
      {
        --*(_DWORD *)(a3 + 36);
        v4 = *(_QWORD *)(a1 + 16);
        goto LABEL_5;
      }
    }
    v9 = a1;
    v4 = *(_QWORD *)(a1 + 16);
    goto LABEL_6;
  }
  v8 = *(_DWORD *)(a3 + 32);
LABEL_5:
  v9 = a2;
  v3 = *(_QWORD *)(a2 + 16);
LABEL_6:
  v10 = v9;
  if ( v8 )
  {
    while ( v3 != 0 && v4 != 0 )
    {
      while ( 1 )
      {
        v11 = sub_417AB0((const char **)v4, (const char **)v3, a3);
        if ( v11 < 0 )
          break;
        if ( !v11 )
        {
          --*(_DWORD *)(a3 + 36);
          v4 = *(_QWORD *)(v4 + 16);
        }
        *(_QWORD *)(v9 + 16) = v3;
        v9 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( v3 == 0 || v4 == 0 )
          goto LABEL_10;
      }
      *(_QWORD *)(v9 + 16) = v4;
      v9 = v4;
      v4 = *(_QWORD *)(v4 + 16);
    }
  }
  else
  {
    while ( v3 != 0 && v4 != 0 )
    {
      while ( (int)sub_417AB0((const char **)v4, (const char **)v3, a3) > 0 )
      {
        *(_QWORD *)(v9 + 16) = v3;
        v9 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( v3 == 0 || v4 == 0 )
          goto LABEL_10;
      }
      *(_QWORD *)(v9 + 16) = v4;
      v9 = v4;
      v4 = *(_QWORD *)(v4 + 16);
    }
  }
LABEL_10:
  result = v10;
  if ( !v4 )
    v4 = v3;
  *(_QWORD *)(v9 + 16) = v4;
  return result;
}

