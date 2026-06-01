__int64 __fastcall sub_E00E90(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  char v10; // dl
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  unsigned int v19; // eax

  if ( !*(_QWORD *)a1 )
    return *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( !v3 )
    return *(_QWORD *)a1;
  v4 = *(_QWORD *)(v3 + 280);
  v5 = v4 + 24LL * *(unsigned int *)(v3 + 288);
  if ( v4 == v5 )
    return *(_QWORD *)a1;
  if ( a3 != *(_DWORD *)(v4 + 8) )
  {
    v6 = v4 + 24;
    do
    {
      v4 = v6;
      if ( v6 == v5 )
        return *(_QWORD *)a1;
      v6 += 24;
    }
    while ( *(_DWORD *)(v6 - 16) != a3 );
  }
  v8 = *(_QWORD *)v4;
  v9 = *(_QWORD *)(*(_QWORD *)v4 + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(*(_QWORD *)v4 + 16LL) & 4) != 0 )
    v9 = *(_QWORD *)v9;
  v10 = *(_BYTE *)(v9 + 8);
  v12 = v9 - 64;
  v13 = 0;
  if ( (v10 & 0x7Fu) - 58 < 4 )
    v13 = v12;
  v18 = sub_EBA840(a2, v13);
  if ( *(char *)(v8 + 29) < 0 )
    v8 = sub_B4E9E0(v8);
  v19 = *(_DWORD *)(v8 + 68);
  if ( (v19 & 0xFFFFFFF0) == 0 )
  {
    sub_B5AD70(v8, v13, v14, v15, v16, v17);
    v19 = *(_DWORD *)(v8 + 68);
  }
  sub_A742B0(a2, *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL * ((v19 >> 4) - 1)));
  return *(_QWORD *)(v4 + 16);
}

