/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003A240
// Address: 0x000000014003A240

//----- (000000014003A240) ----------------------------------------------------
__int64 __fastcall sub_14003A240(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx

  result = sub_1400649C0(a1, *(FILE **)(a2 + 296));
  v5 = result;
  if ( result > 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v6 - 1;
    if ( !v6 )
      v7 = 0;
    if ( v7 >= 3 )
    {
      if ( !strncmp(*(const char **)a1, &byte_140096658, 3u) && sub_140064580(*(_QWORD *)(a2 + 296)) <= v5 + 2 )
      {
        v8 = *(_QWORD *)(a1 + 8);
        v9 = 0;
        v10 = v8 - 1;
        if ( !v8 )
          v10 = 0;
        if ( v10 )
        {
          if ( v10 > 3 )
          {
            v9 = v10 - 3;
            memcpy(*(void **)a1, (const void *)(*(_QWORD *)a1 + 3LL), v10 - 3);
          }
          if ( v9 + 1 > *(_QWORD *)(a1 + 16) )
            *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v9 + 1, 1u);
          *(_QWORD *)(a1 + 8) = v9 + 1;
          *(_BYTE *)(v9 + *(_QWORD *)a1) = 0;
        }
        v11 = *(_QWORD *)(a1 + 8);
        result = v11 - 1;
        if ( !v11 )
          return 0;
      }
      else
      {
        return v5;
      }
    }
  }
  return result;
}
