__int64 __fastcall sub_A7A6F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rbp
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  _QWORD v35[6]; // [rsp+8h] [rbp-30h] BYREF

  while ( 1 )
  {
    v5 = *(_BYTE *)(a1 + 16);
    if ( (unsigned __int8)(v5 - 2) <= 4u )
      goto LABEL_2;
    v6 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      goto LABEL_7;
    v7 = sub_F63050(a1, a2, v6, a4);
    if ( !v7 )
      break;
    a1 = v7;
LABEL_2:
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v5 = *(_BYTE *)(a1 + 16);
LABEL_7:
  if ( v5 == 42 )
    return sub_A7A6F0(*(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL), 0);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    v9 = sub_F63050(a1, a2, v6, a4);
    if ( v9 )
    {
      a1 = v9;
      return sub_A7A6F0(*(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL), 0);
    }
  }
  v10 = sub_F63270(a1);
  v15 = v10;
  if ( !v10 )
    return 0;
  if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 60 <= 1 )
    return 1;
  if ( !*(_QWORD *)(v10 + 128) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104), v11, v12, v13, v14);
    if ( !*(_QWORD *)(v15 + 128) )
      return 0;
  }
  if ( !(_BYTE)a2 )
    return 0;
  v16 = *(_QWORD *)(v15 + 104);
  sub_7052B0((__int64 *)(v16 + 96), v16, v11, v12, v13, v14);
  v21 = *(_QWORD *)(v15 + 128);
  if ( (*(_BYTE *)(v21 + 24) & 1) != 0 )
    v22 = sub_B96980(v21, v16, v17);
  else
    v22 = *(_QWORD *)(v21 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v15 + 104) + 96LL), *(_QWORD *)(v15 + 104), v17, v18, v19, v20);
  v23 = *(_QWORD *)(v15 + 104);
  v24 = v22 + 24LL * *(unsigned int *)(*(_QWORD *)(v15 + 128) + 16LL);
  sub_7052B0((__int64 *)(v23 + 96), v23, v25, v26, v27, v28);
  v30 = *(_QWORD *)(v15 + 128);
  if ( (*(_BYTE *)(v30 + 24) & 1) != 0 )
    v31 = sub_B96980(v30, v23, v29);
  else
    v31 = *(_QWORD *)(v30 + 24);
  if ( v31 == v24 )
  {
LABEL_24:
    v33 = sub_B7E900(v15);
    if ( v33 )
    {
LABEL_25:
      if ( (unsigned __int8)sub_A7A6F0(*(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL), 1) )
        return 1;
      while ( 1 )
      {
        v34 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v33 = v34;
        if ( !v34 )
          break;
        if ( (*(_BYTE *)(v34 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_25;
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v35[0] = **(_QWORD **)(v31 + 16);
    v32 = sub_6D5440(v35);
    result = sub_A7A6F0(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL), 1);
    if ( (_BYTE)result )
      return result;
    v31 += 24;
    if ( v31 == v24 )
      goto LABEL_24;
  }
}
