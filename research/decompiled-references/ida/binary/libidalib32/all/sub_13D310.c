__int64 __fastcall sub_13D310(__int64 a1, int a2)
{
  __int64 *module_data; // rax
  __int64 v4; // r15
  _QWORD *v5; // r13
  __int16 v6; // ax
  __int16 v7; // bx
  int v8; // edx
  int v9; // esi
  int v10; // r14d
  int v11; // ecx
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // r11
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+0h] [rbp-48h]
  int v25; // [rsp+8h] [rbp-40h]
  int v26; // [rsp+8h] [rbp-40h]
  int v27; // [rsp+8h] [rbp-40h]

  module_data = (__int64 *)get_module_data();
  v4 = *module_data;
  v5 = (_QWORD *)module_data[1];
  v6 = getinf();
  v7 = v6;
  v8 = v6 & 2;
  if ( (v6 & 2) == 0 )
    goto LABEL_2;
  v14 = v5[11];
  if ( a2 == -1 )
  {
    if ( v14 )
    {
      if ( (a1 & 0x600) != 0x400 )
      {
        if ( (v6 & 4) == 0 )
          goto LABEL_3;
        goto LABEL_41;
      }
LABEL_100:
      if ( (a1 & 0xF0000000) == 0 )
        return 268436480;
LABEL_2:
      if ( (v7 & 4) == 0 )
      {
LABEL_3:
        v9 = 0;
        goto LABEL_4;
      }
      v13 = v5[12];
      if ( a2 == -1 )
      {
LABEL_33:
        if ( v13 )
        {
          v9 = 4;
          if ( (a1 & 0x600) == 0x400 && (a1 & 0xE0000000) == 0 )
            return 536871936;
        }
        else
        {
          v9 = 4;
        }
LABEL_4:
        v10 = v7 & 8;
        if ( (v7 & 8) == 0 )
          goto LABEL_7;
        goto LABEL_5;
      }
      goto LABEL_55;
    }
    if ( (v6 & 4) != 0 )
    {
LABEL_41:
      v13 = v5[12];
      goto LABEL_33;
    }
    v10 = v6 & 8;
    if ( (v6 & 8) == 0 )
    {
      if ( (v6 & 0x10) != 0 )
      {
        v15 = v5[13];
        v9 = 0;
        goto LABEL_43;
      }
LABEL_105:
      v9 = 0;
      v11 = 0;
      v10 = 0;
      goto LABEL_8;
    }
    goto LABEL_132;
  }
  v25 = v6 & 2;
  v17 = nbits();
  v8 = v25;
  if ( v17 != 8 && *(_DWORD *)(v4 + 20) == 8 )
  {
    if ( v5[12] )
      goto LABEL_52;
    if ( (v7 & 4) != 0 )
    {
      v22 = nbits();
      v8 = v25;
      if ( v22 != 8 && *(_DWORD *)(v4 + 20) == 8 )
        goto LABEL_57;
      if ( (v7 & 8) != 0 )
      {
        v9 = 4;
LABEL_5:
        if ( v5[15] )
        {
          v10 = 8;
          if ( (a1 & 0x600) == 0x400 && ((a1 & 0xE0000000) == 0 || (a1 & 0xF0000000) == 0x20000000) )
            return 2147484672LL;
        }
        else
        {
          v10 = 8;
        }
LABEL_7:
        v11 = v7 & 0x10;
        if ( (v7 & 0x10) == 0 )
          goto LABEL_8;
        v15 = v5[13];
        if ( a2 == -1 )
          goto LABEL_43;
        goto LABEL_62;
      }
      v10 = v7 & 0x10;
      if ( (v7 & 0x10) == 0 )
      {
        v11 = 0;
        v9 = 4;
        goto LABEL_8;
      }
      v15 = v5[13];
      v10 = 0;
      v9 = 4;
      goto LABEL_62;
    }
  }
  else
  {
    if ( v14 )
    {
LABEL_52:
      if ( (a1 & 0x600) == 0x400 )
        goto LABEL_100;
      if ( (v7 & 4) == 0 )
        goto LABEL_3;
LABEL_54:
      v13 = v5[12];
LABEL_55:
      v26 = v8;
      v18 = nbits();
      v8 = v26;
      if ( v18 == 8 || *(_DWORD *)(v4 + 20) != 8 )
        goto LABEL_33;
LABEL_57:
      v13 = v5[13];
      goto LABEL_33;
    }
    if ( (v7 & 4) != 0 )
      goto LABEL_54;
  }
  v10 = v7 & 8;
  if ( (v7 & 8) != 0 )
  {
LABEL_132:
    v9 = 0;
    goto LABEL_5;
  }
  if ( (v7 & 0x10) == 0 )
    goto LABEL_105;
  v15 = v5[13];
  v9 = 0;
LABEL_62:
  v23 = v15;
  v27 = v8;
  v19 = nbits();
  v8 = v27;
  v15 = v23;
  if ( v19 != 8 && *(_DWORD *)(v4 + 20) == 8 )
    v15 = v5[14];
LABEL_43:
  if ( v15 )
  {
    v11 = 16;
    if ( (a1 & 0x600) == 0x400 )
    {
      if ( (a1 & 0xE0000000) == 0 )
        return 805307392;
      v16 = (unsigned int)a1 & 0xF0000000;
      if ( v16 == 0x20000000 || v16 == 0x80000000LL )
        return 805307392;
    }
  }
  else
  {
    v11 = 16;
  }
LABEL_8:
  if ( (v7 & 0x20) != 0 )
  {
    if ( v5[16] )
    {
      if ( (a1 & 0x600) == 0x400 )
      {
        result = 2415920128LL;
        if ( (a1 & 0xC0000000) == 0 || (a1 & 0xF0000000) == 0x80000000LL )
          return result;
      }
    }
  }
  if ( (v7 & 0x40) != 0 )
  {
    if ( v5[17] )
    {
      if ( (a1 & 0x600) == 0x400 )
      {
        result = 1073742848;
        if ( (a1 & 0xC0000000) == 0 || (a1 & 0xE0000000) == 0x80000000LL )
          return result;
      }
    }
  }
  if ( (v7 & 0x80) != 0 )
  {
    if ( v5[18] )
    {
      if ( (a1 & 0x600) == 0x400 )
      {
        result = 2684355584LL;
        if ( (a1 & 0xC0000000) == 0 || (a1 & 0xE0000000) == 0x80000000LL || (a1 & 0xF0000000) == 0x40000000 )
          return result;
      }
    }
  }
  if ( (v7 & 0x100) != 0 )
  {
    if ( v5[14] )
    {
      if ( (a1 & 0x600) == 0x400 )
      {
        result = 1879049216;
        if ( (a1 & 0xC0000000) == 0 )
          return result;
        if ( (a1 & 0xE0000000) == 0x80000000LL )
          return result;
        v20 = (unsigned int)a1 & 0xF0000000;
        if ( v20 == 0x40000000 || v20 == 2684354560LL )
          return result;
      }
    }
  }
  if ( (v7 & 0x200) != 0 )
  {
    if ( v5[50] )
    {
      if ( (a1 & 0x600) == 0x400 )
      {
        result = 3758097408LL;
        if ( (a1 & 0xC0000000) == 0 )
          return result;
        if ( (a1 & 0xE0000000) == 0x80000000LL )
          return result;
        v21 = (unsigned int)a1 & 0xF0000000;
        if ( v21 == 0x40000000 || v21 == 2684354560LL || v21 == 1879048192 )
          return result;
      }
    }
  }
  if ( (v7 & 0x400) != 0 )
  {
    if ( v5[51] )
    {
      if ( (a1 & 0x600) == 0x400 )
      {
        result = 4026532864LL;
        if ( (a1 & 0xC0000000) == 0 )
          return result;
        if ( (a1 & 0xE0000000) == 0x80000000LL )
          return result;
        v24 = (unsigned int)a1 & 0xF0000000;
        if ( v24 == 0x40000000 || (a1 & 0xB0000000) == 0xA0000000LL || v24 == 1879048192 )
          return result;
      }
    }
  }
  if ( (v7 & 1) != 0 )
  {
    result = 1024;
    if ( v5[10] )
      return result;
  }
  if ( v8 && v5[11] )
    return 268436480;
  if ( v9 && v5[12] )
    return 536871936;
  if ( v10 && v5[15] )
    return 2147484672LL;
  if ( v11 && v5[13] )
    return 805307392;
  if ( (v7 & 0x20) == 0 || (result = 2415920128LL, !v5[16]) )
  {
    if ( (v7 & 0x40) == 0 || (result = 1073742848, !v5[17]) )
    {
      if ( (v7 & 0x80) == 0 || (result = 2684355584LL, !v5[18]) )
      {
        if ( (v7 & 0x100) == 0 || (result = 1879049216, !v5[14]) )
        {
          if ( (v7 & 0x200) == 0 || (result = 3758097408LL, !v5[50]) )
          {
            result = a1;
            if ( (v7 & 0x400) != 0 )
            {
              result = 4026532864LL;
              if ( !v5[51] )
                return a1;
            }
          }
        }
      }
    }
  }
  return result;
}

