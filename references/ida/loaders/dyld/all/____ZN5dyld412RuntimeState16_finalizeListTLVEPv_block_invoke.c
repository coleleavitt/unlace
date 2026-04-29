__int64 __fastcall ___ZN5dyld412RuntimeState16_finalizeListTLVEPv_block_invoke(__int64 result, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x19
  _QWORD *v4; // x22
  void (__fastcall *v5)(_QWORD); // x8
  __int64 v6; // x20

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(result + 32);
    v4 = (_QWORD *)(a2 + 16 * v2 + 8);
    do
    {
      v5 = (void (__fastcall *)(_QWORD))*(v4 - 1);
      if ( v5 )
        v5(*v4);
      --v2;
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 120) + 64LL))(
                 *(_QWORD *)(v3 + 120),
                 *(_QWORD *)(v3 + 800));
      if ( result )
      {
        v6 = result;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v3 + 120) + 72LL))(
          *(_QWORD *)(v3 + 120),
          *(_QWORD *)(v3 + 800),
          0);
        result = (**(__int64 (__fastcall ***)(__int64, __int64))v3)(v3, v6);
      }
      v4 -= 2;
    }
    while ( v2 );
  }
  return result;
}
