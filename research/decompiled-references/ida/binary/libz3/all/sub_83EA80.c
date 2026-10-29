void __fastcall sub_83EA80(__int64 *a1)
{
  __int64 v2; // rdi
  char *v3; // r13
  int v4; // ecx
  unsigned int v5; // esi
  char *v6; // rax
  __int64 v7; // rdx
  char *v8; // rbp
  void *v9; // r12
  char *v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // esi

  if ( *((_DWORD *)a1 + 3) || *((_DWORD *)a1 + 4) )
  {
    v2 = *((unsigned int *)a1 + 2);
    v3 = (char *)*a1;
    v4 = 0;
    v5 = *((_DWORD *)a1 + 2);
    v6 = (char *)*a1;
    v7 = *a1 + 48 * v2;
    if ( *a1 == v7 )
      goto LABEL_23;
    do
    {
      while ( *((_DWORD *)v6 + 1) )
      {
        *((_DWORD *)v6 + 1) = 0;
        v6 += 48;
        if ( (char *)v7 == v6 )
          goto LABEL_8;
      }
      v6 += 48;
      ++v4;
    }
    while ( (char *)v7 != v6 );
LABEL_8:
    if ( v5 <= 0x10 || 3 * v5 >= 4 * v4 )
      goto LABEL_23;
    if ( v3 )
    {
      v8 = v3;
      do
      {
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v8 + 8);
        v10 = v8 + 24;
        v8 += 48;
        sub_182CBA0(v9, v10);
      }
      while ( v8 != &v3[48 * v2] );
      sub_186B220(v3);
      v11 = *((_DWORD *)a1 + 2);
      *a1 = 0;
      v11 >>= 1;
      v12 = v11;
      *((_DWORD *)a1 + 2) = v11;
      v13 = sub_186B270(48LL * v11);
      if ( !v11 )
      {
LABEL_22:
        *a1 = v13;
LABEL_23:
        *(__int64 *)((char *)a1 + 12) = 0;
        return;
      }
    }
    else
    {
      v18 = v5 >> 1;
      *a1 = 0;
      v12 = v18;
      *((_DWORD *)a1 + 2) = v18;
      v13 = sub_186B270(48LL * v18);
    }
    v14 = v13;
    v15 = v13 + 48 * v12;
    do
    {
      *(_BYTE *)(v14 + 12) &= 0xFCu;
      *(_BYTE *)(v14 + 28) &= 0xFCu;
      v14 += 48;
      *(_QWORD *)(v14 - 48) = 0;
      *(_QWORD *)(v14 - 32) = 0;
      *(_QWORD *)(v14 - 16) = 0;
    }
    while ( v14 != v15 );
    v16 = v13;
    if ( ((48 * (_BYTE)v12) & 0x10) == 0 || (v16 = v13 + 48, *(_DWORD *)(v13 + 8) = 0, v13 + 48 != v15) )
    {
      do
      {
        *(_DWORD *)(v16 + 8) = 0;
        v16 += 96;
        *(_DWORD *)(v16 - 40) = 0;
      }
      while ( v16 != v15 );
    }
    v17 = v13;
    if ( ((48 * (_BYTE)v12) & 0x10) == 0 || (v17 = v13 + 48, *(_DWORD *)(v13 + 24) = 1, v13 + 48 != v15) )
    {
      do
      {
        *(_DWORD *)(v17 + 24) = 1;
        v17 += 96;
        *(_DWORD *)(v17 - 24) = 1;
      }
      while ( v17 != v15 );
    }
    goto LABEL_22;
  }
}

