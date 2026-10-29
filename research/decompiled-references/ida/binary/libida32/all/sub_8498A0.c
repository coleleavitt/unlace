__int64 __fastcall sub_8498A0(
        unsigned int *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v11; // rcx
  int v13; // edx
  char *v14; // rax
  __int64 v15; // r9
  int v16; // r8d
  char *v17; // rax
  __int64 result; // rax
  __int64 v19; // r9
  int v20; // r8d
  char *v21; // rax
  char *v22; // rax
  int v23; // ebp
  __int64 v24; // rdx
  char *v25; // rax
  __int64 v26; // rcx
  char *v27; // rax
  char v28; // si
  char *v29; // rax
  char *v30; // rax

  v8 = HIBYTE(a2);
  v9 = a2 >> 8;
  v11 = a6;
  v13 = a5;
  if ( a3 == a5 && a4 == a6 )
  {
    if ( a7 != 127 )
    {
      if ( a3 > 126 )
      {
        if ( a7 > 126 )
        {
          a6 = a8;
          a5 = a7;
          goto LABEL_7;
        }
        v11 = a8;
        v15 = a4;
        v16 = a3;
        v13 = a7;
LABEL_16:
        v17 = sub_844340((__int64)a1, 1u, v13, v11, v16, v15);
        if ( v17 )
        {
          *v17 = v9;
          return 0;
        }
        return *a1;
      }
      a6 = a8;
      a5 = a7;
      v26 = a4;
LABEL_49:
      v27 = sub_844340((__int64)a1, 1u, a3, v26, a5, a6);
      if ( v27 )
      {
        *v27 = BYTE2(a2);
        return 0;
      }
      return *a1;
    }
    if ( a3 != 1 )
    {
      if ( !((unsigned __int64)(a8 + 0x80000000LL) >> 32) || a1[36] )
        goto LABEL_29;
      v23 = (a3 < 127) + 15;
      goto LABEL_65;
    }
    if ( (unsigned __int64)(a8 + 128) <= 0xFF )
    {
LABEL_29:
      v19 = a4;
LABEL_30:
      v11 = a8;
      v20 = a3;
      goto LABEL_31;
    }
    v28 = 0;
    if ( !a1[36] )
    {
      if ( (unsigned __int64)(a8 + 0x80000000LL) >> 32 )
      {
        v23 = 16;
LABEL_65:
        v24 = a8;
        goto LABEL_66;
      }
      v28 = 72;
    }
    LODWORD(v11) = a8;
LABEL_56:
    if ( !(unsigned int)sub_844250(a1, v28, v8, v11) )
      return 0;
    return *a1;
  }
  if ( a3 != a7 || a4 != a8 )
  {
    if ( a3 > 126 )
    {
      if ( !(unsigned int)sub_844B90(a1, 15, 0, a5, a6) )
      {
        if ( a7 == 127 )
        {
          if ( (unsigned __int64)(a8 + 0x80000000LL) >> 32 && !a1[36] )
          {
            if ( (unsigned int)sub_8442D0(a1, 16, a8) )
              return *a1;
            v30 = sub_844340((__int64)a1, 1u, 16, 0, 15, 0);
            if ( !v30 )
              return *a1;
            *v30 = BYTE1(a2);
          }
          else
          {
            v22 = sub_844340((__int64)a1, 0x11u, 127, a8, 15, 0);
            if ( !v22 )
              return *a1;
            v22[1] |= a2;
          }
        }
        else
        {
          v25 = sub_844340((__int64)a1, 1u, 15, 0, a7, a8);
          if ( !v25 )
            return *a1;
          *v25 = BYTE2(a2);
        }
        v29 = sub_844340((__int64)a1, 1u, 15, 0, a3, a4);
        if ( v29 )
        {
          *v29 = -119;
          return 0;
        }
      }
      return *a1;
    }
    if ( (unsigned int)sub_844B90(a1, a3, 0, a5, a6) )
      return *a1;
    if ( a7 != 127 )
    {
      a6 = a8;
      a5 = a7;
      v26 = 0;
      goto LABEL_49;
    }
    if ( (unsigned __int64)(a8 + 0x80000000LL) >> 32 && !a1[36] )
    {
      if ( (unsigned int)sub_8442D0(a1, 16, a8) )
        return *a1;
      v15 = 0;
      v16 = a3;
      v11 = 0;
      v13 = 16;
      goto LABEL_16;
    }
    v19 = 0;
    goto LABEL_30;
  }
  if ( a5 == 127 )
  {
    if ( a3 == 1 )
    {
      if ( (unsigned __int64)(a6 + 128) > 0xFF )
      {
        if ( a1[36] )
        {
          v28 = 0;
          goto LABEL_56;
        }
        v28 = 72;
        if ( !((unsigned __int64)(a6 + 0x80000000LL) >> 32) )
          goto LABEL_56;
        v23 = 16;
LABEL_44:
        v24 = a6;
LABEL_66:
        if ( (unsigned int)sub_8442D0(a1, v23, v24) )
          return *a1;
        v15 = a4;
        v16 = a3;
        v11 = 0;
        v13 = v23;
        goto LABEL_16;
      }
    }
    else if ( (unsigned __int64)(a6 + 0x80000000LL) >> 32 && !a1[36] )
    {
      v23 = (a3 < 127) + 15;
      goto LABEL_44;
    }
    v19 = a4;
    v20 = a3;
LABEL_31:
    v21 = sub_844340((__int64)a1, 0x11u, 127, v11, v20, v19);
    if ( v21 )
    {
      v21[1] |= a2;
      return 0;
    }
    return *a1;
  }
  if ( a3 <= 126 )
  {
    v26 = a4;
    goto LABEL_49;
  }
  if ( a5 <= 126 )
  {
    v15 = a4;
    v16 = a3;
    goto LABEL_16;
  }
LABEL_7:
  v14 = sub_844340((__int64)a1, 1u, 15, 0, a5, a6);
  if ( v14 )
  {
    *v14 = -117;
LABEL_9:
    v15 = a4;
    v16 = a3;
    v11 = 0;
    v13 = 15;
    goto LABEL_16;
  }
  result = *a1;
  if ( !(_DWORD)result )
    goto LABEL_9;
  return result;
}

