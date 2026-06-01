char *__fastcall sub_56F3D0(int *a1, unsigned int a2, int *a3, __int64 a4)
{
  int default_radix; // eax
  int v7; // edx
  unsigned int v8; // eax
  char *result; // rax
  unsigned int v10; // eax
  int v11; // edx
  unsigned int v12; // edx
  int v13; // eax
  __int16 v14; // [rsp+6h] [rbp-32h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  default_radix = *a3;
  v15 = __readfsqword(0x28u);
  if ( !default_radix )
  {
    default_radix = get_default_radix(a1);
    *a3 = default_radix;
  }
  switch ( default_radix )
  {
    case 8:
      goto LABEL_35;
    case 10:
      v11 = *a1 & 0x3000;
      if ( v11 )
      {
        if ( a2 > 9 )
          goto LABEL_27;
        if ( (*a1 & 0xE00) == 0x400 )
          goto LABEL_69;
        if ( a2 > 7 || (*a1 & 0x1C000) != 0x8000 )
        {
LABEL_27:
          if ( v11 == 0x2000 )
            return "%s.";
          if ( v11 == 12288 )
            return ".%s";
          if ( v11 != 4096 )
            goto LABEL_66;
          return "#%s";
        }
LABEL_49:
        v13 = 8;
        goto LABEL_46;
      }
      goto LABEL_45;
    case 2:
      if ( a2 == 1 )
        return "1";
      v10 = *a1 & 0xE0000;
      if ( v10 == 393216 )
        return "0b%s";
      if ( v10 > 0x60000 )
      {
        if ( v10 == 0x80000 )
        {
          return "b'%s";
        }
        else
        {
          if ( v10 != (_DWORD)&stru_A0000 )
            goto LABEL_66;
          return "b'%s'";
        }
      }
      else if ( v10 == 0x20000 )
      {
        return "^B%s";
      }
      else if ( v10 == (_DWORD)&stru_40000 )
      {
        return "%%%s";
      }
      else
      {
        if ( v10 )
          goto LABEL_66;
        return "%sb";
      }
  }
  v7 = *a1;
  v8 = *a1 & 0xE00;
  if ( v8 == 1024 )
    goto LABEL_69;
  if ( a2 > 9 )
    goto LABEL_11;
  if ( (v7 & 0x3000) == 0 )
  {
LABEL_45:
    v13 = 10;
LABEL_46:
    *a3 = v13;
    return (char *)&unk_22B285A;
  }
  if ( a2 <= 7 && (v7 & 0x1C000) == 0x8000 )
    goto LABEL_49;
LABEL_11:
  if ( v8 == 1536 )
    return "0x%s";
  if ( v8 > 0x600 )
  {
    if ( v8 == 2048 )
      return "$%s";
    if ( v8 != 2560 )
      goto LABEL_66;
    *(_BYTE *)(a4 + 2) = 82;
    *(_WORD *)a4 = 24124;
    v14 = a2;
    if ( !(unsigned int)r50_to_asc(a4 + 3, &v14, 1) )
    {
      *(_WORD *)(a4 + strlen((const char *)(a4 + 3)) + 3) = 62;
      return (char *)a4;
    }
    *a3 = 8;
LABEL_35:
    v12 = *a1 & 0x1C000;
    if ( v12 != 0x8000 )
    {
      if ( a2 > 0xF )
      {
LABEL_37:
        if ( v12 == 0x10000 )
          return "o'%s";
        if ( v12 > 0x10000 )
        {
          if ( v12 == 98304 )
            return "~%s";
          if ( v12 == 114688 )
            return "q'%s";
          if ( v12 != 81920 )
            goto LABEL_66;
          return "%sq";
        }
        if ( v12 > 0x8000 )
        {
          if ( v12 != 49152 )
            goto LABEL_66;
          return "@%s";
        }
        result = "%so";
        if ( !v12 )
          return result;
        return "0%s";
      }
      if ( (*a1 & 0xE00) != 0x400 )
      {
        if ( a2 > 7 || (*a1 & 0x3000) != 0 )
          goto LABEL_37;
        goto LABEL_45;
      }
LABEL_69:
      *a3 = 16;
      return "0%s";
    }
    goto LABEL_49;
  }
  if ( v8 != 512 )
  {
    if ( !v8 )
      return "0%sh";
LABEL_66:
    if ( !under_debugger )
      interr(615);
    BUG();
  }
  return "h'%s";
}

