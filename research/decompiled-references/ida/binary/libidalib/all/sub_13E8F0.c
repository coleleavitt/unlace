unsigned __int64 __fastcall sub_13E8F0(char *a1)
{
  char *v1; // rbx
  unsigned int v2; // edi
  char v3; // bp
  unsigned __int64 v5; // [rsp+408h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = a1;
  v2 = *a1;
  if ( v2 > 0x7F )
    goto LABEL_7;
  v3 = v2;
  while ( isspace(v2) )
  {
    v2 = *++v1;
    v3 = v2;
    if ( v2 > 0x7F )
      goto LABEL_7;
  }
  if ( v3 )
LABEL_7:
    qsnprintf();
  return v5 - __readfsqword(0x28u);
}

