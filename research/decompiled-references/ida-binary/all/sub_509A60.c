size_t __fastcall sub_509A60(const char *a1, char a2)
{
  size_t result; // rax
  size_t v3; // rdx
  int v4; // ecx

  result = strlen(a1);
  v3 = (unsigned int)(result - 1);
  if ( (int)result - 1 > 0 )
  {
    do
    {
      if ( a1[v3] != a2 )
      {
        v4 = v3;
        goto LABEL_6;
      }
      --v3;
    }
    while ( v3 );
    v4 = 0;
    goto LABEL_9;
  }
  v4 = result - 1;
  v3 = (int)v3;
LABEL_6:
  if ( v3 < --result )
LABEL_9:
    a1[v4 + 1] = 0;
  return result;
}
