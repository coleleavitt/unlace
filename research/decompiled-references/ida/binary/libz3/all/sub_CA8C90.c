_DWORD *__fastcall sub_CA8C90(_DWORD *a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // r15
  _DWORD *v8; // r12
  _DWORD *v9; // rbx
  _DWORD *result; // rax
  __int64 v11; // rbp
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // cl
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // rax
  char v19; // cl
  char v20; // cl
  unsigned int v21; // eax
  bool v22; // zf
  int v23; // eax
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // cl
  char v28; // cl
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // cl
  char v32; // cl
  __int64 v33; // rdx
  __int64 v34; // rsi
  _DWORD *v35; // rbp
  _DWORD *v36; // rbx
  __int64 i; // r13
  __int64 v38; // rdx
  __int64 v39; // rax
  char v40; // si
  char v41; // si
  __int64 v42; // rdx
  __int64 v43; // rax
  char v44; // si
  char v45; // si
  unsigned int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  char v50; // si
  char v51; // si
  __int64 v52; // rdx
  __int64 v53; // rax
  char v54; // si
  char v55; // si

  v6 = (__int64)a6;
  v8 = a1;
  v9 = a2;
  if ( a4 <= a5 )
  {
    result = sub_CA7DC0(a1, (__int64)a2, a6);
    v11 = (__int64)result;
    if ( (_DWORD *)v6 != result && a2 != (_DWORD *)a3 )
    {
      do
      {
        if ( (*(_BYTE *)(v6 + 20) & 1) != 0 || *(_DWORD *)(v6 + 16) != 1 || (v9[5] & 1) != 0 || v9[4] != 1 )
        {
          LOBYTE(v21) = sub_1848D40(qword_1C7F2C0, v6, v9);
        }
        else if ( (*(_BYTE *)(v6 + 4) & 1) != 0 || (v9[1] & 1) != 0 )
        {
          v21 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v6, v9) >> 31;
        }
        else
        {
          LOBYTE(v21) = *(_DWORD *)v6 < *v9;
        }
        v22 = (_BYTE)v21 == 0;
        v23 = *v8;
        if ( v22 )
        {
          v24 = *(_DWORD *)v6;
          v6 += 40;
          v8 += 10;
          *(v8 - 10) = v24;
          v25 = *(_QWORD *)(v6 - 32);
          *(_DWORD *)(v6 - 40) = v23;
          v26 = *((_QWORD *)v8 - 4);
          *((_QWORD *)v8 - 4) = v25;
          v27 = *(_BYTE *)(v6 - 36);
          *(_QWORD *)(v6 - 32) = v26;
          LOBYTE(v25) = *((_BYTE *)v8 - 36);
          *((_BYTE *)v8 - 36) = v27 & 2 | v25 & 0xFD;
          LOBYTE(v26) = v25 & 2 | *(_BYTE *)(v6 - 36) & 0xFD;
          *(_BYTE *)(v6 - 36) = v26;
          v28 = *((_BYTE *)v8 - 36);
          *((_BYTE *)v8 - 36) = v26 & 1 | v28 & 0xFE;
          LODWORD(v25) = *(_DWORD *)(v6 - 24);
          *(_BYTE *)(v6 - 36) = v28 & 1 | *(_BYTE *)(v6 - 36) & 0xFE;
          LODWORD(v26) = *(v8 - 6);
          *(v8 - 6) = v25;
          v29 = *(_QWORD *)(v6 - 16);
          *(_DWORD *)(v6 - 24) = v26;
          v30 = *((_QWORD *)v8 - 2);
          *((_QWORD *)v8 - 2) = v29;
          v31 = *(_BYTE *)(v6 - 20);
          *(_QWORD *)(v6 - 16) = v30;
          LOBYTE(v29) = *((_BYTE *)v8 - 20);
          *((_BYTE *)v8 - 20) = v31 & 2 | v29 & 0xFD;
          LOBYTE(v30) = v29 & 2 | *(_BYTE *)(v6 - 20) & 0xFD;
          *(_BYTE *)(v6 - 20) = v30;
          v32 = *(_BYTE *)(v8 - 5) & 1;
          *((_BYTE *)v8 - 20) = v30 & 1 | *(_BYTE *)(v8 - 5) & 0xFE;
          *(_BYTE *)(v6 - 20) = v32 | *(_BYTE *)(v6 - 20) & 0xFE;
          result = *(_DWORD **)(v6 - 8);
          *((_QWORD *)v8 - 1) = result;
          if ( v11 == v6 )
            return result;
        }
        else
        {
          v12 = *v9;
          v8 += 10;
          v9 += 10;
          *(v8 - 10) = v12;
          v13 = *((_QWORD *)v9 - 4);
          *(v9 - 10) = v23;
          v14 = *((_QWORD *)v8 - 4);
          *((_QWORD *)v8 - 4) = v13;
          v15 = *((_BYTE *)v9 - 36);
          *((_QWORD *)v9 - 4) = v14;
          LOBYTE(v13) = *((_BYTE *)v8 - 36);
          *((_BYTE *)v8 - 36) = v15 & 2 | v13 & 0xFD;
          LOBYTE(v14) = v13 & 2 | *(_BYTE *)(v9 - 9) & 0xFD;
          *((_BYTE *)v9 - 36) = v14;
          v16 = *((_BYTE *)v8 - 36);
          *((_BYTE *)v8 - 36) = v14 & 1 | v16 & 0xFE;
          LODWORD(v13) = *(v9 - 6);
          *((_BYTE *)v9 - 36) = v16 & 1 | *(_BYTE *)(v9 - 9) & 0xFE;
          LODWORD(v14) = *(v8 - 6);
          *(v8 - 6) = v13;
          v17 = *((_QWORD *)v9 - 2);
          *(v9 - 6) = v14;
          v18 = *((_QWORD *)v8 - 2);
          *((_QWORD *)v8 - 2) = v17;
          v19 = *((_BYTE *)v9 - 20);
          *((_QWORD *)v9 - 2) = v18;
          LOBYTE(v17) = *((_BYTE *)v8 - 20);
          *((_BYTE *)v8 - 20) = v19 & 2 | v17 & 0xFD;
          LOBYTE(v18) = v17 & 2 | *(_BYTE *)(v9 - 5) & 0xFD;
          *((_BYTE *)v9 - 20) = v18;
          v20 = *(_BYTE *)(v8 - 5) & 1;
          *((_BYTE *)v8 - 20) = v18 & 1 | *(_BYTE *)(v8 - 5) & 0xFE;
          *((_BYTE *)v9 - 20) = v20 | *(_BYTE *)(v9 - 5) & 0xFE;
          result = *((_DWORD **)v9 - 1);
          *((_QWORD *)v8 - 1) = result;
          if ( v11 == v6 )
            return result;
        }
      }
      while ( (_DWORD *)a3 != v9 );
    }
    if ( v11 != v6 )
      return sub_CA7DC0((_DWORD *)v6, v11, v8);
    return result;
  }
  result = sub_CA7DC0(a2, a3, a6);
  v33 = a3;
  v34 = (__int64)result;
  if ( a1 == v9 )
    return (_DWORD *)sub_CA8B50(v6, v34, v33);
  if ( (_DWORD *)v6 != result )
  {
    v35 = result - 10;
    v36 = v9 - 10;
    for ( i = a3 - 40; ; i -= 40 )
    {
      if ( (v36[5] & 1) != 0 || v36[4] != 1 || (v35[5] & 1) != 0 || v35[4] != 1 )
      {
        LOBYTE(v46) = sub_1848D40(qword_1C7F2C0, v36, v35);
      }
      else if ( (v36[1] & 1) != 0 || (v35[1] & 1) != 0 )
      {
        v46 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v36, v35) >> 31;
      }
      else
      {
        LOBYTE(v46) = *v36 < *v35;
      }
      v22 = (_BYTE)v46 == 0;
      v47 = *(_DWORD *)i;
      if ( v22 )
      {
        *(_DWORD *)i = *v35;
        v48 = *((_QWORD *)v35 + 1);
        *v35 = v47;
        v49 = *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 8) = v48;
        v50 = *((_BYTE *)v35 + 4);
        *((_QWORD *)v35 + 1) = v49;
        LOBYTE(v48) = *(_BYTE *)(i + 4);
        *(_BYTE *)(i + 4) = v50 & 2 | v48 & 0xFD;
        LOBYTE(v49) = v48 & 2 | v35[1] & 0xFD;
        *((_BYTE *)v35 + 4) = v49;
        v51 = *(_BYTE *)(i + 4);
        *(_BYTE *)(i + 4) = v49 & 1 | v51 & 0xFE;
        LODWORD(v48) = v35[4];
        *((_BYTE *)v35 + 4) = v51 & 1 | v35[1] & 0xFE;
        LODWORD(v49) = *(_DWORD *)(i + 16);
        *(_DWORD *)(i + 16) = v48;
        v52 = *((_QWORD *)v35 + 3);
        v35[4] = v49;
        v53 = *(_QWORD *)(i + 24);
        *(_QWORD *)(i + 24) = v52;
        v54 = *((_BYTE *)v35 + 20);
        *((_QWORD *)v35 + 3) = v53;
        LOBYTE(v52) = *(_BYTE *)(i + 20);
        *(_BYTE *)(i + 20) = v54 & 2 | v52 & 0xFD;
        LOBYTE(v53) = v52 & 2 | v35[5] & 0xFD;
        *((_BYTE *)v35 + 20) = v53;
        v55 = *(_BYTE *)(i + 20) & 1;
        *(_BYTE *)(i + 20) = v53 & 1 | *(_BYTE *)(i + 20) & 0xFE;
        *((_BYTE *)v35 + 20) = v55 | v35[5] & 0xFE;
        result = *((_DWORD **)v35 + 4);
        *(_QWORD *)(i + 32) = result;
        if ( (_DWORD *)v6 == v35 )
          return result;
        v35 -= 10;
      }
      else
      {
        *(_DWORD *)i = *v36;
        v38 = *((_QWORD *)v36 + 1);
        *v36 = v47;
        v39 = *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 8) = v38;
        v40 = *((_BYTE *)v36 + 4);
        *((_QWORD *)v36 + 1) = v39;
        LOBYTE(v38) = *(_BYTE *)(i + 4);
        *(_BYTE *)(i + 4) = v40 & 2 | v38 & 0xFD;
        LOBYTE(v39) = v38 & 2 | v36[1] & 0xFD;
        *((_BYTE *)v36 + 4) = v39;
        v41 = *(_BYTE *)(i + 4);
        *(_BYTE *)(i + 4) = v39 & 1 | v41 & 0xFE;
        LODWORD(v38) = v36[4];
        *((_BYTE *)v36 + 4) = v41 & 1 | v36[1] & 0xFE;
        LODWORD(v39) = *(_DWORD *)(i + 16);
        *(_DWORD *)(i + 16) = v38;
        v42 = *((_QWORD *)v36 + 3);
        v36[4] = v39;
        v43 = *(_QWORD *)(i + 24);
        *(_QWORD *)(i + 24) = v42;
        v44 = *((_BYTE *)v36 + 20);
        *((_QWORD *)v36 + 3) = v43;
        LOBYTE(v42) = *(_BYTE *)(i + 20);
        *(_BYTE *)(i + 20) = v44 & 2 | v42 & 0xFD;
        LOBYTE(v43) = v42 & 2 | v36[5] & 0xFD;
        *((_BYTE *)v36 + 20) = v43;
        v45 = *(_BYTE *)(i + 20) & 1;
        *(_BYTE *)(i + 20) = v43 & 1 | *(_BYTE *)(i + 20) & 0xFE;
        *((_BYTE *)v36 + 20) = v45 | v36[5] & 0xFE;
        *(_QWORD *)(i + 32) = *((_QWORD *)v36 + 4);
        if ( a1 == v36 )
        {
          v34 = (__int64)(v35 + 10);
          v33 = i;
          return (_DWORD *)sub_CA8B50(v6, v34, v33);
        }
        v36 -= 10;
      }
    }
  }
  return result;
}

