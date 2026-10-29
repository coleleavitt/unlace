char *__fastcall sub_94B00(char *s, __int64 a2, unsigned __int8 *a3, int *a4)
{
  unsigned __int8 *v5; // rsi
  char *v6; // r13
  unsigned __int8 *v8; // r15
  int v9; // ebx
  char *v10; // rax
  int v11; // ecx
  char v12; // dl
  int v13; // esi
  unsigned int v14; // edx
  unsigned __int8 **v15; // rcx
  unsigned __int8 **v16; // rcx

  if ( a2 < 0 )
  {
    if ( !byte_1671A1 )
      sub_96F80(1225);
    goto LABEL_38;
  }
  if ( !s )
    return s;
  v5 = a3;
  v6 = &s[a2];
  if ( !a3 )
  {
    v10 = s;
LABEL_27:
    if ( v10 < v6 )
      goto LABEL_28;
    if ( !byte_1671A1 )
      sub_96F80(519);
LABEL_38:
    BUG();
  }
  v8 = (unsigned __int8 *)s;
  v9 = 0;
  while ( 1 )
  {
    if ( v5 != v8 )
      sub_8F6E0(v8, v5, v6 - (char *)v8);
    v10 = (char *)&v8[strlen((const char *)v8)];
    if ( s < v10 )
    {
      while ( 1 )
      {
        v12 = *(v10 - 1);
        v13 = v9;
        LOBYTE(v11) = v12 == 47;
        v9 = v11;
        LOBYTE(v9) = v12 == 92 || v12 == 47;
        if ( !(_BYTE)v9 )
          break;
        if ( s == --v10 )
          goto LABEL_12;
      }
      v9 = v13;
    }
LABEL_12:
    v14 = *a4;
    if ( (unsigned int)*a4 > 0x2F )
      break;
    v15 = (unsigned __int8 **)(*((_QWORD *)a4 + 2) + v14);
    *a4 = v14 + 8;
    v5 = *v15;
    if ( !*v15 )
      goto LABEL_22;
LABEL_16:
    while ( *v5 == 47 || *v5 == 92 )
      ++v5;
    if ( v10 >= v6 )
      goto LABEL_36;
    v8 = (unsigned __int8 *)(v10 + 1);
    *v10 = 47;
    if ( v10 + 1 >= v6 )
    {
      *(v6 - 1) = 0;
      v8 = (unsigned __int8 *)(v6 - 1);
    }
  }
  v16 = *((unsigned __int8 ***)a4 + 1);
  *((_QWORD *)a4 + 1) = v16 + 1;
  v5 = *v16;
  if ( *v16 )
    goto LABEL_16;
LABEL_22:
  if ( s != v10 || !(_BYTE)v9 )
    goto LABEL_27;
  if ( v10 >= v6 )
  {
LABEL_36:
    if ( !byte_1671A1 )
      sub_96F80(518);
    goto LABEL_38;
  }
  *v10 = 47;
  if ( v10 + 1 >= v6 )
  {
    *(v6 - 1) = 0;
    v10 = v6 - 1;
    goto LABEL_27;
  }
  ++v10;
LABEL_28:
  *v10 = 0;
  return s;
}

