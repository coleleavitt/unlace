__int64 __fastcall sub_87BC00(int a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  const char *v6; // r12
  char v7; // al
  int v8; // ecx
  unsigned __int64 v9; // rdx
  char v10; // al
  _BYTE *v11; // rcx
  __int64 result; // rax
  _BYTE *v13; // rcx
  _BYTE v14[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( (unsigned int)(a1 - 1) > 0x10 )
  {
    v6 = "unknown error code";
    v7 = 117;
    v8 = 0;
    if ( !a2 )
      goto LABEL_5;
    if ( *(_QWORD *)(a2 + 32) == -1 )
      goto LABEL_4;
  }
  else
  {
    v6 = (&off_2B13100)[a1];
    if ( !a2 || *(_QWORD *)(a2 + 32) == -1 )
    {
LABEL_4:
      v7 = *v6;
      v8 = 0;
      if ( *v6 )
      {
LABEL_5:
        v9 = 0;
        do
        {
          if ( ++v9 < a4 )
            a3[v9 - 1] = v7;
          v7 = v6[v9];
        }
        while ( v7 );
        if ( !v8 )
          goto LABEL_15;
        v10 = v14[0];
        if ( !v14[0] )
          goto LABEL_15;
        goto LABEL_11;
      }
LABEL_25:
      result = 1;
      if ( !a4 )
        return result;
      goto LABEL_18;
    }
  }
  __snprintf_chk();
  v14[22] = 0;
  v7 = *v6;
  if ( *v6 )
  {
    v8 = 1;
    goto LABEL_5;
  }
  v10 = v14[0];
  v9 = 0;
  if ( !v14[0] )
    goto LABEL_25;
LABEL_11:
  v11 = &v14[-v9];
  do
  {
    if ( ++v9 < a4 )
      a3[v9 - 1] = v10;
    v10 = v11[v9];
  }
  while ( v10 );
LABEL_15:
  result = (int)v9 + 1;
  if ( !a4 )
    return result;
  v13 = &a3[v9];
  a3 = &a3[a4 - 1];
  if ( v9 < a4 )
    a3 = v13;
LABEL_18:
  *a3 = 0;
  return result;
}

