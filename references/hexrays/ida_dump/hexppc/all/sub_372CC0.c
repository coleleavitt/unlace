unsigned __int64 __fastcall sub_372CC0(__int64 a1, char a2, char a3)
{
  int v6; // ebx
  __int64 v7; // rax
  int *v8; // rsi
  int v9; // ebx
  int *v10; // rdi
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  int *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  int *v24; // rcx
  int *v25; // rdx
  int v26; // esi
  __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rax
  int *v30; // [rsp+0h] [rbp-48h] BYREF
  __int128 v31; // [rsp+8h] [rbp-40h]
  unsigned __int64 v32; // [rsp+18h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 464) <= 1 )
    return v32 - __readfsqword(0x28u);
  v30 = nullptr;
  v6 = 0;
  v31 = 0;
  do
  {
    while ( *(_DWORD *)sub_139840((_QWORD *)a1, v6) != 1 )
    {
      if ( ++v6 >= *(_DWORD *)(a1 + 464) )
        goto LABEL_8;
    }
    v7 = v31;
    v8 = v30;
    if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
    {
      v30 = (int *)qvector_reserve(&v30, v30, v31 + 1, 4);
      v8 = v30;
      v7 = v31;
    }
    v8[v7] = v6++;
    *(_QWORD *)&v31 = v31 + 1;
  }
  while ( v6 < *(_DWORD *)(a1 + 464) );
LABEL_8:
  v9 = v31;
  if ( (int)v31 > 1 )
  {
    v12 = sub_139840((_QWORD *)a1, *v30);
    if ( *(_DWORD *)v12 == 1 )
      v13 = *(_QWORD *)(v12 + 8);
    else
      v13 = -1;
    v14 = sub_139840((_QWORD *)a1, v30[1]);
    if ( *(_DWORD *)v14 == 1 )
      v15 = *(_QWORD *)(v14 + 8);
    else
      v15 = -1;
    if ( a2 )
    {
      if ( v13 >= v15 )
      {
        v10 = v30;
        if ( !v30 )
          return v32 - __readfsqword(0x28u);
        goto LABEL_10;
      }
    }
    else if ( v13 <= v15 )
    {
      goto LABEL_9;
    }
    v16 = v30;
    v17 = v9 - 1LL;
    v18 = v30[v17];
    v19 = v9 >> 1;
    v20 = v17;
    if ( a3 )
    {
      v21 = 0;
      while ( 1 )
      {
        v22 = *(_QWORD *)(a1 + 456);
        v23 = v16[v21++];
        --v20;
        v24 = (int *)(v22 + 4 * v18);
        v25 = (int *)(v22 + 4 * v23);
        v26 = *v25;
        *v25 = *v24;
        *v24 = v26;
        if ( v19 == v21 )
          break;
        v16 = v30;
        v18 = v30[v20];
      }
    }
    else
    {
      v27 = 0;
      while ( 1 )
      {
        v28 = sub_139840((_QWORD *)a1, v18);
        v29 = sub_139840((_QWORD *)a1, v30[v27]);
        sub_372980(v29, v28);
        ++v27;
        --v20;
        if ( v27 == v19 )
          break;
        LODWORD(v18) = v30[v20];
      }
    }
  }
LABEL_9:
  v10 = v30;
  if ( v30 )
  {
LABEL_10:
    *(_QWORD *)&v31 = 0;
    qfree(v10);
  }
  return v32 - __readfsqword(0x28u);
}
