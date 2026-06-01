__int64 __fastcall sub_1F5D9C0(__int64 *a1, __int64 a2)
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
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rbp
  __int64 v21; // rsi
  bool v22; // zf
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rdi
  unsigned int v33; // eax
  int v34; // r8d
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 result; // rax
  _DWORD *v38; // rbp
  _DWORD *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r12
  __int64 v43; // rdi
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r14
  int v47; // eax
  __int64 v48; // rcx
  int v49; // r8d
  _QWORD *v50; // rax
  __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax

  sub_1F58FC0(a1, a2);
  v4 = *(_DWORD *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 32);
  v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v4 + 1));
  v7 = v4 + 3;
  v8 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v4 + 2));
  *(_DWORD *)(*a1 + 24) = v7;
  *(_BYTE *)(a2 + 27) = (8 * (v8 & 3)) | *(_BYTE *)(a2 + 27) & 0xE7;
  v9 = *a1;
  v10 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v9 + 24) = v10 + 1;
  *(_BYTE *)(a2 + 27) = (2 * (*(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10) != 0)) | *(_BYTE *)(a2 + 27) & 0xFD;
  v11 = *a1;
  v12 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v11 + 24) = v12 + 1;
  *(_BYTE *)(a2 + 27) = (4 * (*(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12) & 1)) | *(_BYTE *)(a2 + 27) & 0xFB;
  v13 = *a1;
  v14 = *(unsigned int *)(*a1 + 24);
  v15 = *(_QWORD *)(*a1 + 32);
  v16 = *(_QWORD *)(v15 + 8 * v14);
  v17 = (unsigned int)(v14 + 1);
  *(_DWORD *)(*a1 + 24) = v17;
  if ( (_DWORD)v16 == 1 )
  {
    v17 = *(_QWORD *)(v13 + 8);
    v48 = *(_QWORD *)(*(_QWORD *)(v17 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v17 + 13072))-- - 8);
    *(_BYTE *)(a2 + 26) = 1;
    *(_QWORD *)(a2 + 40) = v48;
    v13 = *a1;
    LODWORD(v17) = *(_DWORD *)(*a1 + 24);
    v15 = *(_QWORD *)(*a1 + 32);
  }
  else if ( (int)v16 > 1 )
  {
    if ( (int)v16 <= 3 )
    {
      v46 = 0;
      if ( (unsigned int)v17 < *(_DWORD *)(v13 + 40) )
      {
        v49 = v14;
        v50 = *(_QWORD **)(v13 + 8);
        v51 = *(_QWORD *)(v13 + 16);
        v52 = *(_QWORD *)(v15 + 8 * v17);
        *(_DWORD *)(v13 + 24) = v49 + 2;
        v53 = sub_1F15160(v50, v51, v52);
        v13 = *a1;
        v46 = v53;
      }
      v47 = sub_1EE7490(v13);
      *(_QWORD *)(a2 + 40) = v46;
      *(_DWORD *)(a2 + 28) = v47;
      *(_BYTE *)(a2 + 26) = ((_DWORD)v16 == 3) + 2;
      v13 = *a1;
      LODWORD(v17) = *(_DWORD *)(*a1 + 24);
      v15 = *(_QWORD *)(*a1 + 32);
    }
  }
  else if ( !(_DWORD)v16 )
  {
    v18 = sub_1F19370(v13);
    *(_BYTE *)(a2 + 26) = 0;
    *(_QWORD *)(a2 + 40) = v18;
    v13 = *a1;
    LODWORD(v17) = *(_DWORD *)(*a1 + 24);
    v15 = *(_QWORD *)(*a1 + 32);
  }
  v19 = (unsigned int)(v17 + 1);
  v20 = *(_QWORD **)(v13 + 8);
  v21 = *(_QWORD *)(v13 + 16);
  v22 = *(_QWORD *)(v15 + 8LL * (unsigned int)v17) == 0;
  *(_DWORD *)(v13 + 24) = v19;
  if ( v22 )
  {
    *(_DWORD *)(v13 + 24) = v17 + 2;
    v28 = sub_1EF55A0((__int64)v20, v21, *(_QWORD *)(v15 + 8 * v19));
    *(_BYTE *)(a2 + 27) &= ~1u;
  }
  else
  {
    v23 = sub_1EE13A0((__int64)v20, v21, (__int64 *)(v13 + 32), (_DWORD *)(v13 + 24));
    v28 = sub_1EDB980(v20, v23, v24, v25, v26, v27);
    *(_BYTE *)(a2 + 27) |= 1u;
  }
  *(_QWORD *)(a2 + 16) = v28;
  *(_DWORD *)(a2 + 32) = sub_1EE7490(*a1);
  v29 = sub_1EE7490(*a1);
  v30 = *(unsigned __int16 *)(a2 + 24);
  *(_DWORD *)(a2 + 36) = v29;
  if ( v30 )
  {
    v31 = a2 + 48;
    v32 = *(_QWORD *)(*a1 + 8);
    v33 = *(_DWORD *)(v32 + 13072);
    v34 = v33 - v30;
    do
    {
      v35 = v33--;
      v31 += 8;
      *(_QWORD *)(v31 - 8) = *(_QWORD *)(*(_QWORD *)(v32 + 13064) + 8 * v35 - 8);
    }
    while ( v34 != v33 );
    *(_DWORD *)(v32 + 13072) = v34;
    v36 = *(unsigned __int16 *)(a2 + 24);
  }
  else
  {
    v36 = 0;
  }
  result = 8 * v36 + 8;
  if ( (_DWORD)v6 )
  {
    v38 = (_DWORD *)(a2 + result + 40);
    v39 = (_DWORD *)(result + a2 + 4LL * (unsigned int)(v6 - 1) + 44);
    do
    {
      while ( 1 )
      {
        v40 = *a1;
        v41 = *(unsigned int *)(*a1 + 24);
        v42 = *(_QWORD *)(*a1 + 16);
        v43 = *(_QWORD *)(*a1 + 8);
        v22 = *(_QWORD *)(v42 + 856) == 0;
        *(_DWORD *)(v40 + 24) = v41 + 1;
        v44 = *(_QWORD *)(*(_QWORD *)(v40 + 32) + 8 * v41);
        if ( !v22 )
          sub_1EDF870(v43, v42);
        result = (unsigned int)__ROR4__(v44, 1);
        v45 = HIDWORD(v44);
        if ( v45 )
          v42 = *(_QWORD *)(*(_QWORD *)(v42 + 3320) + 8LL * (unsigned int)(v45 - 1));
        if ( !(_DWORD)result )
          break;
        ++v38;
        result = (unsigned int)(result + *(_DWORD *)(v42 + 1648) - 2);
        *(v38 - 1) = result;
        if ( v38 == v39 )
          return result;
      }
      *v38++ = 0;
    }
    while ( v39 != v38 );
  }
  return result;
}
