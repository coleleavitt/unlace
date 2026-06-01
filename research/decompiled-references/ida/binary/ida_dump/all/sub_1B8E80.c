_QWORD *__fastcall sub_1B8E80(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *i; // rax
  _QWORD *result; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  int v14; // edx
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rdx

  v2 = (_QWORD *)*a1;
  if ( *a1 && a1[1] )
  {
    v4 = *(_QWORD *)(a2 + 40);
    v5 = (_QWORD *)v2[1];
    while ( 1 )
    {
LABEL_4:
      if ( v2 == v5 )
        goto LABEL_17;
      v6 = v5 + 3;
      if ( v4 == v5[12] )
        break;
      if ( (*v5 & 2) != 0 )
      {
        while ( v4 != v5[12] )
          ;
        result = v5 + 4;
        goto LABEL_13;
      }
      v7 = (_QWORD *)v5[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
        v11 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
        v12 = *v11;
        if ( (*v11 & 2) == 0 )
        {
          while ( (_QWORD *)v11[2] == v5 )
          {
            v5 = v11;
            v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
            v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v12 & 2) != 0 )
            {
              v5 = (_QWORD *)v13;
              goto LABEL_4;
            }
            v11 = (_QWORD *)v13;
          }
        }
        v5 = v11;
      }
      else
      {
        for ( i = (_QWORD *)v7[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v7 = i;
        v5 = v7;
      }
    }
    result = v5 + 4;
LABEL_13:
    v10 = *v6;
    a1[3] = result;
    a1[2] = v10;
    goto LABEL_14;
  }
LABEL_17:
  result = (_QWORD *)a1[3];
  if ( result )
  {
LABEL_14:
    if ( *((_DWORD *)result + 6) == 2 )
      return result;
    if ( *(_BYTE *)(a2 + 384) != 3 )
      return result;
    v14 = *((_DWORD *)result + 24);
    if ( v14 == -1 )
      return result;
    v15 = *(_BYTE *)(a2 + 65);
    if ( v15 == 1 )
    {
      if ( v14 == *(unsigned __int16 *)(a2 + 70) )
        goto LABEL_30;
    }
    else if ( v15 == 4 )
    {
      return result;
    }
    if ( *(_BYTE *)(a2 + 105) != 1 || v14 != *(unsigned __int16 *)(a2 + 110) )
      return result;
LABEL_30:
    v16 = *(_QWORD *)(a2 + 16);
    result[1] = v16;
    v17 = *(_QWORD *)(v16 + 56);
    *((_DWORD *)result + 6) = 2;
    result[2] = v17;
  }
  return result;
}
