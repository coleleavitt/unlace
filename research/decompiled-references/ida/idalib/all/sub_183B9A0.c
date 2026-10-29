__int64 __fastcall sub_183B9A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  _QWORD v18[5]; // [rsp+0h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 232);
  result = 0;
  if ( (*(_BYTE *)(v6 + 106) & 2) != 0 )
  {
    if ( a3 && *(_QWORD *)(a3 + 8) )
    {
      v9 = sub_16A2930(a1, a3, 1, v6, a5, a6);
      if ( !v9 )
        return 0;
      if ( (*(_BYTE *)(v9 + 8) & 0x7Fu) - 59 > 2 )
        return 0;
      v10 = v9 - 64;
      if ( v9 == 64 )
        return 0;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 544);
      if ( !v11 )
        return 0;
      if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 59 > 2 )
        return 0;
      v10 = v11 - 64;
      if ( v11 == 64 )
        return 0;
    }
    v12 = *(_QWORD *)(v10 + 40);
    if ( (v12 & 7) != 0 )
      return 0;
    v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v13 )
      return 0;
    if ( *(_QWORD *)a2 == v13 )
      return 0;
    v14 = *(unsigned int **)(*(_QWORD *)a2 + 16LL);
    v15 = *v14;
    v16 = *(_QWORD *)(v13 + 16) + 16LL;
    v18[0] = v14 + 4;
    v18[1] = v15;
    if ( 3 * (unsigned int)sub_2246430(v18, v16, *(unsigned int *)(v16 - 16), 1, 0) >= **(_DWORD **)(*(_QWORD *)a2 + 16LL) )
      return 0;
    v17 = *(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v10 + 40) & 7) != 0 )
      v17 = 0;
    *(_QWORD *)a2 = v17;
    return 1;
  }
  return result;
}
