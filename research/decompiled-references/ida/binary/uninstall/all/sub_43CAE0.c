__int64 __fastcall sub_43CAE0(__int64 a1, char *a2, int a3)
{
  int v4; // r12d
  char *v6; // rsi
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  int v10; // edx
  const char *v12; // rsi

  v4 = 0;
  v6 = "\"\"";
  if ( a2 )
  {
    sub_48EDF0(a1, "\"", 0xFFFFFFFFLL);
    v9 = (unsigned __int8)*a2;
    if ( a3 > 0 && (_BYTE)v9 != 0 )
    {
      do
      {
        switch ( (char)v9 )
        {
          case 9:
            v12 = "\\t";
            goto LABEL_9;
          case 10:
            v12 = "\\n";
            goto LABEL_9;
          case 11:
            v12 = "\\v";
            goto LABEL_9;
          case 12:
            v12 = "\\f";
            goto LABEL_9;
          case 13:
            v12 = "\\r";
            goto LABEL_9;
          case 34:
            v12 = "\\\"";
LABEL_9:
            ++a2;
            ++v4;
            sub_48EDF0(a1, v12, 0xFFFFFFFFLL);
            break;
          default:
            v10 = *a2++;
            ++v4;
            sub_490C60(a1, (unsigned int)"%c", v10, v9, v7, v8);
            break;
        }
        v9 = (unsigned __int8)*a2;
      }
      while ( v4 < a3 && (_BYTE)v9 != 0 );
    }
    v6 = "\"";
  }
  return sub_48EDF0(a1, v6, 0xFFFFFFFFLL);
}

