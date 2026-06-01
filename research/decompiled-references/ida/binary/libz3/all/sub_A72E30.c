__int64 __fastcall sub_A72E30(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // edx
  unsigned int v5; // edx
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  v3 = *(_QWORD *)(v2 + 112);
  if ( *(_BYTE *)(v3 + 308) )
  {
    v4 = *(_DWORD *)(v2 + 10324);
    if ( (unsigned int)v4 > 9 && (double)*(int *)(v1 + 320) / (double)v4 < *(double *)(v3 + 312) )
      return 0;
  }
  v7 = *(_QWORD *)(v1 + 176);
  if ( v7 && *(_DWORD *)(v1 + 264) < *(_DWORD *)(v7 - 4) )
    return 1;
  v5 = *(unsigned __int8 *)(v1 + 769);
  if ( (_BYTE)v5 )
    return v5;
  return sub_FF9CD0(*(_QWORD *)(v1 + 504));
}

