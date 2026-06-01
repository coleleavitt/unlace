__int64 __fastcall sub_1D230(_DWORD *a1, const char *a2)
{
  int v4; // r13d
  unsigned int v5; // edi
  char v6; // r14
  char *v7; // rbx
  char *v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = (char *)__readfsqword(0x28u);
  if ( !a2 )
    goto LABEL_3;
  if ( !*a2 )
    goto LABEL_3;
  v4 = strtol(a2, v8, 10);
  v5 = *v8[0];
  v6 = *v8[0];
  if ( v5 > 0x7F )
    goto LABEL_3;
  v7 = v8[0] + 1;
  while ( isspace(v5) )
  {
    v8[0] = v7;
    v5 = *v7++;
    v6 = v5;
    if ( v5 > 0x7F )
      goto LABEL_3;
  }
  if ( !v6 )
  {
    *a1 = v4;
    return 0;
  }
  else
  {
LABEL_3:
    sub_1D110((__int64)"wrong integer: %s", a2);
    return 33;
  }
}

