/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449220
// Address: 0x0000000000449220

//----- (0000000000449220) ----------------------------------------------------
__int64 __fastcall sub_449220(void **a1, __int64 *a2)
{
  char *v3; // x0
  char *v4; // x4
  __int64 *v5; // x0
  __int64 v7[5]; // [xsp+28h] [xbp-28h] BYREF

  memset(&v7[1], 0, 24);
  LOBYTE(v7[0]) = 2;
  sub_4488B8(v7, a2);
  v3 = (char *)a1[1];
  if ( v3 + 1 > a1[2] )
  {
    v4 = (char *)sub_491288((__int64)a1, *a1, (unsigned __int64)(v3 + 1), 0x20u);
    v3 = (char *)a1[1];
    *a1 = v4;
  }
  else
  {
    v4 = (char *)*a1;
  }
  v5 = (__int64 *)&v4[32 * (_QWORD)v3];
  *(_BYTE *)v5 = 2;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  sub_4488B8(v5, v7);
  a1[1] = (char *)a1[1] + 1;
  sub_448310(v7);
  return v7[4] ^ _stack_chk_guard;
}
