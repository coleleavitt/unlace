/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AEEC
// Address: 0x000000000005AEEC

//----- (000000000005AEEC) ----------------------------------------------------
long double __fastcall sub_5AEEC(__int64 a1, __int64 a2)
{
  __int64 v4; // x25
  unsigned __int64 v5; // x23
  _QWORD *v6; // x21
  const void *v7; // x24
  void *v8; // x0
  unsigned __int64 v9; // x23
  const void *v10; // x24
  void *v11; // x1
  long double result; // q0

  *(_OWORD *)(a1 + 48) = 0u;
  v4 = a1 + 48;
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 16) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)a1 = 0u;
  if ( a1 == a2 )
    goto LABEL_10;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(a1 + 24);
  if ( v5 < 2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v9 = *(_QWORD *)(a2 + 32);
    if ( !v9 )
      goto LABEL_9;
  }
  else
  {
    v7 = *(const void **)a2;
    v8 = qvector_reserve((pthread_mutex_t *)a1, nullptr, *(_QWORD *)(a2 + 8), 1u);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v8, v7, v5 - 1);
    *(_BYTE *)(*(_QWORD *)a1 + v5 - 1) = 0;
    v9 = *(_QWORD *)(a2 + 32);
    if ( !v9 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 32) = 0;
      goto LABEL_10;
    }
  }
  if ( v9 == 1 )
    goto LABEL_9;
  v10 = *(const void **)(a2 + 24);
  v11 = *(void **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) < v9 )
  {
    v11 = qvector_reserve((pthread_mutex_t *)(a1 + 24), v11, v9, 1u);
    *v6 = v11;
  }
  *(_QWORD *)(a1 + 32) = v9;
  memmove(v11, v10, v9 - 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9 - 1) = 0;
LABEL_10:
  result = *(long double *)(a2 + 48);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 64);
  *(long double *)v4 = result;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_BYTE *)(a1 + 92) = *(_BYTE *)(a2 + 92);
  *(_BYTE *)(a1 + 93) = *(_BYTE *)(a2 + 93);
  *(_BYTE *)(a1 + 94) = *(_BYTE *)(a2 + 94);
  return result;
}
