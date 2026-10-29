__int64 __fastcall clang_index_getObjCProtocolRefListInfo(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx

  if ( !a1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 128);
  if ( v1 == 2 )
    return *(_QWORD *)(a1 + 416);
  v2 = a1 + 400;
  if ( v1 == 3 )
    return v2;
  v2 = 0;
  if ( v1 != 4 )
    return v2;
  return *(_QWORD *)(a1 + 472);
}

