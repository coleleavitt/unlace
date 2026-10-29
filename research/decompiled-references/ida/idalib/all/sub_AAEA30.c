char __fastcall sub_AAEA30(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // eax
  char v13; // rdx^4
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbx
  char v22; // dl
  __int64 v23; // r14
  __int64 v24; // r15
  unsigned __int64 v25; // rax
  __int64 v27; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v27 = a2;
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(unsigned __int8 *)(v8 + 16);
  v10 = (unsigned int)(v9 - 2);
  if ( (unsigned __int8)(v9 - 2) <= 4u )
  {
    v11 = sub_A71450(a1, a2);
    LOBYTE(v12) = sub_AAEA30(a1, v11, a3);
    return v12;
  }
  if ( a3 )
  {
    a2 = a1;
    if ( !(unsigned __int8)sub_F62A70(&v27, a1) )
      goto LABEL_14;
    v7 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *(unsigned __int8 *)(v8 + 16);
  }
  if ( (_BYTE)v9 != 13 )
  {
    switch ( (_BYTE)v9 )
    {
      case 0x2F:
        v17 = sub_F60F10(v8, a2, v9, v10, a5);
        if ( (*(_BYTE *)(v17 + 74) & 1) != 0 || (*(_QWORD *)(v17 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_11;
        v7 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
        v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v9 = *(unsigned __int8 *)(v8 + 16);
        break;
      case 0xA:
        goto LABEL_11;
      case 0x2A:
        return (unsigned int)sub_A5DAA0(&v27) ^ 1;
    }
    if ( *(_BYTE *)(v7 + 16) == 33 )
      goto LABEL_9;
    if ( (_BYTE)v9 == 33 )
    {
      v7 = sub_F63050(v7, a2, v9, v10);
      if ( v7 )
        goto LABEL_9;
      v18 = *(_QWORD *)(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v8 = *(_QWORD *)v18;
      v9 = *(unsigned __int8 *)(*(_QWORD *)v18 + 16LL);
    }
    if ( (_BYTE)v9 == 48 )
    {
      v19 = sub_F60F10(v8, a2, v9, v10, a5);
      v20 = v19;
      if ( *(char *)(v19 + 28) >= 0 )
      {
        if ( *(_BYTE *)(v19 + 73) >> 5 != 2 )
        {
          v21 = sub_AAED20(a1, v19, a3);
          if ( v22 )
          {
            LOBYTE(v12) = v21 == sub_A97D20(a1, *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL));
            return v12;
          }
          goto LABEL_14;
        }
        sub_AAE350((__int64)v28, a1, *(_QWORD *)(v19 + 48));
        v23 = v28[0];
        v24 = sub_B7E900(v20);
        if ( v24 )
        {
LABEL_34:
          if ( !(unsigned __int8)sub_AAEA30(a1, *(_QWORD *)(v24 + 48), a3) )
            goto LABEL_14;
          sub_AAE350((__int64)v28, a1, *(_QWORD *)(*(_QWORD *)(v24 + 48) & 0xFFFFFFFFFFFFFFF0LL));
          if ( v23 != v28[0] )
            goto LABEL_14;
          while ( 1 )
          {
            v25 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v24 = v25;
            if ( !v25 )
              break;
            if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_34;
          }
        }
        LOBYTE(v12) = sub_B7E900(v20) != 0;
        return v12;
      }
    }
LABEL_14:
    LOBYTE(v12) = 0;
    return v12;
  }
  if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
  {
    if ( *(_BYTE *)(v7 + 16) == 33 )
    {
LABEL_9:
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 17432) + 16LL))(*(_QWORD *)(a1 + 17432), v7);
      LOBYTE(v12) = v13 ^ 1;
      return v12;
    }
    goto LABEL_14;
  }
LABEL_11:
  if ( (unsigned __int8)sub_A5DAA0(&v27) )
    goto LABEL_14;
  v16 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v12) = *(_BYTE *)(v16 + 16) != 10
             && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 10
              || (v16 = sub_F63050(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), a2, v14, v15)) == 0)
             || ((*(_DWORD *)(v16 + 32) >> 1) & 0xFFFFFF) == sub_A97D20(a1, v16);
  return v12;
}
