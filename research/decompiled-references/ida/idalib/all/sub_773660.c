__int64 __fastcall sub_773660(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 i; // r9
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx
  char v20; // r11
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax

  result = a3 - 1;
  v8 = a3 & 1;
  v9 = (a3 - 1) / 2;
  if ( a2 < v9 )
  {
    for ( i = a2; ; i = result )
    {
      v11 = 18 * (i + 1);
      v12 = a1 + v11 - 9;
      v13 = a1 + v11;
      v14 = *(_BYTE *)(v13 + 8);
      if ( *(_BYTE *)(v12 + 8) == v14 )
        v14 = *(_QWORD *)v13 < *(_QWORD *)v12;
      result = 2 * (i + 1) - v14;
      v15 = a1 + 9 * i;
      v16 = 8 * result;
      v17 = a1 + 9 * result;
      *(_QWORD *)v15 = *(_QWORD *)v17;
      *(_BYTE *)(v15 + 8) = *(_BYTE *)(v17 + 8);
      if ( v9 <= result )
        break;
    }
    if ( v8 || (a3 - 2) / 2 != result )
    {
LABEL_8:
      v18 = (result - 1) / 2;
      if ( result <= a2 )
        goto LABEL_16;
      while ( 1 )
      {
        v17 = a1 + 9 * v18;
        v20 = *(_BYTE *)(v17 + 8);
        if ( v20 == a5 )
        {
          if ( *(_QWORD *)v17 >= a4 )
            goto LABEL_15;
        }
        else if ( !v20 )
        {
LABEL_15:
          v17 = a1 + result + v16;
          goto LABEL_16;
        }
        v19 = a1 + result + v16;
        *(_QWORD *)v19 = *(_QWORD *)v17;
        *(_BYTE *)(v19 + 8) = *(_BYTE *)(v17 + 8);
        result = v18;
        if ( a2 >= v18 )
          goto LABEL_16;
        v18 = (v18 - 1) / 2;
        v16 = 8 * result;
      }
    }
LABEL_18:
    v21 = result + 1;
    v22 = 2 * v21;
    v23 = a1 + 18 * v21;
    *(_QWORD *)v17 = *(_QWORD *)(v23 - 9);
    *(_BYTE *)(v17 + 8) = *(_BYTE *)(v23 - 1);
    result = v22 - 1;
    v16 = 8 * (v22 - 1);
    v17 = a1 + v16 + result;
    goto LABEL_8;
  }
  v17 = a1 + 9 * a2;
  if ( !v8 )
  {
    result = (a3 - 2) / 2;
    if ( a2 == result )
    {
      result = a2;
      goto LABEL_18;
    }
  }
LABEL_16:
  *(_QWORD *)v17 = a4;
  *(_BYTE *)(v17 + 8) = a5;
  return result;
}
