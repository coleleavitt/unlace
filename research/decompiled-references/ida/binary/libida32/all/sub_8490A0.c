__int64 __fastcall sub_8490A0(
        unsigned int *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r13
  char *v10; // rax
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // edx
  char *v15; // rax
  __int64 result; // rax
  __int64 v17; // r9
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  int v21; // r12d
  __int64 v22; // r9
  int v23; // r8d
  char *v24; // rax
  char *v25; // rax
  unsigned int v26; // edx
  char v27; // si
  char *v28; // rax

  v8 = a4;
  if ( a3 != a5 || a4 != a6 )
  {
    if ( a3 > 126 || a3 == a7 )
    {
      if ( !(unsigned int)sub_844B90(a1, 15, 0, a5, a6) )
      {
        if ( a7 == 127 )
        {
          if ( (unsigned __int64)(a8 + 0x80000000LL) >> 32 && !a1[36] )
          {
            if ( (unsigned int)sub_8442D0(a1, 16, a8) )
              return *a1;
            v28 = sub_844340((__int64)a1, 1u, 16, 0, 15, 0);
            if ( !v28 )
              return *a1;
            *v28 = BYTE1(a2);
          }
          else
          {
            v19 = sub_844340((__int64)a1, 0x11u, 127, a8, 15, 0);
            if ( !v19 )
              return *a1;
            v19[1] |= a2;
          }
        }
        else
        {
          v25 = sub_844340((__int64)a1, 1u, 15, 0, a7, a8);
          if ( !v25 )
            return *a1;
          *v25 = BYTE2(a2);
        }
        v20 = sub_844340((__int64)a1, 1u, 15, 0, a3, v8);
        if ( v20 )
        {
          *v20 = -119;
          return 0;
        }
      }
      return *a1;
    }
    if ( (unsigned int)sub_844B90(a1, a3, 0, a5, a6) )
      return *a1;
    if ( a7 != 127 )
    {
      v22 = a8;
      v23 = a7;
      a4 = 0;
      goto LABEL_38;
    }
    if ( (unsigned __int64)(a8 + 0x80000000LL) >> 32 && !a1[36] )
    {
      if ( (unsigned int)sub_8442D0(a1, 16, a8) )
        return *a1;
      v11 = 0;
      v12 = a3;
      v13 = 0;
      v14 = 16;
      goto LABEL_9;
    }
    v17 = 0;
LABEL_20:
    v18 = sub_844340((__int64)a1, 0x11u, 127, a8, a3, v17);
    if ( v18 )
    {
      v18[1] |= a2;
      return 0;
    }
    return *a1;
  }
  if ( a7 == 127 )
  {
    if ( a3 == 1 )
    {
      if ( (unsigned __int64)(a8 + 128) > 0xFF )
      {
        v26 = HIBYTE(a2);
        if ( a1[36] )
        {
          v27 = 0;
        }
        else
        {
          if ( (unsigned __int64)(a8 + 0x80000000LL) >> 32 )
          {
            v21 = 16;
            goto LABEL_34;
          }
          v27 = 72;
        }
        if ( !(unsigned int)sub_844250(a1, v27, v26, a8) )
          return 0;
        return *a1;
      }
    }
    else if ( (unsigned __int64)(a8 + 0x80000000LL) >> 32 && !a1[36] )
    {
      v21 = (a3 < 127) + 15;
LABEL_34:
      if ( (unsigned int)sub_8442D0(a1, v21, a8) )
        return *a1;
      v11 = v8;
      v12 = a3;
      v13 = 0;
      v14 = v21;
      goto LABEL_9;
    }
    v17 = a4;
    goto LABEL_20;
  }
  if ( a3 <= 126 )
  {
    v22 = a8;
    v23 = a7;
LABEL_38:
    v24 = sub_844340((__int64)a1, 1u, a3, a4, v23, v22);
    if ( v24 )
    {
      *v24 = BYTE2(a2);
      return 0;
    }
    return *a1;
  }
  if ( a7 <= 126 )
  {
    v12 = a3;
    v13 = a8;
    v14 = a7;
    v11 = v8;
LABEL_9:
    v15 = sub_844340((__int64)a1, 1u, v14, v13, v12, v11);
    if ( v15 )
    {
      *v15 = BYTE1(a2);
      return 0;
    }
    return *a1;
  }
  v10 = sub_844340((__int64)a1, 1u, 15, 0, a7, a8);
  if ( v10 )
  {
    *v10 = -117;
LABEL_8:
    v11 = v8;
    v12 = a3;
    v13 = 0;
    v14 = 15;
    goto LABEL_9;
  }
  result = *a1;
  if ( !(_DWORD)result )
    goto LABEL_8;
  return result;
}

