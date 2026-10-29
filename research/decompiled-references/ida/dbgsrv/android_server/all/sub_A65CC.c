/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A65CC
// Address: 0x00000000000A65CC

//----- (00000000000A65CC) ----------------------------------------------------
char *__fastcall sub_A65CC(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 v5; // x21
  unsigned int v6; // w22
  char v7; // w24
  __time_t v8; // x0
  pthread_mutex_t *v9; // x0
  __int64 v10; // x8
  char *result; // x0
  char *v12; // x8
  int v13; // [xsp+8h] [xbp-58h]
  __int16 v14; // [xsp+Ch] [xbp-54h]
  char v15; // [xsp+Eh] [xbp-52h]

  v5 = 0;
  _ReadStatusReg(TPIDR_EL0);
  v6 = *(_DWORD *)(a1 + 24);
  v7 = a2 & 1;
  if ( (v6 & 0x80000000) == 0 && *(_QWORD *)(a1 + 8) )
  {
    v8 = qtime64();
    v5 = sub_A48CC(v8, v6);
  }
  v9 = (pthread_mutex_t *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)(v10 + 1) )
  {
    result = (char *)v9->__align;
  }
  else
  {
    result = (char *)qvector_reserve(v9, *(void **)(a1 + 32), v10 + 1, 0x20u);
    v10 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 32) = result;
  }
  v12 = &result[32 * v10];
  *(_QWORD *)v12 = a3;
  *((_QWORD *)v12 + 1) = 0;
  *((_QWORD *)v12 + 2) = v5;
  v12[24] = v7;
  v12[31] = v15;
  *(_WORD *)(v12 + 29) = v14;
  *(_DWORD *)(v12 + 25) = v13;
  ++*(_QWORD *)(a1 + 40);
  return result;
}
// A6680: variable 'v15' is possibly undefined
// A6684: variable 'v14' is possibly undefined
// A6688: variable 'v13' is possibly undefined
