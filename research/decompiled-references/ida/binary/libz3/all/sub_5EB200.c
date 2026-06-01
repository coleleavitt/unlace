__int64 __fastcall sub_5EB200(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rdx
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // r15
  unsigned int v17; // r12d
  unsigned int v18; // r14d
  __int64 v19; // rdx
  void *v21; // rdi
  __int64 v22; // [rsp+10h] [rbp-48h]
  char v23; // [rsp+1Fh] [rbp-39h]

  v9 = sub_186B270(0xF8u);
  sub_63D370(v9, a1[5]);
  v10 = *(_QWORD *)(a2 + 24);
  if ( !v10 )
    goto LABEL_14;
  v11 = *(unsigned int *)(v10 - 4);
  if ( !(_DWORD)v11 )
    goto LABEL_14;
  v23 = 0;
  v12 = 0;
  v22 = 8 * v11;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v10 + v12);
    v17 = *(_DWORD *)(v16 + 68);
    v18 = *(_DWORD *)(v16 + 64);
    if ( v18 < v17 )
      break;
LABEL_10:
    sub_63DAD0(v9, v16, a3);
    v12 += 8;
    if ( v22 == v12 )
      goto LABEL_11;
LABEL_5:
    v10 = *(_QWORD *)(a2 + 24);
  }
  while ( 1 )
  {
    sub_5EA230((__int64)a1, v16, v18);
    v19 = a1[6];
    if ( v19 )
    {
      if ( *(_DWORD *)(v19 - 4) )
        break;
    }
    if ( v17 == ++v18 )
      goto LABEL_10;
  }
  sub_5EA820(a1, v16, v9, a3);
  v23 = 1;
  v12 += 8;
  if ( v22 != v12 )
    goto LABEL_5;
LABEL_11:
  if ( !v23 )
  {
LABEL_14:
    sub_63D960(v9);
    v21 = (void *)v9;
    v9 = 0;
    sub_186B220(v21);
    return v9;
  }
  sub_63DFA0(v9, a2, v13, a3, a4, a5, a6, v14, v15, a9);
  return v9;
}

