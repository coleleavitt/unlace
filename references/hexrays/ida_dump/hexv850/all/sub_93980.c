__int64 __fastcall sub_93980(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  int v6; // r14d
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rax
  char v10; // al
  int v11; // eax
  unsigned __int8 v12; // [rsp+Fh] [rbp-59h]
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v15[4]; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+24h] [rbp-44h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v2 = sub_117D20(a2, &v13, 14);
  if ( !v2 )
    return 0;
  if ( *(_BYTE *)v13 != 4 )
    return 0;
  v4 = *(_QWORD *)(v13 + 8);
  if ( *(_DWORD *)v4 != 9
    || *(_BYTE *)(v4 + 32) != 1 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 49LL) & 2) != 0 )
  {
    return 0;
  }
  v5 = sub_117CE0(v2, &v14);
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)v14 != 4 )
    return 0;
  v6 = **(_DWORD **)(v14 + 8);
  if ( v6 != 9 )
    return 0;
  v7 = sub_325150(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 1);
  v8 = 8 * *(_DWORD *)(v4 + 36);
  v9 = 1LL << v8;
  if ( (unsigned __int64)v8 >= 0x40 )
    v9 = 0;
  if ( v7 != v9 )
    return 0;
  sub_11EE80(v15, *(_QWORD *)(v14 + 8) + 32LL);
  if ( *(_DWORD *)(v4 + 36) != v16 || (sub_152650(a1, a2, v4 + 32, a2, v15, 0), v15[0] == 14) )
  {
    v10 = 0;
  }
  else
  {
    if ( v16 == a2[17] )
      v6 = 4;
    *a2 = v6;
    sub_117E50(a2 + 8, v15);
    sub_1181E0(a2 + 12);
    v11 = *(_DWORD *)(a1 + 24);
    BYTE1(v11) &= ~2u;
    LOBYTE(v11) = v11 | 0x80;
    *(_DWORD *)(a1 + 24) = v11;
    v10 = 1;
  }
  v12 = v10;
  sub_1181E0(v15);
  return v12;
}
