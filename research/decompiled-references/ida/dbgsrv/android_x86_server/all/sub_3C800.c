/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C800
// Address: 0x0003C800

//----- (0003C800) --------------------------------------------------------
_BYTE *__cdecl sub_3C800(int a1, void **a2, unsigned int a3)
{
  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20099);
    BUG();
  }
  if ( *(_DWORD *)(a1 + 20) > a3 && *(__int64 *)(a1 + 140) >= 1 && *(_QWORD *)(a1 + 156) )
    return sub_3C8A0(*(int **)(a1 + 132), a2, (_QWORD *)(a1 + 140), *(_DWORD *)(*(_DWORD *)(a1 + 16) + (a3 << 6)));
  else
    return nullptr;
}
// 13E34C: using guessed type int under_debugger;
