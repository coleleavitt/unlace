/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434330
// Address: 0x0000000000434330

//----- (0000000000434330) ----------------------------------------------------
__int64 __fastcall sub_434330(__int64 a1, char a2, int a3)
{
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned int v5; // ebp

  v3 = *(_QWORD *)(a1 + 352);
  v4 = *(_DWORD **)(*(_QWORD *)(a1 + 344) + 8 * v3 - 8);
  if ( v3 )
    *(_QWORD *)(a1 + 352) = v3 - 1;
  if ( !a3 || (v5 = 58, (*v4 & 0xFFFFFFFB) == 1) )
    v5 = sub_433F50(a1, (__int64)v4, a2, a3);
  if ( v4 )
  {
    sub_433250((__int64)v4);
    operator delete(v4, 0x20u);
  }
  return sub_479EB0(v5);
}
