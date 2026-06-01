__int64 __fastcall sub_4E3350(__int64 *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64 *, __int64 *, __int64, __int64, __int64); // rax
  __int64 *v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( a2 )
  {
    v2 = *(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64, __int64))(a2 + 40);
    if ( v2 )
      return v2(a1 + 7, a1 + 8, a1[3], a1[2], a1[5]);
  }
  v4 = *(__int64 **)(*a1 + 1672);
  v5 = sub_505D70(v4 + 203, a1[3]);
  v6 = sub_510810(v4, v5, a1[5]);
  v7 = a1[3];
  a1[5] = v6;
  v8 = sub_4E1680((__int64)v4, v7, *(_DWORD *)(a1[2] + 24), v6);
  v9 = a1[2];
  a1[5] = v8;
  v10 = *(_DWORD *)(v9 + 24);
  if ( (v10 & 0x400) != 0 && !v8 )
    return 0;
  if ( (v10 & 0x800) != 0 )
  {
    switch ( v10 & 0x4F )
    {
      case 1:
      case 4:
        v11 = 0xFFFF;
        break;
      case 2:
      case 0xB:
        v11 = 0xFFFFFFFFLL;
        break;
      case 3:
      case 0xA:
        v11 = 255;
        break;
      case 5:
        v11 = 65280;
        break;
      case 6:
        v11 = 4294901760LL;
        break;
      case 9:
        v11 = -1;
        break;
      case 0xC:
        v11 = 0xFFFFFFFF00000000LL;
        break;
      default:
        return 0;
    }
    if ( v11 == v8 )
      return 0;
  }
  if ( (v10 & 0x1000) != 0 )
  {
    v12 = a1[3];
    a1[8] = v12;
    if ( v12 != -1 )
      goto LABEL_12;
    goto LABEL_16;
  }
  v12 = *(_QWORD *)(v9 + 8);
  a1[8] = v12;
  if ( v12 == -1 )
  {
LABEL_16:
    if ( v8 )
    {
      v19 = sub_4E3030(v4, (__int64 *)a1[3], 0xFFFFFFFFFFFFFFFFLL, a1 + 5);
      a1[8] = v19;
      v12 = v19;
      if ( (debug & 2) != 0 )
        sub_3879F0();
      if ( v19 != -1 )
      {
        v9 = a1[2];
        goto LABEL_12;
      }
    }
    return 0;
  }
LABEL_12:
  v13 = *(_QWORD *)v9;
  a1[7] = *(_QWORD *)v9;
  if ( v13 == -1 )
  {
    v16 = a1[5];
    if ( (*(_BYTE *)(v9 + 25) & 1) != 0 )
      v16 = -a1[5];
    v17 = v16 + v12 - *(_QWORD *)(v9 + 16);
    v18 = *a1;
    a1[7] = v17;
    if ( (*(_BYTE *)(v18 + 940) & 1) == 0 )
    {
      v20 = sub_4E16F0((__int64)v4, a1[3], v9, v17, v12);
      a1[7] = v20;
      v17 = v20;
    }
    v13 = sub_510880(v4, v5, v17);
    v9 = a1[2];
    v12 = a1[8];
    a1[7] = v13;
  }
  v14 = *a1;
  v15 = *(_QWORD *)(*a1 + 1504) & (*(_QWORD *)(v9 + 16) + v13 - v12);
  a1[9] = v15;
  if ( (*(_BYTE *)(v9 + 25) & 1) != 0 )
  {
    if ( *(_DWORD *)(v14 + 1512) != 8 )
      v15 = (int)v15;
    a1[9] = -v15;
  }
  return 1;
}
