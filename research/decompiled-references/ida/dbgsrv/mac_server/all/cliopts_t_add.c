/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_add
// Address: 0x0000000100072580

//----- (0000000100072580) ----------------------------------------------------
__int64 __fastcall cliopts_t_add(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int128 v9; // [rsp+0h] [rbp-50h]
  __int128 v10; // [rsp+10h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-30h]

  if ( a3 )
  {
    v3 = a3;
    v5 = *(_QWORD *)(a1 + 8);
    do
    {
      v11 = *((_QWORD *)a2 + 4);
      v10 = a2[1];
      v9 = *a2;
      v7 = *(_QWORD **)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v5 + 1) )
      {
        v7 = qvector_reserve(a1, *(void **)a1, v5 + 1, 0x28u);
        *(_QWORD *)a1 = v7;
        v5 = *(_QWORD *)(a1 + 8);
      }
      v6 = 5 * v5;
      v7[v6 + 4] = v11;
      *(_OWORD *)&v7[v6 + 2] = v10;
      *(_OWORD *)&v7[v6] = v9;
      v5 = *(_QWORD *)(a1 + 8) + 1LL;
      *(_QWORD *)(a1 + 8) = v5;
      a2 = (__int128 *)((char *)a2 + 40);
      --v3;
    }
    while ( v3 );
  }
  return __stack_chk_guard;
}
