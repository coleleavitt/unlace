/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B290
// Address: 0x000000000009B290

//----- (000000000009B290) ----------------------------------------------------
__int64 __fastcall sub_9B290(_QWORD *a1, __int16 a2)
{
  __int16 v2; // r14
  __int64 v4; // rdi
  char *v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  char v10[26]; // [rsp+Eh] [rbp-1Ah] BYREF

  v2 = a2;
  v4 = (__int64)(a1 + 16);
  *(_WORD *)v10 = a2;
  v5 = (char *)a1[16];
  v6 = a1[17];
  v7 = v6 + 1;
  v8 = a1[18];
  if ( v5 > v10 || &v5[2 * v8] <= v10 )
  {
    if ( v8 < v7 )
    {
      v5 = (char *)qvector_reserve(v4, v5, v7, 2u);
      a1[16] = v5;
      v6 = a1[17];
      v2 = *(_WORD *)v10;
    }
  }
  else if ( v8 < v7 )
  {
    v5 = (char *)qvector_reserve(v4, v5, v7, 2u);
    a1[16] = v5;
    v6 = a1[17];
  }
  *(_WORD *)&v5[2 * v6] = v2;
  ++a1[17];
  return 0;
}
