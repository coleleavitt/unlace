__int64 __fastcall sub_1922B0(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v4; // si
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v10; // si
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rsi

  v4 = *(_BYTE *)(a2 + 48);
  if ( a3 )
  {
    v6 = a3[8];
    if ( v6 )
    {
      if ( v4 == 1 )
      {
        v15 = *(int *)(a2 + 56);
        if ( v6 != 1 )
        {
          v10 = *(_BYTE *)(a2 + 32);
          if ( v10 == 1 )
            return -1;
          goto LABEL_10;
        }
      }
      else
      {
        if ( v4 != 5 || v6 != 5 )
          goto LABEL_9;
        v15 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL);
      }
      if ( *(_QWORD *)a3 == v15 )
        goto LABEL_14;
LABEL_9:
      v10 = *(_BYTE *)(a2 + 32);
      if ( v10 == 1 )
      {
        v11 = *(int *)(a2 + 40);
LABEL_12:
        if ( v6 != v10 || *(_QWORD *)a3 != v11 )
          return -1;
LABEL_14:
        if ( !sub_125B60((unsigned __int8 *)(a2 + 32), a2 + 48, 0) )
          return *(_QWORD *)a3;
        return -1;
      }
LABEL_10:
      if ( v10 != 5 )
        return -1;
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL);
      goto LABEL_12;
    }
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1352LL);
  if ( *(_BYTE *)(a2 + 32) == 10 )
  {
    v12 = *(_QWORD *)(a2 + 40);
    if ( *(_BYTE *)v12 == 6 && v7 == *(_QWORD *)(v12 + 8) )
    {
      v13 = a2 + 48;
      goto LABEL_19;
    }
  }
  if ( v4 != 10 )
    return -1;
  v14 = *(_QWORD *)(a2 + 56);
  if ( *(_BYTE *)v14 != 6 || v7 != *(_QWORD *)(v14 + 8) )
    return -1;
  v13 = a2 + 32;
  v4 = *(_BYTE *)(a2 + 32);
LABEL_19:
  v8 = -1;
  if ( v4 != 1 )
  {
    if ( v4 == 5 )
      return *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
    return v8;
  }
  return *(int *)(v13 + 8);
}
