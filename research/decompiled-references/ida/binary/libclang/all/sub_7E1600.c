__int64 __fastcall sub_7E1600(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // al
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( !a2 )
    return 1;
  v2 = sub_79C190(a2);
  if ( !v2 )
    return 1;
  while ( 1 )
  {
    v3 = *(_BYTE *)(v2 + 28) & 0x7F;
    if ( ((v3 + 121) & 0x7Fu) > 1
      && ((unsigned int)v3 - 57 > 2 || (v4 = *(_QWORD *)(v2 + 128)) == 0 || (*(_BYTE *)(v4 + 10) & 0x20) == 0) )
    {
      v5 = *a1;
      v8[0] = v2;
      result = sub_7E09C0((__int64)a1, v2, v2, v8, a1, v5);
      if ( !(_BYTE)result )
        break;
    }
    v7 = *(_QWORD *)(v2 + 8);
    v2 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7 <= 7 )
      return 1;
  }
  return result;
}

