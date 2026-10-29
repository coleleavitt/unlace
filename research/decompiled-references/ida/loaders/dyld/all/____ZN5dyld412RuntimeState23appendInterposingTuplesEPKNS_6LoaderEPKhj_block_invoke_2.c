_QWORD *__fastcall ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_2(
        _QWORD *result,
        mach_o::ChainedFixupPointerOnDisk *this,
        __int64 a3)
{
  unsigned __int64 v3; // x8
  bool v4; // cf
  __int64 v5; // x8
  _QWORD *v6; // x19
  unsigned __int64 v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x9
  unsigned __int64 v11; // x8
  __int64 v12; // x10
  __int64 v13; // x9
  __int64 v14; // x10
  unsigned int v15; // [xsp+4h] [xbp-1Ch] BYREF
  unsigned __int64 v16; // [xsp+8h] [xbp-18h] BYREF

  v3 = result[7];
  v4 = (unsigned __int64)this >= v3;
  v5 = (__int64)this - v3;
  if ( v4 )
  {
    v6 = result;
    if ( (unsigned __int64)this < result[8] )
    {
      v7 = (v5 >> 3) / 2;
      if ( (((v5 >> 3) + (v5 >> 3 < 0)) & 0xFFFFFFFFFFFFFFFELL) == v5 >> 3 )
      {
        v16 = 0;
        result = (_QWORD *)mach_o::ChainedFixupPointerOnDisk::isRebase(this, *(_WORD *)(a3 + 6), result[9], &v16);
        if ( (_DWORD)result )
        {
          v8 = *(_QWORD *)(v6[4] + 8LL);
          if ( *(_QWORD *)(v8 + 56) <= v7 )
            ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_2_cold_2();
          *(_QWORD *)(*(_QWORD *)(v8 + 40) + 32 * v7 + 8) = v16 + v6[10];
          v9 = *(_QWORD *)(v6[4] + 8LL);
          if ( *(_QWORD *)(v9 + 56) <= v7 )
            ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_2_cold_1();
          *(_QWORD *)(*(_QWORD *)(v9 + 40) + 32 * v7) = v6[11];
        }
      }
      else
      {
        v15 = 0;
        v16 = 0;
        result = (_QWORD *)mach_o::ChainedFixupPointerOnDisk::isBind(this, *(_WORD *)(a3 + 6), &v15, (__int64 *)&v16);
        if ( (_DWORD)result )
        {
          v10 = *(_QWORD *)(v6[5] + 8LL);
          v11 = v15;
          if ( *(_QWORD *)(v10 + 56) <= (unsigned __int64)v15 )
            ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_2_cold_6();
          v12 = *(_QWORD *)(v6[4] + 8LL);
          if ( *(_QWORD *)(v12 + 56) <= v7 )
            ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_2_cold_5();
          *(_QWORD *)(*(_QWORD *)(v12 + 40) + 32 * v7 + 16) = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v15);
          v13 = *(_QWORD *)(v6[6] + 8LL);
          if ( *(_QWORD *)(v13 + 56) <= v11 )
            ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_2_cold_4();
          v14 = *(_QWORD *)(v6[4] + 8LL);
          if ( *(_QWORD *)(v14 + 56) <= v7 )
            ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_2_cold_3();
          *(_QWORD *)(*(_QWORD *)(v14 + 40) + 32 * v7 + 24) = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 8 * v11);
        }
      }
    }
  }
  return result;
}
