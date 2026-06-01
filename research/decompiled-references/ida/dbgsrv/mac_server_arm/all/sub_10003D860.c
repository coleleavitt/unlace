/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003D860
// Address: 0x000000010003D860

//----- (000000010003D860) ----------------------------------------------------
__int64 __fastcall sub_10003D860(void **a1, __int64 a2)
{
  __int64 result; // x0
  unsigned __int8 *v5; // x8
  FILE *v6; // x8
  __int64 v7; // x20
  off_t v8; // x8
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x20
  _QWORD *v11; // x1
  unsigned __int8 *v12; // x8
  bool v13; // cf
  unsigned __int8 *v14; // x8

  result = qgetline((__int64)a1, *(FILE **)(a2 + 272));
  if ( result >= 1 && (unsigned __int64)a1[1] >= 4 )
  {
    v5 = (unsigned __int8 *)*a1;
    if ( *(unsigned __int8 *)*a1 == 239 && v5[1] == 187 && v5[2] == 191 )
    {
      v6 = *(FILE **)(a2 + 272);
      v7 = result;
      v8 = qftell(v6);
      result = v7;
      if ( v8 <= v7 + 2 )
      {
        v9 = (unsigned __int64)a1[1];
        result = v9 ? v9 - 1 : 0LL;
        if ( v9 >= 2 )
        {
          if ( (unsigned __int64)result < 4 )
          {
            v10 = 0;
          }
          else
          {
            v10 = result - 3;
            memmove(*a1, (char *)*a1 + 3, result - 3);
          }
          v11 = *a1;
          if ( (unsigned __int64)a1[2] <= v10 )
          {
            v11 = qvector_reserve(a1, v11, v10 + 1, 1u);
            *a1 = v11;
          }
          a1[1] = (void *)(v10 + 1);
          *((_BYTE *)v11 + v10) = 0;
          v12 = (unsigned __int8 *)a1[1];
          v13 = v12 != nullptr;
          v14 = v12 - 1;
          if ( v13 )
            return (__int64)v14;
          else
            return 0;
        }
      }
    }
  }
  return result;
}
