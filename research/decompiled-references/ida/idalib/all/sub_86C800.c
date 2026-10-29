__int64 __fastcall sub_86C800(
        unsigned int *a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  __int64 result; // rax
  unsigned int v8; // ebp
  int v9; // esi

  result = 3942;
  if ( a2 == 2 )
  {
    v9 = *a1;
    switch ( a3 )
    {
      case 2:
        result = ((a6 | (unsigned __int8)(8 * a7) | 0xFFFFFFC0) << 24) | 0x740F66;
        v8 = ((a6 | (unsigned __int8)(8 * a7) | 0xFFFFFFC0) << 24) | 0x740F66;
        if ( v9 )
          return result;
        break;
      case 3:
        result = ((a7 | (unsigned __int8)(8 * a4) | 0xFFFFFFC0) << 24) | 0xEB0F66;
        v8 = ((a7 | (unsigned __int8)(8 * a4) | 0xFFFFFFC0) << 24) | 0xEB0F66;
        if ( v9 )
          return result;
        break;
      case 1:
        result = ((a5 | (unsigned __int8)(8 * a4) | 0xFFFFFFC0) << 24) | 0x740F66;
        v8 = ((a5 | (unsigned __int8)(8 * a4) | 0xFFFFFFC0) << 24) | 0x740F66;
        if ( v9 )
          return result;
        break;
      default:
        result = ((a4 | (unsigned __int8)(8 * a7) | 0xFFFFFFC0) << 24) | 0x6F0F66;
        v8 = ((a4 | (unsigned __int8)(8 * a7) | 0xFFFFFFC0) << 24) | 0x6F0F66;
        if ( v9 )
          return result;
        break;
    }
    goto LABEL_12;
  }
  if ( a3 )
  {
    if ( a3 != 2 )
      return result;
    v8 = ((a5 | (unsigned __int8)(8 * a4) | 0xFFFFFFC0) << 24) | 0x740F66;
    result = *a1;
    if ( (_DWORD)result )
      return result;
LABEL_12:
    result = (__int64)sub_867B60((__int64)a1, 5);
    if ( result )
    {
      *(_BYTE *)result = 4;
      *((_QWORD *)a1 + 15) += 4LL;
      *(_DWORD *)(result + 1) = v8;
    }
    return result;
  }
  if ( a2 == 1 )
  {
    result = ((a6 | (unsigned __int8)(8 * a4) | 0xFFFFFFC0) << 24) | 0xEB0F66;
    v8 = ((a6 | (unsigned __int8)(8 * a4) | 0xFFFFFFC0) << 24) | 0xEB0F66;
    if ( !*a1 )
      goto LABEL_12;
  }
  return result;
}
