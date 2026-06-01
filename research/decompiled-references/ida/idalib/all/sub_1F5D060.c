__int64 __fastcall sub_1F5D060(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  _QWORD *v12; // rbp
  int *v13; // r12
  __int64 v14; // r9
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r10
  bool v21; // zf
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // edi
  unsigned __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 result; // rax
  __int64 v34; // [rsp+8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+10h] [rbp-48h]
  __int64 v36; // [rsp+18h] [rbp-40h]

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 32);
  v6 = *(_DWORD *)(*a1 + 24);
  v7 = *(_QWORD *)(v5 + 8LL * v6);
  *(_DWORD *)(*a1 + 24) = v6 + 2;
  v8 = *(_QWORD *)(v5 + 8LL * (v6 + 1));
  v9 = 16LL * (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF);
  if ( (_DWORD)v7 )
  {
    v10 = *(_QWORD *)(v4 + 8);
    v11 = *(_QWORD *)(v4 + 16);
    v12 = (_QWORD *)(a2 + 40);
    v13 = (int *)(a2 + v9 + 40);
    v14 = a2 + v9 + 48 + 8LL * (unsigned int)(v7 - 1);
    do
    {
      while ( 1 )
      {
        v15 = *(unsigned int *)(v10 + 13072);
        v16 = *(_DWORD *)(v10 + 13072) - 2;
        *v12 = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8 * v15 - 8);
        v17 = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(v15 - 1) - 8);
        *(_DWORD *)(v10 + 13072) = v16;
        v12[1] = v17;
        if ( v8 )
          break;
        v13 += 2;
        v12 += 2;
        if ( (int *)v14 == v13 )
          goto LABEL_12;
      }
      v18 = *(unsigned int *)(v4 + 24);
      v19 = *(_QWORD *)(v4 + 32);
      v20 = v11;
      v21 = *(_QWORD *)(v11 + 856) == 0;
      v22 = (unsigned int)(v18 + 1);
      v23 = *(_QWORD *)(v19 + 8 * v18);
      *(_DWORD *)(v4 + 24) = v22;
      if ( !v21 )
      {
        v36 = v14;
        v35 = v23;
        v34 = v8;
        sub_1EDF870(v10, v11);
        v4 = *a1;
        v8 = v34;
        v23 = v35;
        v14 = v36;
        v22 = *(unsigned int *)(*a1 + 24);
        v19 = *(_QWORD *)(*a1 + 32);
        v10 = *(_QWORD *)(*a1 + 8);
        v20 = *(_QWORD *)(*a1 + 16);
      }
      v24 = __ROR4__(v23, 1);
      v25 = HIDWORD(v23);
      if ( v25 )
        v11 = *(_QWORD *)(*(_QWORD *)(v11 + 3320) + 8LL * (unsigned int)(v25 - 1));
      if ( v24 )
        v24 = v24 + *(_DWORD *)(v11 + 1648) - 2;
      v26 = v22 + 1;
      v27 = *(_QWORD *)(v19 + 8 * v22);
      *v13 = v24;
      v13 += 2;
      *(_DWORD *)(v4 + 24) = v26;
      v11 = v20;
      v12 += 2;
      *(v13 - 1) = v27;
    }
    while ( (int *)v14 != v13 );
  }
  else
  {
    v10 = *(_QWORD *)(v4 + 8);
    v11 = *(_QWORD *)(v4 + 16);
  }
LABEL_12:
  v28 = sub_1EE13A0(v10, v11, (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
  *(_QWORD *)(a2 + 32) = sub_1EDB980((_QWORD *)v10, v28, v29, v30, v31, v32);
  result = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 20) = result;
  return result;
}
