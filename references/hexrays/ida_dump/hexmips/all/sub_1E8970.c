bool __fastcall sub_1E8970(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx

  if ( *(_BYTE *)a1 != 9 )
    return 0;
  v1 = *(__int64 **)(a1 + 8);
  if ( v1[1] )
    return 0;
  v3 = *v1;
  v4 = *((int *)v1 + 4);
  if ( *(_QWORD *)(v3 + 440) < v4 )
    sub_1E8300(a1);
  v5 = *(_QWORD *)(v3 + 432) + 104 * v4;
  v6 = *(_DWORD *)(v5 + 88);
  return v6 == *(_DWORD *)(a1 + 4) && (*(_BYTE *)(a1 + 1) & 2) == 0 && (*(_BYTE *)(v5 + 25) & 8) != 0 && sub_1188D0(v6);
}
