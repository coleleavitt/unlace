/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_814A0
// Address: 0x00000000000814A0

//----- (00000000000814A0) ----------------------------------------------------
__int64 __fastcall sub_814A0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // r14
  size_t v4; // r14
  _BYTE *v5; // rax

  v2 = qgetline(a1, *(FILE **)(a2 + 272));
  if ( v2 > 0 && a1[1] >= 4u && !strncmp((const char *)*a1, &byte_F91CC, 3u) && qftell(*(FILE **)(a2 + 272)) <= v2 + 2 )
  {
    v3 = a1[1];
    v2 = v3 - 1;
    if ( v3 >= 2 )
    {
      if ( (unsigned __int64)v2 < 4 )
      {
        v4 = 0;
      }
      else
      {
        v4 = v3 - 4;
        memmove((void *)*a1, (const void *)(*a1 + 3LL), v4);
      }
      if ( a1[2] >= v4 + 1 )
      {
        v5 = (_BYTE *)*a1;
      }
      else
      {
        v5 = qvector_reserve((__int64)a1, (char *)*a1, v4 + 1, 1u);
        *a1 = v5;
      }
      a1[1] = v4 + 1;
      v5[v4] = 0;
      v3 = a1[1];
      v2 = v3 - 1;
    }
    if ( !v3 )
      return 0;
  }
  return v2;
}
