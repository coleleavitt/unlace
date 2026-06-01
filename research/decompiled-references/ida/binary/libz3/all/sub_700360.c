__int64 __fastcall sub_700360(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  if ( v2 && a2 < *(_DWORD *)(v2 - 4) )
    return *(unsigned __int8 *)(v2 + a2);
  return v3;
}

