__int64 __fastcall ___ZNK5dyld311MachOLoaded8getSlideEv_block_invoke(__int64 result, __int64 a2, _BYTE *a3)
{
  __int64 v5; // x20
  __int64 v6; // x22
  __int64 v7; // x8

  v5 = result;
  v6 = *(_QWORD *)(result + 40);
  if ( *(_DWORD *)a2 == 1 )
  {
    result = _platform_strcmp((const char *)(a2 + 8), "__TEXT");
    if ( (_DWORD)result )
      return result;
    v7 = *(unsigned int *)(a2 + 24);
    goto LABEL_7;
  }
  if ( *(_DWORD *)a2 == 25 )
  {
    result = _platform_strcmp((const char *)(a2 + 8), "__TEXT");
    if ( !(_DWORD)result )
    {
      v7 = *(_QWORD *)(a2 + 24);
LABEL_7:
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL) + 24LL) = v6 - v7;
      *a3 = 1;
    }
  }
  return result;
}
