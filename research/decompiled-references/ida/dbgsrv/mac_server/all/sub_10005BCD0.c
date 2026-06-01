/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005BCD0
// Address: 0x000000010005BCD0

//----- (000000010005BCD0) ----------------------------------------------------
__int64 __fastcall sub_10005BCD0(_QWORD *a1, __int16 a2)
{
  __int64 v3; // rdi
  char *v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int16 v9; // [rsp+6h] [rbp-1Ah] BYREF

  v3 = (__int64)(a1 + 16);
  v9 = a2;
  v4 = (char *)a1[16];
  v5 = a1[18];
  v6 = a1[17];
  v7 = v6 + 1;
  if ( v4 <= (char *)&v9 && &v4[2 * v5] > (char *)&v9 )
  {
    if ( v5 < v7 )
    {
      v4 = (char *)qvector_reserve(v3, v4, v7, 2u);
      a1[16] = v4;
      v6 = a1[17];
    }
  }
  else if ( v5 < v7 )
  {
    v4 = (char *)qvector_reserve(v3, v4, v7, 2u);
    a1[16] = v4;
    v6 = a1[17];
    a2 = v9;
  }
  *(_WORD *)&v4[2 * v6] = a2;
  ++a1[17];
  return 0;
}
