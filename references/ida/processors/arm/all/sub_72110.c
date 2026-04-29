__int64 __fastcall sub_72110(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  __int64 v4; // r13
  int v6; // r12d
  unsigned __int8 v7; // r13
  unsigned __int8 v8; // al
  bool v9; // r15
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int8 v11; // al
  bool v12; // dl
  bool v13; // cc
  bool v14; // al
  int v15; // edx
  char v16; // al
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // r14
  int v23; // r15d
  __int64 v24; // rdx
  __int64 *v25; // rax
  char v26; // dl
  int v27; // ecx
  unsigned int *v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int16 v31; // ax
  __int64 *v32; // [rsp+0h] [rbp-68h] BYREF
  __int128 v33; // [rsp+8h] [rbp-60h]
  char v34; // [rsp+18h] [rbp-50h]
  _DWORD v35[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE )
    return 0;
  v4 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v4 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v6 = a2;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v2 )
    return 0;
  v7 = *(_BYTE *)(v4 + 5);
  v8 = *(_BYTE *)(a1 + 61);
  v9 = v7 <= 0xF9u;
  if ( v8 > 0xF9u )
  {
    if ( v8 >= v7 && v7 > 0xF9u )
      goto LABEL_16;
  }
  else if ( v8 >= v7 || v7 > 0xF9u || v8 == 2 && *(_BYTE *)(a1 + 8) )
  {
    goto LABEL_16;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v10 == sub_6ACC0 )
    return 0;
  v11 = v10(a1, a1 + 56);
  v12 = v9 || v11 < v7;
  v13 = v11 <= 0xF9u;
  v14 = v11 < v7 && v9;
  if ( !v13 )
    v14 = v12;
  if ( v14 )
    return 0;
LABEL_16:
  if ( *(_WORD *)(a1 + 40) != 30 )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 3 )
    return 0;
  if ( *(_BYTE *)(a1 + 129) )
    return 0;
  if ( *(_QWORD *)(a1 + 104) )
    return 0;
  v15 = *(_DWORD *)(a1 + 44);
  if ( (v15 & 0xB0) != 0 )
    return 0;
  v16 = *(_BYTE *)(a1 + 101);
  if ( v16 )
  {
    if ( v16 != 1 )
      return 0;
    if ( a2 )
    {
      if ( a2 != 2 || (v15 & 0x402) != 0 || (v15 & 0x1800) == 0 )
        return 0;
      v17 = 2048;
    }
    else
    {
      if ( (v15 & 0x402) != 0 )
        return 0;
      v17 = 2048;
      v6 = 2;
      if ( (v15 & 0x1800) == 0 )
        return 0;
    }
  }
  else if ( a2 )
  {
    if ( a2 != 1 || (v15 & 0x402) == 0 )
      return 0;
    v17 = 1024;
  }
  else
  {
    if ( (v15 & 0x402) == 0 )
      return 0;
    v17 = 1024;
    v6 = 1;
  }
  if ( (v17 & v15) != 0 )
    **(_DWORD **)(a1 + 376) |= 0x2000u;
  v18 = *(unsigned __int16 *)(a1 + 102);
  v19 = *(_QWORD *)(a1 + 32);
  v20 = *(_QWORD *)(a1 + 888);
  v32 = 0;
  v35[0] = v18;
  v21 = *(unsigned __int8 *)(a1 + 128);
  v34 = 0;
  v22 = *(_QWORD *)(a1 + 376);
  v35[1] = v21;
  v33 = 0;
  v23 = sub_822F0(v20, &v32, v19, v35);
  if ( v23 == -1 || (unsigned __int8)(v34 - 10) > 1u )
  {
LABEL_35:
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree((__int64)v32);
    }
    return 0;
  }
  v24 = *v32;
  if ( (_QWORD)v33 != 1 )
  {
    v25 = v32 + 3;
    if ( 24LL * (_QWORD)v33 != 24 )
    {
      while ( v24 == *v25 )
      {
        v25 += 3;
        if ( v25 == &v32[3 * (_QWORD)v33] )
          goto LABEL_50;
      }
      goto LABEL_35;
    }
  }
LABEL_50:
  *(_QWORD *)(v22 + 8) = v24;
  sub_82740(*(_QWORD *)(a1 + 888), a1 + 840, &v32);
  if ( (*(_BYTE *)(a1 + 50) & 4) != 0 || (v31 = getinf(3), v26 = 2, (v31 & 0x1006) == 0x1002) )
    v26 = 7;
  v27 = v35[1 - v23];
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v27;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v26;
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree((__int64)v32);
  }
  v28 = *(unsigned int **)(a1 + 376);
  v29 = *v28 & 0xFFFFFBFB;
  v30 = v29;
  if ( v6 != 2 )
  {
    BYTE1(v30) = BYTE1(v29) | 4;
    v29 = v30;
  }
  *v28 = v29;
  return v2;
}
