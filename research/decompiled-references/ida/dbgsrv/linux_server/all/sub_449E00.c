/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449E00
// Address: 0x0000000000449E00

//----- (0000000000449E00) ----------------------------------------------------
unsigned __int8 *__fastcall sub_449E00(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int8 *i; // rbp
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  _BYTE *v6; // r13
  __int64 v8; // rax
  char v9; // dl
  char *v10; // rax
  char v11; // dl

  v1 = 0xFFFFFFFEFFFFD9FFLL;
  for ( i = *(unsigned __int8 **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = i )
  {
    v4 = *i;
    if ( (unsigned __int8)v4 > 0x20u )
      break;
    if ( _bittest64((const __int64 *)&v1, v4) && (unsigned __int8)(v4 - 11) > 1u )
    {
      v5 = (char)v4;
      goto LABEL_4;
    }
    ++i;
  }
  v5 = (char)v4;
  if ( (unsigned int)(char)v4 > 0x7F )
  {
    *(_BYTE *)(a1 + 580) = v4;
    v6 = i;
  }
  else
  {
LABEL_4:
    v6 = i;
    if ( isalpha(v5) || (_BYTE)v4 == 95 || (_BYTE)v4 == 36 )
    {
      while ( v5 <= 0x7F && isalnum(v5) || (_BYTE)v4 == 95 || (_BYTE)v4 == 36 )
      {
        *(_QWORD *)(a1 + 8) = ++v6;
        v5 = (char)*v6;
        LOBYTE(v4) = *v6;
      }
    }
    *(_BYTE *)(a1 + 580) = v4;
    if ( !(_BYTE)v4 )
      return i;
  }
  *v6 = 0;
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v8 + 1;
  v9 = *(_BYTE *)(v8 + 1);
  if ( (unsigned __int8)(v9 - 9) > 4u && v9 != 32 )
    return i;
  v10 = (char *)(v8 + 2);
  do
  {
    do
    {
      *(_QWORD *)(a1 + 8) = v10;
      v11 = *v10++;
    }
    while ( (unsigned __int8)(v11 - 9) <= 4u );
  }
  while ( v11 == 32 );
  return i;
}
