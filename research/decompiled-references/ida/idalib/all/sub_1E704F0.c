unsigned __int64 __fastcall sub_1E704F0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // r13
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // dl
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = a2;
  v9 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 43;
  if ( (unsigned int)v10 <= 1 )
    goto LABEL_2;
  v14 = *(_QWORD *)(v9 + 8);
  v11 = a2;
  v15 = *(unsigned __int8 *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  a2 = (unsigned int)(v15 - 43);
  v16 = v15;
  if ( (unsigned int)a2 <= 1 )
  {
    v9 = sub_F63050(v9, a2, v15, v15);
    if ( !v9 )
    {
LABEL_6:
      v9 = *(_QWORD *)v5;
      v14 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
      LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      v16 = *(_BYTE *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      goto LABEL_7;
    }
LABEL_2:
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 32);
      if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
        v9 = *(_QWORD *)v12;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v12 + 16LL) - 43 <= 1 )
          break;
        v13 = sub_F63050(v9, a2, v10, a4);
        v11 = *(_QWORD *)(v13 + 32);
        if ( (*(_BYTE *)(v13 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
LABEL_5:
    v5 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_6;
  }
LABEL_7:
  if ( (unsigned __int8)(v16 - 2) <= 4u )
    return sub_A75D20((_QWORD *)a1[31], v11);
  v18 = (unsigned int)(v15 - 25);
  if ( (unsigned int)v18 <= 1 )
    return sub_1E70340(a1, v6, a3, v18, a5);
  v19 = v14 & 7 | (v14 >> 3) & 1;
  if ( v19 )
  {
    v5 = sub_F64F00(v11, a2, v19, v18, a5);
  }
  else
  {
    if ( (v11 & 8) == 0 )
      return v5 & 0xFFFFFFFFFFFFFFF0LL;
    v20 = *(_QWORD *)(v5 + 24) | v11 & 7;
    v5 = v9;
  }
  v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v21 )
    return v5 & 0xFFFFFFFFFFFFFFF0LL;
  return sub_A70C40(a1[31], v5, v21);
}
