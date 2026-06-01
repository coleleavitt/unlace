__int64 __fastcall sub_9D92B0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r13d
  __int64 v5; // rsi
  __int64 v7; // rdx
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  unsigned __int8 **v15; // rax
  unsigned __int8 **v16; // rbx
  char v17; // al
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v26; // [rsp+18h] [rbp-110h]
  unsigned int v28; // [rsp+2Ch] [rbp-FCh]
  _DWORD v29[6]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-E0h]
  unsigned int v31; // [rsp+50h] [rbp-D8h]
  int v32; // [rsp+60h] [rbp-C8h]
  _BYTE v33[64]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v34[3]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-60h]
  unsigned int v36; // [rsp+D0h] [rbp-58h]
  int v37; // [rsp+E0h] [rbp-48h]

  v4 = 1;
  if ( *(_DWORD *)(a3 + 48) )
    return v4;
  v5 = *(_QWORD *)(a3 + 24);
  if ( !v5 )
    return v4;
  v7 = *(unsigned int *)(a3 + 32);
  LOBYTE(v4) = (_DWORD)v7 == 0 || *(_DWORD *)(*(_QWORD *)(v5 + 32) + 16LL) == (_DWORD)v7;
  if ( (_BYTE)v4 )
    return v4;
  if ( (*(_BYTE *)(v5 + (unsigned int)v7 + 28) & 0x10) != 0 )
    return 1;
  if ( (_DWORD)v7 == -1 )
    sub_A1C030(v29, v5, v7, 0);
  else
    sub_A1C030(
      v29,
      v5,
      (unsigned int)(v7 - *(_DWORD *)(v5 + (unsigned int)v7 + 24)),
      (unsigned int)(v7 - *(_DWORD *)(v5 + (unsigned int)v7 + 24)));
  sub_A1BFE0(v33, a3);
  v9 = v32;
  if ( v32 )
  {
LABEL_9:
    v10 = 0;
    v26 = sub_8E91E0((__int64)v33);
    if ( v9 != 2 && v9 != 3 )
    {
      if ( v9 == 1 )
        v10 = v30;
      else
        v10 = *(_QWORD *)(v30 + 32);
    }
  }
  else
  {
    while ( 1 )
    {
      v20 = v30;
      if ( !v30 )
      {
        v26 = sub_8E91E0((__int64)v33);
        v10 = 64;
        goto LABEL_13;
      }
      v19 = v31;
      if ( *(_DWORD *)(*(_QWORD *)(v30 + 32) + 16LL) == v31 )
        break;
      if ( !v31 )
        break;
      v17 = *(_BYTE *)(v30 + v31 + 28);
      if ( (v17 & 0x20) == 0 || (v17 & 0x10) != 0 )
        break;
      if ( sub_8E91E0((__int64)v29) )
      {
        sub_A1C120(v33, v29, v18);
        v19 = v31;
        v20 = v30;
      }
      if ( v19 == -1 )
      {
        sub_A1C030(v34, v20, 0xFFFFFFFFLL, 0);
        sub_A1C200(v29, v34, v23);
        sub_A1C0C0(v34);
        v9 = v32;
        if ( v32 )
          goto LABEL_9;
      }
      else
      {
        v21 = v19 - *(_DWORD *)(v20 + v19 + 24);
        sub_A1C030(v34, v20, v21, v21);
        sub_A1C200(v29, v34, v22);
        sub_A1C0C0(v34);
        v9 = v32;
        if ( v32 )
          goto LABEL_9;
      }
    }
    v28 = v31;
    v10 = *(_QWORD *)(v30 + 32);
    v26 = sub_8E91E0((__int64)v33);
    if ( v28 != *(_DWORD *)(v10 + 16) && v28 )
    {
      if ( (unsigned __int8)sub_BEE260(*(_QWORD *)(v20 + v28 + 32)) )
        goto LABEL_14;
      goto LABEL_36;
    }
  }
LABEL_13:
  if ( !(unsigned __int8)sub_BEE260(v10) )
  {
LABEL_36:
    v4 = 1;
    sub_A1C0C0(v33);
    sub_A1C0C0(v29);
    return v4;
  }
LABEL_14:
  v11 = *(_QWORD *)(sub_8E5480((__int64)v29) + 24);
  v12 = *(_QWORD *)(v11 + 280);
  v13 = v12 + 24LL * *(unsigned int *)(v11 + 288);
  if ( v12 == v13 )
  {
LABEL_38:
    v14 = 0;
  }
  else
  {
    while ( 1 )
    {
      sub_A1C030(v34, v30, (unsigned int)(v29[0] + *(_DWORD *)(v12 + 8)), (unsigned int)(v29[0] + *(_DWORD *)(v12 + 8)));
      if ( v37
        || !v35
        || *(_DWORD *)(*(_QWORD *)(v35 + 32) + 16LL) == v36
        || !v36
        || (*(_BYTE *)(v35 + v36 + 28) & 0x10) != 0 )
      {
        break;
      }
      v12 += 24;
      sub_A1C0C0(v34);
      if ( v12 == v13 )
        goto LABEL_38;
    }
    v14 = sub_8E91E0((__int64)v34);
    sub_A1C0C0(v34);
  }
  v34[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v15 = (unsigned __int8 **)sub_A2E0C0(a1, v34, 2166, 0);
  v16 = v15;
  if ( v15 )
  {
    sub_9B5410(v15, a4);
    sub_8356A0(v16, v26, 0xAu);
    sub_9B5410(v16, v14 == 0);
    sub_8356A0(v16, v14, 0xAu);
  }
  sub_A1C0C0(v33);
  sub_A1C0C0(v29);
  return v4;
}

