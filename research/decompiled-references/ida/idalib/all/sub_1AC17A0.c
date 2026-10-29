_QWORD *__fastcall sub_1AC17A0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rcx
  _QWORD *result; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx

  v3 = *a2;
  result = a1;
  v5 = *a3;
  v6 = *a2 - *a3;
  v7 = v6 >> 5;
  v8 = v6 >> 3;
  if ( v7 <= 0 )
  {
LABEL_15:
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 != 1 )
        {
LABEL_18:
          *result = v5;
          return result;
        }
LABEL_25:
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v3 - 8) + 8LL) - 25) <= 1u )
          goto LABEL_3;
        *a2 = v3 - 8;
        goto LABEL_18;
      }
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v3 - 8) + 8LL) - 25) <= 1u )
        goto LABEL_3;
      v3 -= 8;
      *a2 = v3;
    }
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v3 - 8) + 8LL) - 25) <= 1u )
      goto LABEL_3;
    v3 -= 8;
    *a2 = v3;
    goto LABEL_25;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v3 - 8) + 8LL) - 25) <= 1u )
  {
LABEL_3:
    *result = v3;
    return result;
  }
  v9 = *(_QWORD *)(v3 - 16);
  v10 = v3 - 8;
  *a2 = v3 - 8;
  if ( (unsigned __int8)(*(_BYTE *)(v9 + 8) - 25) > 1u )
  {
    v11 = v3;
    v12 = v3 + 32 - 32 * v7;
    do
    {
      v13 = v3;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v3 - 24) + 8LL) - 25) <= 1u )
      {
        v14 = v3 - 16;
        *a2 = v14;
        *result = v14;
        return result;
      }
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v3 - 32) + 8LL) - 25) <= 1u )
      {
        v15 = v3 - 24;
        *a2 = v15;
        *result = v15;
        return result;
      }
      v3 -= 32;
      if ( v12 == v11 )
      {
        *a2 = v3;
        v8 = (v3 - v5) >> 3;
        goto LABEL_15;
      }
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v11 - 40) + 8LL) - 25) <= 1u )
      {
        *a2 = v3;
        goto LABEL_3;
      }
      v11 = v3;
    }
    while ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v13 - 48) + 8LL) - 25) > 1u );
    v10 = v13 - 40;
    *a2 = v10;
  }
  *result = v10;
  return result;
}
