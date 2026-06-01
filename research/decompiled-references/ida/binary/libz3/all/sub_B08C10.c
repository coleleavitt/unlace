__int64 __fastcall sub_B08C10(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v8; // rdx
  unsigned int v9; // r13d
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13; // rax
  int *v14; // rax
  int v15; // ecx
  int v16; // esi
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rcx
  char v20; // di
  char v21; // di
  __int64 v22; // rsi
  __int64 v23; // rcx
  char v24; // di
  __int64 v25; // [rsp+0h] [rbp-58h]
  _QWORD v26[10]; // [rsp+8h] [rbp-50h] BYREF

  v4 = 40LL * a3;
  v6 = a1 + 72;
  v8 = v4 + *(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16);
  v9 = *(_DWORD *)v8;
  v25 = v6;
  v26[0] = 0;
  v26[1] = 0;
  if ( (*(_BYTE *)(v8 + 12) & 1) != 0 )
    sub_182EA00(v6, v26, v8 + 8);
  else
    LODWORD(v26[0]) = *(_DWORD *)(v8 + 8);
  sub_1839610(*(_QWORD *)(a2 + 128), a2 + 136, v26);
  v10 = *(unsigned int *)(a2 + 120);
  if ( (unsigned int)v10 < a3 )
  {
    v13 = *(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16);
    v10 = v13 + 40 * v10;
    v14 = (int *)(v4 + v13);
    v15 = *v14;
    *v14 = *(_DWORD *)v10;
    v16 = *(_DWORD *)(v10 + 8);
    *(_DWORD *)v10 = v15;
    v17 = v14[2];
    v14[2] = v16;
    v18 = *(_QWORD *)(v10 + 16);
    *(_DWORD *)(v10 + 8) = v17;
    v19 = *((_QWORD *)v14 + 2);
    *((_QWORD *)v14 + 2) = v18;
    v20 = *(_BYTE *)(v10 + 12);
    *(_QWORD *)(v10 + 16) = v19;
    LOBYTE(v18) = *((_BYTE *)v14 + 12);
    *((_BYTE *)v14 + 12) = v20 & 2 | v18 & 0xFD;
    LOBYTE(v19) = v18 & 2 | *(_BYTE *)(v10 + 12) & 0xFD;
    *(_BYTE *)(v10 + 12) = v19;
    v21 = *((_BYTE *)v14 + 12);
    *((_BYTE *)v14 + 12) = v19 & 1 | v21 & 0xFE;
    LODWORD(v18) = *(_DWORD *)(v10 + 24);
    *(_BYTE *)(v10 + 12) = v21 & 1 | *(_BYTE *)(v10 + 12) & 0xFE;
    LODWORD(v19) = v14[6];
    v14[6] = v18;
    v22 = *(_QWORD *)(v10 + 32);
    *(_DWORD *)(v10 + 24) = v19;
    v23 = *((_QWORD *)v14 + 4);
    *((_QWORD *)v14 + 4) = v22;
    *(_QWORD *)(v10 + 32) = v23;
    LOBYTE(v22) = *((_BYTE *)v14 + 28);
    *((_BYTE *)v14 + 28) = *(_BYTE *)(v10 + 28) & 2 | v22 & 0xFD;
    LOBYTE(v23) = v22 & 2 | *(_BYTE *)(v10 + 28) & 0xFD;
    *(_BYTE *)(v10 + 28) = v23;
    v24 = v14[7] & 1;
    *((_BYTE *)v14 + 28) = v23 & 1 | v14[7] & 0xFE;
    *(_BYTE *)(v10 + 28) = v24 | *(_BYTE *)(v10 + 28) & 0xFE;
    LODWORD(v10) = *(_DWORD *)(a2 + 120);
  }
  *(_DWORD *)(a2 + 120) = v10 + 1;
  if ( (*(_BYTE *)(a2 + 108) & 1) != 0 || (v26[0] & 0x100000000LL) != 0 )
  {
    if ( (int)sub_182EB00(v25, a2 + 104, v26) >= 0 )
      goto LABEL_9;
    if ( (v26[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(*(_QWORD *)(a2 + 96), a2 + 104, v26);
      goto LABEL_9;
    }
    v11 = v26[0];
    goto LABEL_8;
  }
  v11 = v26[0];
  if ( *(_DWORD *)(a2 + 104) < SLODWORD(v26[0]) )
  {
LABEL_8:
    *(_BYTE *)(a2 + 108) &= ~1u;
    *(_DWORD *)(a2 + 104) = v11;
  }
LABEL_9:
  sub_B089D0(a1, v9, a2);
  return sub_182EF00(v25, v26);
}

