__int64 __fastcall sub_206DF50(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = *(__int64 **)(a1 + 16);
  v2 = (__int64)(*(_QWORD *)(a1 + 24) - (_QWORD)v1) >> 3;
  if ( (unsigned int)(v2 - 2) > 1 && (_DWORD)v2 != 6 )
    return 0;
  v3 = *v1;
  if ( *v1 == 17 )
  {
    result = 0x100000000LL;
    if ( (_DWORD)v2 == 2 )
      return result;
  }
  else
  {
    if ( v3 != 16 )
      return 0;
    if ( (_DWORD)v2 == 2 )
      return (v3 == 16) | 0x100000000LL;
  }
  if ( (_DWORD)v2 == 3 )
  {
    if ( v1[2] != 159 )
      return 0;
  }
  else if ( v1[2] != 159 || v1[3] != 4096 )
  {
    return 0;
  }
  return (v3 == 16) | 0x100000000LL;
}
