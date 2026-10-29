/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044F70
// Address: 0x0000000100044F70

//----- (0000000100044F70) ----------------------------------------------------
__int64 __fastcall sub_100044F70(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE *v3; // rcx
  __int64 v4; // r14
  off_t v5; // rcx
  __int64 v6; // rcx
  bool v7; // cf
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r14
  _BYTE *v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx

  result = qgetline(a1, *(FILE **)(a2 + 272));
  if ( result > 0 && a1[1] >= 4u )
  {
    v3 = (_BYTE *)*a1;
    if ( *(_BYTE *)*a1 == 0xEF && v3[1] == 0xBB && v3[2] == 0xBF )
    {
      v4 = result;
      v5 = qftell(*(FILE **)(a2 + 272));
      result = v4;
      if ( v5 <= v4 + 2 )
      {
        v6 = a1[1];
        result = 0;
        v7 = v6 == 0;
        v8 = v6 - 1;
        if ( !v7 )
          result = v8;
        if ( !v7 && v8 != 0 )
        {
          if ( (unsigned __int64)result < 4 )
          {
            v10 = 0;
          }
          else
          {
            v9 = result - 3;
            memmove((void *)*a1, (const void *)(*a1 + 3LL), result - 3);
            v10 = v9;
          }
          v11 = v10 + 1;
          v12 = (_BYTE *)*a1;
          if ( a1[2] <= v10 )
          {
            v13 = v10;
            v12 = qvector_reserve((__int64)a1, (void *)*a1, v10 + 1, 1u);
            v10 = v13;
            *a1 = v12;
          }
          a1[1] = v11;
          v12[v10] = 0;
          v14 = a1[1];
          result = 0;
          v7 = v14 == 0;
          v15 = v14 - 1;
          if ( !v7 )
            return v15;
        }
      }
    }
  }
  return result;
}
