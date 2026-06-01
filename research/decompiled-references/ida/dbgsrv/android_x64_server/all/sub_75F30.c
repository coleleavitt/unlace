/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75F30
// Address: 0x0000000000075F30

//----- (0000000000075F30) ----------------------------------------------------
unsigned __int64 __fastcall sub_75F30(_QWORD *a1, double a2, __m128 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  _BYTE *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx

  v4 = a1[4];
  if ( !v4 )
  {
    v5 = a1 + 3;
    if ( a1[5] )
    {
      v6 = (_BYTE *)*v5;
      v7 = 0;
    }
    else
    {
      v6 = qvector_reserve((__int64)v5, (char *)a1[3], 1u, 0x20u);
      a1[3] = v6;
      v7 = a1[4];
    }
    v8 = 32 * v7;
    v6[v8] = 2;
    a2 = 0.0;
    *(_OWORD *)&v6[v8 + 8] = 0;
    *(_QWORD *)&v6[v8 + 24] = 0;
    *(_QWORD *)&v6[v8 + 8] = 0;
    v4 = a1[4] + 1LL;
    a1[4] = v4;
  }
  v9 = a1[3] + 32 * v4 - 32;
  sub_75FD0(v9, a2, a3);
  return sub_75B90((__int64)a1, v9, a2, a3);
}
