__int64 __fastcall ___ZN5dyld44APIs24_dyld_visit_objc_classesEU13block_pointerFvPKvE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  __int64 v7; // x22

  v4 = a4[2];
  if ( v4 )
  {
    v5 = result;
    v6 = *a4;
    v7 = 16 * v4;
    do
    {
      v6 += 16;
      result = (*(__int64 (**)(void))(*(_QWORD *)(v5 + 32) + 16LL))();
      v7 -= 16;
    }
    while ( v7 );
  }
  return result;
}
