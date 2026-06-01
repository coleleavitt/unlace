void __fastcall sub_A95040(_DWORD *a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 v6; // r12
  _DWORD *v7; // rbp
  _DWORD *v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // si
  char v18; // si
  __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // si
  char v22; // si

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
      v10 = 48LL * (*v8 & v4);
      v11 = a3 + v10;
      if ( v5 == v10 )
      {
LABEL_11:
        if ( a3 == v11 )
        {
LABEL_16:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v12 = a3;
        while ( *(_DWORD *)(v12 + 4) )
        {
          v12 += 48;
          if ( v11 == v12 )
            goto LABEL_16;
        }
      }
      else
      {
        v12 = a3 + v10;
        while ( *(_DWORD *)(v12 + 4) )
        {
          v12 += 48;
          if ( v6 == v12 )
            goto LABEL_11;
        }
      }
      *(_DWORD *)v12 = *v8;
      v13 = *(_DWORD *)(v12 + 8);
      v8 += 12;
      v14 = *(v8 - 10);
      *(_DWORD *)(v12 + 4) = 2;
      *(_DWORD *)(v12 + 8) = v14;
      v15 = *((_QWORD *)v8 - 4);
      *(v8 - 10) = v13;
      v16 = *(_QWORD *)(v12 + 16);
      *(_QWORD *)(v12 + 16) = v15;
      v17 = *((_BYTE *)v8 - 36);
      *((_QWORD *)v8 - 4) = v16;
      LOBYTE(v16) = *(_BYTE *)(v12 + 12);
      *(_BYTE *)(v12 + 12) = v17 & 2 | v16 & 0xFD;
      LOBYTE(v16) = v16 & 2 | *(_BYTE *)(v8 - 9) & 0xFD;
      *((_BYTE *)v8 - 36) = v16;
      v18 = *(_BYTE *)(v12 + 12);
      *(_BYTE *)(v12 + 12) = v16 & 1 | v18 & 0xFE;
      LODWORD(v15) = *(v8 - 6);
      *((_BYTE *)v8 - 36) = v18 & 1 | *(_BYTE *)(v8 - 9) & 0xFE;
      LODWORD(v16) = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = v15;
      v19 = *((_QWORD *)v8 - 2);
      *(v8 - 6) = v16;
      v20 = *(_QWORD *)(v12 + 32);
      *(_QWORD *)(v12 + 32) = v19;
      v21 = *((_BYTE *)v8 - 20);
      *((_QWORD *)v8 - 2) = v20;
      LOBYTE(v20) = *(_BYTE *)(v12 + 28);
      *(_BYTE *)(v12 + 28) = v21 & 2 | v20 & 0xFD;
      LOBYTE(v20) = v20 & 2 | *(_BYTE *)(v8 - 5) & 0xFD;
      *((_BYTE *)v8 - 20) = v20;
      v22 = *(_BYTE *)(v12 + 28) & 1;
      *(_BYTE *)(v12 + 28) = v20 & 1 | *(_BYTE *)(v12 + 28) & 0xFE;
      *((_BYTE *)v8 - 20) = v22 | *(_BYTE *)(v8 - 5) & 0xFE;
      *(_DWORD *)(v12 + 40) = *(v8 - 2);
    }
    while ( v7 != v8 );
  }
}

