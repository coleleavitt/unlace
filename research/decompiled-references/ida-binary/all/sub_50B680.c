void __fastcall sub_50B680(
        __m128i *a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // r13d
  int v10; // r12d
  char v12; // di
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // edx
  _QWORD *v20; // rcx
  unsigned int v21; // edx
  bool v22; // zf
  int v23; // eax
  _QWORD *v24; // rcx

  v9 = a4;
  v10 = a5;
  v12 = *(_BYTE *)(a2 + 16);
  if ( v12 > 121 )
    goto LABEL_6;
  if ( v12 <= 64 )
  {
    if ( v12 == 32 )
      goto LABEL_8;
    if ( v12 > 31 && (v12 == 36 || v12 == 42) )
    {
LABEL_15:
      v17 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        a4 = *((_QWORD *)a3 + 1);
        *((_QWORD *)a3 + 1) = a4 + 8;
      }
      else
      {
        a4 = *((_QWORD *)a3 + 2) + v17;
        *a3 = v17 + 8;
      }
      v18 = *(_QWORD *)a4;
      *(_QWORD *)(a2 + 48) = 0;
      *(_QWORD *)(a2 + 40) = v18;
      goto LABEL_8;
    }
LABEL_6:
    if ( !sub_508440(v12) )
    {
      a7 = 0.0;
      *(_OWORD *)(a2 + 40) = 0;
    }
    goto LABEL_8;
  }
  v14 = 1LL << (v12 - 65);
  if ( (v14 & 0x11DFD20018C7DABLL) != 0 )
    goto LABEL_15;
  a4 = 0x200000010LL;
  if ( (v14 & 0x200000010LL) == 0 )
  {
    if ( v12 == 104 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v19 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v24 = *((_QWORD **)a3 + 1);
    *((_QWORD *)a3 + 1) = v24 + 1;
    *(_QWORD *)(a2 + 40) = *v24;
    v21 = *a3;
    if ( (unsigned int)*a3 <= 0x2F )
      goto LABEL_20;
LABEL_27:
    a4 = *((_QWORD *)a3 + 1);
    *((_QWORD *)a3 + 1) = a4 + 8;
    goto LABEL_21;
  }
  v20 = (_QWORD *)(*((_QWORD *)a3 + 2) + v19);
  *a3 = v19 + 8;
  *(_QWORD *)(a2 + 40) = *v20;
  v21 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
    goto LABEL_27;
LABEL_20:
  a4 = *((_QWORD *)a3 + 2) + v21;
  *a3 = v21 + 8;
LABEL_21:
  v22 = *(_BYTE *)(a2 + 16) == 69;
  *(_QWORD *)(a2 + 48) = *(_QWORD *)a4;
  if ( v22 && !*(_DWORD *)(a2 + 8) )
  {
    v23 = sub_507FE0(*(_QWORD *)(a2 + 40));
    *(_DWORD *)(a2 + 36) = 1;
    *(_DWORD *)(a2 + 8) = v23;
  }
LABEL_8:
  *(_BYTE *)(a2 + 80) = v9 == v10;
  sub_50AC80(a1, a1[1].m128i_i64[0], a2, a7, a8, a9, a4, a5, a6);
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
    sub_503260(a1, 0, 0, 0, v15, v16, a7, *(double *)a8.m128_u64, a9);
}
