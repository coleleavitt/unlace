void __fastcall sub_166A250(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v6; // r13
  unsigned int v7; // ebx
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  unsigned int v14[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int8 *v15; // [rsp+20h] [rbp-A8h] BYREF
  char v16; // [rsp+78h] [rbp-50h]
  char v17; // [rsp+84h] [rbp-44h]

  v6 = a4;
  v7 = *(_DWORD *)(a1 + 1952);
  v8 = *(unsigned int *)(a1 + 1956);
  if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v8, v7) )
  {
    v8 = 0;
    v7 = 0;
    if ( (unsigned int)(a3 - 2) > 2 )
      goto LABEL_3;
LABEL_5:
    v9 = *(_BYTE *)(sub_B8EAA0(*(_QWORD *)(a1 + 544)) + 8) & 0x7F;
    if ( v9 != 24 && v9 )
    {
      sub_168B9F0(v14, a1 + 8, a2, 4824, 0);
      sub_15F7200(v14);
      return;
    }
    goto LABEL_3;
  }
  if ( (unsigned int)(a3 - 2) <= 2 )
    goto LABEL_5;
LABEL_3:
  switch ( v6 )
  {
    case 0LL:
    case 6LL:
      if ( *(_DWORD *)(a1 + 1872) )
      {
        sub_1667280(a1 + 1864, a2, a3, nullptr, 0, (v8 << 32) | v7);
        v7 = *(_DWORD *)(a1 + 1952);
        LODWORD(v8) = *(_DWORD *)(a1 + 1956);
        goto LABEL_9;
      }
      sub_168B9F0(v14, a1 + 8, a2, 7267, 0);
      if ( v16 )
      {
        sub_AE9DF0(&v15, (__int64)"float_control", 1u);
      }
      else if ( v17 )
      {
        sub_1669EA0((__int64)v14, (__int64)"float_control");
      }
      sub_1669FD0((__int64)v14, (__int64)"stack empty");
      sub_15F7200(v14);
      return;
    case 1LL:
      v8 = (unsigned int)v8 | 0x207E03;
      v7 = v7 & 0xFFDF81FC | 0x200001;
      goto LABEL_13;
    case 2LL:
      v12 = *(_DWORD *)(a1 + 224);
      v13 = (unsigned __int8)v12 >> 6;
      if ( v13 == 3 )
      {
        if ( (v12 & 0x100) == 0 )
          goto LABEL_29;
LABEL_24:
        v10 = a1 + 8;
        v11 = 4822;
        goto LABEL_16;
      }
      if ( v13 == 2 )
        goto LABEL_24;
      if ( (v12 & 0x100) != 0 )
      {
        v10 = a1 + 8;
        v11 = 4823;
        goto LABEL_16;
      }
LABEL_29:
      v8 = (unsigned int)v8 | 0x207E03;
      v7 = v7 & 0xFFDF81FC | 0x7E02;
LABEL_17:
      sub_1667280(a1 + 1864, a2, a3, nullptr, 0, (v8 << 32) | v7);
LABEL_9:
      sub_BF6C80(v14, *(_QWORD *)(a1 + 232));
      *(_DWORD *)(a1 + 224) = v14[0] ^ v8 & (v14[0] ^ v7);
      return;
    case 3LL:
      if ( (*(_DWORD *)(a1 + 224) & 0x7200) != 0 )
      {
        v10 = a1 + 8;
        v11 = 4821;
LABEL_16:
        sub_168B9F0(v14, v10, a2, v11, 0);
        sub_15F7200(v14);
      }
      else
      {
        LOBYTE(v8) = v8 | 0xC0;
        LOBYTE(v7) = v7 & 0x3F | 0x80;
      }
      goto LABEL_17;
    case 4LL:
      LOBYTE(v7) = v7 & 0x3F;
      LOBYTE(v8) = v8 | 0xC0;
LABEL_13:
      sub_1667280(a1 + 1864, a2, a3, nullptr, 0, (v8 << 32) | v7);
      goto LABEL_9;
    case 5LL:
      sub_1667280(a1 + 1864, a2, 3, nullptr, 0, (v8 << 32) | v7);
      goto LABEL_9;
  }
}
