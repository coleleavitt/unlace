__int64 __fastcall sub_A9630(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // r15d
  __int64 v7; // r13
  int v8; // r15d
  __int64 v9; // r13
  int v10; // r15d
  _DWORD *v11; // r15
  __int64 v12; // r13
  int v13; // r9d
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // [rsp+8h] [rbp-A8h]
  __int64 v18; // [rsp+10h] [rbp-A0h]
  __int64 v19; // [rsp+18h] [rbp-98h]
  __int64 v20; // [rsp+28h] [rbp-88h]
  __int64 v21; // [rsp+28h] [rbp-88h]
  int v23; // [rsp+44h] [rbp-6Ch] BYREF
  __int64 v24; // [rsp+48h] [rbp-68h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v26[10]; // [rsp+60h] [rbp-50h] BYREF

  v3 = *(_DWORD *)a2;
  v26[3] = __readfsqword(0x28u);
  if ( v3 == 4 )
  {
    v9 = a3 + 32;
    if ( !(unsigned __int8)sub_123660(a2 + 32, a3 + 32, 0) )
      return 0;
    v10 = *(_DWORD *)(a3 + 36);
    if ( !(unsigned __int8)sub_11D940(a3 + 48, v26, 1) || 8 * v10 - 1 != v26[0] )
      return 0;
    sub_121540(v26, a2 + 64);
    v5 = sub_130900(a1, *(_QWORD *)(a2 + 8), (unsigned int)v26, *(_QWORD *)(a3 + 8), (int)a3 + 64, 4);
    if ( (_BYTE)v5 )
    {
      if ( LOBYTE(v26[0]) == 4 )
      {
        v5 = 0;
      }
      else
      {
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( sub_A8680(*(_QWORD *)(a1 + 64), (_DWORD *)a3, v9, 0, 0)
          && (unsigned __int8)sub_12F210(v20, a1, a3, v9, (unsigned int)(2 * *(_DWORD *)(a3 + 36)), 1, 1) )
        {
          ++*(_QWORD *)(*(_QWORD *)(a3 + 56) + 16LL);
        }
        else
        {
          *(_DWORD *)a3 = 8;
          sub_11A960(a3 + 48);
        }
        sub_128630(v26, v20, HIDWORD(v26[0]), 2);
        sub_122C80(a3 + 64);
        if ( *(char *)(a2 + 4) >= 0 )
          *(_DWORD *)(a3 + 4) &= ~0x80u;
        sub_11B190(a3, v20);
        if ( (unsigned __int8)sub_A9210(a1, a2, a3) )
          sub_11B160(a2);
      }
    }
    goto LABEL_17;
  }
  if ( v3 != 10 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( !(unsigned __int8)sub_11D940(a2 + 48, 0, 1) )
      return 0;
    v8 = *(_DWORD *)(a3 + 36);
    if ( !(unsigned __int8)sub_11D940(a3 + 48, v26, 1)
      || 8 * v8 - 1 != v26[0]
      || !(unsigned __int8)sub_123660(a2 + 32, a3 + 32, 0) )
    {
      return 0;
    }
    sub_121540(v26, a2 + 64);
    v5 = sub_130900(a1, *(_QWORD *)(a2 + 8), (unsigned int)v26, *(_QWORD *)(a3 + 8), (int)a3 + 64, 1);
    if ( (_BYTE)v5 )
    {
      sub_1291D0(a2, v7, 8, 0xFFFFFFFFLL, 1);
      sub_11A5D0(a2 + 64, v26);
      if ( *(char *)(a3 + 4) >= 0 )
        *(_DWORD *)(a2 + 4) &= ~0x80u;
      sub_11B190(a2, v7);
      sub_11B450(a2, a3);
      if ( (unsigned __int8)sub_A9210(a1, a2, a3) )
        sub_11B160(a2);
    }
LABEL_17:
    sub_11A960(v26);
    return v5;
  }
  if ( !(unsigned __int8)sub_1502B0(a3, &v23) )
    return 0;
  if ( 8 * *(_DWORD *)(a3 + 36) <= v23 )
    return 0;
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v11 = *(_DWORD **)(a2 + 40);
  if ( *v11 != 16 )
    return 0;
  v12 = 1LL << v23;
  if ( (unsigned __int64)v23 >= 0x40 )
    v12 = 0;
  if ( !(unsigned __int8)sub_11D940(v11 + 12, v26, 1) )
    return 0;
  if ( v12 != v26[0] )
    return 0;
  v21 = a3 + 64;
  if ( !(unsigned __int8)sub_12AA10(*(_QWORD *)(a1 + 64), (int)a2 + 64, (int)a3 + 64, 0, 0, v13) )
    return 0;
  v24 = a3;
  v18 = a3 + 32;
  v14 = sub_126F20(a1, a3 + 32, &v24, 1);
  if ( !v14 )
    return 0;
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( *(_DWORD *)v14 != 11 )
  {
    if ( *(_BYTE *)(v14 + 64) )
    {
      v17 = v14;
      v15 = sub_1279E0(v18, v19, v14 + 64);
      v16 = v17;
      if ( v15 )
        goto LABEL_41;
    }
    return 0;
  }
  if ( *(_BYTE *)(v14 + 32) != 4 )
    return 0;
  v16 = *(_QWORD *)(v14 + 40);
LABEL_41:
  v25[0] = 0xFFFFFFFF00000000LL;
  v25[1] = 0;
  if ( sub_1180D0(v19, v25, a1, v24, v16, v12 - 1)
    && (unsigned __int8)sub_12C560(v19, a1, a2, (int)v11 + 32, v24, (unsigned int)v25, 0) )
  {
    sub_121540(v26, a2 + 64);
    v5 = sub_130900(a1, *(_QWORD *)(a2 + 8), (unsigned int)v26, *(_QWORD *)(a3 + 8), v21, 1);
    if ( (_BYTE)v5 )
    {
      sub_122C80(v18);
      sub_122C80(a3 + 48);
      sub_11A5D0(v21, v26);
      *(_DWORD *)a3 = 16;
      sub_A00D0(v19, a3, *(_DWORD *)(a2 + 4));
      if ( (unsigned __int8)sub_A9210(a1, a2, a3) )
        sub_11B160(a2);
    }
    sub_11A960(v26);
  }
  else
  {
    v5 = 0;
  }
  sub_11A960(v25);
  return v5;
}
