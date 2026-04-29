unsigned __int64 __fastcall sub_7C0F0(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  const char *v4; // rbp
  __int64 v5; // r12
  int v6; // edx
  char v7; // al
  int v9; // eax
  __int16 v10; // cx
  int v11; // eax
  __int64 v12; // rdx
  char v13; // dl
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  int v20; // [rsp+0h] [rbp-38h]
  __int16 v21; // [rsp+4h] [rbp-34h]
  __int16 v22; // [rsp+8h] [rbp-30h]
  __int16 v23; // [rsp+Ch] [rbp-2Ch]
  __int16 v24; // [rsp+10h] [rbp-28h]
  int v25; // [rsp+14h] [rbp-24h]
  unsigned __int64 v26; // [rsp+18h] [rbp-20h]

  v3 = a1 + 8;
  v26 = __readfsqword(0x28u);
  v4 = a2;
  *(_BYTE *)(v3 + 10) = 48;
  *(_QWORD *)(v3 - 8) = *(_QWORD *)a2;
  copy_tinfo_t();
  v5 = *(_QWORD *)a2;
  if ( **(_BYTE **)a2 == 95 )
  {
    *(_BYTE *)(a1 + 18) = 29;
    *(_WORD *)(a1 + 16) = strcmp(*(const char **)a2, "__n64") == 0 ? 8 : 16;
    return v26 - __readfsqword(0x28u);
  }
  if ( !strcmp(*(const char **)a2, "poly128_t") )
  {
    *(_BYTE *)(a1 + 18) = 38;
    *(_WORD *)(a1 + 16) = 16;
    return v26 - __readfsqword(0x28u);
  }
  if ( !a2[32] )
  {
    if ( *(_BYTE *)v5 == 105 && *(_BYTE *)(v5 + 1) == 110 && *(_BYTE *)(v5 + 2) == 116 )
    {
      v9 = qsscanf();
      if ( v9 > 1 )
      {
        v10 = v21;
        if ( v9 == 3 )
          v10 = v22 * v21;
        v11 = v20 / 8;
        v12 = (unsigned int)(v20 / 8 - 1);
        if ( (unsigned int)v12 <= 7 )
        {
          v13 = byte_8F120[v12];
          if ( v13 != 48 )
            v13 |= 0x10u;
          goto LABEL_18;
        }
LABEL_39:
        v13 = 48;
LABEL_18:
        *(_BYTE *)(a1 + 18) = v13;
LABEL_19:
        *(_WORD *)(a1 + 16) = v10 * v11;
        return v26 - __readfsqword(0x28u);
      }
    }
    else if ( !strncmp((const char *)v5, "uint", 4u) )
    {
      v16 = qsscanf();
      if ( v16 > 1 )
      {
        v10 = v21;
        if ( v16 == 3 )
          v10 = v23 * v21;
        v11 = v20 / 8;
        v17 = (unsigned int)(v20 / 8 - 1);
        if ( (unsigned int)v17 <= 7 )
        {
          v13 = byte_8F120[v17];
          if ( v13 != 48 )
            v13 |= 0x20u;
          goto LABEL_18;
        }
        goto LABEL_39;
      }
    }
    else
    {
      if ( !strncmp((const char *)v5, "poly", 4u) )
      {
LABEL_30:
        v14 = qsscanf();
        if ( v14 > 1 )
        {
          v10 = v21;
          if ( v14 == 3 )
            v10 = v24 * v21;
          *(_BYTE *)(a1 + 18) = 7;
          v11 = v20 / 8;
          goto LABEL_19;
        }
        goto LABEL_65;
      }
      if ( strncmp((const char *)v5, "float", 5u) )
      {
        if ( under_debugger )
          goto LABEL_67;
        interr(10214);
LABEL_25:
        if ( !strncmp(v4, "svfloat", 7u) )
        {
          if ( (unsigned int)qsscanf() == 1 )
          {
            v7 = 57;
            if ( v25 / 8 != 2 )
            {
              v7 = 25;
              if ( v25 / 8 == 4 )
                v7 = 9;
            }
            goto LABEL_5;
          }
          goto LABEL_66;
        }
        if ( !strncmp(v4, "svint", 5u) )
        {
          if ( (unsigned int)qsscanf() == 1 )
          {
            v18 = (unsigned int)(v25 / 8 - 1);
            if ( (unsigned int)v18 <= 7 )
            {
              v7 = byte_8F120[v18];
              if ( v7 != 48 )
                v7 |= 0x10u;
              goto LABEL_5;
            }
LABEL_52:
            v7 = 48;
            goto LABEL_5;
          }
        }
        else
        {
          if ( strncmp(v4, "svuint", 6u) )
          {
            if ( under_debugger )
              goto LABEL_67;
            interr(0);
            goto LABEL_30;
          }
          if ( (unsigned int)qsscanf() == 1 )
          {
            v15 = (unsigned int)(v25 / 8 - 1);
            if ( (unsigned int)v15 <= 7 )
            {
              v7 = byte_8F120[v15];
              if ( v7 != 48 )
                v7 |= 0x20u;
              goto LABEL_5;
            }
            goto LABEL_52;
          }
        }
LABEL_66:
        sub_780E0();
LABEL_67:
        BUG();
      }
      v19 = qsscanf();
      if ( v19 > 1 )
      {
        v10 = v21;
        if ( v19 == 3 )
          v10 = v25 * v21;
        v13 = 57;
        v11 = v20 / 8;
        if ( v20 / 8 != 2 )
        {
          v13 = 25;
          if ( v11 == 4 )
            v13 = 9;
        }
        goto LABEL_18;
      }
    }
LABEL_65:
    sub_780C0();
    goto LABEL_66;
  }
  v25 = 0;
  *(_WORD *)(a1 + 16) = -1;
  v4 = *(const char **)a2;
  v6 = strcmp(*(const char **)a2, "svbool_t");
  v7 = 34;
  if ( v6 )
    goto LABEL_25;
LABEL_5:
  *(_BYTE *)(a1 + 18) = v7;
  return v26 - __readfsqword(0x28u);
}
