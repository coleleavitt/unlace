__int64 __fastcall sub_626410(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v5; // eax
  int v6; // edx

  v2 = operator new(0x28u);
  v3 = *(_QWORD *)(qword_2CA1698 + 536);
  *(_DWORD *)(v2 + 32) = -1;
  *(_QWORD *)v2 = off_2B0CFD0;
  *(_QWORD *)(v2 + 24) = v3;
  *(_QWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 16) = -1;
  if ( !v3 || (*(_BYTE *)(v3 + 37) & 4) == 0 )
    return v2;
  v5 = sub_6232D0(v3, 27, a1, v2 + 8, 1, 0);
  *(_DWORD *)(v2 + 32) = v5;
  v6 = -1;
  if ( v5 != -1 )
  {
    v6 = 0;
    if ( *(int *)(v2 + 8) > 0 )
      v6 = (*(_QWORD *)(*(_QWORD *)(v2 + 24) + 32LL) & 0x4000LL) == 0 ? 1024 : 256;
  }
  *(_DWORD *)(v2 + 16) = v6;
  return v2;
}

