__int64 __fastcall sub_1F5E7A0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 result; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  int v29; // r10d
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdx

  sub_1F58FC0(a1, a2);
  v4 = *(unsigned int *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 32);
  v6 = *(_QWORD *)(v5 + 8 * v4);
  v7 = (unsigned int)(*(_DWORD *)(*a1 + 24) + 1);
  *(_DWORD *)(*a1 + 24) = v4 + 2;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(v5 + 8 * v7) & 1)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v8 = *a1;
  v9 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  *(_BYTE *)(a2 + 2) = (16 * (*(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9) & 1)) | *(_BYTE *)(a2 + 2) & 0xEF;
  v10 = *a1;
  v11 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v10 + 24) = v11 + 1;
  *(_BYTE *)(a2 + 2) = (32 * (*(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11) & 1)) | *(_BYTE *)(a2 + 2) & 0xDF;
  v12 = *a1;
  v13 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v12 + 24) = v13 + 1;
  *(_BYTE *)(a2 + 2) = ((*(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13) & 1) << 6) | *(_BYTE *)(a2 + 2) & 0xBF;
  v14 = *a1;
  v15 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v14 + 24) = v15 + 1;
  *(_BYTE *)(a2 + 2) = ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15) << 7) | *(_BYTE *)(a2 + 2) & 0x7F;
  v16 = *a1;
  v17 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v16 + 24) = v17 + 1;
  *(_BYTE *)(a2 + 3) = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v17) & 7 | *(_BYTE *)(a2 + 3) & 0xF8;
  v18 = *a1;
  v19 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v18 + 24) = v19 + 1;
  *(_BYTE *)(a2 + 3) = (8 * (*(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19) & 1)) | *(_BYTE *)(a2 + 3) & 0xF7;
  *(_DWORD *)(a2 + 4) = sub_1EE7490(*a1);
  v20 = *(_QWORD **)(*a1 + 8);
  v21 = sub_1EE13A0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v20, v21, v22, v23, v24, v25);
  result = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 24) = result;
  if ( (_DWORD)v6 )
  {
    v27 = 0;
    v28 = *(_QWORD *)(*a1 + 8);
    LODWORD(result) = *(_DWORD *)(v28 + 13072);
    v29 = result - v6;
    do
    {
      v30 = (unsigned int)result;
      result = (unsigned int)(result - 1);
      v31 = *(_QWORD *)(*(_QWORD *)(v28 + 13064) + 8 * v30 - 8);
      *(_DWORD *)(v28 + 13072) = result;
      v32 = a2 + 48;
      if ( (*(_WORD *)a2 & 0x1FF) != 0x72 )
        v32 = a2 + 40;
      *(_QWORD *)(v32 + v27) = v31;
      v27 += 8;
    }
    while ( (_DWORD)result != v29 );
  }
  return result;
}
