_DWORD *__fastcall sub_CA7F00(int *a1, __int64 a2, int *a3, __int64 a4, _DWORD *a5)
{
  int *v6; // r12
  int *v7; // rbp
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  char v12; // cl
  char v13; // cl
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // cl
  char v18; // cl
  int v19; // edx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // cl
  char v24; // cl
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // cl
  char v28; // cl
  _DWORD *v29; // rax

  v6 = a3;
  v7 = a1;
  if ( (int *)a4 != a3 && (int *)a2 != a1 )
  {
    while ( (v7[5] & 1) == 0 && v7[4] == 1 && (v6[5] & 1) == 0 && v6[4] == 1 )
    {
      if ( (v7[1] & 1) != 0 || (v6[1] & 1) != 0 )
      {
        if ( (int)sub_182C7B0(qword_1C7F2C0, v7, v6) >= 0 )
        {
LABEL_4:
          v9 = *v7;
LABEL_5:
          v10 = *a5;
          *a5 = v9;
          v7 += 10;
          a5 += 10;
          v11 = *((_QWORD *)a5 - 4);
          *(v7 - 10) = v10;
          *((_QWORD *)a5 - 4) = *((_QWORD *)v7 - 4);
          v12 = *((_BYTE *)v7 - 36);
          *((_QWORD *)v7 - 4) = v11;
          LOBYTE(v10) = *((_BYTE *)a5 - 36);
          *((_BYTE *)a5 - 36) = v12 & 2 | v10 & 0xFD;
          LOBYTE(v11) = v10 & 2 | *(_BYTE *)(v7 - 9) & 0xFD;
          *((_BYTE *)v7 - 36) = v11;
          v13 = *((_BYTE *)a5 - 36);
          *((_BYTE *)a5 - 36) = v11 & 1 | v13 & 0xFE;
          v14 = *(v7 - 6);
          *((_BYTE *)v7 - 36) = v13 & 1 | *(_BYTE *)(v7 - 9) & 0xFE;
          LODWORD(v11) = *(a5 - 6);
          *(a5 - 6) = v14;
          v15 = *((_QWORD *)v7 - 2);
          *(v7 - 6) = v11;
          v16 = *((_QWORD *)a5 - 2);
          *((_QWORD *)a5 - 2) = v15;
          v17 = *((_BYTE *)v7 - 20);
          *((_QWORD *)v7 - 2) = v16;
          LOBYTE(v15) = *((_BYTE *)a5 - 20);
          *((_BYTE *)a5 - 20) = v17 & 2 | v15 & 0xFD;
          LOBYTE(v16) = v15 & 2 | *(_BYTE *)(v7 - 5) & 0xFD;
          *((_BYTE *)v7 - 20) = v16;
          v18 = *(_BYTE *)(a5 - 5) & 1;
          *((_BYTE *)a5 - 20) = v16 & 1 | *(_BYTE *)(a5 - 5) & 0xFE;
          *((_BYTE *)v7 - 20) = v18 | *(_BYTE *)(v7 - 5) & 0xFE;
          *((_QWORD *)a5 - 1) = *((_QWORD *)v7 - 1);
          if ( (int *)a2 == v7 )
            goto LABEL_12;
          goto LABEL_6;
        }
        goto LABEL_10;
      }
      v9 = *v7;
      v19 = *v6;
      if ( *v7 >= *v6 )
        goto LABEL_5;
LABEL_11:
      v20 = *a5;
      *a5 = v19;
      v6 += 10;
      a5 += 10;
      v21 = *((_QWORD *)v6 - 4);
      *(v6 - 10) = v20;
      v22 = *((_QWORD *)a5 - 4);
      *((_QWORD *)a5 - 4) = v21;
      v23 = *((_BYTE *)v6 - 36);
      *((_QWORD *)v6 - 4) = v22;
      LOBYTE(v21) = *((_BYTE *)a5 - 36);
      *((_BYTE *)a5 - 36) = v23 & 2 | v21 & 0xFD;
      LOBYTE(v22) = v21 & 2 | *(_BYTE *)(v6 - 9) & 0xFD;
      *((_BYTE *)v6 - 36) = v22;
      v24 = *((_BYTE *)a5 - 36);
      *((_BYTE *)a5 - 36) = v22 & 1 | v24 & 0xFE;
      LODWORD(v21) = *(v6 - 6);
      *((_BYTE *)v6 - 36) = v24 & 1 | *(_BYTE *)(v6 - 9) & 0xFE;
      LODWORD(v22) = *(a5 - 6);
      *(a5 - 6) = v21;
      v25 = *((_QWORD *)v6 - 2);
      *(v6 - 6) = v22;
      v26 = *((_QWORD *)a5 - 2);
      *((_QWORD *)a5 - 2) = v25;
      v27 = *((_BYTE *)v6 - 20);
      *((_QWORD *)v6 - 2) = v26;
      LOBYTE(v25) = *((_BYTE *)a5 - 20);
      *((_BYTE *)a5 - 20) = v27 & 2 | v25 & 0xFD;
      LOBYTE(v26) = v25 & 2 | *(_BYTE *)(v6 - 5) & 0xFD;
      *((_BYTE *)v6 - 20) = v26;
      v28 = *(_BYTE *)(a5 - 5) & 1;
      *((_BYTE *)a5 - 20) = v26 & 1 | *(_BYTE *)(a5 - 5) & 0xFE;
      *((_BYTE *)v6 - 20) = v28 | *(_BYTE *)(v6 - 5) & 0xFE;
      *((_QWORD *)a5 - 1) = *((_QWORD *)v6 - 1);
      if ( (int *)a2 == v7 )
        goto LABEL_12;
LABEL_6:
      if ( (int *)a4 == v6 )
        goto LABEL_12;
    }
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v7, v6) )
      goto LABEL_4;
LABEL_10:
    v19 = *v6;
    goto LABEL_11;
  }
LABEL_12:
  v29 = sub_CA7DC0(v7, a2, a5);
  return sub_CA7DC0(v6, a4, v29);
}

