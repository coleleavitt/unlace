__int64 __fastcall sub_3EA580(__int64 a1, _QWORD *a2, int *a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int8 *v9; // rsi
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
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdi
  _QWORD *v29; // rax
  unsigned __int8 v30; // dl
  unsigned __int64 v31; // rax
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
  v8 = a2[3] ^ v7;
  v9 = (unsigned __int8 *)a2[4];
  v10 = (v6 - 1)
      & (((0xD6E8FEB86659FD93LL
         * (((0xD6E8FEB86659FD93LL * (v8 ^ HIDWORD(v8))) >> 32) ^ (0xD6E8FEB86659FD93LL * (v8 ^ HIDWORD(v8))))) >> 32)
       ^ (0xD6E8FEB86659FD93LL
        * (((0xD6E8FEB86659FD93LL * (v8 ^ HIDWORD(v8))) >> 32) ^ (0xD6E8FEB86659FD93LL * (v8 ^ HIDWORD(v8))))));
  v11 = v10 & 0x7F;
  v12 = &v9[144 * (v10 >> 7)];
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
            v28 = 640;
            v27 = 80;
          }
          else
          {
            v27 = v15 + 16LL;
            v35 = v15 + 16;
            v28 = 8 * v27;
          }
        }
        else
        {
          v35 = 48;
          v28 = 384;
          v27 = 48;
        }
        v29 = (_QWORD *)operator new[](v28);
        v30 = v12[136];
        v16 = v29;
        v31 = 0;
        if ( !v30
          || (v33 = *((char **)v12 + 16),
              v31 = v30,
              v34 = 8LL * v30,
              *v16 = *(_QWORD *)v33,
              v16[(unsigned __int64)v34 / 8 - 1] = *(_QWORD *)&v33[v34 - 8],
              qmemcpy(
                (void *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v33 - ((char *)v16 - ((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8) + (unsigned int)v34) >> 3)),
              v31 < v27) )
        {
          do
          {
            LOBYTE(v16[v31]) = v31 + 1;
            ++v31;
          }
          while ( v31 < v27 );
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
      v12[137] = v16[v15];
      v12[v11] = v15;
      v17 = (__int64)&v12[-a2[4]] >> 4;
      ++a2[1];
      v18 = 0;
      v19 = (0x1C71C71C71C71C80LL * v17) | v11;
      goto LABEL_13;
    }
LABEL_15:
    sub_3EA0E0(a2, v14 + 1);
    v21 = a2[2];
    v22 = a2[4];
    v23 = *a3;
    v24 = (0xD6E8FEB86659FD93LL * (a2[3] ^ v23 ^ ((a2[3] ^ v23) >> 32))) >> 32;
    v25 = (v21 - 1)
        & (((0xD6E8FEB86659FD93LL * (v24 ^ (0xD6E8FEB86659FD93LL * (a2[3] ^ v23 ^ ((a2[3] ^ v23) >> 32))))) >> 32)
         ^ (0xD6E8FEB86659FD93LL * (v24 ^ (0xD6E8FEB86659FD93LL * (a2[3] ^ v23 ^ ((a2[3] ^ v23) >> 32))))));
    v11 = v25 & 0x7F;
    v12 = (unsigned __int8 *)(v22 + 144 * (v25 >> 7));
    while ( 1 )
    {
      v26 = v12[v11];
      if ( v26 == 255 || (_DWORD)v23 == *(_DWORD *)(*((_QWORD *)v12 + 16) + 8 * v26) )
        break;
      if ( ++v11 == 128 )
      {
        v12 += 144;
        v11 = 0;
        if ( 0x8E38E38E38E38E39LL * ((__int64)&v12[-v22] >> 4) == v21 >> 7 )
          v12 = (unsigned __int8 *)a2[4];
      }
    }
    goto LABEL_10;
  }
  while ( (_DWORD)v7 != *(_DWORD *)(*((_QWORD *)v12 + 16) + 8 * v13) )
  {
    if ( ++v11 != 128 )
      goto LABEL_3;
    v12 += 144;
    v11 = 0;
    if ( 0x8E38E38E38E38E39LL * ((v12 - v9) >> 4) == v6 >> 7 )
      v12 = v9;
    v13 = *v12;
    if ( v13 == 255 )
      goto LABEL_9;
  }
  v18 = 1;
  v19 = (0x1C71C71C71C71C80LL * ((v12 - v9) >> 4)) | v11;
LABEL_13:
  *(_BYTE *)(a1 + 16) = v18;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v19;
  return a1;
}
