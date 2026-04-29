__int64 __fastcall sub_35AA0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int8 *v8; // rsi
  unsigned __int64 v9; // rbx
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
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  unsigned __int8 v29; // dl
  unsigned __int64 v30; // rax
  void *v31; // rdi
  char *v32; // rsi
  __int64 v33; // rdx
  char v34; // [rsp+Fh] [rbp-39h]

  v6 = a2[2];
  if ( !v6 )
  {
    v14 = a2[1];
    goto LABEL_15;
  }
  v7 = a2[3];
  v8 = (unsigned __int8 *)a2[4];
  v9 = 0xD6E8FEB86659FD93LL * (*a3 ^ v7 ^ ((*a3 ^ v7) >> 32));
  v10 = (v6 - 1) & (((0xD6E8FEB86659FD93LL * (HIDWORD(v9) ^ v9)) >> 32) ^ (0xD6E8FEB86659FD93LL * (HIDWORD(v9) ^ v9)));
  v11 = (unsigned __int8)(v6 - 1)
      & (unsigned __int8)(((0xD6E8FEB86659FD93LL * (HIDWORD(v9) ^ v9)) >> 32) ^ (-109 * (BYTE4(v9) ^ v9)))
      & 0x7F;
  v12 = &v8[144 * (v10 >> 7)];
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
            v34 = 80;
            v27 = 640;
            v26 = 80;
          }
          else
          {
            v26 = v15 + 16LL;
            v34 = v15 + 16;
            v27 = 8 * v26;
          }
        }
        else
        {
          v34 = 48;
          v27 = 384;
          v26 = 48;
        }
        v28 = (_QWORD *)operator new[](v27);
        v29 = v12[136];
        v16 = v28;
        v30 = 0;
        if ( !v29
          || (v32 = *((char **)v12 + 16),
              v30 = v29,
              v33 = 8LL * v29,
              *v16 = *(_QWORD *)v32,
              v16[(unsigned __int64)v33 / 8 - 1] = *(_QWORD *)&v32[v33 - 8],
              qmemcpy(
                (void *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v32 - ((char *)v16 - ((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8) + (unsigned int)v33) >> 3)),
              v30 < v26) )
        {
          do
          {
            LOBYTE(v16[v30]) = v30 + 1;
            ++v30;
          }
          while ( v30 < v26 );
        }
        v31 = *((void **)v12 + 16);
        if ( v31 )
          operator delete[](v31);
        *((_QWORD *)v12 + 16) = v16;
        v12[136] = v34;
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
    sub_35600(a2, v14 + 1);
    v21 = a2[2];
    v22 = a2[4];
    v23 = (0xD6E8FEB86659FD93LL * (*a3 ^ a2[3] ^ ((*a3 ^ a2[3]) >> 32))) >> 32;
    v24 = (v21 - 1)
        & (((0xD6E8FEB86659FD93LL * (v23 ^ (0xD6E8FEB86659FD93LL * (*a3 ^ a2[3] ^ ((*a3 ^ a2[3]) >> 32))))) >> 32)
         ^ (0xD6E8FEB86659FD93LL * (v23 ^ (0xD6E8FEB86659FD93LL * (*a3 ^ a2[3] ^ ((*a3 ^ a2[3]) >> 32))))));
    v11 = v24 & 0x7F;
    v12 = (unsigned __int8 *)(v22 + 144 * (v24 >> 7));
    while ( 1 )
    {
      v25 = v12[v11];
      if ( v25 == 255 || *a3 == *(_QWORD *)(*((_QWORD *)v12 + 16) + 8 * v25) )
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
  while ( *a3 != *(_QWORD *)(*((_QWORD *)v12 + 16) + 8 * v13) )
  {
    if ( ++v11 != 128 )
      goto LABEL_3;
    v12 += 144;
    v11 = 0;
    if ( 0x8E38E38E38E38E39LL * ((v12 - v8) >> 4) == v6 >> 7 )
      v12 = v8;
    v13 = *v12;
    if ( v13 == 255 )
      goto LABEL_9;
  }
  v18 = 1;
  v19 = (0x1C71C71C71C71C80LL * ((v12 - v8) >> 4)) | v11;
LABEL_13:
  *(_BYTE *)(a1 + 16) = v18;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v19;
  return a1;
}
