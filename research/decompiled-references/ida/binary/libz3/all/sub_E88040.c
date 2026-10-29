__int64 __fastcall sub_E88040(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v9; // rbp
  __int64 i; // r9
  unsigned int v11; // r14d
  unsigned int v12; // r11d
  __int64 **v13; // rcx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r11
  __int16 v17; // bx
  __int16 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int16 v21; // bx
  unsigned int v22; // r11d
  unsigned int v23; // r9d
  __int64 v24; // r9
  __int16 v25; // r11
  __int64 v26; // rax
  __int64 *v27; // rdx

  result = a3 - 1;
  v7 = a3 & 1;
  v9 = (a3 - 1) / 2;
  if ( a2 >= v9 )
  {
    v13 = (__int64 **)(a1 + 8 * a2);
    if ( (a3 & 1) == 0 )
    {
      result = (a3 - 2) / 2;
      if ( a2 == result )
      {
        result = a2;
        goto LABEL_41;
      }
    }
LABEL_34:
    *v13 = a4;
    return result;
  }
  for ( i = a2; ; i = result )
  {
    result = 2 * (i + 1);
    v13 = (__int64 **)(a1 + 16 * (i + 1));
    v14 = *v13;
    v15 = **(v13 - 1);
    v16 = **v13;
    v17 = *(_WORD *)(v15 + 4);
    v18 = *(_WORD *)(v16 + 4);
    if ( v18 )
    {
      if ( v18 != 2 )
      {
        if ( v17 )
        {
          if ( v17 != 2 )
            goto LABEL_9;
          v11 = 1;
LABEL_6:
          v12 = *(_DWORD *)(v15 + 40);
          goto LABEL_7;
        }
        v11 = 1;
        goto LABEL_17;
      }
      v11 = *(_DWORD *)(v16 + 40);
    }
    else
    {
      v11 = *(unsigned __int16 *)(v16 + 28);
    }
    if ( v17 )
    {
      v12 = 1;
      if ( v17 != 2 )
        goto LABEL_7;
      goto LABEL_6;
    }
LABEL_17:
    v12 = *(unsigned __int16 *)(v15 + 28);
LABEL_7:
    if ( v11 < v12 )
    {
      --result;
      v13 = (__int64 **)(a1 + 8 * result);
      v14 = *v13;
    }
LABEL_9:
    *(_QWORD *)(a1 + 8 * i) = v14;
    if ( result >= v9 )
      break;
  }
  if ( !v7 && result == (a3 - 2) / 2 )
  {
LABEL_41:
    v26 = 2 * result + 2;
    v27 = *(__int64 **)(a1 + 8 * v26 - 8);
    result = v26 - 1;
    *v13 = v27;
    v13 = (__int64 **)(a1 + 8 * result);
  }
  v19 = (result - 1) / 2;
  if ( result <= a2 )
    goto LABEL_34;
  v20 = *a4;
  v21 = *(_WORD *)(*a4 + 4);
  while ( 1 )
  {
    v13 = (__int64 **)(a1 + 8 * v19);
    v24 = **v13;
    v25 = *(_WORD *)(v24 + 4);
    if ( !v25 )
    {
      v22 = *(unsigned __int16 *)(v24 + 28);
      goto LABEL_23;
    }
    if ( v25 != 2 )
      break;
    v22 = *(_DWORD *)(v24 + 40);
LABEL_23:
    if ( !v21 )
      goto LABEL_36;
    v23 = 1;
    if ( v21 == 2 )
      goto LABEL_25;
LABEL_26:
    result = a1 + 8 * result;
    if ( v22 >= v23 )
      goto LABEL_37;
LABEL_27:
    *(_QWORD *)result = *v13;
    result = v19;
    if ( a2 >= v19 )
      goto LABEL_34;
    v19 = (v19 - 1) / 2;
  }
  if ( v21 )
  {
    if ( v21 != 2 )
    {
      v13 = (__int64 **)(a1 + 8 * result);
      goto LABEL_34;
    }
    v22 = 1;
LABEL_25:
    v23 = *(_DWORD *)(v20 + 40);
    goto LABEL_26;
  }
  v22 = 1;
LABEL_36:
  result = a1 + 8 * result;
  if ( v22 < *(unsigned __int16 *)(v20 + 28) )
    goto LABEL_27;
LABEL_37:
  *(_QWORD *)result = a4;
  return result;
}

