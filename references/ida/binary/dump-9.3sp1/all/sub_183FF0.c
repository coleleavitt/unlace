__int64 __fastcall sub_183FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  int v7; // r13d
  unsigned int v8; // ebx
  char v10; // al
  int v11; // r12d
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  int v18; // r13d
  unsigned __int8 v19; // al
  _QWORD v20[11]; // [rsp+0h] [rbp-58h] BYREF

  v20[3] = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 20) = 0;
  v6 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 4 )
  {
LABEL_9:
    v10 = *(_BYTE *)(a3 + 32);
    if ( v10 == 4 )
    {
      v17 = *(_QWORD *)(a3 + 40);
      if ( *(_DWORD *)v17 == 2 )
      {
        v18 = *(_DWORD *)(v17 + 68);
        sub_123A40((__int64)v20, (unsigned __int8 *)(v17 + 48), a3, a4);
        sub_183610(*(_QWORD *)(a2 + 480), (__int64)v20);
        v8 = sub_13C7E0(a2, a1, (int *)v17, v17 + 32, (__int64)v20, 0xFFFFFFFF);
        if ( (_BYTE)v8 )
          *(_DWORD *)(a1 + 4) = v18;
        goto LABEL_7;
      }
    }
    else if ( v10 == 6 && (unsigned __int8)is_spec_ea() )
    {
      return 0;
    }
    sub_125180(a1, (unsigned __int8 *)(a3 + 32));
    return 1;
  }
  if ( v6 <= 4 )
  {
    if ( v6 != 1 )
    {
      if ( v6 == 2 )
      {
        v7 = *(_DWORD *)(a3 + 68);
        sub_123A40((__int64)v20, (unsigned __int8 *)(a3 + 48), a3, a4);
        sub_183610(*(_QWORD *)(a2 + 480), (__int64)v20);
        v8 = sub_13C7E0(a2, a1, (int *)a3, a3 + 32, (__int64)v20, 0xFFFFFFFF);
        if ( (_BYTE)v8 )
          *(_DWORD *)(a1 + 4) = v7;
LABEL_7:
        sub_11CDA0((__int64)v20);
        return v8;
      }
      return 0;
    }
    goto LABEL_9;
  }
  if ( v6 != 56 )
    return 0;
  v11 = sub_183E40(*(_QWORD *)(a2 + 480), a3, 0);
  if ( v11 < 0 )
    return 0;
  v12 = 0;
  if ( *(_BYTE *)(a3 + 64) == 8 )
    v12 = *(unsigned int *)(*(_QWORD *)(a3 + 72) + 284LL);
  v13 = sub_32FB00(*(_QWORD *)(a2 + 480), v12);
  v14 = *(_DWORD *)(a1 + 124);
  if ( v14 )
  {
    if ( v14 != v13 )
      return 0;
  }
  *(_DWORD *)(a1 + 124) = v13;
  v15 = *(_QWORD *)(a3 + 72);
  v16 = *(_QWORD *)(v15 + 24);
  if ( *(_BYTE *)(a3 + 64) == 8 && *(_DWORD *)(v15 + 284) == 2 )
  {
    if ( !(unsigned __int8)sub_11FD80((char *)(v16 + 80), v20, 0)
      || (unsigned __int8)(LOBYTE(v20[0]) - 32) > 0x5Fu && (unsigned __int8)(LOBYTE(v20[0]) - 9) > 1u )
    {
      return 0;
    }
    v19 = v20[0];
    *(_BYTE *)(a1 + 20) = 1;
    *(_DWORD *)(a1 + 16) = v19;
    *(_DWORD *)(a1 + 4) = v11;
    return 1;
  }
  return sub_1836F0(*(_QWORD *)(a2 + 480), a1, (unsigned __int8 *)(v16 + 80), (unsigned int)v11, v13);
}
