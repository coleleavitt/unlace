__int64 __fastcall sub_A2F020(__int64 a1, __int64 a2)
{
  void *v2; // r13
  int v3; // eax
  int v4; // ebx
  int v5; // r15d
  int v6; // edx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r15
  int v14; // eax
  bool v15; // al
  void *v16; // r12
  int v18; // eax
  bool v19; // al
  int v20; // [rsp+Ch] [rbp-6Ch]
  int v21; // [rsp+Ch] [rbp-6Ch]
  _QWORD v22[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+30h] [rbp-48h]

  v22[0] = 0;
  v22[1] = 0;
  v2 = qword_1C7F2C0;
  v23[0] = 1;
  v23[1] = 0;
  v24 = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v22, a2);
  else
    LODWORD(v22[0]) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v2, v23, a2 + 16);
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 16);
    BYTE4(v23[0]) &= ~1u;
    LODWORD(v23[0]) = v3;
  }
  LOBYTE(v24) = *(_BYTE *)(a2 + 32);
  v4 = (unsigned __int8)v24;
  v5 = sub_182DB30(v22);
  v6 = v5 + 3 * sub_182DB30(v23);
  v7 = (v4 - v6) ^ (v6 << 8);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(unsigned int *)(a1 + 16);
  v10 = ((v7 ^ ((v6 - v7) << 16)) + v7 - v6) ^ ((v6 - v7) << 10);
  v11 = 56LL * (v10 & (unsigned int)(v9 - 1));
  v12 = v8 + v11;
  v13 = v8 + 56 * v9;
  if ( v11 == 56 * v9 )
    goto LABEL_15;
  v8 += v11;
  do
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v8 + 4);
      if ( v14 != 2 )
      {
        if ( !v14 )
          goto LABEL_16;
        goto LABEL_8;
      }
      if ( *(_DWORD *)v8 == v10 )
      {
        v20 = v10;
        v15 = sub_3ED680((__int64)qword_1C7F2C0, v8 + 8, (__int64)v22);
        v10 = v20;
        if ( v15 )
          break;
      }
LABEL_8:
      v8 += 56;
      if ( v13 == v8 )
        goto LABEL_14;
    }
    if ( *(_BYTE *)(v8 + 40) == (_BYTE)v24 )
      goto LABEL_17;
    v8 += 56;
  }
  while ( v13 != v8 );
LABEL_14:
  v8 = *(_QWORD *)(a1 + 8);
LABEL_15:
  while ( v12 != v8 )
  {
    v18 = *(_DWORD *)(v8 + 4);
    if ( v18 == 2 )
    {
      if ( *(_DWORD *)v8 == v10 )
      {
        v21 = v10;
        v19 = sub_3ED680((__int64)qword_1C7F2C0, v8 + 8, (__int64)v22);
        v10 = v21;
        if ( v19 && *(_BYTE *)(v8 + 40) == (_BYTE)v24 )
          goto LABEL_17;
      }
    }
    else if ( !v18 )
    {
      break;
    }
    v8 += 56;
  }
LABEL_16:
  v8 = 0;
LABEL_17:
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v16, v23);
  return v8;
}

