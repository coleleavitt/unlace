void __fastcall sub_6873F0(void (*a1)(const char *, ...), const char *a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  int v4; // edx
  const char *i; // rsi

  if ( a3 )
  {
    v3 = a3;
    a1("unsigned char %s[] = { ", a2);
    if ( *v3 )
    {
      v4 = (unsigned __int8)*v3;
      for ( i = &byte_22CD811; ; i = ", " )
      {
        ++v3;
        a1("%s0x%02X", i, v4);
        if ( !*v3 )
          break;
        v4 = (unsigned __int8)*v3;
      }
    }
    a1(" };\n");
  }
}

