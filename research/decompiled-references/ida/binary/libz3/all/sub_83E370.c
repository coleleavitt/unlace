void __fastcall sub_83E370(int *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 v6; // r12
  int *v7; // rbp
  int *v8; // rbx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // si
  char v19; // cl
  char v20; // dl
  char v21; // dl
  char v22; // si
  int v23; // ecx
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v27; // si
  char v28; // si
  int v29; // edx
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdx
  char v33; // si

  v4 = a4 - 1;
  v5 = 48LL * a4;
  v6 = a3 + v5;
  v7 = &a1[12 * a2];
  if ( a1 != v7 )
  {
    v8 = a1;
    do
    {
      while ( v8[1] != 2 )
      {
        v8 += 12;
        if ( v7 == v8 )
          return;
      }
      v10 = *v8;
      v11 = 48LL * (*v8 & v4);
      v12 = a3 + v11;
      if ( v5 == v11 )
      {
LABEL_12:
        if ( a3 == v12 )
        {
LABEL_17:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v13 = a3;
        while ( *(_DWORD *)(v13 + 4) )
        {
          v13 += 48;
          if ( v12 == v13 )
            goto LABEL_17;
        }
        *(_DWORD *)v13 = v10;
        v29 = v8[2];
        *(_DWORD *)(v13 + 4) = 2;
        *(_DWORD *)(v13 + 8) = v29;
        v30 = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(v13 + 16) = v8[4];
        v31 = *((_QWORD *)v8 + 3);
        v8[4] = v30;
        v32 = *(_QWORD *)(v13 + 24);
        *(_QWORD *)(v13 + 24) = v31;
        v33 = *((_BYTE *)v8 + 20);
        *((_QWORD *)v8 + 3) = v32;
        LOBYTE(v32) = *(_BYTE *)(v13 + 20);
        *(_BYTE *)(v13 + 20) = v33 & 2 | v32 & 0xFD;
        v19 = v32 & 2;
      }
      else
      {
        v13 = a3 + v11;
        while ( *(_DWORD *)(v13 + 4) )
        {
          v13 += 48;
          if ( v6 == v13 )
            goto LABEL_12;
        }
        *(_DWORD *)v13 = v10;
        v14 = v8[2];
        *(_DWORD *)(v13 + 4) = 2;
        *(_DWORD *)(v13 + 8) = v14;
        v15 = *(_DWORD *)(v13 + 16);
        *(_DWORD *)(v13 + 16) = v8[4];
        v16 = *((_QWORD *)v8 + 3);
        v8[4] = v15;
        v17 = *(_QWORD *)(v13 + 24);
        *(_QWORD *)(v13 + 24) = v16;
        v18 = *((_BYTE *)v8 + 20);
        *((_QWORD *)v8 + 3) = v17;
        LOBYTE(v16) = *(_BYTE *)(v13 + 20);
        *(_BYTE *)(v13 + 20) = v18 & 2 | v16 & 0xFD;
        v19 = v16 & 2;
      }
      v20 = *((_BYTE *)v8 + 20);
      v8 += 12;
      v21 = v19 | v20 & 0xFD;
      *((_BYTE *)v8 - 28) = v21;
      v22 = *(_BYTE *)(v13 + 20);
      *(_BYTE *)(v13 + 20) = v21 & 1 | v22 & 0xFE;
      v23 = *(v8 - 4);
      *((_BYTE *)v8 - 28) = v22 & 1 | *(_BYTE *)(v8 - 7) & 0xFE;
      v24 = *(_DWORD *)(v13 + 32);
      *(_DWORD *)(v13 + 32) = v23;
      v25 = *((_QWORD *)v8 - 1);
      *(v8 - 4) = v24;
      v26 = *(_QWORD *)(v13 + 40);
      *(_QWORD *)(v13 + 40) = v25;
      v27 = *((_BYTE *)v8 - 12);
      *((_QWORD *)v8 - 1) = v26;
      LOBYTE(v26) = *(_BYTE *)(v13 + 36);
      *(_BYTE *)(v13 + 36) = v27 & 2 | v26 & 0xFD;
      LOBYTE(v26) = v26 & 2 | *(_BYTE *)(v8 - 3) & 0xFD;
      *((_BYTE *)v8 - 12) = v26;
      v28 = *(_BYTE *)(v13 + 36) & 1;
      *(_BYTE *)(v13 + 36) = v26 & 1 | *(_BYTE *)(v13 + 36) & 0xFE;
      *((_BYTE *)v8 - 12) = v28 | *(_BYTE *)(v8 - 3) & 0xFE;
    }
    while ( v7 != v8 );
  }
}

