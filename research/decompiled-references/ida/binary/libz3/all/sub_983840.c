__int64 __fastcall sub_983840(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned __int64 v7; // rdx
  unsigned int *v8; // r12
  char v10; // dl
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // esi
  __int64 v17; // rax
  unsigned int *v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL) + 16LL * (a2 >> 1);
  v5 = *(_BYTE *)(v4 + 11) & 1;
  if ( (*(_BYTE *)(v4 + 11) & 1) == 0 || *(_QWORD *)v4 != a3 )
  {
    v5 = 1;
    v6 = a3 & 7;
    if ( v6 != 2 )
    {
      v7 = a3 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = (unsigned int *)v7;
      if ( v6 )
      {
        LOBYTE(v5) = sub_9833B0(a1, v7) != 0;
      }
      else
      {
        v10 = *(_BYTE *)(v7 + 7);
        v11 = 0;
        if ( (v10 & 0x40) != 0 )
        {
          v12 = (__int64)&v8[(v8[1] & 0xFFFFFF) + 2];
          if ( (v10 & 3u) - 2 < 2 )
            v12 = (__int64)&v8[(v8[1] & 0xFFFFFF) + 3];
          v13 = (__int64 *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v10 & 0x20) != 0 )
            ++v13;
          v11 = *v13;
        }
        v14 = sub_9833B0(a1, v11);
        v15 = *v8;
        LOBYTE(v5) = v14 != 0;
        if ( dword_1C7EC90 != a2 )
        {
          v16 = v8[2];
          v6 = 1;
          if ( v16 != a2 )
          {
            v6 = 2;
            v17 = sub_9836E0(a1, v16 ^ 1);
            LOBYTE(v17) = v17 != 0;
            v5 &= v17;
          }
        }
        if ( v6 < v15 )
        {
          v18 = &v8[v6];
          v19 = (unsigned __int64)&v8[v6 + 1 + (unsigned __int64)(v15 - 1 - v6)];
          do
          {
            v20 = sub_9836E0(a1, v18[2] ^ 1);
            LOBYTE(v20) = v20 != 0;
            ++v18;
            v5 &= v20;
          }
          while ( v18 != (unsigned int *)v19 );
        }
      }
    }
  }
  return v5;
}

