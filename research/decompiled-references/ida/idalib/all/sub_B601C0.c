__int64 __fastcall sub_B601C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp

  v2 = sub_B7C110(*(_QWORD *)(a2 + 8));
  v3 = *(_QWORD *)(v2 + 8) + 56LL * *(unsigned int *)(v2 + 16);
  LODWORD(v2) = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(a1 + 8) = v2;
  if ( (unsigned int)v2 > 0x40 )
    sub_2205510(a1);
  else
    *(_QWORD *)a1 = *(_QWORD *)(v3 + 8);
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(v3 + 20);
  return a1;
}
