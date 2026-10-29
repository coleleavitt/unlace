__int64 __fastcall sub_AC63B0(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 result; // rax
  _DWORD *v6; // r12
  __int64 v7; // r15
  __int64 v8; // rbp
  _DWORD *v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
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
  result = 7LL * a2;
  v6 = &a1[14 * a2];
  v7 = 56LL * a4;
  v8 = a3 + v7;
  if ( a1 != v6 )
  {
    v9 = a1;
    do
    {
      while ( v9[1] != 2 )
      {
        v9 += 14;
        if ( v6 == v9 )
          return result;
      }
      v11 = 56LL * (*v9 & v4);
      v12 = a3 + v11;
      if ( v7 == v11 )
      {
LABEL_11:
        if ( a3 == v12 )
        {
LABEL_16:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        result = a3;
        while ( *(_DWORD *)(result + 4) )
        {
          result += 56;
          if ( v12 == result )
            goto LABEL_16;
        }
      }
      else
      {
        result = a3 + v11;
        while ( *(_DWORD *)(result + 4) )
        {
          result += 56;
          if ( v8 == result )
            goto LABEL_11;
        }
      }
      *(_DWORD *)result = *v9;
      v13 = *(_DWORD *)(result + 8);
      v9 += 14;
      v14 = *(v9 - 12);
      *(_DWORD *)(result + 4) = 2;
      *(_DWORD *)(result + 8) = v14;
      v15 = *((_QWORD *)v9 - 5);
      *(v9 - 12) = v13;
      v16 = *(_QWORD *)(result + 16);
      *(_QWORD *)(result + 16) = v15;
      v17 = *((_BYTE *)v9 - 44);
      *((_QWORD *)v9 - 5) = v16;
      LOBYTE(v16) = *(_BYTE *)(result + 12);
      *(_BYTE *)(result + 12) = v17 & 2 | v16 & 0xFD;
      LOBYTE(v16) = v16 & 2 | *(_BYTE *)(v9 - 11) & 0xFD;
      *((_BYTE *)v9 - 44) = v16;
      v18 = *(_BYTE *)(result + 12);
      *(_BYTE *)(result + 12) = v16 & 1 | v18 & 0xFE;
      LODWORD(v15) = *(v9 - 8);
      *((_BYTE *)v9 - 44) = v18 & 1 | *(_BYTE *)(v9 - 11) & 0xFE;
      LODWORD(v16) = *(_DWORD *)(result + 24);
      *(_DWORD *)(result + 24) = v15;
      v19 = *((_QWORD *)v9 - 3);
      *(v9 - 8) = v16;
      v20 = *(_QWORD *)(result + 32);
      *(_QWORD *)(result + 32) = v19;
      v21 = *((_BYTE *)v9 - 28);
      *((_QWORD *)v9 - 3) = v20;
      LOBYTE(v20) = *(_BYTE *)(result + 28);
      *(_BYTE *)(result + 28) = v21 & 2 | v20 & 0xFD;
      LOBYTE(v20) = v20 & 2 | *(_BYTE *)(v9 - 7) & 0xFD;
      *((_BYTE *)v9 - 28) = v20;
      v22 = *(_BYTE *)(result + 28) & 1;
      *(_BYTE *)(result + 28) = v20 & 1 | *(_BYTE *)(result + 28) & 0xFE;
      *((_BYTE *)v9 - 28) = v22 | *(_BYTE *)(v9 - 7) & 0xFE;
      *(_DWORD *)(result + 40) = *(v9 - 4);
      *(_DWORD *)(result + 48) = *(v9 - 2);
    }
    while ( v6 != v9 );
  }
  return result;
}

