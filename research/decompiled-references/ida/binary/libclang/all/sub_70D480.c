bool __fastcall sub_70D480(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // r12
  int v14; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // r15
  __int64 v19; // rbp
  int v20; // eax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-60h]
  _QWORD v24[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = v3;
  v5 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*v3 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v7;
  if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) != 13 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) != 13 )
      return 0;
    goto LABEL_8;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 56 <= 1 )
    goto LABEL_3;
  v11 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(unsigned __int8 *)(v11 + 16);
  if ( (unsigned int)(v12 - 56) > 1 )
    goto LABEL_7;
  v6 = sub_B0D320(v6);
  if ( v6 )
  {
LABEL_3:
    v9 = (*(_BYTE *)(v6 + 18) >> 3) & 0xF;
    if ( v9 == 7 )
    {
      if ( ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x64 )
        return 1;
    }
    else if ( v9 == 6 )
    {
      if ( (*(_QWORD *)&byte_8[*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v6 + 32) & 7LL) == sub_B086D0(*v3, a1) )
        return 1;
    }
    else
    {
      v10 = *v5;
      if ( ((*(_BYTE *)(v6 + 18) >> 3) & 0xF) != 0 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v12) = *(_BYTE *)(v11 + 16);
        goto LABEL_7;
      }
      v16 = sub_6F6DE0((__int64)a1, v10);
      v17 = (*(_WORD *)(v8 + 18) >> 3) & 0x1FF;
      v18 = (unsigned int)(*(_DWORD *)(a1[270] + 176LL) << 7);
      if ( v17 == 100 || v17 == 103 )
      {
        v23 = v16;
        v22 = sub_6F7120((__int64)a1);
        v16 = v23;
        v18 /= v22;
      }
      if ( v16 == v18 )
      {
        sub_6CE900((__int64)v24, a1, v8);
        if ( (*(_QWORD *)&byte_8[*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v6 + 32) & 7LL) == (*(_QWORD *)&byte_8[v24[0] & 0xFFFFFFFFFFFFFFF0LL] | v24[0] & 7) )
          return 1;
      }
    }
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v12) = *(_BYTE *)(v11 + 16);
LABEL_7:
  if ( (_BYTE)v12 != 13 )
    return 0;
LABEL_8:
  v13 = *v4;
  if ( (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 56 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 > 1 )
      return 0;
    v13 = sub_B0D320(*v4);
    if ( !v13 )
      return 0;
  }
  v14 = (*(_BYTE *)(v13 + 18) >> 3) & 0xF;
  if ( v14 == 7 )
    return ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) == 100;
  if ( v14 != 6 )
  {
    if ( ((*(_BYTE *)(v13 + 18) >> 3) & 0xF) == 0 )
    {
      v19 = sub_6F6DE0((__int64)a1, *v4);
      v20 = (*(_WORD *)(v11 + 18) >> 3) & 0x1FF;
      v21 = (unsigned int)(*(_DWORD *)(a1[270] + 176LL) << 7);
      if ( v20 == 103 || v20 == 100 )
        v21 /= (unsigned __int64)sub_6F7120((__int64)a1);
      if ( v19 == v21 )
      {
        sub_6CE900((__int64)v24, a1, v11);
        return (*(_QWORD *)&byte_8[*(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v13 + 32) & 7LL) == (*(_QWORD *)&byte_8[v24[0] & 0xFFFFFFFFFFFFFFF0LL] | v24[0] & 7);
      }
    }
    return 0;
  }
  return (*(_QWORD *)&byte_8[*(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v13 + 32) & 7LL) == sub_B086D0(*v5, a1);
}

