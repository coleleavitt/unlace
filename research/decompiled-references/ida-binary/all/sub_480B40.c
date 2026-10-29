__int64 __fastcall sub_480B40(__int64 a1, _QWORD *a2, int *a3)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int8 *v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int8 v15; // al
  _QWORD *v16; // r15
  __int64 v17; // rbp
  char v18; // al
  __int64 v19; // rbx
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  unsigned __int8 v29; // dl
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  void *v32; // rdi
  char *v33; // rsi
  __int64 v34; // rdx
  char v35; // [rsp+Fh] [rbp-39h]

  v6 = a2[2];
  if ( !v6 )
  {
    v14 = a2[1];
    goto LABEL_15;
  }
  v7 = *a3;
  v8 = ((0xD6E8FEB86659FD93LL * (a2[3] ^ v7 ^ ((a2[3] ^ v7) >> 32))) >> 32)
     ^ (0xD6E8FEB86659FD93LL * (a2[3] ^ v7 ^ ((a2[3] ^ v7) >> 32)));
  v9 = a2[4];
  v10 = (v6 - 1) & (((0xD6E8FEB86659FD93LL * v8) >> 32) ^ (0xD6E8FEB86659FD93LL * v8));
  v11 = v10 & 0x7F;
  v12 = (unsigned __int8 *)(v9 + 144 * (v10 >> 7));
LABEL_3:
  v13 = v12[v11];
  if ( v13 == 255 )
  {
LABEL_9:
    v14 = a2[1];
    if ( v14 < v6 >> 1 )
    {
LABEL_10:
      v15 = v12[137];
      if ( v15 == v12[136] )
      {
        if ( v15 )
        {
          if ( v15 == 48 )
          {
            v35 = 80;
            v27 = 1280;
            v26 = 80;
          }
          else
          {
            v26 = v15 + 16LL;
            v35 = v15 + 16;
            v27 = 16 * v26;
          }
        }
        else
        {
          v35 = 48;
          v27 = 768;
          v26 = 48;
        }
        v28 = (_QWORD *)operator new[](v27);
        v29 = v12[136];
        v16 = v28;
        v30 = 0;
        if ( !v29
          || (v33 = *((char **)v12 + 16),
              v30 = v29,
              v34 = 16LL * v29,
              *v16 = *(_QWORD *)v33,
              v16[(unsigned __int64)v34 / 8 - 1] = *(_QWORD *)&v33[v34 - 8],
              qmemcpy(
                (void *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v33 - ((char *)v16 - ((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8) + (unsigned int)v34) >> 3)),
              v30 < v26) )
        {
          do
          {
            v31 = v30++;
            LOBYTE(v16[2 * v31]) = v30;
          }
          while ( v30 < v26 );
        }
        v32 = *((void **)v12 + 16);
        if ( v32 )
          operator delete[](v32);
        *((_QWORD *)v12 + 16) = v16;
        v12[136] = v35;
        v15 = v12[137];
      }
      else
      {
        v16 = *((_QWORD **)v12 + 16);
      }
      v12[137] = v16[2 * v15];
      v12[v11] = v15;
      v17 = (__int64)&v12[-a2[4]] >> 4;
      ++a2[1];
      v18 = 0;
      v19 = (0x1C71C71C71C71C80LL * v17) | v11;
      goto LABEL_13;
    }
LABEL_15:
    sub_480600(a2, v14 + 1);
    v21 = a2[4];
    v22 = *a3;
    v23 = a2[2];
    v24 = (v23 - 1)
        & (((0xD6E8FEB86659FD93LL
           * (((0xD6E8FEB86659FD93LL * (a2[3] ^ v22 ^ ((a2[3] ^ v22) >> 32))) >> 32)
            ^ (0xD6E8FEB86659FD93LL * (a2[3] ^ v22 ^ ((a2[3] ^ v22) >> 32))))) >> 32)
         ^ (0xD6E8FEB86659FD93LL
          * (((0xD6E8FEB86659FD93LL * (a2[3] ^ v22 ^ ((a2[3] ^ v22) >> 32))) >> 32)
           ^ (0xD6E8FEB86659FD93LL * (a2[3] ^ v22 ^ ((a2[3] ^ v22) >> 32))))));
    v11 = v24 & 0x7F;
    v12 = (unsigned __int8 *)(v21 + 144 * (v24 >> 7));
    while ( 1 )
    {
      v25 = v12[v11];
      if ( v25 == 255 || (_DWORD)v22 == *(_DWORD *)(*((_QWORD *)v12 + 16) + 16 * v25) )
        break;
      if ( ++v11 == 128 )
      {
        v12 += 144;
        v11 = 0;
        if ( 0x8E38E38E38E38E39LL * ((__int64)&v12[-v21] >> 4) == v23 >> 7 )
          v12 = (unsigned __int8 *)a2[4];
      }
    }
    goto LABEL_10;
  }
  while ( (_DWORD)v7 != *(_DWORD *)(*((_QWORD *)v12 + 16) + 16 * v13) )
  {
    if ( ++v11 != 128 )
      goto LABEL_3;
    v12 += 144;
    v11 = 0;
    if ( 0x8E38E38E38E38E39LL * ((__int64)&v12[-v9] >> 4) == v6 >> 7 )
      v12 = (unsigned __int8 *)a2[4];
    v13 = *v12;
    if ( v13 == 255 )
      goto LABEL_9;
  }
  v18 = 1;
  v19 = (0x1C71C71C71C71C80LL * ((__int64)&v12[-v9] >> 4)) | v11;
LABEL_13:
  *(_BYTE *)(a1 + 16) = v18;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v19;
  return a1;
}
