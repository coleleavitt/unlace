/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6305C
// Address: 0x0006305C

//----- (0006305C) --------------------------------------------------------
int __fastcall sub_6305C(int a1, int a2)
{
  void *v4; // r0
  char *v5; // r0
  char *v6; // r1
  unsigned int v7; // r3
  char v8; // r0
  int v9; // r6
  bool v10; // zf
  int v11; // r0
  size_t v12; // r2
  char *v13; // r6
  int v14; // r0
  int v15; // r1
  __int64 v16; // r0
  void **v17; // r6
  int v18; // r3
  char *v19; // r2
  char *v20; // r1
  unsigned int v21; // r0
  char v22; // r2
  int v23; // r2
  size_t v24; // r2
  int v25; // r7
  char *v26; // r3
  unsigned int v27; // r0
  size_t v28; // r7
  unsigned int v29; // r1
  char *v30; // r0
  char *v31; // r1
  size_t v32; // r2
  char *v33; // r0
  int v35; // [sp+8h] [bp-18h]
  int v36; // [sp+8h] [bp-18h]
  char *v37; // [sp+10h] [bp-10h] BYREF
  char v38; // [sp+14h] [bp-Ch] BYREF
  _BYTE v39[11]; // [sp+15h] [bp-Bh] BYREF

  if ( *(int *)a1 >= -1 )
  {
    v4 = *(void **)(a1 + 8);
    if ( v4 )
    {
      *(_DWORD *)(a1 + 12) = 0;
      qfree(v4);
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
  v5 = *(char **)a2;
  v6 = (char *)(*(_DWORD *)a2 + 1);
  if ( (unsigned int)v6 < *(_DWORD *)a2 || (v7 = *(_DWORD *)(a2 + 4), (unsigned int)v6 > v7) )
  {
    v38 = 0;
    v9 = 1;
  }
  else
  {
    *(_DWORD *)a2 = v6;
    v8 = *v5;
    v38 = v8;
    v9 = 1;
    if ( v8 < 0 )
    {
      if ( (v8 & 0xC0) == 0xC0 )
      {
        v10 = (v8 & 0xE0) == 224;
        v11 = 5;
        if ( !v10 )
          v11 = 4;
        v35 = v11;
        v12 = v11 - 1;
      }
      else
      {
        v35 = 2;
        v12 = 1;
      }
      v13 = &v6[v12];
      if ( &v6[v12] >= v6 && (unsigned int)v13 <= v7 )
      {
        *(_DWORD *)a2 = v13;
        qmemcpy(v39, v6, v12);
      }
      v9 = v35;
    }
  }
  v37 = &v38;
  v14 = unpack_dd((unsigned int *)&v37, (unsigned int)&v39[v9 - 1]);
  v15 = v14 - 3;
  *(_DWORD *)a1 = v14 - 3;
  if ( v14 == 1 )
  {
    LODWORD(v16) = sub_63244((char **)a2);
    *(_QWORD *)(a1 + 8) = v16 - 1;
    return _stack_chk_guard - *(_DWORD *)&v39[7];
  }
  if ( !v14 )
    return _stack_chk_guard - *(_DWORD *)&v39[7];
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = v15;
  v17 = (void **)(a1 + 8);
  v18 = 1;
  if ( v15 <= -2 )
  {
    if ( !under_debugger )
      interr(3216);
    __debugbreak();
  }
  v19 = *(char **)a2;
  v20 = (char *)(*(_DWORD *)a2 + 1);
  if ( (unsigned int)v20 < *(_DWORD *)a2 || (v21 = *(_DWORD *)(a2 + 4), (unsigned int)v20 > v21) )
  {
    v38 = 0;
    v18 = 1;
    goto LABEL_36;
  }
  *(_DWORD *)a2 = v20;
  v22 = *v19;
  v38 = v22;
  if ( (v22 & 0x80) == 0 )
    goto LABEL_36;
  if ( (v22 & 0xC0) != 0xC0 )
  {
    v25 = 2;
    v24 = 1;
LABEL_32:
    v26 = &v20[v24];
    if ( &v20[v24] >= v20 && (unsigned int)v26 <= v21 )
    {
      *(_DWORD *)a2 = v26;
      qmemcpy(v39, v20, v24);
    }
    v18 = v25;
    goto LABEL_36;
  }
  v10 = (v22 & 0xE0) == 224;
  v23 = 5;
  if ( !v10 )
    v23 = 4;
  v36 = v23;
  v24 = v23 - 1;
  v25 = v36;
  if ( v24 )
    goto LABEL_32;
LABEL_36:
  v37 = &v38;
  v27 = unpack_dd((unsigned int *)&v37, (unsigned int)&v39[v18 - 1]);
  v28 = v27;
  v29 = *(_DWORD *)(a1 + 12);
  if ( v29 < v27 )
  {
    if ( *(_DWORD *)(a1 + 16) >= v27 )
    {
      v30 = (char *)*v17;
    }
    else
    {
      v30 = (char *)qvector_reserve(a1 + 8, *v17, v27, 1u);
      *v17 = v30;
      v29 = *(_DWORD *)(a1 + 12);
    }
    memset(&v30[v29], 0, v28 - v29);
    *(_DWORD *)(a1 + 12) = v28;
LABEL_45:
    v31 = *(char **)a2;
    v32 = *(_DWORD *)a2 + v28;
    if ( v32 >= *(_DWORD *)a2 && v32 <= *(_DWORD *)(a2 + 4) )
    {
      v33 = (char *)*v17;
      *(_DWORD *)a2 = v32;
      qmemcpy(v33, v31, v28);
    }
    return _stack_chk_guard - *(_DWORD *)&v39[7];
  }
  if ( v29 != v27 )
  {
    v38 = 0;
    sub_370F6((void **)(a1 + 8), v27, &v38);
  }
  if ( v28 )
    goto LABEL_45;
  return _stack_chk_guard - *(_DWORD *)&v39[7];
}
// 630D6: conditional instruction was optimized away because r0.4 is in (4..5)
// 6311C: variable 'v16' is possibly undefined
// E0550: using guessed type char under_debugger;
