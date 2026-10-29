/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A23E0
// Address: 0x00000000000A23E0

//----- (00000000000A23E0) ----------------------------------------------------
__int64 __fastcall sub_A23E0(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // x19
  signed __int64 v7; // x0
  signed __int64 v8; // x23
  __int64 v9; // x8
  __int64 v10; // x25
  _BYTE *v11; // x0
  signed __int64 v12; // x23
  signed __int64 v14; // x0

  v4 = a3;
  if ( a4 == -1 )
  {
    v12 = 0;
  }
  else
  {
    v7 = sub_A2080((void **)a1, a4, a3 >> 1);
    if ( v7 < 1 )
      return -1;
    v8 = v7;
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 )
        v10 = v9 - 1;
      else
        v10 = 0;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v10 + 2) )
      {
        v11 = *(_BYTE **)a1;
      }
      else
      {
        v11 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v10 + 2, 1u);
        *(_QWORD *)a1 = v11;
      }
      *(_QWORD *)(a1 + 8) = v10 + 2;
      v11[v10] = 58;
      *(_BYTE *)(*(_QWORD *)a1 + v10 + 1) = 0;
    }
    v12 = v8 + 1;
    v4 -= v4 >> 1;
  }
  v14 = sub_A2080((void **)a1, a2, v4);
  if ( v14 < 1 )
    return -1;
  else
    return v14 + v12;
}
