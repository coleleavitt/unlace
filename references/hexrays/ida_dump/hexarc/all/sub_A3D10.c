__int64 __fastcall sub_A3D10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5, unsigned int a6)
{
  unsigned int v6; // r15d
  __int64 v9; // r12
  int v10; // r15d
  __int64 v11; // r12
  int v12; // r13d
  _DWORD *v13; // r15
  __int64 v14; // r12
  int v15; // r9d
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // [rsp+8h] [rbp-A8h]
  __int64 v20; // [rsp+10h] [rbp-A0h]
  __int64 v21; // [rsp+18h] [rbp-98h]
  __int64 v22; // [rsp+20h] [rbp-90h]
  __int64 v23; // [rsp+28h] [rbp-88h]
  int v24; // [rsp+44h] [rbp-6Ch] BYREF
  __int64 v25; // [rsp+48h] [rbp-68h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v27[10]; // [rsp+60h] [rbp-50h] BYREF

  v6 = a6;
  v27[3] = __readfsqword(0x28u);
  LOBYTE(v6) = a5 & a6;
  if ( (a5 & (unsigned __int8)a6) == 0 )
    return v6;
  if ( *(_DWORD *)a2 == 4 )
  {
    v9 = a3 + 32;
    if ( !(unsigned __int8)sub_11F4A0(a2 + 32, a3 + 32, 0) )
      return 0;
    v10 = *(_DWORD *)(a3 + 36);
    if ( !(unsigned __int8)sub_1196C0(a3 + 48, v27, 1) || 8 * v10 - 1 != v27[0] )
      return 0;
    sub_11D380(v27, a2 + 64);
    v6 = sub_12C760(a1, *(_QWORD *)(a2 + 8), (unsigned int)v27, *(_QWORD *)(a3 + 8), (int)a3 + 64, 4);
    if ( (_BYTE)v6 )
    {
      if ( LOBYTE(v27[0]) == 4 )
      {
        v6 = 0;
      }
      else
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( sub_A2D40(*(_QWORD *)(a1 + 64), (_DWORD *)a3, v9, 0, 0)
          && (unsigned __int8)sub_12B070(v22, a1, a3, v9, (unsigned int)(2 * *(_DWORD *)(a3 + 36)), 1, 1) )
        {
          ++*(_QWORD *)(*(_QWORD *)(a3 + 56) + 16LL);
        }
        else
        {
          *(_DWORD *)a3 = 8;
          sub_1166E0(a3 + 48);
        }
        sub_124490(v27, v22, HIDWORD(v27[0]), 2);
        sub_11EAC0(a3 + 64);
        sub_9ABC0(v22, a3, *(_DWORD *)(a2 + 4));
        if ( (unsigned __int8)sub_A38D0(a1, a2, a3) )
          sub_116EE0(a2);
      }
    }
    goto LABEL_27;
  }
  if ( *(_DWORD *)a2 != 10 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( !(unsigned __int8)sub_1196C0(a2 + 48, 0, 1) )
      return 0;
    v12 = *(_DWORD *)(a3 + 36);
    if ( !(unsigned __int8)sub_1196C0(a3 + 48, v27, 1)
      || 8 * v12 - 1 != v27[0]
      || !(unsigned __int8)sub_11F4A0(a2 + 32, a3 + 32, 0) )
    {
      return 0;
    }
    sub_11D380(v27, a2 + 64);
    v6 = sub_12C760(a1, *(_QWORD *)(a2 + 8), (unsigned int)v27, *(_QWORD *)(a3 + 8), (int)a3 + 64, 1);
    if ( (_BYTE)v6 )
    {
      sub_125030(a2, v11, 8, 0xFFFFFFFFLL, 1);
      sub_116350(a2 + 64, v27);
      sub_9ABC0(v11, a2, *(_DWORD *)(a3 + 4));
      sub_1171D0(a2, a3);
      if ( (unsigned __int8)sub_A38D0(a1, a2, a3) )
        sub_116EE0(a2);
    }
LABEL_27:
    sub_1166E0(v27);
    return v6;
  }
  if ( !(unsigned __int8)sub_14BF70(a3, &v24) )
    return 0;
  if ( 8 * *(_DWORD *)(a3 + 36) <= v24 )
    return 0;
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v13 = *(_DWORD **)(a2 + 40);
  if ( *v13 != 16 )
    return 0;
  v14 = 1LL << v24;
  if ( (unsigned __int64)v24 >= 0x40 )
    v14 = 0;
  if ( !(unsigned __int8)sub_1196C0(v13 + 12, v27, 1) )
    return 0;
  if ( v14 != v27[0] )
    return 0;
  v23 = a3 + 64;
  if ( !(unsigned __int8)sub_126870(*(_QWORD *)(a1 + 64), (int)a2 + 64, (int)a3 + 64, 0, 0, v15) )
    return 0;
  v25 = a3;
  v20 = a3 + 32;
  v16 = sub_122D80(a1, a3 + 32, &v25, 1);
  if ( !v16 )
    return 0;
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( *(_DWORD *)v16 != 11 )
  {
    if ( *(_BYTE *)(v16 + 64) )
    {
      v19 = v16;
      v17 = sub_123840(v20, v21, v16 + 64);
      v18 = v19;
      if ( v17 )
        goto LABEL_38;
    }
    return 0;
  }
  if ( *(_BYTE *)(v16 + 32) != 4 )
    return 0;
  v18 = *(_QWORD *)(v16 + 40);
LABEL_38:
  v26[1] = 0;
  v26[0] = 0xFFFFFFFF00000000LL;
  if ( sub_1132D0(v21, v26, a1, v25, v18, v14 - 1)
    && (unsigned __int8)sub_1283C0(v21, a1, a2, (int)v13 + 32, v25, (unsigned int)v26, 0) )
  {
    sub_11D380(v27, a2 + 64);
    v6 = sub_12C760(a1, *(_QWORD *)(a2 + 8), (unsigned int)v27, *(_QWORD *)(a3 + 8), v23, 1);
    if ( (_BYTE)v6 )
    {
      sub_11EAC0(v20);
      sub_11EAC0(a3 + 48);
      sub_116350(v23, v27);
      *(_DWORD *)a3 = 16;
      sub_9ABC0(v21, a3, *(_DWORD *)(a2 + 4));
      if ( (unsigned __int8)sub_A38D0(a1, a2, a3) )
        sub_116EE0(a2);
    }
    sub_1166E0(v27);
  }
  else
  {
    v6 = 0;
  }
  sub_1166E0(v26);
  return v6;
}
