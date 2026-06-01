char *__fastcall sub_11E83E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rax
  const char **v5; // rax
  const char *v6; // rbp
  size_t v7; // rax
  bool v8; // dl
  const char *v9; // rbx
  char v10; // cl
  __int64 v11; // rax
  const char **v12; // rax
  size_t v13; // rsi
  char *v14; // rbx
  unsigned int v15; // eax
  size_t v16; // rdx
  size_t v17; // rax
  size_t v18; // rbp
  size_t v19; // rax
  size_t v20; // rax
  void *s1; // [rsp+0h] [rbp-28h] BYREF
  size_t v22; // [rsp+8h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 != 3 )
  {
    if ( v2 <= 3 )
    {
      if ( v2 != 1 )
        return sub_112CBE0(a1);
    }
    else
    {
      if ( v2 == 5 )
      {
        j__strlen("arm64_32");
        return "arm64_32";
      }
      if ( v2 != 35 )
        return sub_112CBE0(a1);
    }
    v4 = sub_10DCD30(a2, 0x8D4u);
    if ( !v4 )
      goto LABEL_32;
    v5 = *(const char ***)(v4 + 48);
    v6 = *v5;
    if ( *v5 )
    {
      v7 = j__strlen(*v5);
      if ( v7 == 6 )
      {
        if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 27446 )
        {
          v9 = "armv6";
          goto LABEL_44;
        }
        if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 27958 )
        {
          v9 = "armv6m";
          goto LABEL_44;
        }
        if ( *(_DWORD *)v6 == 1633907576 && *((_WORD *)v6 + 2) == 25964 )
        {
          v9 = "xscale";
          goto LABEL_44;
        }
        if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 29748 )
        {
          v9 = "armv4t";
          goto LABEL_44;
        }
        if ( (*(_DWORD *)v6 != 1986884193 || *((_WORD *)v6 + 2) != 24887)
          && (*(_DWORD *)v6 != 1986884193 || *((_WORD *)v6 + 2) != 29239) )
        {
          if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 27447 )
            goto LABEL_72;
          if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 27959 )
            goto LABEL_64;
          if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 29495 )
            goto LABEL_24;
          goto LABEL_32;
        }
        goto LABEL_66;
      }
      v8 = v7 != 7;
      if ( v7 == 8 )
      {
        v8 = 0;
        if ( *(_QWORD *)v6 == 0x6A657435766D7261LL )
        {
          v9 = "armv5";
          goto LABEL_44;
        }
        goto LABEL_15;
      }
      if ( v7 == 5 && *(_DWORD *)v6 == 1986884193 && v6[4] == 55 )
      {
LABEL_66:
        v9 = "armv7";
        goto LABEL_44;
      }
      if ( v7 == 7 )
      {
        if ( (*(_DWORD *)v6 != 1986884193 || *((_WORD *)v6 + 2) != 11575 || v6[6] != 97)
          && (*(_DWORD *)v6 != 1986884193 || *((_WORD *)v6 + 2) != 11575 || v6[6] != 114) )
        {
          v10 = 1;
          goto LABEL_16;
        }
        goto LABEL_66;
      }
    }
    else
    {
      v7 = 0;
      v8 = 1;
    }
LABEL_15:
    v10 = v8;
    v8 = 1;
LABEL_16:
    if ( v7 == 7 )
    {
      if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 25911 && v6[6] == 109 )
      {
LABEL_75:
        v9 = "armv7em";
        goto LABEL_44;
      }
    }
    else if ( !v10 && *(_QWORD *)v6 == 0x6D2D6537766D7261LL )
    {
      goto LABEL_75;
    }
    if ( !v8 )
    {
      if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 11575 && v6[6] == 107 )
      {
LABEL_72:
        v9 = "armv7k";
        goto LABEL_44;
      }
      if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 11575 && v6[6] == 109 )
      {
LABEL_64:
        v9 = "armv7m";
        goto LABEL_44;
      }
      if ( *(_DWORD *)v6 == 1986884193 && *((_WORD *)v6 + 2) == 11575 && v6[6] == 115 )
      {
LABEL_24:
        v9 = "armv7s";
        goto LABEL_44;
      }
    }
LABEL_32:
    v11 = sub_10DCD30(a2, 0x913u);
    if ( !v11 )
      goto LABEL_47;
    v12 = *(const char ***)(v11 + 48);
    v13 = 0;
    v14 = (char *)*v12;
    if ( *v12 )
      v13 = j__strlen(*v12);
    v15 = sub_229FE00(v14, v13);
    if ( !v15 )
      goto LABEL_47;
    s1 = (void *)sub_229FB80(v15);
    v22 = v16;
    v17 = j__strlen("armv5");
    v18 = v22;
    v9 = (const char *)s1;
    if ( v17 > v22 || v17 && memcmp(s1, "armv5", v17) )
    {
      v19 = j__strlen("armv6");
      if ( sub_9C7D00((__int64)&s1, "armv6", v19) )
      {
        v20 = j__strlen("6m");
        if ( v20 <= v18 )
        {
          if ( v20 )
            memcmp(&v9[v18 - v20], "6m", v20);
        }
      }
    }
    if ( !v9 )
    {
LABEL_47:
      v9 = "arm";
      j__strlen("arm");
      return (char *)v9;
    }
LABEL_44:
    j__strlen(v9);
    return (char *)v9;
  }
  if ( *(_DWORD *)(a1 + 52) == 35 )
  {
    j__strlen("arm64e");
    return "arm64e";
  }
  else
  {
    j__strlen("arm64");
    return "arm64";
  }
}
