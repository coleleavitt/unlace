void __fastcall sub_899DB0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int *v4; // r8
  int v5; // r9d
  int *v8; // rax
  unsigned int v9; // edi
  int v10; // esi
  int *v11; // rdx
  int v12; // ecx
  __int64 v13; // r11
  __int64 v14; // rcx
  char v15; // r12
  char v16; // r12
  __int64 v17; // r11
  __int64 v18; // rcx
  char v19; // r12
  char v20; // r12
  __int64 v21; // r11
  unsigned int v22; // r13d
  __int64 v23; // rax
  int *v24; // r12

  v4 = (int *)*a1;
  if ( *a1 )
  {
    v5 = *(v4 - 1);
    v8 = (int *)*a1;
    v9 = 0;
    v10 = 0;
    if ( v5 )
    {
      do
      {
        if ( v8[8] != -1 )
        {
          if ( v10 != v9 )
          {
            v11 = &v4[10 * v9];
            v12 = *v11;
            *v11 = *v8;
            v13 = *((_QWORD *)v8 + 1);
            *v8 = v12;
            v14 = *((_QWORD *)v11 + 1);
            *((_QWORD *)v11 + 1) = v13;
            v15 = *((_BYTE *)v8 + 4);
            *((_QWORD *)v8 + 1) = v14;
            LOBYTE(v13) = *((_BYTE *)v11 + 4);
            *((_BYTE *)v11 + 4) = v15 & 2 | v13 & 0xFD;
            LOBYTE(v14) = v13 & 2 | v8[1] & 0xFD;
            *((_BYTE *)v8 + 4) = v14;
            v16 = *((_BYTE *)v11 + 4);
            *((_BYTE *)v11 + 4) = v14 & 1 | v16 & 0xFE;
            LODWORD(v13) = v8[4];
            *((_BYTE *)v8 + 4) = v16 & 1 | v8[1] & 0xFE;
            LODWORD(v14) = v11[4];
            v11[4] = v13;
            v17 = *((_QWORD *)v8 + 3);
            v8[4] = v14;
            v18 = *((_QWORD *)v11 + 3);
            *((_QWORD *)v11 + 3) = v17;
            v19 = *((_BYTE *)v8 + 20);
            *((_QWORD *)v8 + 3) = v18;
            LOBYTE(v17) = *((_BYTE *)v11 + 20);
            *((_BYTE *)v11 + 20) = v19 & 2 | v17 & 0xFD;
            LOBYTE(v18) = v17 & 2 | v8[5] & 0xFD;
            *((_BYTE *)v8 + 20) = v18;
            v20 = v11[5] & 1;
            *((_BYTE *)v11 + 20) = v18 & 1 | v11[5] & 0xFE;
            *((_BYTE *)v8 + 20) = v20 | v8[5] & 0xFE;
            LODWORD(v18) = v8[8];
            v11[8] = v18;
            v21 = (unsigned int)v8[9];
            v11[9] = v21;
            *(_DWORD *)(*(_QWORD *)(*a3 + 24LL * (unsigned int)v18) + 8 * v21 + 4) = v9;
          }
          ++v9;
        }
        ++v10;
        v8 += 10;
      }
      while ( v5 != v10 );
    }
    v22 = *((_DWORD *)a1 + 2);
    while ( v22 < *(v4 - 1) )
    {
      v23 = v22++;
      v24 = &v4[10 * v23];
      sub_182F200(a2, v24);
      sub_182EF00(a2, v24 + 4);
      v4 = (int *)*a1;
      *((_BYTE *)v24 + 20) &= ~1u;
      v24[4] = 1;
      if ( !v4 )
        goto LABEL_11;
    }
    *(v4 - 1) = *((_DWORD *)a1 + 2);
  }
LABEL_11:
  *((_DWORD *)a1 + 3) = -1;
}

