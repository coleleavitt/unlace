__int64 __fastcall sub_138D80(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  v6 = a1[7];
  if ( !a2 || v6 != a2 )
    return 0;
  if ( *(_DWORD *)v6 == 43 )
    return a1[1];
  if ( *(_DWORD *)v6 != 44 || *(_BYTE *)(v6 + 64) != 7 )
    return 0;
  v7 = a1[8];
  v8 = *(unsigned int *)(v6 + 72);
  if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 64) )
    sub_132180(a1, a2, v7, a4, a5, a6);
  return *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8 * v8);
}
