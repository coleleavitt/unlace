__int64 __fastcall sub_3E5900(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  _QWORD *i; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // r8
  __int64 result; // rax

  v2 = (_DWORD *)(a1 + 352);
  for ( i = &unk_40C240; ; i += 2 )
  {
    v4 = i[2];
    v5 = v2;
    v2 = (_DWORD *)(a1 + v4);
    if ( a2 < *(_DWORD *)(a1 + v4) )
      break;
    if ( v4 == 624 )
      return 1;
  }
  if ( a2 != *v5 )
    return 1;
  result = *((unsigned __int8 *)i + 14);
  if ( (_BYTE)result == 0xFF )
    return *(unsigned __int8 *)(a1 + 80);
  if ( (_BYTE)result == 0xFE )
    return *(unsigned __int8 *)(a1 + 692);
  return result;
}
