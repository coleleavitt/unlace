__int64 __fastcall sub_F02F90(__int64 a1, __int64 a2)
{
  char *v3; // rsi
  _WORD *v4; // rbp
  _WORD *v5; // rax
  size_t v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  _WORD *v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  _BYTE *v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int *v16; // rsi
  size_t v17; // r12
  size_t v18; // rax
  size_t v19; // r12
  size_t v21; // [rsp+8h] [rbp-40h]

  v3 = " (";
  sub_971800(a1, " (");
  v4 = sub_BD68E0((_WORD *)a2);
  v5 = sub_BD68E0((_WORD *)a2);
  v8 = *(unsigned int *)(a2 + 4);
  v9 = &v5[4 * v8];
  if ( v4 != v9 )
  {
    v10 = *(_QWORD *)v4;
    while ( 1 )
    {
      v11 = *(_QWORD *)(**(_QWORD **)(v10 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v11 + 8) & 0xF) != 0 )
        v11 = sub_F411C0(**(_QWORD **)(v10 + 16));
      v12 = sub_F3D1D0(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              v3,
              v8,
              v6,
              v7);
      if ( (*(_BYTE *)(v10 + 12) & 1) == 0 )
        goto LABEL_6;
      v18 = j__strlen("virtual ");
      v13 = *(_BYTE **)(a1 + 32);
      v19 = v18;
      if ( v18 > *(_QWORD *)(a1 + 24) - (_QWORD)v13 )
      {
        v3 = "virtual ";
        sub_22581D0(a1, "virtual ", v18);
        v13 = *(_BYTE **)(a1 + 32);
        goto LABEL_7;
      }
      if ( v18 )
        break;
LABEL_7:
      v14 = *(_QWORD *)(v12 + 40);
      if ( (v14 & 7) != 0 )
        goto LABEL_11;
      v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v15 )
        goto LABEL_11;
      v16 = *(unsigned int **)(v15 + 16);
      v17 = *v16;
      v3 = (char *)(v16 + 4);
      if ( *(_QWORD *)(a1 + 24) - (_QWORD)v13 < v17 )
      {
        sub_22581D0(a1, v3, v17);
        v13 = *(_BYTE **)(a1 + 32);
LABEL_11:
        v4 += 4;
        if ( v9 == v4 )
          goto LABEL_20;
        goto LABEL_12;
      }
      if ( !v17 )
        goto LABEL_11;
      v4 += 4;
      memcpy(v13, v3, v17);
      *(_QWORD *)(a1 + 32) += v17;
      v13 = *(_BYTE **)(a1 + 32);
      if ( v9 == v4 )
        goto LABEL_20;
LABEL_12:
      v10 = *(_QWORD *)v4;
      v6 = j__strlen(" -> ");
      if ( v6 > *(_QWORD *)(a1 + 24) - (_QWORD)v13 )
      {
        v3 = " -> ";
        sub_22581D0(a1, " -> ", v6);
      }
      else if ( v6 )
      {
        v3 = " -> ";
        v21 = v6;
        memcpy(v13, " -> ", v6);
        v6 = v21;
        *(_QWORD *)(a1 + 32) += v21;
      }
    }
    v3 = "virtual ";
    memcpy(*(void **)(a1 + 32), "virtual ", v18);
    *(_QWORD *)(a1 + 32) += v19;
LABEL_6:
    v13 = *(_BYTE **)(a1 + 32);
    goto LABEL_7;
  }
  v13 = *(_BYTE **)(a1 + 32);
LABEL_20:
  if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 24) )
    return sub_2257CD0(a1, 41);
  *(_QWORD *)(a1 + 32) = v13 + 1;
  *v13 = 41;
  return (__int64)(v13 + 1);
}

