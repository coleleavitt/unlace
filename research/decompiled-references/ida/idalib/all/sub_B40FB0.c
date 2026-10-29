unsigned __int8 *__fastcall sub_B40FB0(__int64 a1, __int64 a2)
{
  unsigned __int8 *result; // rax
  __int64 v3; // r9
  __int16 v4; // dx
  unsigned __int8 *v5; // rcx
  char v6; // r10
  unsigned __int8 *v7; // rdx
  int v8; // edx
  __int64 v9; // r9
  unsigned __int8 *v10; // r9
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // rcx
  unsigned __int8 *v13; // rdx
  __int64 v14; // rdx
  int v15; // edx
  unsigned __int8 *v16; // rdx
  int v17; // eax
  int v18; // edx
  unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // r10
  unsigned __int8 *v21; // rdx
  int v22; // ecx
  int v23; // r9d
  int v24; // eax

  result = *(unsigned __int8 **)(a1 + 40);
  v3 = *result;
  v4 = *(_WORD *)&byte_2411740[2 * v3];
  if ( (v4 & 2) == 0 )
  {
LABEL_26:
    if ( (v4 & 0x68) != 0 )
    {
      v10 = *(unsigned __int8 **)(a1 + 48);
      v11 = result;
      if ( v10 != result )
      {
        do
          ++v11;
        while ( v10 != v11 && (byte_2411740[2 * *v11] & 0x68) != 0 );
      }
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 56) + (_DWORD)result - *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a2 + 4) = 12;
      *(_DWORD *)(a2 + 12) = (_DWORD)v11 - (_DWORD)result;
      *(_QWORD *)(a1 + 40) = v11;
      *(_QWORD *)(a2 + 16) = result;
      *(_DWORD *)(a2 + 8) = (_DWORD)v11 - (_DWORD)result;
      result = *(unsigned __int8 **)(a1 + 40);
    }
    else
    {
      switch ( (char)v3 )
      {
        case '"':
        case '\'':
          v19 = *(unsigned __int8 **)(a1 + 48);
          v20 = result + 1;
          v21 = result + 1;
          if ( v19 == result + 1 )
          {
            v22 = 1;
            v23 = 0;
            goto LABEL_58;
          }
          break;
        case '/':
          v18 = *(_DWORD *)(a1 + 56) + (_DWORD)result - *(_DWORD *)(a1 + 24);
          if ( *(unsigned __int8 **)(a1 + 48) != result + 1 && result[1] == 62 )
          {
            result += 2;
            *(_DWORD *)a2 = v18;
            *(_DWORD *)(a2 + 4) = 16;
            *(_DWORD *)(a2 + 12) = 2;
            *(_QWORD *)(a1 + 40) = result;
          }
          else
          {
            *(_DWORD *)a2 = v18;
            *(_DWORD *)(a2 + 4) = 2;
            *(_DWORD *)(a2 + 12) = 1;
            *(_QWORD *)(a1 + 40) = result + 1;
            *(_QWORD *)(a2 + 16) = result;
            *(_DWORD *)(a2 + 8) = 1;
          }
          goto LABEL_42;
        case '=':
          v16 = result + 1;
          v17 = *(_DWORD *)(a1 + 56) + (_DWORD)result - *(_DWORD *)(a1 + 24);
          *(_DWORD *)(a2 + 4) = 13;
          *(_DWORD *)a2 = v17;
          result = v16;
          *(_DWORD *)(a2 + 12) = 1;
          *(_QWORD *)(a1 + 40) = v16;
          goto LABEL_32;
        case '>':
          v15 = (int)result++;
          *(_DWORD *)a2 = *(_DWORD *)(a1 + 56) + v15 - *(_DWORD *)(a1 + 24);
          *(_DWORD *)(a2 + 4) = 15;
          *(_DWORD *)(a2 + 12) = 1;
          *(_QWORD *)(a1 + 40) = result;
          *(_BYTE *)(a1 + 62) = 0;
          return result;
        default:
          goto LABEL_32;
      }
      while ( *v21 != (_BYTE)v3 || *(v21 - 1) == 92 )
      {
        if ( v19 == ++v21 )
        {
          v23 = (_DWORD)v21 - (_DWORD)v20;
          v22 = (_DWORD)v21 - (_DWORD)result;
          goto LABEL_58;
        }
      }
      v23 = (_DWORD)v21 - (_DWORD)v20;
      if ( v19 != v21 )
        ++v21;
      v22 = (_DWORD)v21 - (_DWORD)result;
LABEL_58:
      v24 = *(_DWORD *)(a1 + 56) + (_DWORD)result - *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a2 + 4) = 14;
      *(_DWORD *)a2 = v24;
      *(_DWORD *)(a2 + 12) = v22;
      *(_QWORD *)(a1 + 40) = v21;
      *(_QWORD *)(a2 + 16) = v20;
      *(_DWORD *)(a2 + 8) = v23;
      result = *(unsigned __int8 **)(a1 + 40);
    }
LABEL_32:
    v12 = *(unsigned __int8 **)(a1 + 48);
    if ( v12 == result )
    {
LABEL_54:
      *(_QWORD *)(a1 + 40) = v12;
    }
    else
    {
      while ( (byte_2411740[2 * *result] & 5) != 0 )
      {
        if ( v12 == ++result )
          goto LABEL_54;
      }
      *(_QWORD *)(a1 + 40) = result;
      v13 = (unsigned __int8 *)*result;
      result = v13;
      if ( (byte_2411740[2 * (_QWORD)v13] & 0x62) == 0 )
      {
        if ( (unsigned __int8)v13 > 0x3Eu || (v14 = 0x6000808400000000LL, !_bittest64(&v14, (unsigned __int64)result)) )
LABEL_42:
          *(_BYTE *)(a1 + 62) = 0;
      }
    }
    return result;
  }
  v5 = *(unsigned __int8 **)(a1 + 48);
  if ( result == v5 )
    goto LABEL_13;
  v6 = *(_BYTE *)(a1 + 61);
  while ( 1 )
  {
    v7 = result + 1;
    if ( (_BYTE)v3 == 10 )
      goto LABEL_19;
    if ( v5 == v7 )
      break;
    if ( result[1] != 10 )
    {
      *(_QWORD *)(a1 + 40) = v7;
      ++result;
      if ( v6 != 2 )
        goto LABEL_10;
LABEL_15:
      while ( 1 )
      {
        v9 = *v7;
        if ( (byte_2411740[2 * v9] & 5) == 0 )
          break;
        if ( ++v7 == v5 )
          goto LABEL_17;
      }
      if ( (_BYTE)v9 != 42 )
      {
LABEL_17:
        result = *(unsigned __int8 **)(a1 + 40);
        goto LABEL_10;
      }
      result = v7 + 1;
      *(_QWORD *)(a1 + 40) = v7 + 1;
      goto LABEL_20;
    }
    v7 = result + 2;
LABEL_19:
    *(_QWORD *)(a1 + 40) = v7;
    result = v7;
    if ( v6 == 2 )
    {
      if ( v7 != v5 )
        goto LABEL_15;
      goto LABEL_23;
    }
LABEL_20:
    if ( v5 == result )
    {
      v7 = v5;
      goto LABEL_25;
    }
LABEL_10:
    while ( (byte_2411740[2 * *result] & 5) != 0 )
    {
      if ( ++result == v5 )
        goto LABEL_13;
    }
    *(_QWORD *)(a1 + 40) = result;
    v3 = *result;
    v4 = *(_WORD *)&byte_2411740[2 * v3];
    if ( (v4 & 2) == 0 )
      goto LABEL_26;
    if ( v5 == result )
      goto LABEL_13;
  }
  *(_QWORD *)(a1 + 40) = v5;
  if ( v6 == 2 )
  {
LABEL_23:
    result = v5;
    goto LABEL_13;
  }
LABEL_25:
  result = v7;
LABEL_13:
  v8 = *(_DWORD *)(a1 + 56) + (_DWORD)result - *(_DWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 62) = 0;
  *(_DWORD *)a2 = v8;
  *(_DWORD *)(a2 + 4) = 1;
  *(_DWORD *)(a2 + 12) = 0;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
