__int64 __fastcall sub_22A0B80(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  char *v6; // rsi
  unsigned __int64 v7; // rdx
  char *v8; // rsi
  char *v10; // rsi
  unsigned __int64 v11; // rdx
  char *v12; // rsi

  if ( a1 )
  {
    v3 = (unsigned __int64 *)&unk_2BEDF70;
    while ( *v3 == (a1 & *v3) )
    {
      v5 = v3[2];
      if ( !v5 )
        break;
      v6 = *(char **)(a2 + 8);
      if ( v6 == *(char **)(a2 + 16) )
      {
        sub_1245C50(a2, v6, v3 + 1);
LABEL_4:
        v3 += 7;
        if ( v3 == (unsigned __int64 *)&off_2BEE7C0 )
          return sub_22A0A70(a1, a2);
      }
      else
      {
        v7 = v3[1];
        v8 = v6 + 16;
        *((_QWORD *)v8 - 1) = v5;
        v3 += 7;
        *((_QWORD *)v8 - 2) = v7;
        *(_QWORD *)(a2 + 8) = v8;
        if ( v3 == (unsigned __int64 *)&off_2BEE7C0 )
          return sub_22A0A70(a1, a2);
      }
    }
    v4 = v3[4];
    if ( v4 )
    {
      v10 = *(char **)(a2 + 8);
      if ( v10 == *(char **)(a2 + 16) )
      {
        sub_1245C50(a2, v10, v3 + 3);
      }
      else
      {
        v11 = v3[3];
        v12 = v10 + 16;
        *((_QWORD *)v12 - 1) = v4;
        *((_QWORD *)v12 - 2) = v11;
        *(_QWORD *)(a2 + 8) = v12;
      }
    }
    goto LABEL_4;
  }
  return 0;
}
