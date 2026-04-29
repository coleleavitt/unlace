__int64 __fastcall sub_380000(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rdi
  unsigned __int64 *v5; // rax
  __int64 v7; // rcx
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned int v12; // r10d
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v17; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = *(unsigned __int64 **)a2;
    v7 = 0;
    v8 = *(unsigned __int64 **)a2;
    while ( 1 )
    {
      v9 = *v8;
      if ( v3 >= *v8 )
      {
        v10 = v8[2];
        if ( v3 < v9 + v10 )
          break;
      }
      ++v7;
      v8 += 3;
      if ( v4 == v7 )
        goto LABEL_6;
    }
    if ( !v8 )
    {
LABEL_6:
      v11 = *(_QWORD *)(a1 + 24);
      v12 = 0;
      goto LABEL_7;
    }
    v17 = correct_address(v3, v9, v8[1], v10, 0);
    v11 = *(_QWORD *)(a1 + 24);
    v12 = 1;
    *(_QWORD *)(a1 + 16) = v17;
    v4 = *(_QWORD *)(a2 + 8);
    if ( !v4 )
      return v12;
    v5 = *(unsigned __int64 **)a2;
LABEL_7:
    v13 = 0;
    while ( 1 )
    {
      v14 = *v5;
      if ( v11 >= *v5 )
      {
        v15 = v5[2];
        if ( v11 < v14 + v15 )
          break;
      }
      ++v13;
      v5 += 3;
      if ( v13 == v4 )
        return v12;
    }
    if ( v5 )
    {
      *(_QWORD *)(a1 + 24) = correct_address(v11, v14, v5[1], v15, 0);
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v12;
}
