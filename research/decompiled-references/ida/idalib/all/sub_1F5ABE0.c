__int16 __fastcall sub_1F5ABE0(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  int v11; // ebp
  __int64 v12; // rsi
  char v13; // al
  char v14; // dl
  int v15; // eax
  unsigned __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rsi
  unsigned __int64 v20; // r12
  __int64 v21; // rcx
  unsigned int v22; // edx
  int v23; // r8d
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rdi

  sub_1F58FC0((__int64 *)a1, a2);
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v7 = *(_QWORD *)(v6 + 8 * v5);
  v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 24LL) + 1);
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = v5 + 2;
  v9 = *(_QWORD *)(v6 + 8 * v8);
  *(_BYTE *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 20) = 1;
  *(_DWORD *)(a1 + 16) = v9;
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(a2 + 2) & 0xEF | (16 * (v9 & 1));
  LODWORD(v6) = *(_DWORD *)(a1 + 20);
  v10 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = v6 + 2;
  v11 = v10 & (1 << v6);
  v12 = (unsigned int)(1 << (v6 + 1));
  *(_BYTE *)(a2 + 2) = (((v10 & (unsigned int)v12) != 0) << 6) | *(_BYTE *)(a2 + 2) & 0xBF;
  LODWORD(v6) = *(_DWORD *)(a1 + 20);
  LOBYTE(v9) = ((1 << v6) & *(_DWORD *)(a1 + 16)) != 0;
  *(_DWORD *)(a1 + 20) = v6 + 1;
  v13 = ((_BYTE)v9 << 7) | *(_BYTE *)(a2 + 2) & 0x7F;
  v14 = *(_BYTE *)(a2 + 3);
  *(_BYTE *)(a2 + 2) = v13;
  if ( (v14 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 3) = v14 & 0xFE;
    if ( v13 >= 0 || (v15 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((v13 & 8) != 0) + 1LL) + 32), v12, a3)) == 0 )
    {
      v15 = sub_EEB7E0(*(_QWORD *)(a2 + 32), v12, a3);
      if ( !v15 )
      {
        if ( *(_DWORD *)(a2 + 16) )
        {
          v16 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
          if ( v16 )
            v15 = sub_EEB7E0(v16, v12, a3);
        }
      }
    }
    *(_BYTE *)(a2 + 3) |= 1u;
    *(_DWORD *)(a2 + 24) = v15;
  }
  v17 = sub_1EE7490(*(_QWORD *)a1);
  v18 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 20) = v17;
  v19 = *(_QWORD *)(v18 + 8);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 13064) + 8LL * *(unsigned int *)(v19 + 13072) - 8);
  v21 = 0;
  v22 = *(_DWORD *)(v19 + 13072) - 1;
  *(_DWORD *)(v19 + 13072) = v22;
  v23 = v22 - v7;
  *(_QWORD *)(a2 + 32) = v20;
  if ( (_DWORD)v7 )
  {
    do
    {
      v24 = v22--;
      v21 += 8;
      v25 = *(_QWORD *)(*(_QWORD *)(v19 + 13064) + 8 * v24 - 8);
      *(_DWORD *)(v19 + 13072) = v22;
      *(_QWORD *)(v21 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 24) = v25;
    }
    while ( v22 != v23 );
  }
  if ( v11 )
  {
    v26 = *(unsigned int *)(v18 + 24);
    *(_DWORD *)(v18 + 24) = v26 + 1;
    v27 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v26);
    v28 = (_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
    *v28 = HIDWORD(v27);
    v28[1] = v27;
  }
  LOWORD(v29) = *(_WORD *)a2 & 0x1FF;
  if ( (_WORD)v29 == 89 )
  {
    if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
    {
      v29 = *(_DWORD *)(a2 + 24);
    }
    else if ( *(char *)(a2 + 2) >= 0
           || (v29 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), v19, a3)) == 0 )
    {
      v29 = sub_EEB7E0(v20, v19, a3);
      if ( !v29 )
      {
        if ( *(_DWORD *)(a2 + 16) )
        {
          v30 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
          if ( v30 )
            v29 = sub_EEB7E0(v30, v19, a3);
        }
      }
    }
    *(_DWORD *)(a2 + 24) = v29;
    *(_BYTE *)(a2 + 3) |= 1u;
  }
  return v29;
}
