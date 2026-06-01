void __fastcall sub_75A420(__int64 *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 *v7; // r12
  __int64 *v8; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // si
  char v18; // si
  __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // si
  __int64 v22; // rcx
  __int64 v23; // rdx
  char v24; // si
  char v25; // si
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // si
  char v29; // si

  v4 = a4 - 1;
  v5 = 112LL * a4;
  v6 = a3 + v5;
  v7 = &a1[14 * a2];
  if ( a1 != v7 )
  {
    v8 = a1;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( (unsigned __int64)*v8 > 1 )
          break;
        v8 += 14;
        if ( v7 == v8 )
          return;
      }
      v11 = 112LL * (*(_DWORD *)(v10 + 12) & v4);
      v12 = a3 + v11;
      if ( v5 == v11 )
      {
LABEL_11:
        if ( a3 == v12 )
        {
LABEL_16:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v13 = a3;
        while ( *(_QWORD *)v13 )
        {
          v13 += 112;
          if ( v12 == v13 )
            goto LABEL_16;
        }
      }
      else
      {
        v13 = a3 + v11;
        while ( *(_QWORD *)v13 )
        {
          v13 += 112;
          if ( v6 == v13 )
            goto LABEL_11;
        }
      }
      *(_QWORD *)v13 = v10;
      *(_BYTE *)(v13 + 8) = *((_BYTE *)v8 + 8);
      *(__m128i *)(v13 + 16) = _mm_loadu_si128((const __m128i *)v8 + 1);
      *(_QWORD *)(v13 + 29) = *(__int64 *)((char *)v8 + 29);
      v14 = *(_DWORD *)(v13 + 40);
      *(_DWORD *)(v13 + 40) = *((_DWORD *)v8 + 10);
      v15 = v8[6];
      *((_DWORD *)v8 + 10) = v14;
      v16 = *(_QWORD *)(v13 + 48);
      *(_QWORD *)(v13 + 48) = v15;
      v17 = *((_BYTE *)v8 + 44);
      v8[6] = v16;
      LOBYTE(v16) = *(_BYTE *)(v13 + 44);
      *(_BYTE *)(v13 + 44) = v17 & 2 | v16 & 0xFD;
      LOBYTE(v16) = v16 & 2 | *((_BYTE *)v8 + 44) & 0xFD;
      *((_BYTE *)v8 + 44) = v16;
      v18 = *(_BYTE *)(v13 + 44);
      *(_BYTE *)(v13 + 44) = v16 & 1 | v18 & 0xFE;
      LODWORD(v15) = *((_DWORD *)v8 + 14);
      *((_BYTE *)v8 + 44) = v18 & 1 | *((_BYTE *)v8 + 44) & 0xFE;
      LODWORD(v16) = *(_DWORD *)(v13 + 56);
      *(_DWORD *)(v13 + 56) = v15;
      v19 = v8[8];
      *((_DWORD *)v8 + 14) = v16;
      v20 = *(_QWORD *)(v13 + 64);
      *(_QWORD *)(v13 + 64) = v19;
      v8[8] = v20;
      LOBYTE(v20) = *(_BYTE *)(v13 + 60);
      *(_BYTE *)(v13 + 60) = *((_BYTE *)v8 + 60) & 2 | v20 & 0xFD;
      LOBYTE(v20) = v20 & 2 | *((_BYTE *)v8 + 60) & 0xFD;
      *((_BYTE *)v8 + 60) = v20;
      v21 = *(_BYTE *)(v13 + 60);
      *(_BYTE *)(v13 + 60) = v20 & 1 | v21 & 0xFE;
      LODWORD(v19) = *((_DWORD *)v8 + 18);
      *((_BYTE *)v8 + 60) = v21 & 1 | *((_BYTE *)v8 + 60) & 0xFE;
      LODWORD(v20) = *(_DWORD *)(v13 + 72);
      *(_DWORD *)(v13 + 72) = v19;
      v22 = v8[10];
      *((_DWORD *)v8 + 18) = v20;
      v23 = *(_QWORD *)(v13 + 80);
      *(_QWORD *)(v13 + 80) = v22;
      v24 = *((_BYTE *)v8 + 76);
      v8[10] = v23;
      LOBYTE(v23) = *(_BYTE *)(v13 + 76);
      *(_BYTE *)(v13 + 76) = v24 & 2 | v23 & 0xFD;
      LOBYTE(v23) = v23 & 2 | *((_BYTE *)v8 + 76) & 0xFD;
      *((_BYTE *)v8 + 76) = v23;
      v25 = *(_BYTE *)(v13 + 76) & 1;
      v8 += 14;
      *(_BYTE *)(v13 + 76) = v23 & 1 | *(_BYTE *)(v13 + 76) & 0xFE;
      LODWORD(v22) = *((_DWORD *)v8 - 6);
      *((_BYTE *)v8 - 36) = v25 | *((_BYTE *)v8 - 36) & 0xFE;
      LODWORD(v23) = *(_DWORD *)(v13 + 88);
      *(_DWORD *)(v13 + 88) = v22;
      v26 = *(v8 - 2);
      *((_DWORD *)v8 - 6) = v23;
      v27 = *(_QWORD *)(v13 + 96);
      *(_QWORD *)(v13 + 96) = v26;
      v28 = *((_BYTE *)v8 - 20);
      *(v8 - 2) = v27;
      LOBYTE(v27) = *(_BYTE *)(v13 + 92);
      *(_BYTE *)(v13 + 92) = v28 & 2 | v27 & 0xFD;
      LOBYTE(v27) = v27 & 2 | *((_BYTE *)v8 - 20) & 0xFD;
      *((_BYTE *)v8 - 20) = v27;
      v29 = *(_BYTE *)(v13 + 92) & 1;
      *(_BYTE *)(v13 + 92) = v27 & 1 | *(_BYTE *)(v13 + 92) & 0xFE;
      *((_BYTE *)v8 - 20) = v29 | *((_BYTE *)v8 - 20) & 0xFE;
      *(_DWORD *)(v13 + 104) = *((_DWORD *)v8 - 2);
      *(_BYTE *)(v13 + 108) = *((_BYTE *)v8 - 4);
    }
    while ( v7 != v8 );
  }
}

