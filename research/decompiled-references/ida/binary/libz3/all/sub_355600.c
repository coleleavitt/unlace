__int64 __fastcall sub_355600(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  char v19; // cl
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // cl
  int v24; // ecx
  __int64 v25; // rax
  unsigned int v26; // [rsp+Ch] [rbp-3Ch]
  unsigned int v27; // [rsp+Ch] [rbp-3Ch]

  v4 = a4 - 1;
  result = 7LL * a2;
  v6 = 56LL * a4;
  v7 = a1 + 56LL * a2;
  v8 = a3 + v6;
  if ( a1 != v7 )
  {
    v9 = a1;
    do
    {
      while ( 1 )
      {
        result = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 > 1u )
          break;
        v9 += 56;
        if ( v7 == v9 )
          return result;
      }
      v11 = 56LL * (*(_DWORD *)(result + 12) & v4);
      v12 = a3 + v11;
      if ( v6 == v11 )
      {
LABEL_15:
        if ( a3 == v12 )
        {
LABEL_22:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v13 = a3;
        while ( *(_QWORD *)v13 )
        {
          v13 += 56;
          if ( v12 == v13 )
            goto LABEL_22;
        }
        *(_QWORD *)v13 = result;
        if ( v9 + 8 == v13 + 8 )
          goto LABEL_13;
        v25 = *(_QWORD *)(v13 + 8);
        if ( v25 )
        {
          v27 = v4;
          sub_186B220((void *)(v25 - 8));
          v4 = v27;
        }
      }
      else
      {
        v13 = a3 + v11;
        while ( *(_QWORD *)v13 )
        {
          v13 += 56;
          if ( v8 == v13 )
            goto LABEL_15;
        }
        *(_QWORD *)v13 = result;
        if ( v13 + 8 == v9 + 8 )
          goto LABEL_13;
        v14 = *(_QWORD *)(v13 + 8);
        if ( v14 )
        {
          v26 = v4;
          sub_186B220((void *)(v14 - 8));
          v4 = v26;
        }
      }
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 8) = *(_QWORD *)(v9 + 8);
      *(_QWORD *)(v9 + 8) = 0;
LABEL_13:
      v15 = *(_DWORD *)(v9 + 16);
      v9 += 56;
      *(_DWORD *)(v13 + 16) = v15;
      v16 = *(_DWORD *)(v13 + 24);
      *(_DWORD *)(v13 + 24) = *(_DWORD *)(v9 - 32);
      v17 = *(_QWORD *)(v9 - 24);
      *(_DWORD *)(v9 - 32) = v16;
      v18 = *(_QWORD *)(v13 + 32);
      *(_QWORD *)(v13 + 32) = v17;
      v19 = *(_BYTE *)(v9 - 28);
      *(_QWORD *)(v9 - 24) = v18;
      LOBYTE(v17) = *(_BYTE *)(v13 + 28);
      *(_BYTE *)(v13 + 28) = v19 & 2 | v17 & 0xFD;
      LOBYTE(v18) = v17 & 2 | *(_BYTE *)(v9 - 28) & 0xFD;
      *(_BYTE *)(v9 - 28) = v18;
      v20 = *(_BYTE *)(v13 + 28);
      *(_BYTE *)(v13 + 28) = v18 & 1 | v20 & 0xFE;
      LODWORD(v17) = *(_DWORD *)(v9 - 16);
      *(_BYTE *)(v9 - 28) = v20 & 1 | *(_BYTE *)(v9 - 28) & 0xFE;
      LODWORD(v18) = *(_DWORD *)(v13 + 40);
      *(_DWORD *)(v13 + 40) = v17;
      v21 = *(_QWORD *)(v9 - 8);
      *(_DWORD *)(v9 - 16) = v18;
      v22 = *(_QWORD *)(v13 + 48);
      *(_QWORD *)(v13 + 48) = v21;
      v23 = *(_BYTE *)(v9 - 12);
      *(_QWORD *)(v9 - 8) = v22;
      LOBYTE(v21) = *(_BYTE *)(v13 + 44);
      *(_BYTE *)(v13 + 44) = v23 & 2 | v21 & 0xFD;
      LOBYTE(v22) = v21 & 2 | *(_BYTE *)(v9 - 12) & 0xFD;
      *(_BYTE *)(v9 - 12) = v22;
      v24 = *(_BYTE *)(v13 + 44) & 1;
      *(_BYTE *)(v13 + 44) = v22 & 1 | *(_BYTE *)(v13 + 44) & 0xFE;
      result = v24 | *(_BYTE *)(v9 - 12) & 0xFEu;
      *(_BYTE *)(v9 - 12) = v24 | *(_BYTE *)(v9 - 12) & 0xFE;
    }
    while ( v7 != v9 );
  }
  return result;
}

