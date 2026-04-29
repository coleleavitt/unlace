__int64 __fastcall sub_1ED550(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  int v7; // edx

  if ( *(_BYTE *)a2 == 9 )
  {
    v3 = *(__int64 **)(a2 + 8);
    v4 = *v3;
    v5 = *((int *)v3 + 4);
    if ( *(_QWORD *)(v4 + 440) < v5 )
      sub_1ECF40(a1);
    v6 = *(_QWORD *)(v4 + 432) + 104 * v5;
    v7 = *(_DWORD *)(v6 + 24);
    *(_DWORD *)(v6 + 24) = v7 | 0x800000;
    if ( **(_DWORD **)(a1 + 24) == 62 )
      *(_DWORD *)(v6 + 24) = v7 | 0x820000;
  }
  return 0;
}
