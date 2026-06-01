bool __fastcall sub_828B80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  bool result; // al
  _BYTE *v5; // rax

  v2 = *(_QWORD *)(a2 + 24);
  if ( !v2 )
    return 1;
  v3 = *(unsigned int *)(v2 + 4);
  result = 1;
  if ( (unsigned int)v3 <= 0x16 )
  {
    v5 = &algn_5D8FE2[27];
    return !_bittest64((const __int64 *)&v5, v3);
  }
  return result;
}

