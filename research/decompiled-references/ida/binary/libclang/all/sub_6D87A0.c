__int64 __fastcall sub_6D87A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax

  v2 = sub_6D8040(a1, a2);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v7 = sub_79A2B0(a2);
  v8 = *(_QWORD *)v7;
  v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
  if ( v8 < v9 )
  {
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 191 )
    {
      v8 += 8LL;
      if ( v9 == v8 )
        goto LABEL_28;
    }
  }
  else
  {
    if ( v8 == v9 )
    {
LABEL_28:
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_2;
      v10 = sub_79A2B0(a2);
      v11 = *(_QWORD *)v10;
      v12 = *(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 8);
      if ( v11 < v12 )
      {
        while ( *(_WORD *)(*(_QWORD *)v11 + 32LL) != 189 )
        {
          v11 += 8LL;
          if ( v12 == v11 )
            goto LABEL_2;
        }
      }
      else
      {
        if ( v11 == v12 )
          goto LABEL_2;
        while ( *(_WORD *)(*(_QWORD *)v12 + 32LL) != 189 )
        {
          v12 += 8LL;
          if ( v11 == v12 )
            goto LABEL_2;
        }
      }
      if ( v11 != v12 )
      {
        if ( v2 != 2 )
          goto LABEL_3;
        goto LABEL_36;
      }
LABEL_2:
      v3 = *(_QWORD *)(a1 + 2160);
      if ( (*(_BYTE *)(v3 + 60) & 0x10) == 0 || (*(_BYTE *)(v3 + 89) & 4) == 0 )
        goto LABEL_3;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_25;
      v13 = sub_79A2B0(a2);
      v14 = *(_QWORD *)v13;
      v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
      if ( v14 < v15 )
      {
        while ( *(_WORD *)(*(_QWORD *)v14 + 32LL) != 157 )
        {
          v14 += 8LL;
          if ( v15 == v14 )
            goto LABEL_25;
        }
      }
      else
      {
        if ( v14 == v15 )
          goto LABEL_25;
        while ( *(_WORD *)(*(_QWORD *)v15 + 32LL) != 157 )
        {
          v15 += 8LL;
          if ( v14 == v15 )
            goto LABEL_25;
        }
      }
      if ( v14 == v15 || (v2 & 0xFFFFFFFD) != 0 )
      {
LABEL_25:
        if ( (unsigned __int8)sub_6D7C20(a1, a2) )
          v2 = 3;
        goto LABEL_3;
      }
LABEL_36:
      v2 = 4;
      goto LABEL_3;
    }
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 191 )
    {
      v9 += 8LL;
      if ( v8 == v9 )
        goto LABEL_28;
    }
  }
  if ( v8 == v9 )
    goto LABEL_28;
  if ( ((v2 - 2) & 0xFFFFFFFD) == 0 )
    v2 = 1;
LABEL_3:
  v4 = *(_QWORD *)(a1 + 18200);
  if ( !v4 )
    return v2;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 120LL))(v4, a2);
  if ( !v5 )
    return 1;
  if ( v5 != 1 )
    return v2;
  if ( v2 == 2 )
    return 4;
  return v2;
}

