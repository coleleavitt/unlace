__int64 __fastcall sub_2297A0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  int v3; // r12d
  __int64 debugger_plugins; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  _QWORD v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = 67;
  v2 = *(_QWORD *)(a1 + 32);
  v18[1] = __readfsqword(0x28u);
  if ( (v2 & 2) != 0 )
    v1 = ((v2 & 0x20) != 0) + 64;
  if ( (v2 & 0x1000) == 0 )
    v1 |= 4u;
  if ( (v2 & 0x400) == 0 )
    v1 |= 0x10u;
  if ( (v2 & 0x800) == 0 )
    v1 |= 0x20u;
  if ( (v2 & 0x2000) != 0 )
  {
    v1 &= ~1u;
    v3 = *(_DWORD *)(a1 + 16);
    LOBYTE(v1) = v1 | 0x80;
    debugger_plugins = get_debugger_plugins(v18);
    if ( !debugger_plugins )
      goto LABEL_16;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 16);
    debugger_plugins = get_debugger_plugins(v18);
    if ( !debugger_plugins )
    {
LABEL_33:
      v1 |= 8u;
      goto LABEL_16;
    }
  }
  v5 = v18[0];
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    if ( *(_DWORD *)(v7 + 16) == v3 && (*(_BYTE *)(v7 + 32) & 1) == 0 )
      break;
    ++v6;
    v5 += 16;
    if ( v6 == debugger_plugins )
      goto LABEL_32;
  }
  if ( v5 )
    goto LABEL_16;
LABEL_32:
  if ( (v1 & 0x80u) == 0 )
    goto LABEL_33;
LABEL_16:
  v8 = *(_DWORD *)(a1 + 16);
  v9 = get_debugger_plugins(v18);
  if ( !v9 )
    goto LABEL_31;
  v10 = v18[0];
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v8 == *(_DWORD *)(v12 + 16) && (*(_BYTE *)(v12 + 32) & 1) != 0 )
      break;
    ++v11;
    v10 += 16;
    if ( v9 == v11 )
      goto LABEL_31;
  }
  if ( !v10 )
LABEL_31:
    v1 &= 0xFFFFFFF0;
  v13 = *(_QWORD *)(a1 + 32);
  v14 = v1;
  if ( (v13 & 0x8000000) != 0 )
  {
    BYTE1(v14) = BYTE1(v1) | 1;
    v1 = v14;
  }
  v15 = v1;
  if ( (v13 & 0x10000000) != 0 )
  {
    BYTE1(v15) = BYTE1(v1) | 2;
    v1 = v15;
  }
  v16 = v1;
  if ( (v13 & 0x20000000) != 0 )
  {
    BYTE1(v16) = BYTE1(v1) | 4;
    return v16;
  }
  return v1;
}
