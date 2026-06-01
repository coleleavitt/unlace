__int64 __fastcall sub_20D1C20(char **a1)
{
  char *v1; // r13
  char *v2; // rbx
  size_t v3; // r12
  __int64 result; // rax
  signed __int64 v5; // rax
  __int64 v6; // rdx
  char *v7; // rcx
  signed __int64 v8; // rbx
  char v9; // cl
  char *v10; // rax
  char *v11; // rsi
  __int64 v12; // rdx
  char *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-30h]

  v1 = a1[1];
  v2 = *a1;
  v3 = v1 - *a1;
  if ( sub_20D1BF0(v3, *a1, 3u, "fpT") )
  {
    *a1 = v2 + 3;
    return sub_20D1380((__int64)(a1 + 102), "this");
  }
  else if ( sub_20D1BF0(v3, v2, 2u, "fp") )
  {
    *a1 = v2 + 2;
    sub_20CFB50(a1, v1);
    v5 = sub_20CEB80(a1, 0);
    v7 = *a1;
    v8 = v5;
    result = 0;
    if ( *a1 != a1[1] && *v7 == 95 )
    {
      v14 = v6;
      *a1 = v7 + 1;
LABEL_9:
      result = sub_20CF970((__int64)(a1 + 102), 32);
      v9 = *(_BYTE *)(result + 10);
      *(_WORD *)(result + 8) = 16451;
      *(_QWORD *)(result + 16) = v8;
      *(_QWORD *)(result + 24) = v14;
      *(_BYTE *)(result + 10) = v9 & 0xF0 | 5;
      *(_QWORD *)result = off_2BE7FE0;
    }
  }
  else
  {
    if ( sub_20D1BF0(v3, v2, 2u, "fL") )
    {
      *a1 = v2 + 2;
      if ( sub_20CEB80(a1, 0) )
      {
        v10 = *a1;
        v11 = a1[1];
        if ( *a1 != v11 && *v10 == 112 )
        {
          *a1 = v10 + 1;
          sub_20CFB50(a1, v11);
          v8 = sub_20CEB80(a1, 0);
          v13 = *a1;
          if ( *a1 != a1[1] && *v13 == 95 )
          {
            v14 = v12;
            *a1 = v13 + 1;
            goto LABEL_9;
          }
        }
      }
    }
    return 0;
  }
  return result;
}
