char *__fastcall sub_1CAC40(char *s1)
{
  char *v1; // rbp
  int v2; // r12d

  v1 = "$IP";
  if ( strcmp(s1, "EIP") )
  {
    if ( strcmp(s1, "RIP") )
    {
      v2 = (unsigned __int8)*s1;
      if ( v2 != 73 || s1[1] != 80 || s1[2] )
      {
        if ( v2 != 80 || s1[1] != 67 || (v1 = "$IP", s1[2]) )
        {
          v1 = "$SP";
          if ( strcmp(s1, "ESP") )
          {
            if ( strcmp(s1, "RSP") && (v2 != 83 || s1[1] != 80 || s1[2]) )
            {
              v1 = "$FP";
              if ( strcmp(s1, "EFP") && strcmp(s1, "RFP") && (v2 != 70 || s1[1] != 80 || s1[2]) )
                return nullptr;
            }
          }
        }
      }
    }
  }
  return v1;
}
