__int64 __fastcall sub_AED680(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbx
  int v12; // r15d
  unsigned int v13; // r14d
  char v14; // al
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v19; // rdi
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int8 v24; // [rsp+0h] [rbp-48h]
  unsigned __int64 v25; // [rsp+8h] [rbp-40h]

  v1 = sub_B8C330(a1);
  v2 = a1;
  v7 = sub_A7A9D0(v1, a1, v3, v4, v5, v6);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v7;
  if ( (v8 & 4) != 0 )
    v10 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v10 + 8) & 0x7Fu) - 58 > 3 || v10 == 64 )
    return 0;
  v11 = *(_QWORD *)(v10 + 16);
  if ( v11 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = v12 + 1;
      if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49 <= 2 )
      {
        v14 = sub_B78060(v11);
        v16 = *(_QWORD *)(v11 + 48);
        if ( v14 )
        {
          if ( (*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v16) & 7) == (*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v9 | (unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
            return v13;
        }
        else
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
            v20 = *(_BYTE *)(v19 + 16);
            if ( v20 != 24 )
              break;
            v16 = *(_QWORD *)(v19 + 40);
          }
          v25 = v16 & 0xFFFFFFFFFFFFFFF0LL;
          v24 = v16;
          if ( v20 != 48 )
            goto LABEL_11;
          v21 = sub_F60F10(v19, v2, v16, v16 & 0xFFFFFFFFFFFFFFF0LL, v15);
          v22 = *(_QWORD *)(v21 + 16);
          v2 = (v22 & 4) != 0 ? *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL) : v22 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v2 != v10 )
            goto LABEL_11;
          v23 = *(_QWORD *)(v21 + 40);
          if ( (v23 & 7) == 0 && (v23 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_11;
          v2 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)(v25 + 8) | v24) & 7) == (v2 | ((unsigned __int8)v9 | (unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
            return v13;
        }
        v17 = v12 + 2;
        ++v12;
        v13 = v17;
      }
LABEL_11:
      v11 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v11 )
        return v13;
    }
  }
  return 1;
}
