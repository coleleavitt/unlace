__int64 __fastcall lsl::readPVLEUInt64(unsigned __int8 **a1)
{
  _BYTE *v2; // x20
  unsigned __int64 v3; // x9
  size_t v4; // x8
  bool v5; // zf
  __int64 result; // x0
  __int64 v7; // x8
  size_t v8; // x21
  char v9; // w22
  unsigned __int64 v10; // x23
  __int64 v11; // x8
  unsigned __int8 *v12; // x9
  __int64 __dst; // [xsp+8h] [xbp-38h] BYREF

  __dst = 0;
  v2 = *a1;
  v3 = **a1;
  v4 = __clz(__rbit32(v3));
  if ( **a1 )
    v5 = (_DWORD)v4 == 8;
  else
    v5 = 1;
  if ( v5 )
  {
    result = *(_QWORD *)(v2 + 1);
    v7 = (__int64)(a1[1] - 9);
    *a1 = v2 + 9;
    a1[1] = (unsigned __int8 *)v7;
  }
  else
  {
    v8 = v4 + 1;
    v9 = 7 - v4;
    v10 = (v3 >> ((unsigned __int8)v4 + 1)) & (unsigned int)~(-1 << (7 - v4));
    if ( (_DWORD)v4 )
    {
      _platform_memmove(&__dst, v2 + 1, v4);
      v11 = __dst;
    }
    else
    {
      v11 = 0;
    }
    v12 = &a1[1][-v8];
    *a1 = &v2[v8];
    a1[1] = v12;
    return (v11 << v9) | v10;
  }
  return result;
}
