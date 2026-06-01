__int64 __fastcall sub_11BF230(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // bp
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  char v9; // bp
  char v10; // al
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rbx
  size_t v20; // rax
  size_t v21; // rbp
  size_t v22; // rax
  int v23; // eax
  bool v24; // al
  const char *v25; // rbx
  size_t v26; // rax
  size_t v27; // rbp
  size_t v28; // rdx

  if ( sub_10DCD30(a1, 0xC39u) && !sub_10DCD30(a1, 0x939u) )
  {
    LODWORD(v3) = a2[8];
    v5 = 1;
    goto LABEL_28;
  }
  v3 = (unsigned int)a2[8];
  if ( a2[12] == 17 )
  {
    v5 = 1;
    goto LABEL_28;
  }
  if ( (unsigned int)v3 <= 0x38 )
  {
    if ( ((1LL << v3) & 0x180008000100000LL) != 0 )
    {
      v5 = 0;
      goto LABEL_28;
    }
    if ( ((1LL << v3) & 0xFFE0E400) != 0 )
      goto LABEL_12;
  }
  v4 = (unsigned int)a2[11];
  v5 = (_DWORD)v4 == 4 || (_DWORD)v4 == 11;
  if ( v5 )
  {
    v12 = sub_10DCD30(a1, 0xAu);
    if ( v12 )
      v5 = sub_21B9810(v12, 3060);
    LODWORD(v3) = a2[8];
    goto LABEL_28;
  }
  v5 = (_DWORD)v4 == 7 || (_DWORD)v4 == 35;
  if ( v5 )
  {
    if ( (unsigned int)v3 > 0x26 )
      goto LABEL_30;
    v6 = 0x79000F0006LL;
    if ( _bittest64(&v6, v3) )
    {
LABEL_12:
      v7 = sub_11BC590(a1);
      LODWORD(v3) = a2[8];
      v5 = v7 ^ 1;
      if ( (_DWORD)v3 == 1 )
        goto LABEL_13;
      goto LABEL_29;
    }
LABEL_28:
    if ( (_DWORD)v3 == 1 )
    {
LABEL_13:
      v4 = (unsigned int)a2[11];
      if ( (unsigned int)v4 <= 0x1F )
        goto LABEL_14;
LABEL_30:
      v13 = v5;
      goto LABEL_31;
    }
LABEL_29:
    if ( (_DWORD)v3 != 35 )
      goto LABEL_30;
    goto LABEL_13;
  }
  if ( (_DWORD)v4 != 15 )
  {
    v24 = sub_113D7A0(a2);
    LODWORD(v3) = a2[8];
    v5 = !v24;
    goto LABEL_28;
  }
  if ( (_DWORD)v3 == 35 )
    goto LABEL_53;
  if ( (unsigned int)v3 <= 0x23 )
  {
    v13 = 0;
    if ( (_DWORD)v3 != 1 )
      goto LABEL_31;
LABEL_53:
    v5 = 1;
LABEL_14:
    v8 = 4160750114LL;
    if ( _bittest64(&v8, v4) )
    {
LABEL_15:
      if ( (_DWORD)v3 == 3 )
        goto LABEL_49;
      if ( (unsigned int)(v3 - 4) <= 1 )
      {
LABEL_58:
        if ( (unsigned int)(v3 - 35) <= 1 )
        {
          v18 = sub_10DCD30(a1, 0x951u);
          if ( v18 )
          {
            v19 = **(const char ***)(v18 + 48);
            v20 = j__strlen("aapcs+leaf");
            v21 = v20;
            if ( v19 )
            {
              v22 = j__strlen(v19);
              if ( v22 == v21 )
              {
                if ( v22 )
                {
                  v23 = memcmp(v19, "aapcs+leaf", v22);
                  v16 = 1;
                  if ( !v23 )
                    goto LABEL_50;
                  goto LABEL_49;
                }
LABEL_67:
                v16 = 1;
                goto LABEL_50;
              }
            }
            else if ( !v20 )
            {
              goto LABEL_67;
            }
          }
        }
LABEL_49:
        v16 = 0;
LABEL_50:
        v10 = sub_21B7850(a1, 2666, 2789, v16);
        return (unsigned int)(v10 != 0) + 2;
      }
      v9 = 1;
      goto LABEL_18;
    }
    goto LABEL_30;
  }
  if ( (_DWORD)v3 == 37 )
    goto LABEL_12;
  v13 = 0;
  if ( (_DWORD)v3 == 38 )
    v13 = a2[13] == 5;
LABEL_31:
  v14 = sub_21B7850(a1, 1254, 1534, v13);
  LODWORD(v3) = a2[8];
  v9 = v14;
  if ( v14 )
    goto LABEL_15;
  if ( (unsigned int)(v3 - 3) <= 2 )
    goto LABEL_33;
LABEL_18:
  if ( (_DWORD)v3 != 38 )
  {
    if ( (_DWORD)v3 != 59 )
      goto LABEL_20;
LABEL_48:
    if ( v9 )
      goto LABEL_49;
    goto LABEL_33;
  }
  if ( a2[10] == 3 && (a2[11] == 24 || a2[11] == 25) )
    goto LABEL_48;
LABEL_20:
  if ( a2[12] != 17 || (unsigned int)(v3 - 1) <= 1 )
  {
    v10 = sub_21B7850(a1, 2666, 2789, 1);
    if ( v9 )
      return (unsigned int)(v10 != 0) + 2;
    goto LABEL_34;
  }
  if ( v9 )
    goto LABEL_58;
LABEL_33:
  sub_21B7850(a1, 2666, 2789, 0);
LABEL_34:
  v15 = a2[8];
  if ( v15 > 0x24 )
    return 0;
  if ( ((1LL << v15) & 0x1800000006LL) == 0 )
  {
    if ( ((1LL << v15) & 8) != 0 )
      return a2[11] == 15;
    return 0;
  }
  v17 = sub_10DCD30(a1, 0x951u);
  if ( !v17 )
    return 0;
  v25 = **(const char ***)(v17 + 48);
  v26 = j__strlen("none");
  v27 = v26;
  if ( !v25 )
    return v26 != 0;
  v28 = j__strlen(v25);
  result = 1;
  if ( v28 == v27 )
  {
    if ( v28 )
      return memcmp(v25, "none", v28) != 0;
    return 0;
  }
  return result;
}
