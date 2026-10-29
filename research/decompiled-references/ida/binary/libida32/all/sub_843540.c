_QWORD *__fastcall sub_843540(_QWORD *a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8

  v1 = (_QWORD *)a1[1];
  result = (_QWORD *)a1[2];
  v4 = -1;
  if ( v1 )
    v4 = v1[2];
  v5 = -1;
  if ( result )
    v5 = result[1];
  v6 = 0;
  while ( 1 )
  {
    if ( v5 < v4 )
      goto LABEL_7;
    v13 = v4;
    if ( v4 == -1 )
      goto LABEL_32;
    v1[2] = v1[2];
    v1 = (_QWORD *)*v1;
    if ( !v1 )
      break;
    v4 = v1[2];
    if ( v13 == v5 )
      goto LABEL_7;
  }
  v4 = -1;
  if ( v13 != v5 && v5 == -1 )
  {
LABEL_32:
    a1[15] = a1[15];
    return result;
  }
  do
  {
LABEL_7:
    v7 = result[2];
    v8 = result[1] - v6;
    result[1] = v8;
    if ( (v7 & 2) == 0 )
    {
      if ( (v7 & 0x10000) != 0 )
        goto LABEL_12;
      v9 = result[3];
      if ( (v7 & 1) != 0 )
      {
        if ( v9 <= 0xFFFFFFFF )
          v6 += 4;
        goto LABEL_12;
      }
      v14 = *(_QWORD *)(v9 + 16);
      v15 = v14 - v8;
      if ( v8 < v14 )
        v15 -= v6;
      v16 = v7 >> 17;
      if ( v16 == 36 )
      {
        if ( v15 + 126 <= 0xFF )
        {
          v6 += 11;
          goto LABEL_12;
        }
      }
      else if ( v16 <= 0x23 )
      {
        if ( v15 + 126 > 0xFF )
        {
          if ( v15 + 2147483642 <= 0xFFFFFFFF )
            v6 += 9;
        }
        else
        {
          v6 += 13;
        }
        goto LABEL_12;
      }
      if ( v15 + 2147483643 <= 0xFFFFFFFF )
        v6 += 8;
LABEL_12:
      result = (_QWORD *)*result;
      if ( result )
        goto LABEL_13;
      goto LABEL_23;
    }
    v12 = result[3];
    if ( (v7 & 1) != 0 )
    {
      if ( v12 <= 0xFFFFFFFF )
        v6 += ((v7 & 0x20) == 0) + 4LL;
      goto LABEL_12;
    }
    result = (_QWORD *)*result;
    if ( *(_QWORD *)(v12 + 16) - v8 + 2147483651u <= 0xFFFFFFFF )
      v6 += 3;
    if ( result )
    {
LABEL_13:
      v10 = result[1];
      goto LABEL_14;
    }
LABEL_23:
    v11 = v4;
    v10 = -1;
    while ( 1 )
    {
      if ( v4 == -1 )
        goto LABEL_45;
      v1[2] -= v6;
      v1 = (_QWORD *)*v1;
      if ( !v1 )
        break;
      v4 = v1[2];
      if ( v11 == v10 )
        goto LABEL_7;
LABEL_14:
      v11 = v4;
      if ( v10 < v4 )
        goto LABEL_7;
    }
    v4 = -1;
  }
  while ( v11 == v10 || v10 != -1 );
LABEL_45:
  a1[15] -= v6;
  return result;
}

