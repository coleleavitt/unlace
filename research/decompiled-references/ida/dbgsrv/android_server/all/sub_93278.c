/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93278
// Address: 0x0000000000093278

//----- (0000000000093278) ----------------------------------------------------
_QWORD *__fastcall sub_93278(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // x19
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x8
  _BYTE *v7; // x21
  _BYTE *v10; // x0
  _QWORD *v11; // x21

  v3 = *a3;
  v4 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v5 = a3[2];
  a3[2] = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v6 + 1) )
  {
    v10 = *(_BYTE **)a1;
  }
  else
  {
    v10 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v6 + 1, 0x18u);
    v6 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v10;
  }
  v11 = &v10[a2 - (_QWORD)v7];
  memmove(v11 + 3, v11, &v10[24 * v6] - (_BYTE *)v11);
  *v11 = v3;
  v11[1] = v4;
  v11[2] = v5;
  ++*(_QWORD *)(a1 + 8);
  return v11;
}
