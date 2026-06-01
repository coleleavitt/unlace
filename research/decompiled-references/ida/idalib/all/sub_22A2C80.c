__int64 __fastcall sub_22A2C80(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  const char *v5; // rax
  char *v6; // rsi
  char *v7; // rsi
  const char *v9[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( a1 )
  {
    v3 = &unk_2BEFB90;
    while ( 1 )
    {
      if ( *v3 != (a1 & *v3) )
        goto LABEL_3;
      v4 = v3[1];
      if ( !v4 )
        goto LABEL_3;
      v9[0] = *((const char **)v3 + 1);
      v5 = (const char *)strlen(v9[0]);
      v6 = *(char **)(a2 + 8);
      v9[1] = v5;
      if ( v6 == *(char **)(a2 + 16) )
      {
        sub_1075D80(a2, v6, v9);
LABEL_3:
        v3 += 5;
        if ( &unk_2BF0388 == (_UNKNOWN *)v3 )
          return 1;
      }
      else
      {
        *(_QWORD *)v6 = v4;
        v3 += 5;
        v7 = v6 + 16;
        *((_QWORD *)v7 - 1) = v5;
        *(_QWORD *)(a2 + 8) = v7;
        if ( &unk_2BF0388 == (_UNKNOWN *)v3 )
          return 1;
      }
    }
  }
  return 0;
}
