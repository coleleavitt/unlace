__int64 __fastcall sub_1CBD040(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // r13d
  unsigned __int64 v8; // rax
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  __int64 *v12; // rsi
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // edx
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v23[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( !a2 )
    return 0;
  v3 = *(_QWORD *)(a2 + 72);
  if ( *(char *)(v3 + 8) < 0 )
    goto LABEL_11;
  v5 = *(_QWORD *)(v3 + 360);
  if ( !v5 )
    goto LABEL_11;
  LOBYTE(v6) = sub_B8E4C0(*(_QWORD *)(v3 + 360));
  v7 = v6;
  if ( !(_BYTE)v6 )
  {
    v8 = sub_B8EAA0(v5);
    if ( v8 )
    {
      v9 = *(_BYTE *)(v8 + 8) & 0x7F;
      if ( (*(_BYTE *)(v8 + 8) & 0x7F) == 0 || v9 == 24 )
        return 0;
      if ( (unsigned int)(v9 - 59) <= 2 )
      {
        v10 = v8 - 64;
        if ( v10 )
        {
          while ( 1 )
          {
            v16 = *(_QWORD *)(v10 + 16);
            v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v16 & 4) != 0 )
              v17 = *(_QWORD *)v17;
            v18 = *(_BYTE *)(v17 + 8) & 0x7F;
            if ( (unsigned int)(v18 - 59) > 2 )
              break;
            v10 = v17 - 64;
            if ( !v10 )
              return 0;
          }
          if ( (unsigned int)(v18 - 34) > 5 || v17 == 72 )
            return 0;
          v11 = *(_DWORD *)(a3 + 8);
          v12 = (__int64 *)(a1 + 8);
          v13 = 5120;
LABEL_12:
          sub_168B9F0((__int64)v23, v12, v11, v13, 0);
          v14 = *(_DWORD *)(a3 + 16);
          LODWORD(v22) = *(_DWORD *)(a3 + 8);
          HIDWORD(v22) = v14;
          v7 = *(unsigned __int8 *)(sub_1587DB0((__int64)v23, &v22) + 120);
          sub_15F7200(v23);
          return v7;
        }
      }
    }
LABEL_11:
    v11 = *(_DWORD *)(a3 + 8);
    v12 = (__int64 *)(a1 + 8);
    v13 = 5139;
    goto LABEL_12;
  }
  v19 = *(_DWORD *)(a3 + 8);
  if ( !v19 && (*(_DWORD *)(a3 + 20) & 0x1FFFFFFF) != 0 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 24) + 16LL))(*(_QWORD *)(a3 + 24));
    v19 = v22;
  }
  else
  {
    v20 = *(_DWORD *)(a3 + 16);
    LODWORD(v22) = *(_DWORD *)(a3 + 8);
    HIDWORD(v22) = v20;
  }
  sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v19, 0x1408u, 0);
  sub_15884C0((__int64)v23, &v22);
  sub_15F7200(v23);
  v21 = sub_B8E540(v5);
  if ( v21 )
  {
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), *(_DWORD *)(v21 + 72), 0x175Au, 0);
    sub_15F7200(v23);
  }
  return v7;
}
