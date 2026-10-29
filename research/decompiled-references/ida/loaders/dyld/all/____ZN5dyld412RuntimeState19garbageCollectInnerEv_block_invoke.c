__int64 __fastcall ___ZN5dyld412RuntimeState19garbageCollectInnerEv_block_invoke(__int64 result)
{
  __int64 v1; // x9
  __int64 v2; // x8
  __int64 v3; // x19
  __int64 *v4; // x20
  __int64 v5; // x21
  __int64 *v6; // x22
  __int16 v7; // w8
  __int64 v8; // x0
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF
  bool v10; // [xsp+8h] [xbp-28h]

  v1 = *(_QWORD *)(result + 40);
  v2 = *(_QWORD *)(v1 + 48);
  if ( v2 )
  {
    v3 = result;
    v4 = *(__int64 **)(v1 + 40);
    v5 = 8 * v2;
    v6 = v4;
    do
    {
      v7 = *(_WORD *)(*v6 + 4);
      if ( (v7 & 2) == 0 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 40LL;
        v9 = *v6;
        v10 = (v7 & 0x20) != 0;
        result = dyld3::Array<dyld4::Reaper::LoaderAndUse>::push_back(v8, &v9);
      }
      ++v6;
      ++v4;
      v5 -= 8;
    }
    while ( v5 );
  }
  return result;
}
