__int64 __fastcall sub_E230D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdi

  v2 = *(_DWORD *)(a2 + 40);
  v4 = *(_QWORD *)(a2 + 32);
  if ( v2 == -1 )
    *(_QWORD *)a1 = 0;
  else
    *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = v4;
  *(_DWORD *)(a1 + 40) = v2;
  if ( v4 )
    sub_E1E330(v4, a1);
  return a1;
}
