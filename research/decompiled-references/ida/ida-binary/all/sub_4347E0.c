unsigned __int64 __fastcall sub_4347E0(char a1)
{
  const char *v1; // rax
  char *v3; // rsi
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  char *v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  char *v12; // rsi
  char *v13; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = nullptr;
  v14 = 0;
  if ( (a1 & 1) == 0 )
  {
    if ( (a1 & 2) == 0 )
    {
      if ( (a1 & 4) == 0 )
      {
        if ( (a1 & 0x20) == 0 )
        {
LABEL_5:
          v1 = &s1;
          goto LABEL_6;
        }
        goto LABEL_24;
      }
LABEL_14:
      v8 = 2;
      v7 = 0;
      goto LABEL_15;
    }
    v3 = nullptr;
    v4 = 0;
    v5 = 2;
LABEL_10:
    v13 = (char *)qvector_reserve(&v13, v3, v5, 1);
    v3 = v13;
LABEL_11:
    *(_QWORD *)&v14 = v5;
    v3[v4] = 100;
    v13[v4 + 1] = 0;
    v6 = v14;
    goto LABEL_12;
  }
  v13 = (char *)qvector_reserve(&v13, 0, 2, 1);
  *(_QWORD *)&v14 = 2;
  *v13 = 97;
  v13[1] = 0;
  v6 = v14;
  if ( (a1 & 2) != 0 )
  {
    v3 = v13;
    if ( (_QWORD)v14 )
    {
      v4 = v14 - 1;
      v5 = v14 + 1;
    }
    else
    {
      v4 = 0;
      v5 = 2;
    }
    if ( *((_QWORD *)&v14 + 1) >= v5 )
      goto LABEL_11;
    goto LABEL_10;
  }
LABEL_12:
  if ( (a1 & 4) == 0 )
    goto LABEL_18;
  v7 = v6 - 1;
  v8 = v6 + 1;
  if ( !v6 )
    goto LABEL_14;
LABEL_15:
  v9 = v13;
  if ( *((_QWORD *)&v14 + 1) < v8 )
  {
    v13 = (char *)qvector_reserve(&v13, v13, v8, 1);
    v9 = v13;
  }
  *(_QWORD *)&v14 = v8;
  v9[v7] = 101;
  v13[v7 + 1] = 0;
  v6 = v14;
LABEL_18:
  if ( (a1 & 0x20) == 0 )
    goto LABEL_19;
  v10 = v6 - 1;
  v11 = v6 + 1;
  if ( !v6 )
  {
LABEL_24:
    v12 = v13;
    v11 = 2;
    v10 = 0;
    if ( *((_QWORD *)&v14 + 1) < 2u )
      goto LABEL_25;
    goto LABEL_23;
  }
  v12 = v13;
  if ( *((_QWORD *)&v14 + 1) < v11 )
  {
LABEL_25:
    v13 = (char *)qvector_reserve(&v13, v12, v11, 1);
    v12 = v13;
  }
LABEL_23:
  *(_QWORD *)&v14 = v11;
  v12[v10] = 115;
  v13[v10 + 1] = 0;
  v6 = v14;
LABEL_19:
  v1 = v13;
  if ( !v6 )
    goto LABEL_5;
LABEL_6:
  reg_str_set("ScanOptions", 0, v1);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, nullptr);
  }
  return v15 - __readfsqword(0x28u);
}
