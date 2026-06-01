__int64 __fastcall sub_145C930(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v1 + 201) >> 5 )
    return 0;
  v2 = *(_QWORD *)(v1 + 464);
  if ( !v2 )
    return 0;
  else
    return sub_13C9950(*(__int64 **)(a1 + 104), *(_QWORD *)(v1 + 456), v2, 0, 1, 0);
}
