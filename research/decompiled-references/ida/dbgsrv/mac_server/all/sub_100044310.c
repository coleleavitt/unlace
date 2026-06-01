/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044310
// Address: 0x0000000100044310

//----- (0000000100044310) ----------------------------------------------------
__int64 __fastcall sub_100044310(char **a1, unsigned __int8 *a2)
{
  char *v2; // rax
  char *v3; // rcx
  __int64 v4; // rcx

  v2 = *a1;
  v3 = a1[1];
  if ( a1[2] < v3 + 1 )
  {
    v2 = (char *)qvector_reserve((__int64)a1, v2, (unsigned __int64)(v3 + 1), 0x20u);
    *a1 = v2;
    v3 = a1[1];
  }
  v4 = 32LL * (_QWORD)v3;
  v2[v4] = 2;
  *(_OWORD *)&v2[v4 + 8] = 0;
  *(_QWORD *)&v2[v4 + 24] = 0;
  ++a1[1];
  return move_idcv((unsigned __int8 *)&v2[v4], a2);
}
