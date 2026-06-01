/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57BB0
// Address: 0x0000000000057BB0

//----- (0000000000057BB0) ----------------------------------------------------
__int64 __fastcall sub_57BB0(_QWORD *a1, __int128 *a2)
{
  char **v3; // rdi
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int128 v9; // [rsp+0h] [rbp-58h]
  __int128 v10; // [rsp+10h] [rbp-48h]
  __int128 v11; // [rsp+20h] [rbp-38h]
  __int128 v12; // [rsp+30h] [rbp-28h]

  v3 = (char **)(a1 + 4);
  v12 = a2[3];
  v11 = a2[2];
  v10 = a2[1];
  v9 = *a2;
  v4 = a1[5];
  if ( a1[6] >= (unsigned __int64)(v4 + 1) )
  {
    v5 = *v3;
  }
  else
  {
    v5 = (char *)qvector_reserve((__int64)v3, (char *)a1[4], v4 + 1, 0x40u);
    a1[4] = v5;
    v4 = a1[5];
  }
  v6 = v4 << 6;
  *(_OWORD *)&v5[v6 + 48] = v12;
  *(_OWORD *)&v5[v6 + 32] = v11;
  *(_OWORD *)&v5[v6 + 16] = v10;
  *(_OWORD *)&v5[v6] = v9;
  v7 = a1[5] + 1LL;
  a1[5] = v7;
  return (unsigned int)(v7 - 1);
}
