__int64 __fastcall sub_363830(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( *(_BYTE *)(a1 + 24) )
    return (unsigned int)(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, void *, _BYTE *))(**(_QWORD **)(a1 + 16)
                                                                                            + 32LL))(
                           *(_QWORD *)(a1 + 16),
                           *(_QWORD *)(a1 + 8),
                           &unk_3F60D3,
                           a2)
         - 1;
  v3 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 24) = 1;
  v4 = 32;
  if ( *a2 == 123 )
  {
    v4 = 10;
    if ( a2[1] )
      v4 = 32;
  }
  if ( (*(unsigned __int8 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)v3 + 32LL))(
         v3,
         *(_QWORD *)(a1 + 8),
         " =%c",
         v4) )
  {
    return (unsigned int)(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, void *, _BYTE *))(**(_QWORD **)(a1 + 16)
                                                                                            + 32LL))(
                           *(_QWORD *)(a1 + 16),
                           *(_QWORD *)(a1 + 8),
                           &unk_3F60D3,
                           a2)
         - 1;
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
