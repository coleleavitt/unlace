__int64 __fastcall sub_15A69E0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r11
  int v10; // r10d
  int v11; // r9d
  int v12; // r8d
  int v13; // edi
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rsi
  char v22; // r8
  char v23; // di
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rsi
  unsigned __int64 v27; // rbp
  __int64 v28; // r12
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // r14
  _QWORD *v32; // r13
  _QWORD *v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  char *v39; // rdi
  char v40; // al
  char v41; // al
  char v42; // al
  char v43; // al
  char v44; // al
  char v45; // al

  v3 = a3 - (_QWORD)a2;
  v4 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 5);
  result = 0x7FFFFFFFFFFFFFE0LL;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = v4;
  if ( v3 > 0x7FFFFFFFFFFFFFE0LL )
  {
    v4 = 0x155555555555555LL;
LABEL_5:
    while ( 1 )
    {
      v7 = 96 * v4;
      result = operator new(96 * v4, (const std::nothrow_t *)&std::nothrow);
      if ( result )
        break;
      v4 >>= 1;
      if ( !v4 )
        goto LABEL_3;
    }
    v8 = a2[1];
    v9 = *a2;
    a1[1] = v4;
    v10 = *((_DWORD *)a2 + 4);
    v11 = *((_DWORD *)a2 + 5);
    a1[2] = result;
    v12 = *((_DWORD *)a2 + 6);
    v13 = *((_DWORD *)a2 + 7);
    *(_QWORD *)(result + 8) = v8;
    v14 = *((_DWORD *)a2 + 8);
    *(_QWORD *)(result + 48) = 0;
    *(_QWORD *)(result + 56) = 0;
    *(_QWORD *)(result + 40) = 0;
    v15 = a2[5];
    *(_QWORD *)result = v9;
    *(_QWORD *)(result + 40) = v15;
    v16 = a2[6];
    *(_DWORD *)(result + 16) = v10;
    *(_DWORD *)(result + 20) = v11;
    *(_DWORD *)(result + 24) = v12;
    *(_DWORD *)(result + 28) = v13;
    *(_DWORD *)(result + 32) = v14;
    a2[5] = 0;
    v17 = *(_QWORD *)(result + 48);
    *(_QWORD *)(result + 48) = v16;
    v18 = a2[7];
    a2[6] = v17;
    v19 = *(_QWORD *)(result + 56);
    *(_QWORD *)(result + 56) = v18;
    LOBYTE(v18) = *((_BYTE *)a2 + 64);
    a2[7] = v19;
    LOBYTE(v19) = v18 & 1 | *(_BYTE *)(result + 64) & 0xFE;
    *(_BYTE *)(result + 64) = v19;
    LOBYTE(v19) = a2[8] & 2 | v19 & 0xFD;
    *(_BYTE *)(result + 64) = v19;
    LOBYTE(v19) = a2[8] & 4 | v19 & 0xFB;
    *(_BYTE *)(result + 64) = v19;
    LOBYTE(v19) = a2[8] & 8 | v19 & 0xF7;
    *(_BYTE *)(result + 64) = v19;
    LOBYTE(v19) = a2[8] & 0x10 | v19 & 0xEF;
    *(_BYTE *)(result + 64) = v19;
    LOBYTE(v19) = a2[8] & 0x20 | v19 & 0xDF;
    *(_BYTE *)(result + 64) = v19;
    *(_BYTE *)(result + 64) = a2[8] & 0x40 | v19 & 0xBF;
    *(_QWORD *)(result + 72) = a2[9];
    *(_QWORD *)(result + 80) = a2[10];
    *(_QWORD *)(result + 88) = a2[11];
    v20 = result + 96;
    if ( result + v7 == result + 96 )
    {
      v28 = result;
    }
    else
    {
      do
      {
        v21 = *(_QWORD *)(v20 - 96);
        v22 = *(_BYTE *)(v20 - 32);
        v20 += 96;
        v23 = *(_BYTE *)(v20 - 128);
        *(_QWORD *)(v20 - 96) = v21;
        *(_QWORD *)(v20 - 88) = *(_QWORD *)(v20 - 184);
        *(_DWORD *)(v20 - 80) = *(_DWORD *)(v20 - 176);
        *(_DWORD *)(v20 - 76) = *(_DWORD *)(v20 - 172);
        *(_DWORD *)(v20 - 72) = *(_DWORD *)(v20 - 168);
        *(_DWORD *)(v20 - 68) = *(_DWORD *)(v20 - 164);
        *(_DWORD *)(v20 - 64) = *(_DWORD *)(v20 - 160);
        v24 = *(_QWORD *)(v20 - 152);
        *(_QWORD *)(v20 - 152) = 0;
        *(_QWORD *)(v20 - 56) = v24;
        v25 = *(_QWORD *)(v20 - 144);
        *(_QWORD *)(v20 - 144) = 0;
        *(_QWORD *)(v20 - 48) = v25;
        v26 = *(_QWORD *)(v20 - 136);
        *(_QWORD *)(v20 - 136) = 0;
        *(_QWORD *)(v20 - 40) = v26;
        *(_BYTE *)(v20 - 32) = *(_BYTE *)(v20 - 128) & 0x40
                             | *(_BYTE *)(v20 - 128) & 0x20
                             | *(_BYTE *)(v20 - 128) & 0x10
                             | *(_BYTE *)(v20 - 128) & 8
                             | *(_BYTE *)(v20 - 128) & 4
                             | v23 & 2
                             | v22 & 1
                             | *(_BYTE *)(v20 - 32) & 0x80;
        *(_QWORD *)(v20 - 24) = *(_QWORD *)(v20 - 120);
        *(_QWORD *)(v20 - 16) = *(_QWORD *)(v20 - 112);
        *(_QWORD *)(v20 - 8) = *(_QWORD *)(v20 - 104);
      }
      while ( result + v7 != v20 );
      v27 = (0x2AAAAAAAAAAAAABLL * ((unsigned __int64)(v7 - 192) >> 5)) & 0x7FFFFFFFFFFFFFFLL;
      v28 = result + 32 * (3 * v27 + 3);
      v29 = 96 * v27 + result;
      v9 = *(_QWORD *)(v29 + 96);
      v10 = *(_DWORD *)(v29 + 112);
      v11 = *(_DWORD *)(v29 + 116);
      v12 = *(_DWORD *)(v29 + 120);
      v13 = *(_DWORD *)(v29 + 124);
      v14 = *(_DWORD *)(v29 + 128);
    }
    v30 = *(_QWORD *)(v28 + 8);
    v31 = (_QWORD *)a2[5];
    a2[7] = 0;
    a2[5] = 0;
    v32 = (_QWORD *)a2[6];
    a2[1] = v30;
    v33 = v31;
    a2[6] = 0;
    v34 = *(_QWORD *)(v28 + 40);
    *a2 = v9;
    a2[5] = v34;
    v35 = *(_QWORD *)(v28 + 48);
    *((_DWORD *)a2 + 4) = v10;
    *((_DWORD *)a2 + 5) = v11;
    *((_DWORD *)a2 + 6) = v12;
    *((_DWORD *)a2 + 7) = v13;
    *((_DWORD *)a2 + 8) = v14;
    *(_QWORD *)(v28 + 40) = 0;
    v36 = a2[6];
    a2[6] = v35;
    v37 = *(_QWORD *)(v28 + 56);
    *(_QWORD *)(v28 + 48) = v36;
    v38 = a2[7];
    a2[7] = v37;
    for ( *(_QWORD *)(v28 + 56) = v38; v32 != v33; v33 += 8 )
    {
      while ( 1 )
      {
        v39 = (char *)v33[3];
        if ( v39 == (char *)(v33 + 5) )
          break;
        operator delete(v39);
        v33 += 8;
        if ( v32 == v33 )
          goto LABEL_12;
      }
    }
LABEL_12:
    if ( v31 )
      operator delete(v31);
    v40 = *(_BYTE *)(v28 + 64) & 1 | a2[8] & 0xFE;
    *((_BYTE *)a2 + 64) = v40;
    v41 = *(_BYTE *)(v28 + 64) & 2 | v40 & 0xFD;
    *((_BYTE *)a2 + 64) = v41;
    v42 = *(_BYTE *)(v28 + 64) & 4 | v41 & 0xFB;
    *((_BYTE *)a2 + 64) = v42;
    v43 = *(_BYTE *)(v28 + 64) & 8 | v42 & 0xF7;
    *((_BYTE *)a2 + 64) = v43;
    v44 = *(_BYTE *)(v28 + 64) & 0x10 | v43 & 0xEF;
    *((_BYTE *)a2 + 64) = v44;
    v45 = *(_BYTE *)(v28 + 64) & 0x20 | v44 & 0xDF;
    *((_BYTE *)a2 + 64) = v45;
    *((_BYTE *)a2 + 64) = *(_BYTE *)(v28 + 64) & 0x40 | v45 & 0xBF;
    a2[9] = *(_QWORD *)(v28 + 72);
    a2[10] = *(_QWORD *)(v28 + 80);
    result = *(_QWORD *)(v28 + 88);
    a2[11] = result;
  }
  else
  {
    if ( v3 > 0 )
      goto LABEL_5;
LABEL_3:
    a1[2] = 0;
    a1[1] = 0;
  }
  return result;
}
