__int64 __fastcall sub_118AA90(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // r15
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // [rsp+8h] [rbp-50h]
  _QWORD v13[8]; // [rsp+18h] [rbp-40h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 8LL * *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD *)a1 + v2;
  v4 = v2 >> 3;
  result = v2 >> 5;
  if ( result )
  {
    result *= 32;
    v12 = v3 - result;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v3 - 8);
      if ( v9 )
      {
        result = strlen(*(const char **)(v3 - 8));
        if ( result == 13
          && (*(_QWORD *)v9 == 0x2D7463697274732BLL && *(_DWORD *)(v9 + 8) == 1734962273 && *(_BYTE *)(v9 + 12) == 110
           || *(_QWORD *)v9 == 0x2D7463697274732DLL && *(_DWORD *)(v9 + 8) == 1734962273 && *(_BYTE *)(v9 + 12) == 110) )
        {
          goto LABEL_22;
        }
      }
      v6 = *(_QWORD *)(v3 - 16);
      if ( v6 )
      {
        result = strlen(*(const char **)(v3 - 16));
        if ( result == 13
          && (*(_QWORD *)v6 == 0x2D7463697274732BLL && *(_DWORD *)(v6 + 8) == 1734962273 && *(_BYTE *)(v6 + 12) == 110
           || *(_QWORD *)v6 == 0x2D7463697274732DLL && *(_DWORD *)(v6 + 8) == 1734962273 && *(_BYTE *)(v6 + 12) == 110) )
        {
          v3 -= 8;
          goto LABEL_22;
        }
      }
      v7 = *(_QWORD *)(v3 - 24);
      if ( v7 )
      {
        result = strlen(*(const char **)(v3 - 24));
        if ( result == 13
          && (*(_QWORD *)v7 == 0x2D7463697274732BLL && *(_DWORD *)(v7 + 8) == 1734962273 && *(_BYTE *)(v7 + 12) == 110
           || *(_QWORD *)v7 == 0x2D7463697274732DLL && *(_DWORD *)(v7 + 8) == 1734962273 && *(_BYTE *)(v7 + 12) == 110) )
        {
          v3 -= 16;
          goto LABEL_22;
        }
      }
      v8 = *(_QWORD *)(v3 - 32);
      if ( !v8 )
        goto LABEL_16;
      result = strlen(*(const char **)(v3 - 32));
      if ( result != 13 )
        goto LABEL_16;
      if ( *(_QWORD *)v8 == 0x2D7463697274732BLL && *(_DWORD *)(v8 + 8) == 1734962273 && *(_BYTE *)(v8 + 12) == 110 )
      {
LABEL_36:
        v3 -= 24;
        goto LABEL_22;
      }
      if ( *(_QWORD *)v8 == 0x2D7463697274732DLL && *(_DWORD *)(v8 + 8) == 1734962273 )
      {
        if ( *(_BYTE *)(v8 + 12) == 110 )
          goto LABEL_36;
        v3 -= 32;
        if ( v3 == v12 )
        {
LABEL_49:
          v4 = (v3 - v1) >> 3;
          break;
        }
      }
      else
      {
LABEL_16:
        v3 -= 32;
        if ( v3 == v12 )
          goto LABEL_49;
      }
    }
  }
  if ( v4 == 2 )
    goto LABEL_62;
  if ( v4 == 3 )
  {
    v13[0] = v3;
    result = sub_11893A0(v13);
    if ( (_BYTE)result )
      goto LABEL_22;
    v3 -= 8;
LABEL_62:
    v13[0] = v3;
    result = sub_11893A0(v13);
    if ( !(_BYTE)result )
    {
      v3 -= 8;
      goto LABEL_53;
    }
LABEL_22:
    if ( v1 != v3 )
    {
      v10 = *(_QWORD *)(v3 - 8);
      if ( v10 )
      {
        result = strlen((const char *)v10);
        if ( result == 13 )
        {
          result = 0x2D7463697274732BLL;
          if ( *(_QWORD *)v10 == 0x2D7463697274732BLL
            && *(_DWORD *)(v10 + 8) == 1734962273
            && *(_BYTE *)(v10 + 12) == 110 )
          {
            return sub_10DC5D0(a1, (__int64)"-Wunaligned-access");
          }
        }
      }
    }
    return result;
  }
  if ( v4 != 1 )
    return result;
LABEL_53:
  v11 = *(_QWORD *)(v3 - 8);
  if ( v11 )
  {
    result = strlen(*(const char **)(v3 - 8));
    if ( result == 13 )
    {
      result = 0x2D7463697274732BLL;
      if ( *(_QWORD *)v11 == 0x2D7463697274732BLL && *(_DWORD *)(v11 + 8) == 1734962273 && *(_BYTE *)(v11 + 12) == 110 )
        goto LABEL_22;
      result = 0x2D7463697274732DLL;
      if ( *(_QWORD *)v11 == 0x2D7463697274732DLL && *(_DWORD *)(v11 + 8) == 1734962273 && *(_BYTE *)(v11 + 12) == 110 )
        goto LABEL_22;
    }
  }
  return result;
}
