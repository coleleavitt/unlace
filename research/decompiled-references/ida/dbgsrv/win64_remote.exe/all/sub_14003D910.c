/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003D910
// Address: 0x000000014003D910

//----- (000000014003D910) ----------------------------------------------------
__int64 __fastcall sub_14003D910(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx

  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 64);
    do
    {
      v4 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)a1 = *(_QWORD *)(56 * result + v4 - 32);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(56 * result + v4 - 24);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(56 * result + v4 - 8);
      result = v3;
      if ( v3 )
      {
        result = v3 - 1;
        *(_QWORD *)(a1 + 64) = v3 - 1;
        v5 = v4 + 56 * v3;
        if ( *(_QWORD *)(v5 - 56) )
        {
          sub_14001A6C0((_QWORD *)(v5 - 56), 0);
          j_free(*(void **)(v5 - 56));
          *(_QWORD *)(v5 - 56) = 0;
          *(_QWORD *)(v5 - 40) = 0;
          result = *(_QWORD *)(a1 + 64);
        }
      }
      v3 = result;
    }
    while ( result );
  }
  return result;
}
