__int64 __fastcall sub_22A0A70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v4; // rax
  char *v5; // rsi
  const char *v6; // rdx
  char *v7; // rax
  const char *v8; // rdx
  char *v9; // rax
  const char *v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]

  result = 0;
  if ( a1 )
  {
    v4 = *(char **)(a2 + 8);
    v5 = *(char **)(a2 + 16);
    if ( (a1 & 0x20) != 0 )
    {
      v11 = 10;
      v6 = "+hwdiv-arm";
      v10 = "+hwdiv-arm";
      if ( v4 != v5 )
      {
LABEL_4:
        *(_QWORD *)v4 = v6;
        v7 = v4 + 16;
        *((_QWORD *)v7 - 1) = 10;
        *(_QWORD *)(a2 + 8) = v7;
        if ( (a1 & 0x10) != 0 )
          goto LABEL_5;
        goto LABEL_9;
      }
    }
    else
    {
      v11 = 10;
      v6 = "-hwdiv-arm";
      v10 = "-hwdiv-arm";
      if ( v4 != v5 )
        goto LABEL_4;
    }
    sub_1075D80(a2, v5, &v10);
    v7 = *(char **)(a2 + 8);
    v5 = *(char **)(a2 + 16);
    if ( (a1 & 0x10) != 0 )
    {
LABEL_5:
      v11 = 6;
      v8 = "+hwdiv";
      v10 = "+hwdiv";
      if ( v7 != v5 )
      {
LABEL_6:
        *(_QWORD *)v7 = v8;
        v9 = v7 + 16;
        *((_QWORD *)v9 - 1) = 6;
        *(_QWORD *)(a2 + 8) = v9;
        return 1;
      }
      goto LABEL_10;
    }
LABEL_9:
    v11 = 6;
    v8 = "-hwdiv";
    v10 = "-hwdiv";
    if ( v7 != v5 )
      goto LABEL_6;
LABEL_10:
    sub_1075D80(a2, v7, &v10);
    return 1;
  }
  return result;
}
