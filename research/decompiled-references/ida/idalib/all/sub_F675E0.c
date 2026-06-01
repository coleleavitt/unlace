__int64 __fastcall sub_F675E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = a1;
  if ( *(_BYTE *)(a1 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    v1 = sub_F62E70(a1);
    if ( !v1 )
      return 0;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v2 + 16) - 35 > 1 )
  {
    v2 = sub_F62E70(v2);
    if ( !(*(_BYTE *)(v2 + 19) >> 2) )
      return 0;
  }
  else if ( !(*(_BYTE *)(v2 + 19) >> 2) )
  {
    return 0;
  }
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v3 + 16) == 13 && ((*(_WORD *)(v3 + 18) >> 3) & 0x1FF) == 0x1E9 )
    return v1;
  return 0;
}
