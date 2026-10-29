_BYTE *__fastcall sub_E14B10(__int64 *a1, int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ecx
  char *v5; // r8
  unsigned int v6; // eax
  char *v7; // rsi
  _BYTE *v8; // rax
  _BYTE *result; // rax
  char v10; // [rsp+Fh] [rbp-9h] BYREF
  _BYTE v11[8]; // [rsp+10h] [rbp-8h] BYREF

  v3 = *a1;
  if ( !a2 )
    goto LABEL_10;
  if ( a2 == 1 )
  {
    v8 = *(_BYTE **)(v3 + 32);
    if ( (unsigned __int64)v8 >= *(_QWORD *)(v3 + 24) )
    {
      sub_2257CD0(v3, 48);
    }
    else
    {
      *(_QWORD *)(v3 + 32) = v8 + 1;
      *v8 = 48;
    }
    v3 = *a1;
LABEL_10:
    result = *(_BYTE **)(v3 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(v3 + 24) )
      return (_BYTE *)sub_2257CD0(v3, 95);
    goto LABEL_11;
  }
  v4 = a2 - 1;
  v5 = &v10;
  while ( 1 )
  {
    v6 = v4 % 0x24;
    v7 = v5;
    if ( v4 % 0x24 > 9 )
      break;
    *v5-- = v6 + 48;
    if ( v4 <= 0x23 )
      goto LABEL_13;
LABEL_6:
    v4 /= 0x24u;
  }
  *v5-- = v6 + 55;
  if ( v4 > 0x23 )
    goto LABEL_6;
LABEL_13:
  sub_22581D0(v3, v7, v11 - v7);
  v3 = *a1;
  result = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)result < *(_QWORD *)(*a1 + 24) )
  {
LABEL_11:
    *(_QWORD *)(v3 + 32) = result + 1;
    *result = 95;
    return result;
  }
  return (_BYTE *)sub_2257CD0(v3, 95);
}

