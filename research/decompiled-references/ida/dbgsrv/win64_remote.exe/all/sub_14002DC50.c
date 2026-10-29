/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002DC50
// Address: 0x000000014002DC50

//----- (000000014002DC50) ----------------------------------------------------
__int64 __fastcall sub_14002DC50(_QWORD *a1, __int64 a2)
{
  if ( a1[3] - a2 < 4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(276);
  }
  return (unsigned __int8)*(_DWORD *)(a2 + *a1)
       + (((unsigned __int8)BYTE1(*(_DWORD *)(a2 + *a1))
         + (((HIBYTE(*(_DWORD *)(a2 + *a1)) << 8) + (unsigned int)(unsigned __int8)BYTE2(*(_DWORD *)(a2 + *a1))) << 8)) << 8);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
