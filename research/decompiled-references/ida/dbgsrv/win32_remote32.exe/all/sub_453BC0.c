/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453BC0
// Address: 0x00453BC0

//----- (00453BC0) --------------------------------------------------------
char *__cdecl sub_453BC0(char *a1, unsigned __int8 *a2, int a3)
{
  char v4; // al
  unsigned __int8 *v5; // edi
  unsigned int v6; // ebx
  unsigned __int8 *v7; // esi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  const CHAR *v10; // ecx
  unsigned __int8 v11; // al

  if ( a3 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( !sub_464F10(a1, 0x25u) )
    return a1;
  v4 = *a1;
  v5 = (unsigned __int8 *)(a1 + 1);
  v6 = (unsigned int)&a2[a3];
  v7 = a2;
  if ( a2 >= &a2[a3] )
    goto LABEL_38;
  while ( 1 )
  {
    *v7++ = v4;
    if ( (unsigned int)v7 >= v6 )
    {
      v7 = (unsigned __int8 *)(v6 - 1);
      *(_BYTE *)(v6 - 1) = 0;
    }
    if ( !v4 )
      return (char *)a2;
    if ( v4 != 37 )
      goto LABEL_32;
    if ( *v5 == 37 )
    {
      ++v5;
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_38;
      *v7++ = 37;
      if ( (unsigned int)v7 >= v6 )
      {
        v7 = (unsigned __int8 *)(v6 - 1);
        *(_BYTE *)(v6 - 1) = 0;
      }
      goto LABEL_32;
    }
    if ( sub_464F10("+-0123456789*#.", *v5) )
    {
      while ( 1 )
      {
        v8 = *v5++;
        if ( (unsigned int)v7 >= v6 )
          break;
        *v7++ = v8;
        if ( (unsigned int)v7 >= v6 )
        {
          v7 = (unsigned __int8 *)(v6 - 1);
          *(_BYTE *)(v6 - 1) = 0;
        }
        if ( !sub_464F10("+-0123456789*#.", *v5) )
          goto LABEL_18;
      }
LABEL_38:
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(518);
    }
LABEL_18:
    v9 = *v5;
    if ( *v5 == 97 )
    {
      if ( (unsigned int)v7 >= v6 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(520);
      }
      v10 = pNodeName;
      if ( v7 == (unsigned __int8 *)(v6 - 1) )
      {
LABEL_27:
        *v7 = 0;
      }
      else
      {
        while ( 1 )
        {
          v11 = *v10++;
          *v7 = v11;
          if ( !v11 )
            break;
          if ( ++v7 == (unsigned __int8 *)(v6 - 1) )
            goto LABEL_27;
        }
      }
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_38;
      *v7++ = 88;
      if ( (unsigned int)v7 >= v6 )
      {
        v7 = (unsigned __int8 *)(v6 - 1);
        *(_BYTE *)(v6 - 1) = 0;
      }
      ++v5;
LABEL_32:
      v4 = *v5++;
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_38;
    }
    else
    {
      ++v5;
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_38;
      *v7++ = v9;
      if ( (unsigned int)v7 >= v6 )
      {
        v7 = (unsigned __int8 *)(v6 - 1);
        *(_BYTE *)(v6 - 1) = 0;
        goto LABEL_32;
      }
      v4 = *v5++;
    }
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
