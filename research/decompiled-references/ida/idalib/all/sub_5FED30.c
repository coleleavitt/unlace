__int64 __fastcall sub_5FED30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r13
  __int64 v5; // r15
  const char *v7; // r14
  char v8; // al
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r13
  const char *v13; // [rsp+0h] [rbp-80h]
  unsigned int v14; // [rsp+8h] [rbp-78h]
  __int64 v16; // [rsp+18h] [rbp-68h] BYREF
  char v17[8]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h]
  unsigned __int64 v20; // [rsp+48h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  v17[0] = 2;
  v19 = 0;
  v18 = 0;
  v4 = qword_2CCB598;
  v5 = 3;
  if ( !(unsigned __int8)parse_config_value(v17, a1) )
    goto LABEL_2;
  if ( v17[0] == 7 )
  {
    v14 = 1;
    v13 = haystack;
    if ( *((_QWORD *)&v18 + 1) )
      v13 = (const char *)v18;
    goto LABEL_8;
  }
  if ( v17[0] > 7 )
  {
    if ( v17[0] == 9 )
    {
      v14 = 5;
      v13 = (const char *)&v18;
      goto LABEL_8;
    }
    goto LABEL_24;
  }
  if ( v17[0] == 2 )
  {
    v14 = 2;
    v13 = (const char *)&v18;
    goto LABEL_8;
  }
  if ( v17[0] != 4 )
  {
LABEL_24:
    v5 = 2;
    goto LABEL_2;
  }
  v14 = 3;
  v13 = (const char *)&v18;
LABEL_8:
  v7 = haystack;
  if ( *(_QWORD *)(a2 + 8) )
    v7 = *(const char **)a2;
  if ( (*(_BYTE *)(v4 + 940) & 2) == 0 )
    goto LABEL_16;
  v8 = sub_3FB5F0();
  v9 = 0;
  if ( v8 )
    v9 = *(unsigned __int8 *)(v4 + 158);
  v16 = 1;
  v10 = sub_3792E0(8u, v7, v14, v13, &v16, v9, v13);
  v5 = 0;
  if ( v10 != 1 )
  {
    if ( !v10 || (v5 = v16, v16 == 1) )
    {
LABEL_16:
      v11 = *(_QWORD *)(v4 + 624);
      if ( v11 && (unsigned int)sub_379440(v11, 44, 0, " ", 0, 0, 0) && (v12 = *(_QWORD *)(v4 + 624), v16 = 1, v12) )
      {
        if ( (unsigned int)sub_379440(v12, 44, 0, " ", 0, 0, 0) )
          sub_379440(v12, 44, &v16, v7, a4, v14, v13);
        v5 = v16;
      }
      else
      {
        v5 = 1;
      }
    }
  }
LABEL_2:
  free_idcv(v17);
  return v5;
}
