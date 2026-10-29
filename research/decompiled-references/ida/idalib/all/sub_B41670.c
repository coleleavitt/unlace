char *__fastcall sub_B41670(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // r11
  unsigned __int8 *v3; // rcx
  char *v4; // r10
  __int64 v5; // rdx
  char *result; // rax
  __int64 v7; // r8
  unsigned __int8 v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // r12
  unsigned __int8 *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rdx
  char *v15; // r13
  __int64 v16; // rax
  bool v17; // al

  v2 = *(unsigned __int8 **)(a1 + 40);
  v3 = *(unsigned __int8 **)(a1 + 48);
  v4 = (char *)(v2 + 1);
  if ( v3 == v2 + 1 )
  {
    result = (char *)(unsigned int)(*(_DWORD *)(a1 + 56) + (_DWORD)v2 - *(_DWORD *)(a1 + 24));
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)a2 = (_DWORD)result;
    *(_DWORD *)(a2 + 12) = 1;
    *(_QWORD *)(a1 + 40) = v3;
    *(_QWORD *)(a2 + 16) = v2;
    *(_DWORD *)(a2 + 8) = 1;
    return result;
  }
  v5 = v2[1];
  if ( (byte_2411740[2 * v5] & 0x60) == 0 )
  {
    if ( (_BYTE)v5 != 35 )
    {
      result = (char *)(unsigned int)(*(_DWORD *)(a1 + 56) + (_DWORD)v2 - *(_DWORD *)(a1 + 24));
      *(_DWORD *)(a2 + 4) = 2;
      *(_DWORD *)a2 = (_DWORD)result;
      *(_DWORD *)(a2 + 12) = 1;
      *(_QWORD *)(a1 + 40) = v4;
      *(_QWORD *)(a2 + 16) = v2;
      *(_DWORD *)(a2 + 8) = 1;
      return result;
    }
    v4 = (char *)(v2 + 2);
    if ( v3 == v2 + 2 )
    {
      result = (char *)(unsigned int)(*(_DWORD *)(a1 + 56) + (_DWORD)v2 - *(_DWORD *)(a1 + 24));
      *(_DWORD *)a2 = (_DWORD)result;
      *(_DWORD *)(a2 + 4) = 2;
      *(_DWORD *)(a2 + 12) = (_DWORD)v3 - (_DWORD)v2;
      *(_QWORD *)(a1 + 40) = v3;
      *(_QWORD *)(a2 + 16) = v2;
      *(_DWORD *)(a2 + 8) = (_DWORD)v3 - (_DWORD)v2;
      return result;
    }
    v9 = v2[2];
    if ( (byte_2411740[2 * v9] & 8) != 0 )
    {
      result = (char *)(v2 + 2);
      while ( v3 != (unsigned __int8 *)++result )
      {
        v7 = (unsigned __int8)*result;
        v8 = *result;
        if ( (byte_2411740[2 * v7] & 8) == 0 )
        {
          v10 = 1;
          goto LABEL_48;
        }
      }
    }
    else
    {
      if ( (v9 & 0xDF) != 0x58 )
      {
        result = (char *)(unsigned int)(*(_DWORD *)(a1 + 56) + (_DWORD)v2 - *(_DWORD *)(a1 + 24));
        *(_DWORD *)(a2 + 4) = 2;
        *(_DWORD *)a2 = (_DWORD)result;
        *(_DWORD *)(a2 + 12) = 2;
        *(_QWORD *)(a1 + 40) = v4;
        *(_QWORD *)(a2 + 16) = v2;
        *(_DWORD *)(a2 + 8) = 2;
        return result;
      }
      v4 = (char *)(v2 + 3);
      if ( v3 == v2 + 3 )
      {
        result = *(char **)(a1 + 48);
      }
      else
      {
        result = (char *)(v2 + 3);
        if ( (byte_2411740[2 * v2[3]] & 0x18) != 0 )
        {
          while ( v3 != (unsigned __int8 *)++result )
          {
            v7 = (unsigned __int8)*result;
            v8 = *result;
            if ( (byte_2411740[2 * v7] & 0x18) == 0 )
            {
              v10 = 0;
LABEL_48:
              v11 = 0;
              if ( result != v4 )
                goto LABEL_19;
              goto LABEL_6;
            }
          }
        }
      }
    }
    goto LABEL_6;
  }
  result = (char *)(v2 + 2);
  if ( v3 == v2 + 2 )
    goto LABEL_6;
  while ( 1 )
  {
    v7 = (unsigned __int8)*result;
    v8 = *result;
    if ( (byte_2411740[2 * v7] & 0x60) == 0 )
      break;
    if ( v3 == (unsigned __int8 *)++result )
      goto LABEL_6;
  }
  if ( v4 == result || v3 == (unsigned __int8 *)result )
    goto LABEL_6;
  v10 = 0;
  v11 = 1;
LABEL_19:
  if ( v8 != 59 )
  {
LABEL_6:
    *(_DWORD *)a2 = *(_DWORD *)(a1 + 56) + (_DWORD)v2 - *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)(a2 + 12) = (_DWORD)result - (_DWORD)v2;
    *(_QWORD *)(a1 + 40) = result;
    *(_QWORD *)(a2 + 16) = v2;
    *(_DWORD *)(a2 + 8) = (_DWORD)result - (_DWORD)v2;
    return result;
  }
  v12 = (unsigned __int8 *)(result + 1);
  v13 = result - v4;
  if ( !v11 )
  {
    if ( (_BYTE)v10 )
    {
      v15 = (char *)sub_B415B0((__int64 **)a1, v4, v13, v10, v7, (__int64)byte_2411740);
      goto LABEL_23;
    }
    v16 = sub_B414F0((__int64 **)a1, (unsigned __int8 *)v4, v13, v10, v7, (__int64)byte_2411740);
    goto LABEL_35;
  }
  if ( v13 == 3 )
  {
    if ( *(_WORD *)v4 == 28001 && v4[2] == 112 )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( v13 != 2 )
  {
LABEL_38:
    v11 = 0;
LABEL_39:
    v15 = "&";
    v17 = v13 != 4;
    goto LABEL_40;
  }
  if ( *(_WORD *)v4 != 29804 )
  {
    if ( *(_WORD *)v4 != 29799 )
    {
      v11 = 0;
      v15 = "&";
LABEL_41:
      v16 = (__int64)sub_B3EEB0(v4, v13);
      if ( !v11 )
      {
LABEL_35:
        v15 = (char *)v16;
        goto LABEL_23;
      }
      goto LABEL_42;
    }
    v15 = ">";
    sub_B3EEB0(v4, 2);
LABEL_42:
    v14 = 1;
    goto LABEL_23;
  }
  v17 = 1;
  v15 = "<";
LABEL_40:
  if ( (unsigned __int8)v11 | v17 )
    goto LABEL_41;
  if ( *(_DWORD *)v4 == 1953461617 )
  {
    v15 = "\"";
    sub_B3EEB0(v4, v13);
    goto LABEL_42;
  }
  if ( *(_DWORD *)v4 == 1936683105 )
  {
    v15 = "'";
    sub_B3EEB0(v4, v13);
    goto LABEL_42;
  }
  v15 = sub_B3EEB0(v4, v13);
LABEL_23:
  result = *(char **)(a1 + 40);
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 56) + *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 4) = 2;
  *(_DWORD *)(a2 + 12) = (_DWORD)v12 - (_DWORD)result;
  *(_QWORD *)(a1 + 40) = v12;
  if ( v14 )
  {
    *(_QWORD *)(a2 + 16) = v15;
    *(_DWORD *)(a2 + 8) = v14;
  }
  else
  {
    *(_QWORD *)(a2 + 16) = result;
    *(_DWORD *)(a2 + 8) = (_DWORD)v12 - (_DWORD)result;
  }
  return result;
}
