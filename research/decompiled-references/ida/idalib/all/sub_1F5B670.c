unsigned __int64 __fastcall sub_1F5B670(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r15
  unsigned __int64 result; // rax
  unsigned int v23; // r14d
  unsigned int v24; // edx
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  _QWORD *v27; // rsi
  unsigned int v28; // r13d
  __int64 v29; // rax
  _DWORD *v30; // rcx
  _QWORD *v31; // rsi
  unsigned int v32; // edx
  _QWORD *v33; // r12
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v5 + 13072))-- - 8);
  if ( v6 )
  {
    *(_QWORD *)(a2 + 48) = v6 | *(_QWORD *)(a2 + 48) & 7LL | 4;
    *(_QWORD *)(v6 + 48) = a2 & 0xFFFFFFFFFFFFFFFBLL | *(_QWORD *)(v6 + 48) & 3LL;
    v4 = *a1;
  }
  v7 = sub_1EE7490(v4);
  v8 = *a1;
  *(_DWORD *)(a2 + 40) = v7;
  *(_DWORD *)(a2 + 44) = sub_1EE7490(v8);
  v11 = *a1;
  v12 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v11 + 24) = v12 + 1;
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v11 + 8);
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v14 + 13072))-- - 8);
    *(_QWORD *)(a2 + 56) = v15 & 0xFFFFFFFFFFFFFFFDLL;
  }
  else
  {
    v33 = *(_QWORD **)(v11 + 8);
    v15 = 0;
    v34 = sub_1EE13A0((__int64)v33, *(_QWORD *)(v11 + 16), (__int64 *)(v11 + 32), (_DWORD *)(v11 + 24));
    *(_QWORD *)(a2 + 56) = sub_1EDB980(v33, v34, v35, v36, v37, v38) | 2;
  }
  v16 = *a1;
  v17 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v16 + 24) = v17 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v17) != 0)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v18 = *a1;
  v19 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v18 + 24) = v19 + 1;
  v20 = *(_QWORD *)(v18 + 32);
  v21 = *(_QWORD *)(v20 + 8 * v19);
  result = sub_C0B130((_QWORD *)a2, *(_QWORD **)(*(_QWORD *)(v18 + 8) + 144LL), v21, v20, v9, v10);
  if ( v13 )
  {
    v23 = 0;
    if ( (_DWORD)v21 )
    {
      do
      {
        v25 = *(_QWORD *)(*a1 + 8);
        v26 = *(_DWORD **)(*(_QWORD *)(v25 + 13064) + 8LL * *(unsigned int *)(v25 + 13072) - 8);
        v27 = *(_QWORD **)(v25 + 144);
        --*(_DWORD *)(v25 + 13072);
        if ( !v26 )
          v26 = (_DWORD *)v15;
        v24 = v23++;
        result = sub_C0B210(a2, v27, v24, v26);
      }
      while ( (_DWORD)v21 != v23 );
    }
  }
  else if ( (_DWORD)v21 )
  {
    v28 = 0;
    do
    {
      v29 = *(_QWORD *)(*a1 + 8);
      v30 = *(_DWORD **)(*(_QWORD *)(v29 + 13064) + 8LL * *(unsigned int *)(v29 + 13072) - 8);
      v31 = *(_QWORD **)(v29 + 144);
      --*(_DWORD *)(v29 + 13072);
      v32 = v28++;
      result = sub_C0B210(a2, v31, v32, v30);
    }
    while ( (_DWORD)v21 != v28 );
  }
  return result;
}
