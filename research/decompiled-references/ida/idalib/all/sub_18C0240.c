__int64 __fastcall sub_18C0240(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // edx

  v2 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *v2;
  v4 = *(unsigned __int8 *)(*v2 + 16);
  if ( (unsigned int)(v4 - 43) > 1 )
  {
    v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v8 > 1 )
      return 0;
    v3 = sub_F63050(*v2, a2, v8, v4);
    if ( !v3 )
      return 0;
    v4 = *(unsigned __int8 *)(v3 + 16);
  }
  if ( (_BYTE)v4 == 43 )
    return 1;
  while ( 1 )
  {
    v6 = (*(_BYTE *)(v3 + 18) & 0x10) == 0;
    v3 = *(_QWORD *)(*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v6 )
      break;
    v7 = (unsigned int)*(unsigned __int8 *)(v3 + 16) - 43;
    if ( (unsigned int)v7 > 1 )
      v3 = sub_F63050(v3, a2, v7, v4);
  }
  v9 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  result = 2;
  if ( (unsigned int)(v9 - 25) <= 1 )
    return 1;
  return result;
}
