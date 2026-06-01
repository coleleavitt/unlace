/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B764
// Address: 0x000000000006B764

//----- (000000000006B764) ----------------------------------------------------
int8x16_t __fastcall sub_6B764(__int64 a1)
{
  __int64 v1; // x9
  _UNKNOWN **v3; // x0
  void **v4; // x22
  void **v5; // x23
  _QWORD *v6; // x24
  __int64 v7; // x8
  __int64 v8; // x25
  int8x16_t result; // q0

  v1 = *(_QWORD *)(a1 + 48);
  if ( qword_164A28 != v1 )
  {
    v3 = off_164A30;
    v4 = (void **)&off_164A30[5 * v1];
    v5 = (void **)&off_164A30[5 * qword_164A28];
    if ( v4 < v5 )
    {
      do
      {
        v6 = v4[3];
        if ( v6 )
        {
          v7 = *(v6 - 1);
          if ( v7 )
          {
            v8 = 4 * v7;
            do
            {
              free_idcv(&v6[v8 - 4]);
              v8 -= 4;
            }
            while ( v8 * 8 );
          }
          operator delete[](v6 - 1);
        }
        qfree(*v4);
        qfree(v4[2]);
        v4[4] = nullptr;
        *(_OWORD *)v4 = 0u;
        *((_OWORD *)v4 + 1) = 0u;
        v4 += 5;
      }
      while ( v4 < v5 );
      v3 = off_164A30;
    }
    qfree(v3);
    result = vextq_s8(*(int8x16_t *)(a1 + 40), *(int8x16_t *)(a1 + 40), 8u);
    *(int8x16_t *)&qword_164A28 = result;
  }
  return result;
}
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
