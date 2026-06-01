__int64 __fastcall sub_89F580(int a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  const char *v6; // r12
  __int64 v7; // r9
  char v8; // al
  int v9; // ecx
  unsigned __int64 v10; // rdx
  char v11; // al
  _BYTE *v12; // rcx
  __int64 result; // rax
  _BYTE *v14; // rcx
  _BYTE v15[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( (unsigned int)(a1 - 1) > 0x10 )
  {
    v6 = "unknown error code";
    v8 = 117;
    v9 = 0;
    if ( !a2 )
      goto LABEL_5;
    v7 = *(_QWORD *)(a2 + 32);
    if ( v7 == -1 )
      goto LABEL_4;
  }
  else
  {
    v6 = (&off_2B3D0A0)[a1];
    if ( !a2 || (v7 = *(_QWORD *)(a2 + 32), v7 == -1) )
    {
LABEL_4:
      v8 = *v6;
      v9 = 0;
      if ( *v6 )
      {
LABEL_5:
        v10 = 0;
        do
        {
          if ( ++v10 < a4 )
            a3[v10 - 1] = v8;
          v8 = v6[v10];
        }
        while ( v8 );
        if ( !v9 )
          goto LABEL_15;
        v11 = v15[0];
        if ( !v15[0] )
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
  __snprintf_chk(v15, 23, 1, 23, " at offset %d", v7);
  v15[22] = 0;
  v8 = *v6;
  if ( *v6 )
  {
    v9 = 1;
    goto LABEL_5;
  }
  v11 = v15[0];
  v10 = 0;
  if ( !v15[0] )
    goto LABEL_25;
LABEL_11:
  v12 = &v15[-v10];
  do
  {
    if ( ++v10 < a4 )
      a3[v10 - 1] = v11;
    v11 = v12[v10];
  }
  while ( v11 );
LABEL_15:
  result = (int)v10 + 1;
  if ( !a4 )
    return result;
  v14 = &a3[v10];
  a3 = &a3[a4 - 1];
  if ( v10 < a4 )
    a3 = v14;
LABEL_18:
  *a3 = 0;
  return result;
}
