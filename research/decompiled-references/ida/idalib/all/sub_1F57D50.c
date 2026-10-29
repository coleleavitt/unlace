__int64 __fastcall sub_1F57D50(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // r13
  int v23; // eax
  __int64 v24; // rdi
  __int64 result; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rsi
  int v30; // r12d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdi

  v4 = *a1;
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(_DWORD *)(v4 + 24);
  v8 = *(_QWORD *)(v6 + 8 * v5);
  v9 = *(_QWORD *)(v6 + 8LL * (unsigned int)(v5 + 1));
  v10 = *(_QWORD *)(v6 + 8LL * (unsigned int)(v7 + 2)) == 0;
  *(_DWORD *)(v4 + 24) = v7 + 3;
  if ( !v10 )
    *(_BYTE *)(a2 + 1) |= 8u;
  v11 = *(_QWORD *)(v4 + 8);
  v12 = *(unsigned int *)(v11 + 13072);
  v13 = (unsigned int)(v12 - 1);
  v14 = *(_QWORD *)(*(_QWORD *)(v11 + 13064) + 8 * v12 - 8);
  v15 = *(_DWORD *)(v11 + 13072);
  *(_DWORD *)(v11 + 13072) = v13;
  v16 = (unsigned int)(v15 - 2);
  *(_QWORD *)(a2 + 8LL * (((*(_QWORD *)a2 & 0x200) != 0) + ((*(_QWORD *)a2 & 0x400) != 0)) + 24) = v14;
  v17 = *(_QWORD *)(*(_QWORD *)(v11 + 13064) + 8 * v13 - 8);
  *(_DWORD *)(v11 + 13072) = v16;
  *(_QWORD *)(a2 + 8LL * (((*(_QWORD *)a2 & 0x200) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x400) != 0) + 1) + 24) = v17;
  if ( v8 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v11 + 13064) + 8 * v16 - 8);
    LODWORD(v16) = v15 - 3;
    *(_DWORD *)(v11 + 13072) = v15 - 3;
    *(_QWORD *)(a2 + 24) = v18;
  }
  if ( v9 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(v11 + 13064) + 8LL * (unsigned int)v16 - 8);
    *(_DWORD *)(v11 + 13072) = v16 - 1;
    *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 24) = v19;
  }
  v20 = sub_1EE7490(v4);
  v21 = *a1;
  v22 = 0;
  *(_DWORD *)(a2 + 4) = v20;
  v23 = sub_1EE7490(v21);
  v24 = *a1;
  *(_DWORD *)(a2 + 16) = v23;
  result = sub_1EE7490(v24);
  v28 = *a1;
  *(_DWORD *)(a2 + 20) = result;
  v29 = *(unsigned int *)(v28 + 24);
  v30 = *(_DWORD *)(v28 + 40);
  v31 = v29;
  if ( v30 != (_DWORD)v29 )
  {
    while ( 1 )
    {
      v32 = (unsigned int)(v31 + 1);
      v33 = *(_QWORD *)(v28 + 32);
      v34 = *(_QWORD *)(v28 + 8);
      *(_DWORD *)(v28 + 24) = v32;
      result = sub_1EDE020(v34, *(_QWORD *)(v33 + 8 * v29), v32, v28, v26, v27);
      if ( v22 )
      {
        v28 = *a1;
        *(_QWORD *)(v22 + 16) = result;
        v29 = *(unsigned int *)(v28 + 24);
        v31 = v29;
        if ( (_DWORD)v29 == v30 )
          return result;
      }
      else
      {
        v28 = *a1;
        *(_QWORD *)(a2 + 8) = result;
        v29 = *(unsigned int *)(v28 + 24);
        v31 = v29;
        if ( (_DWORD)v29 == v30 )
          return result;
      }
      v22 = result;
    }
  }
  return result;
}
