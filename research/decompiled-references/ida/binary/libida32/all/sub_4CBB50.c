__int64 __fastcall sub_4CBB50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 (__fastcall *v3)(__int64, __int64, __int64, __int64, _QWORD); // rax
  __int64 *v5; // rbp
  __int64 v6; // r12
  unsigned int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // esi
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // eax

  v2 = *((unsigned int *)a1 + 6);
  if ( a2 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(a2 + 40);
    if ( v3 )
      return v3((__int64)a1 + 44, (__int64)(a1 + 6), v2, a1[2], *((unsigned int *)a1 + 8));
  }
  v5 = *(__int64 **)(*a1 + 1480);
  v6 = sub_4EE820(v5 + 194, (unsigned int)v2);
  v7 = sub_4F8EA0(v5, v6, *((unsigned int *)a1 + 8));
  v8 = *((unsigned int *)a1 + 6);
  *((_DWORD *)a1 + 8) = v7;
  v9 = sub_4CA120((__int64)v5, v8, *(_DWORD *)(a1[2] + 12), v7);
  v10 = a1[2];
  *((_DWORD *)a1 + 8) = v9;
  v11 = *(_DWORD *)(v10 + 12);
  if ( (v11 & 0x400) != 0 && !v9 )
    return 0;
  if ( (v11 & 0x800) != 0 )
  {
    switch ( v11 & 0x4F )
    {
      case 1:
      case 4:
        v12 = 0xFFFF;
        break;
      case 2:
      case 9:
        v12 = -1;
        break;
      case 3:
      case 0xA:
        v12 = 255;
        break;
      case 5:
        v12 = 65280;
        break;
      case 6:
        v12 = -65536;
        break;
      default:
        return 0;
    }
    if ( v12 == v9 )
      return 0;
  }
  if ( (v11 & 0x1000) != 0 )
    v13 = *((_DWORD *)a1 + 6);
  else
    v13 = *(_DWORD *)(v10 + 4);
  *((_DWORD *)a1 + 12) = v13;
  if ( v13 != -1 )
    goto LABEL_13;
  if ( !v9 )
    return 0;
  v20 = sub_4CB840(v5, *((unsigned int *)a1 + 6), 0xFFFFFFFF, (int *)a1 + 8);
  *((_DWORD *)a1 + 12) = v20;
  v13 = v20;
  if ( (debug & 2) != 0 )
    sub_383DA0();
  if ( v20 == -1 )
    return 0;
  v10 = a1[2];
LABEL_13:
  v14 = *(_DWORD *)v10;
  *((_DWORD *)a1 + 11) = *(_DWORD *)v10;
  if ( v14 == -1 )
  {
    v17 = *((_DWORD *)a1 + 8);
    if ( (*(_BYTE *)(v10 + 13) & 1) != 0 )
      v17 = -*((_DWORD *)a1 + 8);
    v18 = v17 + v13 - *(_DWORD *)(v10 + 8);
    v19 = *a1;
    *((_DWORD *)a1 + 11) = v18;
    if ( (*(_BYTE *)(v19 + 772) & 1) == 0 )
    {
      v21 = sub_4CA180((__int64)v5, *((_DWORD *)a1 + 6), v10, v18, v13);
      *((_DWORD *)a1 + 11) = v21;
      v18 = v21;
    }
    v14 = sub_4F8EC0(v5, v6, v18);
    v10 = a1[2];
    v13 = *((_DWORD *)a1 + 12);
    *((_DWORD *)a1 + 11) = v14;
  }
  v15 = *(_DWORD *)(v10 + 8) + v14 - v13;
  *((_DWORD *)a1 + 13) = v15;
  v16 = -v15;
  if ( (*(_BYTE *)(v10 + 13) & 1) == 0 )
    v16 = v15;
  *((_DWORD *)a1 + 13) = v16;
  return 1;
}

