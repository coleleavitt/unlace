__int64 __fastcall sub_7FF100(__int64 *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r15d
  __int64 result; // rax
  __int64 v6; // r14
  __int64 *v7; // r12
  __int64 v8; // rbp
  __int64 *v9; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // si
  char v20; // cl
  char v21; // dl
  char v22; // dl
  char v23; // si
  int v24; // ecx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // si
  int v29; // esi
  int v30; // ecx
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rdx
  char v34; // si

  v4 = a4 - 1;
  result = 5LL * a2;
  v6 = 40LL * a4;
  v7 = &a1[5 * a2];
  v8 = a3 + v6;
  if ( a1 != v7 )
  {
    v9 = a1;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( (unsigned __int64)*v9 > 1 )
          break;
        v9 += 5;
        if ( v7 == v9 )
          return result;
      }
      v12 = 40LL * (*(_DWORD *)(v11 + 12) & v4);
      v13 = a3 + v12;
      if ( v6 == v12 )
      {
LABEL_12:
        if ( a3 == v13 )
        {
LABEL_17:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v14 = a3;
        while ( *(_QWORD *)v14 )
        {
          v14 += 40;
          if ( v13 == v14 )
            goto LABEL_17;
        }
        v30 = *((_DWORD *)v9 + 2);
        *(_QWORD *)v14 = v11;
        v31 = *(_DWORD *)(v14 + 8);
        *(_DWORD *)(v14 + 8) = v30;
        v32 = v9[2];
        *((_DWORD *)v9 + 2) = v31;
        v33 = *(_QWORD *)(v14 + 16);
        *(_QWORD *)(v14 + 16) = v32;
        v34 = *((_BYTE *)v9 + 12);
        v9[2] = v33;
        LOBYTE(v33) = *(_BYTE *)(v14 + 12);
        *(_BYTE *)(v14 + 12) = v34 & 2 | v33 & 0xFD;
        v20 = v33 & 2;
      }
      else
      {
        v14 = a3 + v12;
        while ( *(_QWORD *)v14 )
        {
          v14 += 40;
          if ( v8 == v14 )
            goto LABEL_12;
        }
        v15 = *((_DWORD *)v9 + 2);
        *(_QWORD *)v14 = v11;
        v16 = *(_DWORD *)(v14 + 8);
        *(_DWORD *)(v14 + 8) = v15;
        v17 = v9[2];
        *((_DWORD *)v9 + 2) = v16;
        v18 = *(_QWORD *)(v14 + 16);
        *(_QWORD *)(v14 + 16) = v17;
        v19 = *((_BYTE *)v9 + 12);
        v9[2] = v18;
        LOBYTE(v17) = *(_BYTE *)(v14 + 12);
        *(_BYTE *)(v14 + 12) = v19 & 2 | v17 & 0xFD;
        v20 = v17 & 2;
      }
      v21 = *((_BYTE *)v9 + 12);
      v9 += 5;
      v22 = v20 | v21 & 0xFD;
      *((_BYTE *)v9 - 28) = v22;
      v23 = *(_BYTE *)(v14 + 12);
      *(_BYTE *)(v14 + 12) = v22 & 1 | v23 & 0xFE;
      v24 = *((_DWORD *)v9 - 4);
      *((_BYTE *)v9 - 28) = v23 & 1 | *((_BYTE *)v9 - 28) & 0xFE;
      v25 = *(_DWORD *)(v14 + 24);
      *(_DWORD *)(v14 + 24) = v24;
      v26 = *(v9 - 1);
      *((_DWORD *)v9 - 4) = v25;
      v27 = *(_QWORD *)(v14 + 32);
      *(_QWORD *)(v14 + 32) = v26;
      v28 = *((_BYTE *)v9 - 12);
      *(v9 - 1) = v27;
      LOBYTE(v27) = *(_BYTE *)(v14 + 28);
      *(_BYTE *)(v14 + 28) = v28 & 2 | v27 & 0xFD;
      LOBYTE(v27) = v27 & 2 | *((_BYTE *)v9 - 12) & 0xFD;
      *((_BYTE *)v9 - 12) = v27;
      v29 = *(_BYTE *)(v14 + 28) & 1;
      *(_BYTE *)(v14 + 28) = v27 & 1 | *(_BYTE *)(v14 + 28) & 0xFE;
      result = v29 | *((_BYTE *)v9 - 12) & 0xFEu;
      *((_BYTE *)v9 - 12) = v29 | *((_BYTE *)v9 - 12) & 0xFE;
    }
    while ( v7 != v9 );
  }
  return result;
}

