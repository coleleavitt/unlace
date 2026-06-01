_BYTE *__fastcall sub_107EF40(__int64 a1, __int64 a2, const void *a3, size_t a4, char a5)
{
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  _BYTE *result; // rax
  size_t v11; // r13
  size_t v12; // r12
  size_t v13; // rax
  size_t v14; // r13
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // rax
  size_t v30; // rax
  size_t v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  size_t v37; // rax
  char v38; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v39[2]; // [rsp+10h] [rbp-48h] BYREF
  char v40; // [rsp+20h] [rbp-38h]
  char v41; // [rsp+21h] [rbp-37h]

  if ( a5 )
  {
    if ( j__strlen("efpu2") == a4 && (!a4 || !memcmp(a3, "efpu2", a4)) )
    {
      v7 = j__strlen("spe");
      *(_BYTE *)sub_100BDE0(a2, "spe", v7) = 1;
    }
    v39[0] = a3;
    v39[1] = a4;
    v41 = 0;
    v38 = 1;
    sub_B5A360((__int64)v39, &v38, "vsx", 3);
    v38 = 1;
    sub_B5A360((__int64)v39, &v38, "direct-move", 11);
    v38 = 1;
    sub_B5A360((__int64)v39, &v38, "power8-vector", 13);
    v38 = 1;
    sub_B5A360((__int64)v39, &v38, "power9-vector", 13);
    v38 = 1;
    sub_B5A360((__int64)v39, &v38, "paired-vector-memops", 20);
    v38 = 1;
    sub_B5A360((__int64)v39, &v38, "power10-vector", 14);
    v38 = 1;
    sub_B5A360((__int64)v39, &v38, "float128", 8);
    v38 = 1;
    sub_B5A360((__int64)v39, &v38, "mma", 3);
    if ( v41 && v40 )
    {
      v31 = j__strlen("altivec");
      *(_BYTE *)sub_100BDE0(a2, "altivec", v31) = 1;
      v32 = j__strlen("vsx");
      *(_BYTE *)sub_100BDE0(a2, "vsx", v32) = 1;
    }
    if ( j__strlen("power9-vector") == a4 )
    {
      if ( !a4 || !memcmp(a3, "power9-vector", a4) )
        goto LABEL_15;
      if ( j__strlen("power10-vector") != a4 )
        goto LABEL_41;
    }
    else
    {
      if ( j__strlen("power10-vector") != a4 )
      {
LABEL_16:
        if ( j__strlen("pcrel") != a4 )
        {
LABEL_42:
          if ( j__strlen("prefixed") != a4 )
            goto LABEL_20;
          if ( !a4 )
          {
LABEL_45:
            v15 = j__strlen("prefix-instrs");
            result = (_BYTE *)sub_100BDE0(a2, "prefix-instrs", v15);
            *result = 1;
            return result;
          }
LABEL_44:
          if ( !memcmp(a3, "prefixed", a4) )
            goto LABEL_45;
LABEL_20:
          result = (_BYTE *)sub_100BDE0(a2, a3, a4);
          *result = 1;
          return result;
        }
        if ( !a4 )
          goto LABEL_59;
        goto LABEL_18;
      }
      if ( !a4 )
        goto LABEL_14;
    }
    if ( memcmp(a3, "power10-vector", a4) )
    {
LABEL_41:
      if ( j__strlen("pcrel") != a4 )
        goto LABEL_42;
LABEL_18:
      if ( memcmp(a3, "pcrel", a4) )
      {
        if ( j__strlen("prefixed") != a4 )
          goto LABEL_20;
        goto LABEL_44;
      }
LABEL_59:
      v19 = j__strlen("pcrelative-memops");
      result = (_BYTE *)sub_100BDE0(a2, "pcrelative-memops", v19);
      *result = 1;
      return result;
    }
LABEL_14:
    v8 = j__strlen("power9-vector");
    *(_BYTE *)sub_100BDE0(a2, "power9-vector", v8) = 1;
LABEL_15:
    v9 = j__strlen("power8-vector");
    *(_BYTE *)sub_100BDE0(a2, "power8-vector", v9) = 1;
    goto LABEL_16;
  }
  if ( j__strlen("spe") == a4 )
  {
    if ( a4 && memcmp(a3, "spe", a4) )
    {
      v11 = j__strlen("altivec");
      v12 = j__strlen("vsx");
      if ( v11 != a4 )
        goto LABEL_25;
      goto LABEL_35;
    }
    v13 = j__strlen("efpu2");
    *(_BYTE *)sub_100BDE0(a2, "efpu2", v13) = 0;
  }
  v14 = j__strlen("altivec");
  v12 = j__strlen("vsx");
  if ( v14 != a4 )
  {
LABEL_25:
    if ( v12 == a4 )
    {
      if ( !a4 )
        goto LABEL_62;
      goto LABEL_27;
    }
    goto LABEL_47;
  }
  if ( !a4 )
    goto LABEL_60;
LABEL_35:
  if ( !memcmp(a3, "altivec", a4) )
  {
    if ( v12 == a4 )
      goto LABEL_30;
    goto LABEL_61;
  }
  if ( v12 != a4 )
  {
LABEL_47:
    if ( j__strlen("hard-float") != a4 )
      goto LABEL_63;
    if ( a4 )
    {
      if ( memcmp(a3, "hard-float", a4) )
        goto LABEL_50;
      goto LABEL_61;
    }
LABEL_60:
    if ( !v12 )
      goto LABEL_62;
LABEL_61:
    v20 = j__strlen("crypto");
    *(_BYTE *)sub_100BDE0(a2, "crypto", v20) = 0;
    v21 = j__strlen("altivec");
    *(_BYTE *)sub_100BDE0(a2, "altivec", v21) = 0;
    goto LABEL_62;
  }
LABEL_27:
  if ( memcmp(a3, "vsx", a4) )
  {
    if ( j__strlen("hard-float") != a4 )
      goto LABEL_63;
    if ( !memcmp(a3, "hard-float", a4) )
    {
LABEL_30:
      if ( !memcmp(a3, "vsx", a4) )
        goto LABEL_62;
      goto LABEL_61;
    }
LABEL_50:
    if ( j__strlen("power8-vector") == a4 )
      goto LABEL_65;
LABEL_51:
    if ( j__strlen("power9-vector") != a4 )
      goto LABEL_54;
    if ( !a4 )
      goto LABEL_53;
    goto LABEL_67;
  }
LABEL_62:
  v22 = j__strlen("power10-vector");
  *(_BYTE *)sub_100BDE0(a2, "power10-vector", v22) = 0;
  v23 = j__strlen("mma");
  *(_BYTE *)sub_100BDE0(a2, "mma", v23) = 0;
  v24 = j__strlen("paired-vector-memops");
  *(_BYTE *)sub_100BDE0(a2, "paired-vector-memops", v24) = 0;
  v25 = j__strlen("power9-vector");
  *(_BYTE *)sub_100BDE0(a2, "power9-vector", v25) = 0;
  v26 = j__strlen("float128");
  *(_BYTE *)sub_100BDE0(a2, "float128", v26) = 0;
  v27 = j__strlen("power8-vector");
  *(_BYTE *)sub_100BDE0(a2, "power8-vector", v27) = 0;
  v28 = j__strlen("direct-move");
  *(_BYTE *)sub_100BDE0(a2, "direct-move", v28) = 0;
  v29 = j__strlen("vsx");
  *(_BYTE *)sub_100BDE0(a2, "vsx", v29) = 0;
LABEL_63:
  if ( j__strlen("power8-vector") != a4 )
    goto LABEL_51;
  if ( !a4 )
  {
LABEL_73:
    v33 = j__strlen("power10-vector");
    *(_BYTE *)sub_100BDE0(a2, "power10-vector", v33) = 0;
    v34 = j__strlen("mma");
    *(_BYTE *)sub_100BDE0(a2, "mma", v34) = 0;
    v35 = j__strlen("paired-vector-memops");
    *(_BYTE *)sub_100BDE0(a2, "paired-vector-memops", v35) = 0;
    v36 = j__strlen("power9-vector");
    *(_BYTE *)sub_100BDE0(a2, "power9-vector", v36) = 0;
    goto LABEL_54;
  }
LABEL_65:
  if ( !memcmp(a3, "power8-vector", a4) )
    goto LABEL_73;
  if ( j__strlen("power9-vector") == a4 )
  {
LABEL_67:
    if ( memcmp(a3, "power9-vector", a4) )
    {
      if ( j__strlen("pcrel") != a4 )
        goto LABEL_69;
LABEL_56:
      if ( memcmp(a3, "pcrel", a4) )
      {
        if ( j__strlen("prefixed") != a4 )
          goto LABEL_58;
        goto LABEL_71;
      }
      goto LABEL_74;
    }
LABEL_53:
    v16 = j__strlen("power10-vector");
    *(_BYTE *)sub_100BDE0(a2, "power10-vector", v16) = 0;
    v17 = j__strlen("mma");
    *(_BYTE *)sub_100BDE0(a2, "mma", v17) = 0;
    v18 = j__strlen("paired-vector-memops");
    *(_BYTE *)sub_100BDE0(a2, "paired-vector-memops", v18) = 0;
  }
LABEL_54:
  if ( j__strlen("pcrel") != a4 )
  {
LABEL_69:
    if ( j__strlen("prefixed") != a4 )
      goto LABEL_58;
    if ( !a4 )
    {
LABEL_72:
      v30 = j__strlen("prefix-instrs");
      result = (_BYTE *)sub_100BDE0(a2, "prefix-instrs", v30);
      *result = 0;
      return result;
    }
LABEL_71:
    if ( !memcmp(a3, "prefixed", a4) )
      goto LABEL_72;
LABEL_58:
    result = (_BYTE *)sub_100BDE0(a2, a3, a4);
    *result = 0;
    return result;
  }
  if ( a4 )
    goto LABEL_56;
LABEL_74:
  v37 = j__strlen("pcrelative-memops");
  result = (_BYTE *)sub_100BDE0(a2, "pcrelative-memops", v37);
  *result = 0;
  return result;
}

