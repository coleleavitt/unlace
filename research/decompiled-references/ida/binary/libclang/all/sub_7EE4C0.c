__int64 __fastcall sub_7EE4C0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r13d
  __int64 *v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v7; // rbx
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  v2 = sub_7EDF40(a1, *(_QWORD *)(a2 + 24));
  if ( !(_BYTE)v2 )
    return 0;
  v3 = v2;
  v4 = (__int64 *)(a2 + 48);
  v5 = a2 + 48 + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6);
  if ( a2 + 48 != v5 )
  {
    while ( (unsigned __int8)sub_7EDF40(a1, *v4) )
    {
      if ( (__int64 *)v5 == ++v4 )
      {
        v16 = 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6);
        goto LABEL_9;
      }
    }
    return 0;
  }
  v16 = 0;
LABEL_9:
  v7 = (a2 + v16 + 4LL * ((*(_BYTE *)(a2 + 23) & 0x10) != 0) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v8 = (*(_WORD *)(a2 + 22) >> 6) & 0xF;
  if ( (*(_BYTE *)(a2 + 23) & 8) == 0 )
  {
    if ( (_BYTE)v8 != 2 )
      goto LABEL_17;
    v15 = 8LL * (*(_WORD *)v7 & 0x3FF);
    v12 = v7 + v15;
    if ( !v15 )
      return v3;
LABEL_14:
    while ( (unsigned __int8)sub_7EDF40(a1, *(_QWORD *)v7) )
    {
      v7 += 8LL;
      if ( v12 == v7 )
      {
        v8 = (*(_WORD *)(a2 + 22) >> 6) & 0xF;
        goto LABEL_17;
      }
    }
    return 0;
  }
  v9 = ((*(_BYTE *)(v7 + 1) & 4) != 0) + 1LL;
  if ( (_BYTE)v8 == 2 )
  {
    v10 = v9 + (*(_WORD *)v7 & 0x3FF);
    v11 = 8 * v9;
    v10 *= 8;
    v12 = v7 + v10;
    v7 += v11;
    if ( v11 != v10 )
      goto LABEL_14;
    return v3;
  }
LABEL_17:
  if ( (unsigned int)(unsigned __int8)v8 - 6 > 2 )
    return v3;
  v13 = (a2 + 4LL * ((*(_BYTE *)(a2 + 23) & 0x10) != 0) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48 + 7)
      & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(a2 + 23) & 8) != 0 && (*(_BYTE *)(v13 + 1) & 4) != 0 )
    v14 = (__int64 *)(v13 + 16);
  else
    v14 = (__int64 *)(v13 + 8LL * ((*(_BYTE *)(a2 + 23) & 8) != 0));
  if ( !*v14 )
    return v3;
  return sub_7EBA80(a1, *v14);
}

