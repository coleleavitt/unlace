/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012A90
// Address: 0x0000000100012A90

//----- (0000000100012A90) ----------------------------------------------------
__int64 __fastcall sub_100012A90(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rcx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r14
  __int128 v9; // [rsp+0h] [rbp-30h] BYREF
  __int64 v10; // [rsp+10h] [rbp-20h]

  v3 = *(unsigned int *)(a2 + 12);
  if ( *(_DWORD *)(a2 + 12) )
  {
    if ( *(_BYTE *)(a1 + 161) == 1 )
    {
      sub_100012BC0(a1, (__int64)a3, *(_DWORD *)(a2 + 8), v3, (__int64)"symbol table size", 0);
      if ( *(_BYTE *)(a1 + 160) == 1 )
      {
        v5 = 16 * a3[1];
        if ( v5 )
        {
          v6 = *a3;
          v7 = v6 + v5;
          do
          {
            *(_DWORD *)v6 = _byteswap_ulong(*(_DWORD *)v6);
            *(_WORD *)(v6 + 6) = __ROL2__(*(_WORD *)(v6 + 6), 8);
            *(_QWORD *)(v6 + 8) = swap64(*(_QWORD *)(v6 + 8));
            v6 += 16;
          }
          while ( v6 != v7 );
        }
      }
    }
    else
    {
      v9 = 0;
      v10 = 0;
      sub_100012D00(a1, (__int64)&v9, *(_DWORD *)(a2 + 8), v3, (__int64)"symbol table size", 0);
      sub_100012E40((__int64)a3, (__int64 *)&v9, *(_BYTE *)(a1 + 160));
      if ( (_QWORD)v9 )
      {
        *((_QWORD *)&v9 + 1) = 0;
        qfree((void *)v9);
      }
    }
  }
  return __stack_chk_guard;
}
