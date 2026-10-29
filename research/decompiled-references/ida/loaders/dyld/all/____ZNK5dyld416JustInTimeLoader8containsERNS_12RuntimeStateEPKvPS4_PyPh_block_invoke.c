__int64 __fastcall ___ZNK5dyld416JustInTimeLoader8containsERNS_12RuntimeStateEPKvPS4_PyPh_block_invoke(
        __int64 result,
        __int64 a2,
        _BYTE *a3)
{
  unsigned __int64 v3; // x10
  unsigned __int64 v4; // x8
  __int64 v5; // x9
  _BYTE *v6; // x10

  v3 = *(_QWORD *)(result + 48);
  v4 = *(_QWORD *)(result + 40) + *(_QWORD *)(a2 + 16);
  if ( v4 <= v3 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v3 < v5 + v4 )
    {
      **(_QWORD **)(result + 56) = v4;
      v6 = *(_BYTE **)(result + 72);
      **(_QWORD **)(result + 64) = v5;
      *v6 = *(_DWORD *)(a2 + 52);
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = 1;
      *a3 = 1;
    }
  }
  return result;
}
