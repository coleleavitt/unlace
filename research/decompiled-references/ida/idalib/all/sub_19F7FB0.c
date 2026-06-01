__int64 __fastcall sub_19F7FB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  unsigned __int64 v20; // rdx
  unsigned int v21; // ebp
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+8h] [rbp-B0h]
  _QWORD v25[21]; // [rsp+10h] [rbp-A8h] BYREF

  v6 = 0x1000000001LL;
  v25[0] = a1;
  v24 = 0x1000000001LL;
  v7 = v25;
  ptr = v25;
  LODWORD(v8) = 1;
  do
  {
    while ( 1 )
    {
      v11 = v7[(unsigned int)v8 - 1];
      LODWORD(v24) = v8 - 1;
      v12 = *(_QWORD *)(*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v12 + 8) & 0xF) != 0 )
        v12 = sub_F64F00(
                *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v11) & 7,
                v6,
                v11,
                a4,
                a5);
      v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
      v14 = *(unsigned __int8 *)(v13 + 16);
      if ( (unsigned int)(v14 - 2) > 1 )
        break;
      v8 = (unsigned int)v24;
      a4 = HIDWORD(v24);
      v9 = *(_QWORD *)(v13 + 32);
      v10 = (unsigned int)v24 + 1LL;
      if ( v10 > HIDWORD(v24) )
      {
        v6 = (__int64)v25;
        sub_2237220(&ptr, v25, v10, 8);
        v8 = (unsigned int)v24;
      }
      *((_QWORD *)ptr + v8) = v9;
      LODWORD(v8) = v24 + 1;
      LODWORD(v24) = v24 + 1;
LABEL_5:
      v7 = ptr;
      if ( !(_DWORD)v8 )
        goto LABEL_25;
    }
    if ( (_BYTE)v14 == 48 )
    {
      v16 = (__int64)sub_F60F10(v13, v6, v14, a4, a5, a6);
      if ( *(_BYTE *)(v16 + 73) >> 5 != 2 )
      {
        if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 59 <= 2 )
        {
          v6 = *(_QWORD *)(v16 + 104);
          sub_7052B0((__int64 *)(v6 + 96), v6, v15, a4, a5, a6);
          if ( (*(_BYTE *)(*(_QWORD *)(v16 + 128) + 1LL) & 0x10) != 0 )
            v16 = sub_B96CF0(v16, v6, v15, a4, a5, a6);
        }
        v17 = sub_B7E900(v16, v6, v15, a4, a5, a6);
        v18 = v17;
        if ( v17 )
        {
          if ( (*(_BYTE *)(v17 + 68) & 1) != 0 )
          {
LABEL_23:
            v7 = ptr;
            v21 = 1;
            goto LABEL_26;
          }
          v8 = (unsigned int)v24;
LABEL_17:
          a4 = HIDWORD(v24);
          v19 = *(_QWORD *)(v18 + 48);
          if ( v8 + 1 > (unsigned __int64)HIDWORD(v24) )
          {
            v6 = (__int64)v25;
            sub_2237220(&ptr, v25, v8 + 1, 8);
            v8 = (unsigned int)v24;
          }
          *((_QWORD *)ptr + v8) = v19;
          v8 = (unsigned int)(v24 + 1);
          LODWORD(v24) = v24 + 1;
          while ( 1 )
          {
            v20 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v18 = v20;
            if ( !v20 )
              goto LABEL_5;
            if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 49 <= 2 )
            {
              if ( (*(_BYTE *)(v20 + 68) & 1) == 0 )
                goto LABEL_17;
              goto LABEL_23;
            }
          }
        }
      }
    }
    LODWORD(v8) = v24;
    v7 = ptr;
  }
  while ( (_DWORD)v24 );
LABEL_25:
  v21 = 0;
LABEL_26:
  if ( v7 != v25 )
    free(v7);
  return v21;
}
