/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002A1A0
// Address: 0x000000014002A1A0

//----- (000000014002A1A0) ----------------------------------------------------
__int64 __fastcall sub_14002A1A0(__int64 a1, __int64 a2)
{
  void *v5; // rax

  if ( !a1 )
    return sub_1400640B0(0x5FCu);
  sub_140029390(a1);
  *(_BYTE *)a1 = 5;
  v5 = operator new(0x18u);
  if ( v5 )
  {
    if ( a2 )
      v5 = (void *)sub_14002BC20((__int64)v5, *(_DWORD *)(a2 + 20));
    else
      v5 = (void *)sub_14002BC20((__int64)v5, 0);
  }
  *(_QWORD *)(a1 + 8) = v5;
  return 0;
}
