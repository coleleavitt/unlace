__int64 __fastcall sub_780AB0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdx

  v1 = (__int64 *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 56) & 4) != 0 )
    v1 = (__int64 *)v1[4];
  if ( !v1 )
    return 0;
  v2 = *v1;
  if ( (*v1 & 7) != 0 )
    return 0;
  v4 = v1 + 1;
  v5 = v2;
  if ( (v2 & 8) != 0 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 39 )
  {
    v5 = sub_B1B150(v2, v4, v4);
    v4 = v9;
    v2 = v5;
    if ( (v5 & 7) != 0 )
      return 0;
  }
  if ( (v5 & 8) != 0
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1
    || !v5 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v5 + 16) == 26 && (*(_WORD *)(v5 + 22) & 0x3C0) != 0 )
  {
    v6 = (unsigned int *)&v4[(unsigned __int16)(*(_DWORD *)(v5 + 20) >> 6) + 2];
    v7 = *v6;
    v8 = v6[1];
  }
  else
  {
    v8 = 0;
    v7 = 0;
  }
  return (v8 << 32) | v7;
}

