__int64 __fastcall sub_7EEF40(__int64 *a1, __int64 a2, __int64 a3)
{
  char v5; // al
  int v6; // edx
  __int64 v7; // rbx
  unsigned int v8; // eax
  int v9; // r13d
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned __int64 v15; // rbx
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rax
  unsigned __int8 v24; // [rsp+Fh] [rbp-49h]
  __int64 v25[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = *(_BYTE *)(a2 + 16);
  if ( v5 == 26 )
  {
    v6 = 8 * ((*(_WORD *)(a2 + 22) & 0x3C0) != 0) + 15;
LABEL_3:
    v7 = 8 * ((v6 + ((*(_DWORD *)(a2 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
    goto LABEL_4;
  }
  v7 = 16;
  if ( v5 != 25 )
  {
    v6 = 15;
    goto LABEL_3;
  }
LABEL_4:
  v8 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
  v24 = sub_7EEDC0(
          (__int64)a1,
          *(_QWORD *)(a2 + 24),
          v8 * ((a3 + v7 != 0) + (a3 + v7 - (unsigned __int64)(a3 + v7 != 0)) / v8));
  if ( !v24 )
    return 0;
  v9 = *(_DWORD *)(a2 + 20) >> 6;
  LOWORD(v10) = v9;
  if ( *(_BYTE *)(a2 + 16) != 25 )
  {
    if ( (_WORD)v9 )
    {
      v11 = 0;
      do
      {
        v13 = *(_QWORD *)(a3 + 8 * v11 + 16);
        if ( v13 )
        {
          v12 = *a1;
          v25[0] = *(_QWORD *)(a3 + 8 * v11 + 16);
          if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v13, v25[0], v25, a1, v12) )
            return 0;
        }
        else if ( (unsigned int)v11 < (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6)
               && !(unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(a2 + 8 * v11 + 48)) )
        {
          return 0;
        }
        ++v11;
      }
      while ( (unsigned __int16)v9 != (_DWORD)v11 );
      v10 = *(_DWORD *)(a2 + 20) >> 6;
    }
    else
    {
      LOWORD(v10) = 0;
    }
  }
  v15 = (a2 + 8LL * (unsigned __int16)v10 + 4LL * ((*(_BYTE *)(a2 + 23) & 0x10) != 0) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v16 = (*(_WORD *)(a2 + 22) >> 6) & 0xF;
  if ( (*(_BYTE *)(a2 + 23) & 8) == 0 )
  {
    if ( (_BYTE)v16 != 2 )
      goto LABEL_26;
    v23 = 8LL * (*(_WORD *)v15 & 0x3FF);
    v20 = v15 + v23;
    if ( !v23 )
      return v24;
LABEL_23:
    while ( (unsigned __int8)sub_7EDF40(a1, *(_QWORD *)v15) )
    {
      v15 += 8LL;
      if ( v20 == v15 )
      {
        v16 = (*(_WORD *)(a2 + 22) >> 6) & 0xF;
        goto LABEL_26;
      }
    }
    return 0;
  }
  v17 = ((*(_BYTE *)(v15 + 1) & 4) != 0) + 1LL;
  if ( (_BYTE)v16 == 2 )
  {
    v18 = v17 + (*(_WORD *)v15 & 0x3FF);
    v19 = 8 * v17;
    v18 *= 8;
    v20 = v15 + v18;
    v15 += v19;
    if ( v19 != v18 )
      goto LABEL_23;
    return v24;
  }
LABEL_26:
  if ( (unsigned int)(unsigned __int8)v16 - 6 > 2 )
    return v24;
  v21 = (a2 + 4LL * ((*(_BYTE *)(a2 + 23) & 0x10) != 0) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48 + 7)
      & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(a2 + 23) & 8) == 0 || (v22 = (__int64 *)(v21 + 16), (*(_BYTE *)(v21 + 1) & 4) == 0) )
    v22 = (__int64 *)(v21 + 8LL * ((unsigned __int8)(*(_BYTE *)(a2 + 23) & 8) >> 3));
  if ( !*v22 )
    return v24;
  return sub_7EBA80(a1, *v22);
}

