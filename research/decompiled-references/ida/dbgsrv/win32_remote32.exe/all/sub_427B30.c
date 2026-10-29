/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427B30
// Address: 0x00427B30

//----- (00427B30) --------------------------------------------------------
char *__usercall sub_427B30@<eax>(int a1@<ebx>, char *a2)
{
  char *v2; // esi
  __int8 *v3; // edi
  bool v4; // zf
  char v5; // al
  char v6; // al
  unsigned int v7; // ebx
  char *v8; // ebp
  char v9; // dl
  int v10; // edi
  char v11; // ch
  char v12; // cl
  char i; // al
  char v14; // cl
  char *v15; // esi
  char v16; // al
  int v18; // ebp
  unsigned int v19; // edi

  v2 = a2;
  v3 = sub_464F10(a2, 0);
  v4 = v3 == a2;
  if ( v3 <= a2 )
  {
LABEL_6:
    if ( v4 )
      return nullptr;
  }
  else
  {
    while ( 1 )
    {
      v5 = *(v3 - 1);
      if ( v5 < 0 )
        break;
      if ( sub_46B7F0(a1, (unsigned __int8)v5) )
      {
        if ( --v3 > a2 )
          continue;
      }
      v4 = v3 == a2;
      goto LABEL_6;
    }
  }
  v6 = *(v3 - 1);
  v7 = (unsigned int)(v3 - 1);
  if ( v6 == 125 )
    return nullptr;
  v8 = a2;
  if ( v6 != 59 )
    v7 = (unsigned int)v3;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)a2 < v7 )
  {
    do
    {
      v12 = *v2++;
      if ( v9 )
      {
        if ( v12 == v9 )
        {
          v9 = 0;
        }
        else if ( v12 == 92 )
        {
          if ( !*v2 )
            break;
          ++v2;
        }
      }
      else
      {
        switch ( v12 )
        {
          case '"':
          case '\'':
            v9 = v12;
            break;
          case '(':
            ++v10;
            break;
          case ')':
            if ( --v10 < 0 )
              v11 = 1;
            break;
          case '/':
            if ( *v2 == 47 )
            {
              for ( i = *++v2; i; i = *++v2 )
              {
                if ( i == 10 )
                  break;
              }
            }
            else if ( *v2 == 42 )
            {
              v14 = *++v2;
              if ( v14 )
              {
                while ( v14 != 42 || v2[1] != 47 )
                {
                  v14 = *++v2;
                  if ( !v14 )
                    goto LABEL_36;
                }
                v2 += 2;
              }
            }
            break;
          case ';':
          case '}':
            v10 = 0;
            v8 = v2;
            v11 = 0;
            break;
          case '{':
            v8 = nullptr;
            break;
          default:
            break;
        }
      }
LABEL_36:
      ;
    }
    while ( (unsigned int)v2 < v7 );
  }
  v15 = nullptr;
  if ( !v11 )
    v15 = v8;
  if ( v15 )
  {
    while ( 1 )
    {
      while ( *v15 >= 0 && sub_46B7F0(v7, (unsigned __int8)*v15) )
        ++v15;
      if ( *v15 != 47 || v15[1] != 47 )
        break;
      v16 = 47;
      do
      {
        if ( v16 == 10 )
          break;
        v16 = *++v15;
      }
      while ( v16 );
      if ( !*v15 )
        return nullptr;
    }
    v18 = 0;
    while ( 1 )
    {
      v19 = strlen((const char *)off_48BE94[v18]);
      if ( !sub_467F80((int)v15, (_DWORD *)off_48BE94[v18], v19) )
      {
        LOBYTE(v7) = v15[v19];
        if ( ((v7 & 0x80u) != 0 || !sub_46B640(v7, (unsigned __int8)v7)) && (_BYTE)v7 != 95 )
          break;
      }
      if ( (unsigned int)++v18 >= 11 )
        return v15;
    }
    return nullptr;
  }
  return v15;
}
// 48BE94: using guessed type int off_48BE94[3];
