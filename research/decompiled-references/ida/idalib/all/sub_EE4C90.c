__int64 __fastcall sub_EE4C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  char *v17; // rsi
  signed __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 *v25; // rax
  __int64 *v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 i; // r15
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  bool v40; // dl
  __int64 v41; // rcx
  signed __int64 v42; // rax
  signed __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // [rsp+0h] [rbp-58h] BYREF

  v6 = *(_QWORD *)a1;
  v7 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v8 = v6;
  sub_AAE350((__int64)&v45, v6, v7);
  v9 = *(_QWORD *)a1;
  v10 = v45;
  v15 = sub_B8C970(a2, v8, v11, v12, v13, v14);
  v16 = sub_A97FF0(v9, v15);
  v17 = *(char **)(a2 + 48);
  v18 = v16;
  if ( sub_AAE330(*(_QWORD *)a1, (__int64)v17) )
  {
    v17 = *(char **)(a2 + 48);
    v43 = sub_A980A0(*(_QWORD *)a1, (__int64)v17);
    if ( v18 < v43 )
      v18 = v43;
  }
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
    goto LABEL_3;
  for ( i = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        ;
        i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    v31 = *(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v32 = *(unsigned __int8 *)(v31 + 16);
    v19 = (unsigned int)(v32 - 2);
    if ( (unsigned __int8)(v32 - 2) > 4u )
      goto LABEL_20;
    v33 = sub_F63050(i, v17, v19, v20);
    if ( !v33 )
      break;
    i = v33;
  }
  v31 = *(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v32) = *(_BYTE *)(v31 + 16);
LABEL_20:
  if ( (_BYTE)v32 == 48 )
  {
    v34 = *(_QWORD *)a1;
    v17 = (char *)sub_F60F10(v31, v17, v19, v20, v21);
    v39 = sub_EDE580(v34, v17, v35, v36, v37, v38);
    v40 = 0;
    v41 = v39[9];
    if ( v41 )
      v40 = (*(_BYTE *)(v41 + 40) & 4) != 0;
    v20 = *(_BYTE *)(a1 + 316) & 0xEF;
    v19 = (unsigned int)v20 | (16 * v40);
    *(_BYTE *)(a1 + 316) = v19;
    v42 = v39[5];
    if ( v18 < v42 )
      v18 = v42;
  }
  if ( *(_QWORD *)(a1 + 56) < v18 )
    *(_QWORD *)(a1 + 56) = v18;
LABEL_3:
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return v10;
  }
  else if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
    return v10;
  }
  v25 = sub_B8C3D0(a2, (__int64)v17, v19, v20, v21, v22);
  v26 = (__int64 *)*v25;
  v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
  if ( *v25 < v27 )
  {
    v44 = *v25;
    do
    {
      if ( *(_WORD *)(*(_QWORD *)v44 + 36LL) == 325 )
        break;
      v44 += 8LL;
    }
    while ( v27 != v44 );
  }
  else if ( v26 != (__int64 *)v27 && *(_WORD *)(*(_QWORD *)v27 + 36LL) != 325 )
  {
    v28 = (__int64 *)(v27 + 8);
    do
    {
      if ( v26 == v28 )
        break;
      v29 = *v28++;
    }
    while ( *(_WORD *)(v29 + 36) != 325 );
  }
  return v10;
}
