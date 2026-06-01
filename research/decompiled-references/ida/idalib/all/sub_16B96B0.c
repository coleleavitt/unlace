__int64 __fastcall sub_16B96B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r14d
  __int64 v12; // r13
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v17; // rdi
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rax
  __int64 *v20; // rax
  int v21; // eax
  bool v22; // cc
  __int64 *v23; // rax
  __int64 v24; // rcx
  void *v25; // [rsp+8h] [rbp-50h] BYREF
  void *v26; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+18h] [rbp-40h]
  char v28; // [rsp+1Ch] [rbp-3Ch]
  __int64 v29; // [rsp+20h] [rbp-38h] BYREF
  int v30; // [rsp+28h] [rbp-30h]

  v6 = (unsigned int)a3;
  if ( (unsigned int)sub_B76070(**(_QWORD **)a2, a2, a3, a4) <= (unsigned int)a3 )
    goto LABEL_2;
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 120LL);
  v17 = *(_QWORD *)(v7 + 8LL * (unsigned int)v6);
  if ( (*(_BYTE *)(v17 + 29) & 1) == 0 )
    goto LABEL_2;
  v18 = sub_B8C3D0(v17, a2, v7, v8, v9, v10);
  v7 = *v18;
  v19 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( v7 < v19 )
  {
    v8 = v7;
    while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 102 )
    {
      v8 += 8;
      if ( v19 == v8 )
        goto LABEL_2;
    }
    if ( v19 != v8 )
      goto LABEL_16;
LABEL_2:
    v11 = 0;
    goto LABEL_3;
  }
  if ( v7 == v19 )
    goto LABEL_2;
  if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 102 )
  {
    v23 = (__int64 *)(v19 + 8);
    do
    {
      v8 = (__int64)v23;
      if ( (__int64 *)v7 == v23 )
        goto LABEL_2;
      v24 = *v23++;
    }
    while ( *(_WORD *)(v24 + 36) != 102 );
  }
LABEL_16:
  v8 = *(_QWORD *)v7;
  if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 102 )
  {
    v20 = (__int64 *)(v7 + 8);
    do
      v8 = *v20++;
    while ( *(_WORD *)(v8 + 36) != 102 );
  }
  v11 = *(_DWORD *)(v8 + 40);
LABEL_3:
  v12 = *(_QWORD *)(a2 + 8);
  if ( **(_BYTE **)v12
    && ((v13 = **(_QWORD **)(v12 + 8), v14 = *(_DWORD *)(v13 + 48), (unsigned int)v6 >= v14)
      ? (v6 = (unsigned int)sub_B76070(**(_QWORD **)(v12 + 16), v13, v7, v8) + (_DWORD)v6 - v14)
      : (v6 = *(unsigned int *)(*(_QWORD *)(v13 + 56) + 4 * v6)),
        *(_DWORD *)(**(_QWORD **)(v12 + 24) + 16LL) <= (unsigned int)v6)
    || (v15 = **(_QWORD **)(a2 + 16), *(_DWORD *)(v15 + 16) <= (unsigned int)v6)
    || !(unsigned __int8)sub_C4B850(
                           *(_QWORD *)(v15 + 8 * (((*(_BYTE *)(v15 + 2) & 8) != 0) + v6) + 40),
                           &v25,
                           *(_QWORD *)(*(_QWORD *)(a2 + 24) + 248LL),
                           v11) )
  {
    *(_BYTE *)(a1 + 16) = 0;
  }
  else
  {
    v27 = 64;
    v28 = 1;
    v26 = v25;
    sub_2206D90(&v29, &v26, **(unsigned int **)(a2 + 32));
    v21 = v30;
    v22 = v27 <= 0x40;
    *(_BYTE *)(a1 + 12) = 1;
    *(_BYTE *)(a1 + 16) = 1;
    *(_DWORD *)(a1 + 8) = v21;
    *(_QWORD *)a1 = v29;
    if ( !v22 && v26 )
      operator delete[](v26);
  }
  return a1;
}
