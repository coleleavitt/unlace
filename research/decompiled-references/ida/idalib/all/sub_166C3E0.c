__int64 __fastcall sub_166C3E0(__int64 a1, unsigned int a2, int a3, unsigned __int8 a4)
{
  __int64 v7; // rsi
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  int v11; // r12d
  int v12; // ebx
  __int64 result; // rax
  int v14; // edx
  _BOOL8 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-E0h]
  __int64 v22; // [rsp+18h] [rbp-D0h] BYREF
  unsigned int v23[4]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v25; // [rsp+40h] [rbp-A8h] BYREF
  char v26; // [rsp+98h] [rbp-50h]
  unsigned int v27; // [rsp+A0h] [rbp-48h]
  char v28; // [rsp+A4h] [rbp-44h]

  if ( a4 )
  {
    v7 = *(_QWORD *)(a1 + 232);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 532LL);
    v15 = v14 == 0;
    if ( ((*(_BYTE *)(v7 + 207) ^ 0x18) & 0x18) == 0 )
    {
      if ( !v14 )
        goto LABEL_3;
      v15 = 0;
    }
    sub_168B9F0(v23, a1 + 8, a2, 4977, 0);
    if ( v26 )
    {
      sub_AE9DF0(&v25, v15, 2u);
    }
    else if ( v28 )
    {
      v16 = sub_168B9E0(v23);
      v19 = v24;
      if ( v24 )
      {
        v21 = v16;
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
        v16 = v21;
      }
      v22 = v19;
      v20 = sub_1587BC0(v16, &v22, v16, (__int64)&v22, v17, v18);
      sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v27 + 8), v15, 2u);
    }
    LODWORD(v22) = (a3 != 1) + 4;
    sub_1587D10((__int64)v23, (int *)&v22);
    sub_15F7200(v23);
    v7 = *(_QWORD *)(a1 + 232);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 232);
  }
LABEL_3:
  v8 = *(_DWORD *)(a1 + 1952);
  v9 = *(_DWORD *)(a1 + 1956);
  if ( *(_DWORD *)(a1 + 1944) == v8 && *(_DWORD *)(a1 + 1948) == v9 )
  {
    v9 = 0;
    v8 = 0;
  }
  if ( a3 == 1 )
  {
    BYTE1(v8) &= ~2u;
    BYTE1(v9) |= 2u;
    v10 = a4 << 9;
  }
  else
  {
    BYTE1(v8) &= ~0x20u;
    BYTE1(v9) |= 0x20u;
    v10 = a4 << 13;
  }
  v11 = v9;
  v12 = v8 | v10;
  *(_DWORD *)(a1 + 1952) = v12;
  *(_DWORD *)(a1 + 1956) = v9;
  *(_DWORD *)(a1 + 1960) = a2;
  sub_BF6C80(v23, v7);
  result = v23[0];
  *(_DWORD *)(a1 + 224) = v23[0] ^ v11 & (v23[0] ^ v12);
  return result;
}
