/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_add
// Address: 0x00000000000B31B0

//----- (00000000000B31B0) ----------------------------------------------------
unsigned __int64 __fastcall cliopts_t_add(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rcx
  char *v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+0h] [rbp-48h]
  __int128 v10; // [rsp+10h] [rbp-38h]
  __int64 v11; // [rsp+20h] [rbp-28h]

  if ( a3 )
  {
    v3 = a3;
    v5 = *(_QWORD *)(a1 + 8);
    do
    {
      v11 = *((_QWORD *)a2 + 4);
      v10 = a2[1];
      v9 = *a2;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v5 + 1) )
      {
        v6 = *(char **)a1;
      }
      else
      {
        v6 = (char *)qvector_reserve(a1, *(char **)a1, v5 + 1, 0x28u);
        *(_QWORD *)a1 = v6;
        v5 = *(_QWORD *)(a1 + 8);
      }
      v7 = 5 * v5;
      *(_QWORD *)&v6[8 * v7 + 32] = v11;
      *(_OWORD *)&v6[8 * v7 + 16] = v10;
      *(_OWORD *)&v6[8 * v7] = v9;
      v5 = *(_QWORD *)(a1 + 8) + 1LL;
      *(_QWORD *)(a1 + 8) = v5;
      a2 = (__int128 *)((char *)a2 + 40);
      --v3;
    }
    while ( v3 );
  }
  return __readfsqword(0x28u);
}
