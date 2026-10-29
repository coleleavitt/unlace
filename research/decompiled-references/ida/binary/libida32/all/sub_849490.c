__int64 __fastcall sub_849490(unsigned int *a1, char a2, int a3, __int64 a4, int a5, __int64 a6, int a7, __int64 a8)
{
  unsigned int v12; // r14d
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  __int64 result; // rax
  __int64 v17; // r9
  char *v18; // rax
  int v19; // eax
  char *v20; // rax
  unsigned int v21; // r15d
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  __int64 v25; // r9
  int v26; // r8d
  char *v27; // rax
  char *v28; // rax

  if ( a7 == 127 || a7 == 4 )
  {
    if ( a3 != a5 || (v17 = a4, a6 != a4) )
    {
      if ( a3 == 4 && a7 == 4 )
      {
        if ( (unsigned int)sub_844B90(a1, 15, 0, a5, a6) )
          return *a1;
        goto LABEL_46;
      }
      if ( a3 > 126 )
      {
        if ( (unsigned int)sub_844B90(a1, 15, 0, a5, a6) )
          return *a1;
        v18 = sub_844340((__int64)a1, 0x21u, a7, a8, 15, 0);
        if ( !v18 )
          return *a1;
        v18[1] |= a2;
LABEL_39:
        v25 = a4;
        v26 = a3;
LABEL_40:
        v27 = sub_844340((__int64)a1, 1u, 15, 0, v26, v25);
        if ( !v27 )
          return *a1;
        *v27 = -119;
        return 0;
      }
      v19 = sub_844B90(a1, a3, 0, a5, a6);
      v17 = 0;
      if ( v19 )
        return *a1;
    }
    v20 = sub_844340((__int64)a1, 0x21u, a7, a8, a3, v17);
    if ( !v20 )
      return *a1;
    v20[1] |= a2;
    return 0;
  }
  if ( a3 == 4 )
  {
    if ( (unsigned int)sub_844B90(a1, 15, 0, a5, a6) || (unsigned int)sub_844B90(a1, 4, 0, a7, a8) )
      return *a1;
LABEL_46:
    v28 = sub_844340((__int64)a1, 0x21u, 4, 0, 15, 0);
    if ( !v28 )
      return *a1;
    v28[1] |= a2;
    v25 = 0;
    v26 = 4;
    goto LABEL_40;
  }
  if ( a3 == 15 || a3 > 126 || a7 == a3 || (a7 & 0x80u) != 0 && ((a7 & 0x7F) == a3 || ((a7 >> 8) & 0x7F) == a3) )
  {
    if ( (unsigned int)sub_844B90(a1, 15, 0, a5, a6) )
      return *a1;
    v21 = a1[36];
    a1[36] = 0;
    v22 = sub_844340((__int64)a1, 1u, 4, 0, 16, 0);
    if ( v22 )
    {
      *v22 = -119;
    }
    else
    {
      result = *a1;
      if ( (_DWORD)result )
        return result;
    }
    a1[36] = v21;
    if ( (unsigned int)sub_844B90(a1, 4, 0, a7, a8) )
      return *a1;
    v23 = sub_844340((__int64)a1, 0x21u, 4, 0, 15, 0);
    if ( !v23 )
      return *a1;
    v23[1] |= a2;
    a1[36] = 0;
    v24 = sub_844340((__int64)a1, 1u, 16, 0, 4, 0);
    if ( v24 )
    {
      *v24 = -119;
    }
    else
    {
      result = *a1;
      if ( (_DWORD)result )
        return result;
    }
    a1[36] = v21;
    if ( a3 != 15 )
      goto LABEL_39;
    return 0;
  }
  if ( a3 != a5 && (unsigned int)sub_844B90(a1, a3, 0, a5, a6) )
    return *a1;
  v12 = a1[36];
  a1[36] = 0;
  v13 = sub_844340((__int64)a1, 1u, 4, 0, 15, 0);
  if ( v13 )
  {
    *v13 = -119;
LABEL_13:
    a1[36] = v12;
    if ( !(unsigned int)sub_844B90(a1, 4, 0, a7, a8) )
    {
      v14 = sub_844340((__int64)a1, 0x21u, 4, 0, a3, 0);
      if ( v14 )
      {
        v14[1] |= a2;
        a1[36] = 0;
        v15 = sub_844340((__int64)a1, 1u, 15, 0, 4, 0);
        if ( v15 )
        {
          *v15 = -119;
        }
        else
        {
          result = *a1;
          if ( (_DWORD)result )
            return result;
        }
        a1[36] = v12;
        return 0;
      }
    }
    return *a1;
  }
  result = *a1;
  if ( !(_DWORD)result )
    goto LABEL_13;
  return result;
}

