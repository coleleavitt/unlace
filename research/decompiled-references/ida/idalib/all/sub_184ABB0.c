__int64 __fastcall sub_184ABB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r14
  unsigned int v8; // r12d
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v21; // rax
  unsigned __int8 v22; // al
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 v28; // [rsp+Fh] [rbp-E9h]
  __int64 v29[2]; // [rsp+18h] [rbp-E0h] BYREF
  bool v30; // [rsp+2Fh] [rbp-C9h] BYREF
  _QWORD v31[25]; // [rsp+30h] [rbp-C8h] BYREF

  v29[0] = a4;
  v6 = a5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 1;
  v8 = a2;
  v9 = a5 & 3;
  v14 = sub_B7E900(a5 & 0xFFFFFFFFFFFFFFF8LL, a2, a3, a4, a5, a6);
  if ( v14 )
  {
LABEL_3:
    v15 = *(_QWORD *)(v14 + 40);
    if ( (*(_BYTE *)(v14 + 68) & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_10;
    }
    else if ( !v15 )
    {
      v21 = *(_QWORD *)(v6 + 128);
      if ( v21 && (*(_BYTE *)(v21 + 10) & 0x20) != 0 )
      {
        sub_168B9F0((__int64)v31, a1 + 1, v8, 0xE08u, 0);
        sub_15F7200(v31);
        sub_168B9F0((__int64)v31, a1 + 1, *(_DWORD *)(v6 + 24), 0x17ABu, 0);
        sub_15F7200(v31);
        return 1;
      }
      v22 = sub_B78060(v14, a2, v10, v11, v12);
      if ( v22 )
      {
        v28 = v22;
        sub_168B9F0((__int64)v31, a1 + 1, v8, 0xE03u, 0);
        v23 = sub_1605D30((__int64)v31, v29);
        v30 = sub_F61420(*(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL), (__int64)v29, v24, v25, v26, v27);
        sub_1588420(v23, (unsigned __int8 *)&v30);
        sub_15F7200(v31);
        sub_168B9F0((__int64)v31, a1 + 1, *(_DWORD *)(v14 + 24), 0x67u, 0);
        sub_15F7200(v31);
        return v28;
      }
    }
    v16 = (*(_BYTE *)(v14 + 29) >> 5) & 3;
    if ( v16 == 2 )
    {
      v17 = 3;
    }
    else
    {
      v17 = (unsigned int)v9;
      if ( v9 <= v16 )
        v17 = v16;
    }
    a2 = v8;
    v31[0] = v14 | v17;
    sub_1662610(a1, v8, a3, v14 | v17, v12, v13);
LABEL_10:
    while ( 1 )
    {
      v18 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v14 = v18;
      if ( !v18 )
        break;
      if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_3;
    }
  }
  return 0;
}
