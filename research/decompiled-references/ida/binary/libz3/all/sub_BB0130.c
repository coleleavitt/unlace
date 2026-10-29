__int64 __fastcall sub_BB0130(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 1000);
  if ( v1 && *(_DWORD *)(a1 + 1032) < *(_DWORD *)(v1 - 4) )
    return 1;
  v3 = *(_QWORD *)(a1 + 1176);
  if ( v3 && *(_DWORD *)(v3 - 4) )
    return 1;
  else
    return *(unsigned __int8 *)(a1 + 4169);
}

