/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4277A0
// Address: 0x00000000004277A0

//----- (00000000004277A0) ----------------------------------------------------
__int64 __fastcall sub_4277A0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r13
  char *v17; // rsi
  char *v18; // rax

  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 76) )
    goto LABEL_2;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 24) - v5;
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 < v6 )
  {
    v17 = *(char **)(a1 + 40);
    if ( *(_QWORD *)(a1 + 56) < v6 )
    {
      v18 = (char *)sub_481540(a1 + 40, v17, v6, 0x10u);
      v7 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = v18;
      v17 = v18;
    }
    memset(&v17[16 * v7], 0, 16 * (v6 - v7));
    *(_QWORD *)(a1 + 48) = v6;
    v5 = *(_QWORD *)(a1 + 64);
  }
  else if ( v6 != v7 )
  {
    *(_QWORD *)(a1 + 48) = v6;
  }
  v8 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 72) = 0;
  if ( v8 && (v5 && !is_mul_ok(v8, v5) || !is_mul_ok(v6, v8)) )
    goto LABEL_23;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = sub_47F740(*(_QWORD *)(v9 + 472), 0, 1);
  v11 = *(_QWORD *)(v9 + 480);
  v12 = v10 - v11;
  if ( sub_47F740(*(_QWORD *)(v9 + 472), v11 + *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 32) * *(_QWORD *)(a1 + 64), 0) == -1 )
  {
    sub_47F740(*(_QWORD *)(v9 + 472), v12 + *(_QWORD *)(v9 + 480), 0);
LABEL_23:
    *(_DWORD *)(a1 + 76) = 0;
    return 0;
  }
  v16 = 0;
  while ( sub_427740(a1, (_BYTE *)(*(_QWORD *)(a1 + 40) + 16 * v16), v13, v14, v15) )
  {
    if ( v6 == ++v16 )
      goto LABEL_16;
  }
  LODWORD(v6) = v16;
LABEL_16:
  sub_47F740(*(_QWORD *)(v9 + 472), v12 + *(_QWORD *)(v9 + 480), 0);
  *(_DWORD *)(a1 + 76) = v6;
  if ( !(_DWORD)v6 )
    return 0;
  *(_QWORD *)(a1 + 64) += (unsigned int)v6;
  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 < (unsigned int)v6 )
  {
LABEL_2:
    *a2 = *(_QWORD *)(a1 + 40) + 16 * v3;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  return 0;
}
// 427983: conditional instruction was optimized away because rcx.8!=0
// 4278AE: variable 'v13' is possibly undefined
// 4278AE: variable 'v14' is possibly undefined
// 4278AE: variable 'v15' is possibly undefined
