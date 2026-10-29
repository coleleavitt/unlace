__int64 __fastcall sub_1F57B70(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // r9d
  int v10; // r8d
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // esi
  __int64 v18; // r10
  __int64 v19; // rdx
  int v20; // ebp
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rdi
  __int64 result; // rax
  __int64 v29; // rcx

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(_QWORD *)(v6 + 8 * v5);
  *(_BYTE *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 20) = 3;
  *(_DWORD *)(a1 + 16) = v7;
  v8 = *(unsigned int *)(v4 + 24);
  v9 = v7 & 2;
  v10 = v7 & 4;
  v11 = v8 + 1;
  v12 = *(_QWORD *)(v6 + 8 * v8);
  *(_DWORD *)(v4 + 24) = v11;
  *(_BYTE *)(a2 + 1) = (2 * (v12 & 7)) | *(_BYTE *)(a2 + 1) & 0xF1;
  v13 = *(_QWORD *)(v4 + 8);
  v14 = *(unsigned int *)(v13 + 13072);
  v15 = (unsigned int)(v14 - 1);
  v16 = *(_QWORD *)(*(_QWORD *)(v13 + 13064) + 8 * v14 - 8);
  v17 = *(_DWORD *)(v13 + 13072);
  *(_DWORD *)(v13 + 13072) = v15;
  *(_QWORD *)(a2 + 8LL * (((*(_QWORD *)a2 & 0x4000) != 0) + ((*(_QWORD *)a2 & 0x2000) != 0)) + 16) = v16;
  v18 = *(_QWORD *)(*(_QWORD *)(v13 + 13064) + 8 * v15 - 8);
  v19 = (unsigned int)(v17 - 2);
  *(_DWORD *)(v13 + 13072) = v19;
  *(_QWORD *)(a2 + 8LL * (((*(_QWORD *)a2 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x2000) != 0) + 1) + 16) = v18;
  v20 = v7 & 1;
  if ( v20 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v13 + 13064) + 8 * v19 - 8);
    LODWORD(v19) = v17 - 3;
    *(_DWORD *)(v13 + 13072) = v17 - 3;
    *(_QWORD *)(a2 + 8LL * (((*(_QWORD *)a2 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x2000) != 0) + 2) + 16) = v21;
  }
  if ( v9 )
  {
    v22 = (unsigned int)v19;
    LODWORD(v19) = v19 - 1;
    v23 = *(_QWORD *)(*(_QWORD *)(v13 + 13064) + 8 * v22 - 8);
    *(_DWORD *)(v13 + 13072) = v19;
    *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x4000) != 0) + 16) = v23;
  }
  if ( v10 )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(v13 + 13064) + 8LL * (unsigned int)v19 - 8);
    *(_DWORD *)(v13 + 13072) = v19 - 1;
    *(_QWORD *)(a2 + 16) = v29;
  }
  v24 = sub_1EE7490(v4);
  v25 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 4) = v24;
  v26 = sub_1EE7490(v25);
  v27 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = v26;
  result = sub_1EE7490(v27);
  *(_DWORD *)(a2 + 12) = result;
  if ( v20 )
  {
    result = sub_1EE7490(*(_QWORD *)a1);
    *(_DWORD *)(a2
              + 8LL
              * (((*(_QWORD *)a2 & 0x1000) != 0) + ((*(_QWORD *)a2 & 0x2000) != 0) + 2 + ((*(_QWORD *)a2 & 0x4000) != 0))
              + 16) = result;
  }
  return result;
}
