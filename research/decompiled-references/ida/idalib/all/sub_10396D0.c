char *__fastcall sub_10396D0(__int64 a1, char *a2, __int64 a3, char *a4)
{
  char *v4; // r12
  char *v6; // rbx
  char v7; // bp
  char v8; // al
  char *result; // rax

  v4 = &a2[a3];
  if ( a2 == &a2[a3] )
  {
LABEL_10:
    j__strlen(&byte_22F0C30);
    return (char *)&byte_22F0C30;
  }
  else
  {
    v6 = a2;
    while ( 1 )
    {
      v7 = *v6;
      if ( isalpha(*v6) || v7 == 64 )
        break;
      if ( ++v6 == v4 )
        goto LABEL_10;
    }
    switch ( v7 )
    {
      case 'D':
        j__strlen("di");
        result = "di";
        break;
      case 'S':
        j__strlen("si");
        result = (char *)"si";
        break;
      case 'Y':
        if ( v4 == v6 + 1 )
          goto LABEL_10;
        v8 = v6[1];
        if ( v8 != 48 && v8 != 122 )
          goto LABEL_10;
        j__strlen("xmm0");
        result = "xmm0";
        break;
      case 'a':
        j__strlen("ax");
        result = "ax";
        break;
      case 'b':
        j__strlen("bx");
        result = "bx";
        break;
      case 'c':
        j__strlen("cx");
        result = "cx";
        break;
      case 'd':
        j__strlen("dx");
        result = (char *)"dx";
        break;
      case 'r':
        result = a4;
        break;
      default:
        goto LABEL_10;
    }
  }
  return result;
}
