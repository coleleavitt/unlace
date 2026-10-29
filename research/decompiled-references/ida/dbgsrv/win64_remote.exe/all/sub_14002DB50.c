/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002DB50
// Address: 0x000000014002DB50

//----- (000000014002DB50) ----------------------------------------------------
unsigned __int64 __fastcall sub_14002DB50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d
  __int64 v4; // rdx

  if ( a1[3] - a2 < 4 || (v3 = *(_DWORD *)(*a1 + a2), v4 = a2 + 4, a1[3] - v4 < 4) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(276);
  }
  v2 = *a1;
  return (unsigned __int8)v3
       + ((BYTE1(v3)
         + ((BYTE2(v3)
           + (((((unsigned __int8)*(_DWORD *)(v2 + v4)
               + (((unsigned __int8)BYTE1(*(_DWORD *)(v2 + v4))
                 + (((unsigned __int8)BYTE2(*(_DWORD *)(v2 + v4))
                   + ((unsigned __int64)*(unsigned int *)(v2 + v4) >> 24 << 8)) << 8)) << 8)) << 8)
             + HIBYTE(v3)) << 8)) << 8)) << 8);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
