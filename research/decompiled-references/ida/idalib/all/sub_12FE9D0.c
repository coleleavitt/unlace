__int64 __fastcall sub_12FE9D0(__int64 a1, char *a2)
{
  char v4; // al
  unsigned __int64 v5; // rdx
  char *v6; // rsi
  _DWORD *v7; // rax
  int *v8; // rax
  _BYTE *v9; // rdx
  char v10; // cl
  bool v11; // cc
  unsigned __int64 v12; // rdx
  char *v13; // rsi
  _DWORD *v14; // rdi
  unsigned __int64 v16; // r9
  char *v17; // rdi
  char *v18; // rsi
  unsigned int v19; // ecx
  unsigned int v20; // edi
  __int64 v21; // r8
  unsigned __int64 v22; // r8
  char *v23; // rax
  char *v24; // rsi
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rdi
  _DWORD *v28; // rax
  __int64 (__fastcall **v29)(); // [rsp+0h] [rbp-8h] BYREF
  int vars0; // [rsp+8h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+10h] [rbp+8h]
  _DWORD *vars18; // [rsp+20h] [rbp+18h]
  char vars20; // [rsp+28h] [rbp+20h]
  int vars24; // [rsp+2Ch] [rbp+24h]
  __int64 vars28; // [rsp+30h] [rbp+28h]
  int *vars48; // [rsp+50h] [rbp+48h]

  vars48 = &vars0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  vars28 = a1;
  v29 = &off_2BEBE68;
  vars0 = 0;
  vars20 = 0;
  vars24 = 1;
  vars18 = nullptr;
  vars8 = 0;
  sub_227B8B0(&v29, 0, 0, 0);
  v4 = *a2;
  if ( *a2 == 1 )
  {
    v5 = 13;
    v6 = "preserve-sign";
  }
  else if ( v4 <= 1 )
  {
    v5 = 4;
    v6 = "ieee";
    if ( v4 )
      goto LABEL_23;
  }
  else
  {
    if ( v4 != 2 )
    {
      v5 = 7;
      v6 = "dynamic";
      if ( v4 == 3 )
        goto LABEL_5;
LABEL_23:
      v8 = &vars0;
      goto LABEL_24;
    }
    v5 = 13;
    v6 = "positive-zero";
  }
LABEL_5:
  v7 = vars18;
  if ( v5 <= *((_QWORD *)&vars8 + 1) - (_QWORD)vars18 )
  {
    if ( (unsigned int)v5 < 8 )
    {
      *vars18 = *(_DWORD *)v6;
      *(_DWORD *)((char *)v7 + (unsigned int)v5 - 4) = *(_DWORD *)&v6[(unsigned int)v5 - 4];
      v28 = vars18;
    }
    else
    {
      v22 = (unsigned __int64)(vars18 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)vars18 = *(_QWORD *)v6;
      *(_QWORD *)((char *)v7 + (unsigned int)v5 - 8) = *(_QWORD *)&v6[(unsigned int)v5 - 8];
      v23 = (char *)v7 - v22;
      v24 = (char *)(v6 - v23);
      if ( (((_DWORD)v5 + (_DWORD)v23) & 0xFFFFFFF8) >= 8 )
      {
        v25 = (v5 + (_DWORD)v23) & 0xFFFFFFF8;
        v26 = 0;
        do
        {
          v27 = v26;
          v26 += 8;
          *(_QWORD *)(v22 + v27) = *(_QWORD *)&v24[v27];
        }
        while ( v26 < v25 );
      }
      v28 = vars18;
    }
    v9 = (char *)v28 + v5;
    v8 = &vars0;
    vars18 = v9;
  }
  else
  {
    v8 = (int *)sub_227BF10(&vars0, v6, v5);
    v9 = *((_BYTE **)v8 + 4);
  }
  if ( *((_QWORD *)v8 + 3) > (unsigned __int64)v9 )
  {
    *((_QWORD *)v8 + 4) = v9 + 1;
    *v9 = 44;
    v10 = a2[1];
    v11 = v10 <= 1;
    if ( v10 != 1 )
      goto LABEL_9;
LABEL_25:
    v12 = 13;
    v13 = "preserve-sign";
LABEL_12:
    v14 = *((_DWORD **)v8 + 4);
    if ( *((_QWORD *)v8 + 3) - (_QWORD)v14 < v12 )
    {
LABEL_13:
      sub_227BF10(v8, v13, v12);
      goto LABEL_14;
    }
    goto LABEL_17;
  }
LABEL_24:
  v8 = (int *)sub_227BA10(v8, 44);
  v10 = a2[1];
  v11 = v10 <= 1;
  if ( v10 == 1 )
    goto LABEL_25;
LABEL_9:
  if ( !v11 )
  {
    if ( v10 == 2 )
    {
      v12 = 13;
      v13 = "positive-zero";
    }
    else
    {
      v12 = 7;
      v13 = "dynamic";
      if ( v10 != 3 )
        goto LABEL_14;
    }
    goto LABEL_12;
  }
  v12 = 4;
  v13 = "ieee";
  if ( v10 )
    goto LABEL_14;
  v14 = *((_DWORD **)v8 + 4);
  if ( *((_QWORD *)v8 + 3) - (_QWORD)v14 < 4u )
    goto LABEL_13;
LABEL_17:
  if ( (unsigned int)v12 < 8 )
  {
    *v14 = *(_DWORD *)v13;
    *(_DWORD *)((char *)v14 + (unsigned int)v12 - 4) = *(_DWORD *)&v13[(unsigned int)v12 - 4];
  }
  else
  {
    v16 = (unsigned __int64)(v14 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v14 = *(_QWORD *)v13;
    *(_QWORD *)((char *)v14 + (unsigned int)v12 - 8) = *(_QWORD *)&v13[(unsigned int)v12 - 8];
    v17 = (char *)v14 - v16;
    v18 = (char *)(v13 - v17);
    if ( (((_DWORD)v12 + (_DWORD)v17) & 0xFFFFFFF8) >= 8 )
    {
      v19 = (v12 + (_DWORD)v17) & 0xFFFFFFF8;
      v20 = 0;
      do
      {
        v21 = v20;
        v20 += 8;
        *(_QWORD *)(v16 + v21) = *(_QWORD *)&v18[v21];
      }
      while ( v20 < v19 );
    }
  }
  *((_QWORD *)v8 + 4) += v12;
LABEL_14:
  v29 = &off_2BEBE68;
  sub_227B7A0(&vars0);
  return a1;
}
