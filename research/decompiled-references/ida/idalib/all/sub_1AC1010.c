_QWORD *__fastcall sub_1AC1010(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r10
  _QWORD *result; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx

  v3 = *a2;
  v4 = *a3;
  result = a1;
  v6 = *a2 - *a3;
  v7 = v6 >> 5;
  v8 = v6 >> 3;
  if ( v7 <= 0 )
  {
    v13 = *a2;
LABEL_16:
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 != 1 )
        {
LABEL_19:
          *result = v4;
          return result;
        }
LABEL_27:
        if ( *(_BYTE *)(*(_QWORD *)(v13 - 8) + 8LL) != 38 )
        {
          *a2 = v13 - 8;
          goto LABEL_19;
        }
LABEL_21:
        *result = v13;
        return result;
      }
      if ( *(_BYTE *)(*(_QWORD *)(v13 - 8) + 8LL) == 38 )
        goto LABEL_21;
      v13 -= 8;
      *a2 = v13;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v13 - 8) + 8LL) == 38 )
      goto LABEL_21;
    v13 -= 8;
    *a2 = v13;
    goto LABEL_27;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v3 - 8) + 8LL) == 38 )
  {
    v13 = *a2;
    goto LABEL_21;
  }
  v9 = *(_QWORD *)(v3 - 16);
  v10 = v3 - 8;
  *a2 = v3 - 8;
  if ( *(_BYTE *)(v9 + 8) == 38
    || (v11 = *(_QWORD *)(v3 - 24), v10 = v3 - 16, v12 = v3 - 32 * v7, *a2 = v3 - 16, *(_BYTE *)(v11 + 8) == 38) )
  {
LABEL_14:
    *result = v10;
  }
  else
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v3 - 32) + 8LL) == 38 )
      {
        v14 = v3 - 24;
        *a2 = v14;
        *result = v14;
        return result;
      }
      v13 = v3 - 32;
      if ( v12 == v3 - 32 )
      {
        *a2 = v13;
        v8 = (v13 - v4) >> 3;
        goto LABEL_16;
      }
      if ( *(_BYTE *)(*(_QWORD *)(v3 - 40) + 8LL) == 38 )
      {
        *a2 = v13;
        goto LABEL_21;
      }
      if ( *(_BYTE *)(*(_QWORD *)(v3 - 48) + 8LL) == 38 )
        break;
      if ( *(_BYTE *)(*(_QWORD *)(v3 - 56) + 8LL) == 38 )
      {
        v10 = v3 - 48;
        *a2 = v3 - 48;
        goto LABEL_14;
      }
      v3 -= 32;
    }
    *a2 = v3 - 40;
    *result = v3 - 40;
  }
  return result;
}
