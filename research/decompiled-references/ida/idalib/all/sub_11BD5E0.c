char __fastcall sub_11BD5E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  const char **v4; // rax
  size_t v5; // r12
  const char *v6; // r14
  int v7; // eax
  int v8; // r15d
  bool v9; // bp
  bool v10; // dl
  bool v11; // al
  char result; // al
  int v13; // edx
  char *v14; // rsi
  signed __int64 v15; // rdx
  size_t v16; // rbp
  size_t v17; // rax
  size_t v18; // [rsp+8h] [rbp-90h]
  char v19; // [rsp+8h] [rbp-90h]
  size_t v20; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v21[17]; // [rsp+10h] [rbp-88h] BYREF

  v2 = sub_10DCD30(a2, 0xB5Bu);
  if ( !v2 )
  {
    v13 = *(_DWORD *)(a1 + 1792);
    result = 1;
    if ( (unsigned int)(v13 - 3) > 2 )
    {
      result = *(_DWORD *)(a1 + 1808) == 17 && v13 == 28;
      if ( !result )
        return *(_DWORD *)(a1 + 1804) == 4;
    }
    return result;
  }
  v3 = v2;
  v4 = *(const char ***)(v2 + 48);
  v5 = 0;
  v6 = *v4;
  if ( *v4 )
    v5 = j__strlen(*v4);
  v7 = *(_DWORD *)(a1 + 1792);
  v8 = *(_DWORD *)(a1 + 1812);
  v9 = (unsigned int)(v7 - 27) <= 1 || (unsigned int)(v7 - 13) <= 1;
  if ( !v9 )
  {
    if ( (unsigned int)(v7 - 37) > 1 )
      goto LABEL_32;
    v16 = j__strlen("gnu");
    v17 = j__strlen("gnu2");
    if ( v5 == v16 )
    {
      if ( v5 )
      {
        v20 = v17;
        if ( !memcmp(v6, "gnu", v5) )
        {
          if ( v5 == v20 )
          {
            result = memcmp(v6, "gnu2", v5) == 0;
            if ( v8 != 3 )
              goto LABEL_25;
          }
          else
          {
            result = 0;
            if ( v8 != 3 )
              goto LABEL_32;
          }
          return result;
        }
        if ( v5 != v20 )
          goto LABEL_21;
LABEL_41:
        v9 = memcmp(v6, "gnu2", v5) == 0;
        result = v9;
LABEL_10:
        if ( v8 == 3 )
        {
          if ( v9 )
            return result;
          goto LABEL_22;
        }
LABEL_25:
        v19 = result;
        sub_FC70B0((__int64)v21, **(_QWORD **)(a1 + 8), 0, 495);
        v15 = *(_QWORD *)(v3 + 32);
        v14 = *(char **)(v3 + 24);
        goto LABEL_23;
      }
      if ( v17 )
      {
        result = 0;
        if ( v8 != 3 )
          goto LABEL_25;
        return result;
      }
    }
    else
    {
      if ( v5 != v17 )
      {
        result = 0;
        if ( v8 != 3 )
          goto LABEL_25;
LABEL_22:
        v19 = result;
        sub_FC70B0((__int64)v21, **(_QWORD **)(a1 + 8), 0, 498);
        sub_AEC220(v21, *(_BYTE **)(v3 + 24), *(_QWORD *)(v3 + 32));
        v14 = (char *)v6;
        v15 = v5;
LABEL_23:
        sub_AEC220(v21, v14, v15);
        sub_AEC220(v21, *(_BYTE **)(a1 + 1760), *(_QWORD *)(a1 + 1768));
        sub_AEA040((__int64)v21);
        return v19;
      }
      if ( v5 )
        goto LABEL_41;
    }
    result = 1;
    if ( v8 != 3 )
      goto LABEL_25;
    return result;
  }
  v18 = j__strlen("desc");
  if ( v5 != v18 )
  {
    if ( v5 == j__strlen("trad") )
    {
      if ( !v5 )
      {
        v11 = v9;
        goto LABEL_9;
      }
      goto LABEL_8;
    }
LABEL_21:
    result = 0;
    if ( v8 == 3 )
      goto LABEL_22;
LABEL_32:
    result = 0;
    goto LABEL_25;
  }
  if ( v5 )
  {
    if ( memcmp(v6, "desc", v5) )
    {
      if ( v5 == j__strlen("trad") )
      {
LABEL_8:
        v10 = memcmp(v6, "trad", v5) == 0;
        v11 = v10;
        if ( v5 != v18 )
        {
LABEL_9:
          v9 = v11;
          result = 0;
          goto LABEL_10;
        }
        v9 = v10;
        goto LABEL_17;
      }
      v9 = 0;
    }
LABEL_17:
    result = memcmp(v6, "desc", v5) == 0;
    goto LABEL_10;
  }
  result = v9;
  if ( v8 != 3 )
    goto LABEL_25;
  return result;
}
