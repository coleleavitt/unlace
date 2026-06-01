/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2EB34
// Address: 0x0002EB34

//----- (0002EB34) --------------------------------------------------------
int __fastcall sub_2EB34(int a1, _DWORD *a2)
{
  unsigned int v4; // r1
  __int64 v6; // r0
  unsigned __int64 v7; // r6
  unsigned int v8; // r3
  unsigned int v9; // r9
  unsigned int v10; // lr
  _BOOL4 v11; // r10
  _BOOL4 v12; // r2
  bool v13; // zf
  int v14; // r10
  __int64 v15; // r0
  int v16; // r0
  int v17; // r1
  bool v18; // zf
  unsigned int v19; // r6
  __int64 v20; // r2
  char *v21; // r0
  __int64 v22; // r2
  __int64 v23; // r2
  __int64 v24; // r10
  __int64 v25; // [sp+18h] [bp-14h]

  v4 = *(_DWORD *)(a1 + 48);
  if ( v4 < *(_DWORD *)(a1 + 52) )
  {
LABEL_2:
    *a2 = *(_DWORD *)(a1 + 28) + 16 * v4;
    ++*(_DWORD *)(a1 + 48);
    return 1;
  }
  HIDWORD(v6) = *(_DWORD *)(a1 + 40);
  LODWORD(v6) = *(_DWORD *)(a1 + 44);
  v7 = *(_QWORD *)(a1 + 16) - __PAIR64__(v6, HIDWORD(v6));
  if ( !v7 )
    return 0;
  v8 = *(_DWORD *)(a1 + 32);
  v9 = *(_DWORD *)(a1 + 16) - HIDWORD(v6);
  if ( (unsigned int)v7 > v8 )
  {
    v21 = *(char **)(a1 + 28);
    if ( (unsigned int)v7 > *(_DWORD *)(a1 + 36) )
    {
      v21 = (char *)sub_77EB0(a1 + 28, *(void **)(a1 + 28), v7, 0x10u);
      v8 = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 28) = v21;
    }
    memset(&v21[16 * v8], 0, 16 * (v7 - v8));
    *(_DWORD *)(a1 + 32) = v7;
    LODWORD(v6) = *(_DWORD *)(a1 + 44);
    HIDWORD(v6) = *(_DWORD *)(a1 + 40);
  }
  else if ( (_DWORD)v7 != v8 && (unsigned int)v7 < v8 )
  {
    *(_DWORD *)(a1 + 32) = v7;
  }
  v10 = *(_DWORD *)(a1 + 24);
  v11 = v6 == 0;
  *(_DWORD *)(a1 + 48) = 0;
  if ( !v10 )
    v11 = 1;
  if ( !v11 )
  {
    v12 = 0;
    if ( (_DWORD)v6 )
    {
      LODWORD(v24) = (HIDWORD(v6) * (unsigned __int64)v10) >> 32;
      HIDWORD(v24) = 0;
      v12 = ((unsigned int)v6 * (unsigned __int64)v10 + v24) >> 32 != 0;
    }
    if ( v12 )
      goto LABEL_29;
  }
  v13 = (_DWORD)v7 == 0;
  if ( (_DWORD)v7 )
    v13 = v10 == 0;
  if ( v13 || is_mul_ok(v7, v10) )
  {
    v14 = *(_DWORD *)(a1 + 4);
    LODWORD(v15) = sub_74C30(*(_DWORD *)(v14 + 364), 0, 1);
    v25 = v15 - *(_QWORD *)(v14 + 368);
    v16 = sub_74C30(
            *(_DWORD *)(v14 + 364),
            *(_QWORD *)(a1 + 40) * *(unsigned int *)(a1 + 24) + *(_QWORD *)(a1 + 8) + *(_QWORD *)(v14 + 368),
            0);
    v18 = ++v17 == 0;
    if ( !v17 )
      v18 = v16 == -1;
    if ( !v18 && (_DWORD)v7 )
    {
      v19 = 0;
      while ( sub_2EAF4(a1, (_DWORD *)(*(_DWORD *)(a1 + 28) + 16 * v19)) )
      {
        if ( v9 <= ++v19 )
        {
          LODWORD(v22) = v25;
          HIDWORD(v22) = *(_DWORD *)(v14 + 372);
          sub_74C30(*(_DWORD *)(v14 + 364), v22 + __PAIR64__(HIDWORD(v25), *(_DWORD *)(v14 + 368)), 0);
          *(_DWORD *)(a1 + 52) = v19;
          goto LABEL_27;
        }
      }
      LODWORD(v20) = v25;
      HIDWORD(v20) = *(_DWORD *)(v14 + 372);
      sub_74C30(*(_DWORD *)(v14 + 364), v20 + __PAIR64__(HIDWORD(v25), *(_DWORD *)(v14 + 368)), 0);
      *(_DWORD *)(a1 + 52) = v19;
      if ( !v19 )
        return 0;
LABEL_27:
      v4 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) += v19;
      if ( v19 > v4 )
        goto LABEL_2;
      return 0;
    }
    LODWORD(v23) = v25;
    HIDWORD(v23) = *(_DWORD *)(v14 + 372);
    sub_74C30(*(_DWORD *)(v14 + 364), v23 + __PAIR64__(HIDWORD(v25), *(_DWORD *)(v14 + 368)), 0);
    *(_DWORD *)(a1 + 52) = 0;
    return 0;
  }
  else
  {
LABEL_29:
    *(_DWORD *)(a1 + 52) = 0;
    return 0;
  }
}
// 2EC1A: variable 'v15' is possibly undefined
// 2EC5A: variable 'v17' is possibly undefined
