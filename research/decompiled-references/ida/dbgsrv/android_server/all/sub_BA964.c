/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA964
// Address: 0x00000000000BA964

//----- (00000000000BA964) ----------------------------------------------------
__int64 __fastcall sub_BA964(__int64 a1, __int64 a2, char *a3, size_t a4)
{
  __int64 v4; // x8
  size_t v5; // x19
  bool v9; // cc
  unsigned __int64 v10; // x8
  __int64 v11; // x8
  unsigned __int64 v12; // x8
  size_t v13; // x23
  FILE *v14; // x0
  signed __int64 v15; // x23
  signed __int64 v16; // x0
  signed __int64 v17; // x8
  size_t v19; // x0

  if ( a2 < 0 || (v4 = *(_QWORD *)(a1 + 40), v5 = a4, v4 > a2) && !*(_QWORD *)(a1 + 32) )
  {
    set_qerrno(3u);
    return -1;
  }
  else
  {
    v9 = v4 < a2;
    v10 = v4 - a2;
    if ( v9 )
    {
      if ( *(_QWORD *)(a1 + 64) < 0x40000u )
        *(_QWORD *)(a1 + 48) = qvector_reserve((pthread_mutex_t *)(a1 + 48), *(void **)(a1 + 48), 0x40000u, 1u);
      *(_QWORD *)(a1 + 56) = 0x40000;
      while ( 1 )
      {
        v11 = *(_QWORD *)(a1 + 40);
        if ( v11 == a2 )
          break;
        v12 = a2 - v11;
        if ( v12 >= 0x40000 )
          v13 = 0x40000;
        else
          v13 = v12;
        if ( sub_BAB80(a1, *(void **)(a1 + 48), v13) != v13 )
          return 0;
      }
      v16 = sub_BAB80(a1, a3, v5);
      v15 = 0;
      v17 = v16;
    }
    else
    {
      v14 = *(FILE **)(a1 + 32);
      if ( v10 <= a4 )
        v15 = v10;
      else
        v15 = a4;
      if ( (unsigned int)qfseek(v14, a2, 0) )
        return -1;
      v19 = qfread(*(FILE **)(a1 + 32), a3, v15);
      if ( v19 == v5 )
        return v5;
      if ( v19 != v15 )
        return -1;
      v16 = sub_BAB80(a1, &a3[v15], v5 - v15);
      if ( v15 <= 0 )
        v17 = v16;
      else
        v17 = v15;
    }
    if ( v16 >= 1 )
      return v15 + v16;
    else
      return v17;
  }
}
// BAA1C: conditional instruction was optimized away because cc.1==0
