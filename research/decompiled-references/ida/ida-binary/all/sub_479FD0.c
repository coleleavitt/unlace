__int64 __fastcall sub_479FD0(__int64 a1, QT::QIcon *a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = QT::QIcon::cacheKey(a2);
  v3 = *(_QWORD **)(a1 + 592);
  if ( v3 )
  {
    v4 = v3[2];
    v5 = v3[4];
    v6 = (v4 - 1)
       & (((0xD6E8FEB86659FD93LL
          * (((0xD6E8FEB86659FD93LL * (v2 ^ v3[3] ^ ((v2 ^ v3[3]) >> 32))) >> 32)
           ^ (0xD6E8FEB86659FD93LL * (v2 ^ v3[3] ^ ((v2 ^ v3[3]) >> 32))))) >> 32)
        ^ (0xD6E8FEB86659FD93LL
         * (((0xD6E8FEB86659FD93LL * (v2 ^ v3[3] ^ ((v2 ^ v3[3]) >> 32))) >> 32)
          ^ (0xD6E8FEB86659FD93LL * (v2 ^ v3[3] ^ ((v2 ^ v3[3]) >> 32))))));
    v7 = v6 & 0x7F;
    v8 = v5 + 144 * (v6 >> 7);
LABEL_3:
    v9 = (unsigned __int8 *)(v8 + 128);
LABEL_4:
    v10 = (unsigned __int8 *)(v8 + v7);
    while ( 1 )
    {
      v11 = *v10;
      if ( v11 == 255 )
        break;
      v12 = *(_QWORD *)v9 + 16 * v11;
      if ( v2 == *(_QWORD *)v12 )
      {
        if ( !v12 )
          return 0xFFFFFFFFLL;
        return *(unsigned int *)(v12 + 8);
      }
      if ( ++v10 == v9 )
      {
        v8 += 144;
        v9 = v10 + 144;
        v7 = 0;
        if ( 0x8E38E38E38E38E39LL * ((v8 - v5) >> 4) != v4 >> 7 )
          goto LABEL_4;
        v8 = v5;
        goto LABEL_3;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
