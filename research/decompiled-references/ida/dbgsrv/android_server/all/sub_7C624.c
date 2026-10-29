/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C624
// Address: 0x000000000007C624

//----- (000000000007C624) ----------------------------------------------------
long double __fastcall sub_7C624(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x8
  unsigned __int64 v4; // x9
  pthread_mutex_t *v8; // x0
  char *align; // x0
  long double result; // q0
  char *v11; // x9
  __int64 v12; // x11
  int v13; // w10
  char *v14; // x8
  __int64 v15; // x11

  v3 = a1[8];
  v4 = a1[9];
  v8 = (pthread_mutex_t *)(a1 + 7);
  if ( v4 >= v3 + 1 )
  {
    align = (char *)v8->__align;
  }
  else
  {
    align = (char *)qvector_reserve(v8, (void *)a1[7], v3 + 1, 0x38u);
    v3 = a1[8];
    a1[7] = (__int64)align;
  }
  v11 = &align[56 * v3];
  *((_QWORD *)v11 + 1) = 0;
  *((_QWORD *)v11 + 2) = 0;
  *(_QWORD *)v11 = 0;
  v12 = *a1;
  ++a1[8];
  *((_QWORD *)v11 + 3) = v12;
  *((_QWORD *)v11 + 4) = a1[1];
  v13 = *((_DWORD *)a1 + 20);
  *((_QWORD *)v11 + 5) = a2;
  *((_DWORD *)v11 + 12) = v13;
  if ( a3 )
  {
    result = *(long double *)a3;
    v14 = &align[56 * v3];
    *(_QWORD *)a3 = *(_QWORD *)v11;
    v15 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 8) = *((_QWORD *)v14 + 1);
    *(_QWORD *)(a3 + 16) = *((_QWORD *)v14 + 2);
    *(long double *)v11 = result;
    *((_QWORD *)v14 + 2) = v15;
  }
  return result;
}
