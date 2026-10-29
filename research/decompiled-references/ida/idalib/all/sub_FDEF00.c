__int64 __fastcall sub_FDEF00(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int *v2; // rbp
  size_t v3; // rbx
  unsigned __int64 v4; // rax
  __int64 result; // rax
  int v6; // edx
  size_t v7; // rdx
  unsigned __int8 *v8; // rax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  size_t v13; // rax
  bool v14; // dl
  size_t v15; // rax
  bool v16; // dl
  size_t v17; // rax
  bool v18; // dl
  size_t v19; // rax
  size_t v20; // rax
  unsigned __int8 *v21; // [rsp+0h] [rbp-28h] BYREF
  size_t v22; // [rsp+8h] [rbp-20h]

  if ( (a1 & 4) != 0 )
  {
    v1 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    if ( v1 )
      goto LABEL_4;
    return 0;
  }
  if ( (a1 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    return 0;
  v1 = a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a1 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
LABEL_4:
  v2 = *(unsigned int **)(v1 + 16);
  v3 = *v2;
  v21 = (unsigned __int8 *)(v2 + 4);
  v22 = v3;
  if ( (a1 & 3) == 1 )
  {
    switch ( v3 )
    {
      case 0xBuLL:
        if ( *((_QWORD *)v2 + 2) == 0x656C65726F747561LL && *((_WORD *)v2 + 12) == 29537 )
        {
          result = 6;
          if ( *((_BYTE *)v2 + 26) == 101 )
            return result;
        }
        break;
      case 7uLL:
        if ( v2[4] == 1818322276 && *((_WORD *)v2 + 10) == 28524 )
        {
          result = 7;
          if ( *((_BYTE *)v2 + 22) == 99 )
            return result;
        }
        break;
      case 8uLL:
        result = 8;
        if ( *((_QWORD *)v2 + 2) == 0x657A696C616E6966LL )
          return result;
        if ( j__strlen("release") != 8 )
        {
          if ( j__strlen("retain") != 8 )
            goto LABEL_17;
          goto LABEL_40;
        }
        goto LABEL_15;
    }
    if ( v3 != j__strlen("release") )
    {
      if ( v3 != j__strlen("retain") )
        goto LABEL_17;
      result = 10;
      if ( !v3 )
        return result;
      goto LABEL_40;
    }
    result = 9;
    if ( !v3 )
      return result;
LABEL_15:
    v6 = memcmp(v2 + 4, "release", v3);
    result = 9;
    if ( !v6 )
      return result;
    if ( v3 != j__strlen("retain") )
    {
LABEL_17:
      if ( v3 == j__strlen("retainCount") )
      {
        result = 11;
        if ( !v3 )
          return result;
        goto LABEL_42;
      }
      goto LABEL_70;
    }
LABEL_40:
    v9 = memcmp(v2 + 4, "retain", v3);
    result = 10;
    if ( !v9 )
      return result;
    if ( v3 == j__strlen("retainCount") )
    {
LABEL_42:
      v10 = memcmp(v2 + 4, "retainCount", v3);
      result = 11;
      if ( !v10 )
        return result;
      if ( v3 == j__strlen("self") )
        goto LABEL_44;
      goto LABEL_73;
    }
LABEL_70:
    if ( v3 == j__strlen("self") )
    {
      result = 12;
      if ( !v3 )
        return result;
LABEL_44:
      v11 = memcmp(v2 + 4, "self", v3);
      result = 12;
      if ( !v11 )
        return result;
      if ( v3 != j__strlen("initialize") )
        goto LABEL_5;
      goto LABEL_46;
    }
LABEL_73:
    if ( v3 != j__strlen("initialize") )
      goto LABEL_5;
    result = 13;
    if ( !v3 )
      return result;
LABEL_46:
    v12 = memcmp(v2 + 4, "initialize", v3);
    result = 13;
    if ( !v12 )
      return result;
  }
LABEL_5:
  if ( v3 == 15 )
  {
    if ( *((_QWORD *)v2 + 2) == 0x536D726F66726570LL
      && v2[6] == 1667591269
      && *((_WORD *)v2 + 14) == 28532
      && *((_BYTE *)v2 + 30) == 114 )
    {
      return 14;
    }
  }
  else if ( v3 == 27
         && (!(*((_QWORD *)v2 + 2) ^ 0x536D726F66726570LL | *((_QWORD *)v2 + 3) ^ 0x49726F7463656C65LL)
          && *((_QWORD *)v2 + 4) == 0x6F72676B6361426ELL
          && *((_WORD *)v2 + 20) == 28277
          && *((_BYTE *)v2 + 42) == 100
          || !(*((_QWORD *)v2 + 2) ^ 0x536D726F66726570LL | *((_QWORD *)v2 + 3) ^ 0x4F726F7463656C65LL)
          && *((_QWORD *)v2 + 4) == 0x7268546E69614D6ELL
          && *((_WORD *)v2 + 20) == 24933
          && *((_BYTE *)v2 + 42) == 100) )
  {
    return 14;
  }
  v4 = sub_2246F60(&v21, 95, 0);
  if ( v4 >= v22 )
    return 0;
  v7 = v22 - v4;
  v8 = &v21[v4];
  v21 = v8;
  v22 = v7;
  if ( v7 != -1 && !v7 )
    return 0;
  switch ( *v8 )
  {
    case 'a':
      v19 = j__strlen("alloc");
      result = sub_FDD5C0(v21, v22, "alloc", v19);
      break;
    case 'c':
      v17 = j__strlen("copy");
      v18 = sub_FDD5C0(v21, v22, "copy", v17);
      result = 2;
      if ( !v18 )
        return 0;
      break;
    case 'i':
      v15 = j__strlen("init");
      v16 = sub_FDD5C0(v21, v22, "init", v15);
      result = 3;
      if ( !v16 )
        return 0;
      break;
    case 'm':
      v13 = j__strlen("mutableCopy");
      v14 = sub_FDD5C0(v21, v22, "mutableCopy", v13);
      result = 4;
      if ( !v14 )
        return 0;
      break;
    case 'n':
      v20 = j__strlen("new");
      if ( !sub_FDD5C0(v21, v22, "new", v20) )
        return 0;
      result = 5;
      break;
    default:
      return 0;
  }
  return result;
}
