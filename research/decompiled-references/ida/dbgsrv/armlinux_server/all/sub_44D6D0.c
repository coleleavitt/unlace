/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D6D0
// Address: 0x000000000044D6D0

//----- (000000000044D6D0) ----------------------------------------------------
__int64 __fastcall sub_44D6D0(_QWORD *a1)
{
  char *v2; // x1
  __int64 v3; // x2
  __int64 *v4; // x19
  _QWORD *v6; // x19
  char *v7; // x0
  char *v8; // x0

  v2 = (char *)a1[3];
  v3 = a1[4];
  if ( !v3 )
  {
    v6 = a1 + 3;
    if ( !a1[5] )
    {
      v7 = (char *)sub_491288((__int64)v6, v2, 1u, 0x20u);
      a1[3] = v7;
      v2 = v7;
      v3 = v6[1];
    }
    v8 = &v2[32 * v3];
    *v8 = 2;
    *((_QWORD *)v8 + 1) = 0;
    *((_QWORD *)v8 + 2) = 0;
    *((_QWORD *)v8 + 3) = 0;
    v3 = v6[1] + 1LL;
    v6[1] = v3;
    v2 = (char *)a1[3];
  }
  v4 = (__int64 *)&v2[32 * v3 - 32];
  sub_44D538(v4);
  return sub_44D258((__int64)a1, (__int64)v4);
}
