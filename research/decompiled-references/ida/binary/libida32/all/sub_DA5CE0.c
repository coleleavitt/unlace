__int64 __fastcall sub_DA5CE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v7; // r13
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // rbx
  int v10; // eax
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a3 + 24) )
    return 1;
  v4 = sub_CDA840(a3);
  if ( (_BYTE)v4 || (*(_BYTE *)(*(_QWORD *)(a3 + 32) + *(unsigned int *)(a3 + 40) + 28LL) & 0x40) == 0 )
    return 1;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x20) != 0
    && **(_DWORD **)(a3 + 32) == *(_DWORD *)(*(_QWORD *)(a1 + 184) + 32LL) )
  {
    if ( !(unsigned __int8)sub_DFDF30(a1) && !*(_DWORD *)(a3 + 24) )
    {
      LOBYTE(v10) = sub_D8CD70(a3);
      return (unsigned int)(v10 ^ 1);
    }
    return 1;
  }
  v11[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v7 = sub_CDA870(a3);
  v8 = (unsigned __int8 **)sub_E0FE60(a1, v11, 2368, 1);
  v9 = v8;
  if ( v8 )
  {
    sub_AC60B0(v8, 0, 2u);
    sub_AC60B0(v9, v7, 0xAu);
  }
  sub_E10070(a1, *(unsigned int *)(v7 + 24), 103);
  return v4;
}

