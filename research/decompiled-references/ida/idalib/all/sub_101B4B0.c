__int64 __fastcall sub_101B4B0(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rsi

  v3 = *(unsigned int **)(a1 + 8);
  v4 = *(_DWORD *)a1 & 0x7FFFFFFF;
  if ( v4 >= v3[119] && v4 < v3[120] )
    v5 = v3[118];
  else
    v5 = (unsigned int)sub_101D590(*(_QWORD *)(a1 + 8));
  return sub_10202B0(v3, v5, a2);
}
