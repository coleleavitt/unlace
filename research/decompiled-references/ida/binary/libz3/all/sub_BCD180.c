__int64 __fastcall sub_BCD180(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned int *v6; // r13
  __int64 v7; // rax
  char v8; // al
  unsigned int *v9; // rbp
  __int64 v10; // r15
  __int64 *v11; // r13
  __int64 *v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rdi
  unsigned int v15; // esi
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // edi
  unsigned int v19; // ecx
  __int64 v20; // rdi
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // [rsp+8h] [rbp-50h] BYREF
  unsigned int *v27; // [rsp+10h] [rbp-48h] BYREF
  __int64 v28; // [rsp+18h] [rbp-40h]

  v1 = 0;
  if ( *(_DWORD *)(a1 + 496) )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v3 + 8984) != qword_1C7ED88 )
        return 1;
      if ( *(_BYTE *)(v3 + 2416) )
      {
        if ( !*(_BYTE *)(a1 + 4170) )
          return *(unsigned __int8 *)(v3 + 2416);
        return 1;
      }
      v5 = *(_QWORD *)(a1 + 528);
      v26 = 0;
      v6 = *(unsigned int **)(*(_QWORD *)(a1 + 512) + 8LL * *(unsigned int *)(v5 + 4LL * v1));
      v7 = *(_QWORD *)(a1 + 24);
      v27 = nullptr;
      v28 = v7;
      v8 = sub_BC9C90(a1, (__int64)v6, &v26, (__int64 *)&v27);
      v9 = v27;
      if ( v8 )
      {
        if ( v6 != v27 )
          break;
      }
      ++v1;
      if ( v27 )
      {
LABEL_17:
        v20 = v28;
        if ( v9[2]-- == 1 )
          sub_15D7BC0(v20, v9);
      }
LABEL_12:
      if ( v1 >= *(_DWORD *)(a1 + 496) )
        goto LABEL_13;
    }
    v10 = v26;
    *(_BYTE *)(a1 + 4169) = 1;
    sub_BB77A0((_QWORD *)(a1 + 136), v6, (__int64)v9, v10);
    v11 = sub_966570(a1, v6);
    v12 = sub_966570(a1, v9);
    sub_BC4820(a1, v10, v11, v12);
    v13 = *(_DWORD *)(a1 + 496);
    v14 = *(_QWORD *)(a1 + 528);
    v15 = *(_DWORD *)(v14 + 4LL * (v13 - 1));
    v16 = v13 - 1;
    v17 = *(_QWORD *)(a1 + 512);
    if ( v1 + 1 < v13 )
    {
      v22 = *(_QWORD *)(v17 + 8LL * v15);
      v23 = *(unsigned int *)(v14 + 4LL * v1);
      if ( (unsigned int)v23 < *(_DWORD *)(a1 + 500) )
      {
        if ( v17 )
          v24 = *(unsigned int *)(v17 - 4);
        else
          v24 = 0;
        sub_BD4400(a1 + 496, v1, v24);
        v17 = *(_QWORD *)(a1 + 512);
        if ( !v17 || (v19 = *(_DWORD *)(v17 - 4), v19 == *(_DWORD *)(v17 - 8)) )
        {
          sub_BD4570(a1 + 512);
          v17 = *(_QWORD *)(a1 + 512);
          v19 = *(_DWORD *)(v17 - 4);
        }
        v18 = v19 + 1;
        v25 = *(_QWORD *)(a1 + 528);
        *(_QWORD *)(v17 + 8LL * v19) = v22;
        *(_DWORD *)(v17 - 4) = v19 + 1;
        v15 = *(_DWORD *)(v25 + 4LL * (unsigned int)(*(_DWORD *)(a1 + 496) - 1));
        v16 = *(_DWORD *)(a1 + 496) - 1;
        goto LABEL_10;
      }
      *(_QWORD *)(v17 + 8 * v23) = v22;
    }
    if ( !v17 )
      goto LABEL_11;
    v18 = *(_DWORD *)(v17 - 4);
    v19 = v18 - 1;
LABEL_10:
    if ( v15 == v19 && *(_DWORD *)(a1 + 500) < v18 )
    {
      *(_DWORD *)(v17 - 4) = v15;
      v16 = *(_DWORD *)(a1 + 496) - 1;
    }
LABEL_11:
    v9 = v27;
    *(_DWORD *)(a1 + 496) = v16;
    if ( v9 )
      goto LABEL_17;
    goto LABEL_12;
  }
LABEL_13:
  if ( *(_BYTE *)(a1 + 4170) )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v3 + 8984) != qword_1C7ED88 )
    return 1;
  else
    return *(unsigned __int8 *)(v3 + 2416);
}

