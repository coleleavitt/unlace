/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400126F0
// Address: 0x00000001400126F0

//----- (00000001400126F0) ----------------------------------------------------
__int64 __fastcall sub_1400126F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rax
  size_t v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  size_t v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi

  result = *(_QWORD *)(a2 + 8);
  v4 = *(__int64 **)a2;
  v5 = *(_QWORD *)a2 + 24 * result;
  if ( *(_QWORD *)a2 != v5 )
  {
    do
    {
      result = (__int64)sub_14006CA14(*v4, 0x3Du);
      if ( result )
      {
        v6 = v4[1];
        v7 = v6 - 1;
        if ( !v6 )
          v7 = 0;
        if ( v7 )
        {
          v8 = *(_QWORD *)(a1 + 8);
          v9 = v8 - 1;
          if ( !v8 )
            v9 = 0;
          v10 = v7 + v9 + 1;
          if ( v10 > *(_QWORD *)(a1 + 16) )
            *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v7 + v9 + 1, 1u);
          *(_QWORD *)(a1 + 8) = v10;
          *(_BYTE *)(v9 + *(_QWORD *)a1 + v7) = 0;
          memcpy((void *)(v9 + *(_QWORD *)a1), (const void *)*v4, v7);
        }
        v11 = *(_QWORD *)(a1 + 8);
        v12 = v11 - 1;
        if ( !v11 )
          v12 = 0;
        if ( (unsigned __int64)(v12 + 2) > *(_QWORD *)(a1 + 16) )
          *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v12 + 2, 1u);
        *(_QWORD *)(a1 + 8) = v12 + 2;
        *(_BYTE *)(v12 + *(_QWORD *)a1) = 0;
        result = *(_QWORD *)a1;
        *(_BYTE *)(*(_QWORD *)a1 + v12 + 1) = 0;
      }
      v4 += 3;
    }
    while ( v4 != (__int64 *)v5 );
  }
  if ( *(_QWORD *)(a1 + 8) > 1u )
    return sub_140004830(a1, 0);
  return result;
}
