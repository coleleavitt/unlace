bool __fastcall sub_206DBB0(__int64 a1)
{
  unsigned __int64 *v1; // rsi
  unsigned __int64 **v2; // r11
  int v3; // eax
  unsigned __int64 *v4; // r8
  unsigned __int64 *v5; // r9
  int v6; // r10d
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdx
  bool result; // al
  bool v10; // zf
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int64 *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned __int64 *v18; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 *v19[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = *(unsigned __int64 **)(a1 + 24);
  v18 = *(unsigned __int64 **)(a1 + 16);
  if ( v18 == v1 )
    return 1;
  v2 = &v18;
  while ( 1 )
  {
    v3 = sub_206DAF0(v2);
    v7 = &v4[v3];
    if ( v7 > v1 )
      return 0;
    v8 = *v4;
    if ( *v4 - 80 <= 0x3F )
      return 1;
    if ( v8 <= 0x2E )
    {
      if ( v8 < 0x29 )
      {
        if ( v8 == 22 )
        {
          if ( v6 == 1 )
            return 0;
        }
        else if ( v8 > 0x16 )
        {
          if ( v8 > 0x1E )
          {
            if ( v8 - 32 > 7 )
              return 0;
          }
          else if ( v8 < 0x1A && v8 != 24 )
          {
            return 0;
          }
        }
        else if ( v8 > 0x12 )
        {
          if ( v8 != 20 )
            return 0;
        }
        else if ( v8 < 0x10 && v8 != 6 )
        {
          return 0;
        }
      }
      goto LABEL_26;
    }
    if ( v8 == 159 )
    {
      if ( v7 != v1 )
      {
        v19[0] = v18;
        v11 = sub_206DAF0(v19);
        v13 = (unsigned __int64 *)(v12 + 8LL * v11);
        v10 = *v13 == 4096;
        v19[0] = v13;
        if ( !v10 )
          return 0;
      }
      v14 = sub_206DAF0(v2);
      v7 = (unsigned __int64 *)(v15 + 8LL * v14);
      goto LABEL_26;
    }
    if ( v8 <= 0x9F )
    {
      if ( v8 != 146 )
      {
        if ( v8 > 0x92 )
        {
          if ( v8 != 148 && v8 != 151 )
            return 0;
        }
        else if ( v8 != 48 && v8 != 144 )
        {
          return 0;
        }
      }
      goto LABEL_26;
    }
    if ( v8 > 0x1002 )
      break;
    if ( v8 < 0x1001 )
    {
      result = v7 == v1;
      if ( v8 != 4096 )
        return 0;
      return result;
    }
LABEL_26:
    v18 = v7;
    if ( v1 == v7 )
      return 1;
  }
  if ( v8 != 4099 )
  {
    if ( v8 > 0x1007 )
      return 0;
    goto LABEL_26;
  }
  v10 = *v5 == 4101;
  v19[0] = v5;
  if ( v10 && !v5[1] )
  {
    v16 = sub_206DAF0(v19);
    v5 = (unsigned __int64 *)(v17 + 8LL * v16);
  }
  result = 0;
  if ( v4 == v5 )
    return v4[1] == 1;
  return result;
}
