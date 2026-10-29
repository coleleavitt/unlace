__int64 __fastcall sub_1F48760(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  int v11; // eax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r12
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rdi
  unsigned __int64 v32; // r12
  int v33; // eax
  unsigned __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // r8
  __int64 v41; // r13
  unsigned __int64 v42; // r12
  int v43; // edx
  unsigned __int64 v44; // r12
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int64 v47; // r12
  int v48; // ecx
  unsigned __int64 v49; // r12
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 result; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx

  sub_1F458C0(a1, a2);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_QWORD *)(v6 + 856) == 0;
  v9 = v6;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  if ( !v8 )
  {
    sub_1EDF870(v7, v6);
    v4 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v4 + 8);
    v9 = *(_QWORD *)(v4 + 16);
  }
  v11 = __ROR4__(v10, 1);
  v12 = HIDWORD(v10);
  if ( v12 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v12 - 1));
  if ( v11 )
    v11 = v11 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 60) = v11;
  *(_QWORD *)(a2 + 80) = sub_1EEDED0(v7, v9, (_QWORD *)(v4 + 32), (_DWORD *)(v4 + 24));
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD **)(v13 + 8);
  v15 = sub_1EE13A0((__int64)v14, *(_QWORD *)(v13 + 16), (__int64 *)(v13 + 32), (_DWORD *)(v13 + 24));
  v20 = sub_1EDB980(v14, v15, v16, v17, v18, v19);
  sub_BADDA0(a2, v20);
  v21 = *(_QWORD *)(a1 + 16);
  v22 = *(_QWORD **)(v21 + 8);
  v23 = sub_1EE13A0((__int64)v22, *(_QWORD *)(v21 + 16), (__int64 *)(v21 + 32), (_DWORD *)(v21 + 24));
  *(_QWORD *)(a2 + 96) = sub_1EDB980(v22, v23, v24, v25, v26, v27);
  v28 = *(_QWORD *)(a1 + 16);
  v29 = *(unsigned int *)(v28 + 24);
  v30 = *(_QWORD *)(v28 + 16);
  v31 = *(_QWORD *)(v28 + 8);
  v8 = *(_QWORD *)(v30 + 856) == 0;
  *(_DWORD *)(v28 + 24) = v29 + 1;
  v32 = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 8 * v29);
  if ( !v8 )
    sub_1EDF870(v31, v30);
  v33 = __ROR4__(v32, 1);
  v34 = HIDWORD(v32);
  if ( v34 )
    v30 = *(_QWORD *)(*(_QWORD *)(v30 + 3320) + 8LL * (unsigned int)(v34 - 1));
  if ( v33 )
    v33 = v33 + *(_DWORD *)(v30 + 1648) - 2;
  *(_DWORD *)(a2 + 104) = v33;
  v35 = *(_QWORD *)(a1 + 16);
  v36 = *(_QWORD *)(v35 + 16);
  v37 = *(unsigned int *)(v35 + 24);
  v38 = *(_QWORD *)(v35 + 32);
  v39 = *(_QWORD *)(v35 + 8);
  v40 = *(_QWORD *)(v36 + 856);
  v41 = v36;
  *(_DWORD *)(v35 + 24) = v37 + 1;
  v42 = *(_QWORD *)(v38 + 8 * v37);
  if ( v40 )
  {
    sub_1EDF870(v39, v36);
    v35 = *(_QWORD *)(a1 + 16);
    v41 = *(_QWORD *)(v35 + 16);
    v39 = *(_QWORD *)(v35 + 8);
    v38 = *(_QWORD *)(v35 + 32);
    v40 = *(_QWORD *)(v41 + 856);
  }
  v43 = __ROR4__(v42, 1);
  v44 = HIDWORD(v42);
  if ( v44 )
    v36 = *(_QWORD *)(*(_QWORD *)(v36 + 3320) + 8LL * (unsigned int)(v44 - 1));
  if ( v43 )
    v43 = v43 + *(_DWORD *)(v36 + 1648) - 2;
  *(_DWORD *)(a2 + 108) = v43;
  v45 = *(unsigned int *)(v35 + 24);
  v46 = (unsigned int)(v45 + 1);
  v47 = *(_QWORD *)(v38 + 8 * v45);
  *(_DWORD *)(v35 + 24) = v46;
  if ( v40 )
  {
    sub_1EDF870(v39, v41);
    v35 = *(_QWORD *)(a1 + 16);
    v46 = *(unsigned int *)(v35 + 24);
    v38 = *(_QWORD *)(v35 + 32);
  }
  v48 = __ROR4__(v47, 1);
  v49 = HIDWORD(v47);
  if ( v49 )
    v41 = *(_QWORD *)(*(_QWORD *)(v41 + 3320) + 8LL * (unsigned int)(v49 - 1));
  if ( v48 )
    v48 = v48 + *(_DWORD *)(v41 + 1648) - 2;
  *(_DWORD *)(a2 + 112) = v48;
  v8 = *(_QWORD *)(v38 + 8 * v46) == 0;
  *(_DWORD *)(v35 + 24) = v46 + 1;
  *(_BYTE *)(a2 + 132) = !v8 | *(_BYTE *)(a2 + 132) & 0xFE;
  v50 = *(_QWORD *)(a1 + 16);
  v51 = *(unsigned int *)(v50 + 24);
  *(_DWORD *)(v50 + 24) = v51 + 1;
  *(_BYTE *)(a2 + 132) = (2 * (*(_QWORD *)(*(_QWORD *)(v50 + 32) + 8 * v51) != 0)) | *(_BYTE *)(a2 + 132) & 0xFD;
  v52 = *(_QWORD *)(a1 + 16);
  v53 = *(unsigned int *)(v52 + 24);
  *(_DWORD *)(v52 + 24) = v53 + 1;
  result = *(_QWORD *)(*(_QWORD *)(v52 + 32) + 8 * v53);
  *(_DWORD *)(a2 + 128) = result;
  if ( (_DWORD)result )
  {
    v55 = *(_QWORD *)(a1 + 16);
    result = *(unsigned int *)(v55 + 24);
    *(_DWORD *)(v55 + 24) = result + 1;
    v56 = *(_QWORD *)(*(_QWORD *)(v55 + 32) + 8 * result);
    if ( v56
      && (result = *(_QWORD *)(a1 + 32) - v56) != 0
      && (result += *(_QWORD *)(*(_QWORD *)(v55 + 16) + 432LL)) != 0 )
    {
      result = 2 * result + 1;
      *(_QWORD *)(a2 + 120) = result;
    }
    else
    {
      *(_QWORD *)(a2 + 120) = 0;
    }
  }
  return result;
}
