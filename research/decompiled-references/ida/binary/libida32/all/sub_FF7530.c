__int64 __fastcall sub_FF7530(__int64 a1)
{
  unsigned int *v1; // rax
  unsigned int v2; // esi

  v1 = *(unsigned int **)(a1 + 8);
  v2 = *(_DWORD *)a1 & 0x7FFFFFFF;
  if ( v2 < v1[119] || v2 >= v1[120] )
    return sub_FF9850(*(_QWORD *)(a1 + 8));
  else
    return v1[118];
}

