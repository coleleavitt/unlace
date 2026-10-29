unsigned __int64 __fastcall sub_1F5F2A0(__int64 *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r12
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // r13
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 result; // rax
  __int64 v36; // r8
  __int64 v37; // rdi
  unsigned int v38; // r9d
  unsigned int v39; // edx
  __int64 v40; // rsi

  sub_1F58FC0(a1, a2);
  v4 = *(_DWORD *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 32);
  v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v4 + 3));
  v7 = v4 + 5;
  v8 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v4 + 4));
  *(_DWORD *)(*a1 + 24) = v7;
  *(_BYTE *)(a2 + 2) = (8 * (v8 & 1)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v9 = *a1;
  v10 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v9 + 24) = v10 + 1;
  *(_BYTE *)(a2 + 2) = (32 * (*(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10) & 1)) | *(_BYTE *)(a2 + 2) & 0xDF;
  v11 = *a1;
  v12 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v11 + 24) = v12 + 1;
  *(_BYTE *)(a2 + 2) = ((*(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12) & 1) << 6) | *(_BYTE *)(a2 + 2) & 0xBF;
  v13 = *a1;
  v14 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v13 + 24) = v14 + 1;
  *(_BYTE *)(a2 + 2) = ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14) << 7) | *(_BYTE *)(a2 + 2) & 0x7F;
  v15 = *a1;
  v16 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v15 + 24) = v16 + 1;
  *(_BYTE *)(a2 + 3) = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8 * v16) & 1 | *(_BYTE *)(a2 + 3) & 0xFE;
  v17 = *a1;
  v18 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v17 + 24) = v18 + 1;
  *(_BYTE *)(a2 + 3) = (2 * (*(_QWORD *)(*(_QWORD *)(v17 + 32) + 8 * v18) & 3)) | *(_BYTE *)(a2 + 3) & 0xF9;
  v19 = *(_QWORD **)(*a1 + 8);
  v20 = sub_1EE13A0((__int64)v19, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v19, v20, v21, v22, v23, v24);
  v25 = *(_QWORD **)(*a1 + 8);
  v26 = sub_1EE13A0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v31 = sub_1EDB980(v25, v26, v27, v28, v29, v30);
  v32 = *a1;
  *(_QWORD *)(a2 + 24) = v31;
  *(_QWORD *)(a2 + 32) = sub_1F19370(v32);
  if ( v6 )
    *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((*(_QWORD *)a2 & 0x100000LL) != 0) + (BYTE3(*(_QWORD *)a2) & 1)) + 56) = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 40) = sub_1EEDED0(
                           *(_QWORD *)(*a1 + 8),
                           *(_QWORD *)(*a1 + 16),
                           (_QWORD *)(*a1 + 32),
                           (_DWORD *)(*a1 + 24));
  v33 = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v34 = *(_QWORD *)a2;
  *(_QWORD *)(a2 + 48) = v33;
  result = a2 + 56;
  v36 = a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((v34 & 0x100000) != 0) + (BYTE3(v34) & 1u)) + 56;
  if ( v36 != a2 + 56 )
  {
    v37 = *(_QWORD *)(*a1 + 8);
    v38 = *(_DWORD *)(v37 + 13072);
    v39 = v38;
    do
    {
      v40 = v39;
      result += 8LL;
      --v39;
      *(_QWORD *)(result - 8) = *(_QWORD *)(*(_QWORD *)(v37 + 13064) + 8 * v40 - 8);
    }
    while ( result != v36 );
    result = (result - a2 - 64) >> 3;
    *(_DWORD *)(v37 + 13072) = v38 - 1 - result;
  }
  return result;
}
