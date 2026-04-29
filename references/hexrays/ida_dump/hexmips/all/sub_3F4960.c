__int64 __fastcall sub_3F4960(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int16 v6; // dx
  __int64 v7; // rax
  __int64 v9; // rcx
  int v10; // ebp
  bool v11; // zf
  int v12; // edx
  int v13; // esi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r15
  int v21; // r14d
  __int64 v22; // rsi
  __int64 v23; // [rsp+18h] [rbp-40h]

  v6 = *(_WORD *)(a1 + 890);
  if ( ((v6 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCA9u, a2, a5);
LABEL_26:
    BUG();
  }
  if ( *(_BYTE *)(a1 + 145) != 5 || *(_BYTE *)(a1 + 185) != 5 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCA8u, a2, a5);
    goto LABEL_26;
  }
  v7 = *(_QWORD *)(a1 + 152);
  v9 = *(_QWORD *)(a1 + 192);
  if ( (int)v7 < 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD80u, a2, a5);
    goto LABEL_26;
  }
  v10 = a2;
  if ( (int)v9 <= 0 )
    goto LABEL_9;
  v11 = v6 == 4;
  v12 = 32;
  if ( !v11 )
    v12 = 64;
  if ( (int)v9 + (int)v7 <= v12 )
  {
    v18 = *(_QWORD *)(a1 + 832);
    v19 = *(_QWORD *)(v18 + 760);
    if ( !v19 )
      sub_3E5460(a5, 64, v18);
    v20 = -1;
    v21 = *(_DWORD *)(*(_QWORD *)(v18 + 752) + 4 * v19 - 4);
    *(_QWORD *)(v18 + 760) = v19 - 1;
    if ( (unsigned __int64)(int)v9 <= 0x3F )
      v20 = (1LL << v9) - 1;
    v22 = ~(v20 << v7);
    if ( (unsigned __int64)(int)v7 >= 0x40 )
      v22 = -1;
    sub_3EC710(a1, v22, 3, v21, *(unsigned __int16 *)(a1 + 890));
    v23 = v10;
    sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), v23, v21, v23, 0);
    sub_3EC710(a1, v20, 3, v21, *(unsigned __int16 *)(a1 + 890));
    sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), a3, v21, v21, 0);
    sub_3EAB70(a1, 0x16u, *(unsigned __int16 *)(a1 + 890), v21, a4, v21, 0);
    sub_3EAB70(a1, 0x13u, *(unsigned __int16 *)(a1 + 890), v23, v21, v23, 0);
    sub_3E8540(*(_QWORD *)(a1 + 832), v21);
    return 1;
  }
  else
  {
LABEL_9:
    v13 = 0;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
    v15 = *(unsigned __int16 *)(a1 + 48);
    v16 = *(_DWORD *)(v14 + 104);
    if ( v16 <= v15 && v15 < *(_DWORD *)(v14 + 108) )
      v13 = *(_DWORD *)(*(_QWORD *)(v14 + 112) + 16LL * (v15 - v16) + 8);
    sub_3F46C0((_QWORD *)a1, v13, v10, a3, a4, 0);
    sub_32C190(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x31u);
    return 0;
  }
}
