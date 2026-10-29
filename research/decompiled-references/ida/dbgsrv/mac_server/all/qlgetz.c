/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetz
// Address: 0x000000010007A360

//----- (000000010007A360) ----------------------------------------------------
_BYTE *__fastcall qlgetz(__int64 a1, off_t a2, _BYTE *a3, __int64 a4)
{
  off_t v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbx
  char v9; // al
  _BYTE *v10; // rbx
  off_t v12; // [rsp+10h] [rbp-40h]
  char __ptr; // [rsp+1Fh] [rbp-31h] BYREF

  if ( a4 <= 0 )
    return a3;
  if ( a2 == -1 )
  {
    v12 = 0;
    goto LABEL_11;
  }
  if ( !a1 )
  {
    v12 = -1;
    goto LABEL_11;
  }
  if ( *(int *)a1 >= 2 )
  {
    v6 = *(_QWORD *)(a1 + 24);
LABEL_10:
    v12 = v6;
    *(_QWORD *)(a1 + 24) = a2;
    goto LABEL_11;
  }
  v6 = -1;
  if ( (unsigned int)qfseek(*(FILE **)(a1 + 8), 0, 1) )
  {
    if ( *(int *)a1 >= 2 )
      goto LABEL_10;
  }
  else
  {
    v6 = qftell(*(FILE **)(a1 + 8));
    if ( *(int *)a1 >= 2 )
      goto LABEL_10;
  }
  v12 = v6;
  if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), a2, 0) )
    qftell(*(FILE **)(a1 + 8));
LABEL_11:
  v7 = a4 - 1;
  v8 = 0;
  while ( 1 )
  {
    if ( v7 == v8 )
    {
LABEL_20:
      v10 = &a3[v8];
      goto LABEL_22;
    }
    if ( !a1 )
      break;
    if ( *(int *)a1 < 2 )
    {
      if ( qfread(*(FILE **)(a1 + 8), &__ptr, 1) != 1 )
        goto LABEL_20;
    }
    else if ( sub_100079EE0(a1, &__ptr, 1) != (_QWORD *)1 )
    {
      goto LABEL_20;
    }
    v9 = __ptr;
    a3[v8++] = __ptr;
    if ( !v9 )
      goto LABEL_23;
  }
  v10 = a3;
LABEL_22:
  *v10 = 0;
LABEL_23:
  if ( a1 != 0 && a2 != -1 )
  {
    if ( *(int *)a1 < 2 )
    {
      if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), v12, 0) )
        qftell(*(FILE **)(a1 + 8));
    }
    else
    {
      *(_QWORD *)(a1 + 24) = v12;
    }
  }
  return a3;
}
