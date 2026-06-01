unsigned __int64 __fastcall sub_CDD0(__int64 a1, __int16 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx

  v2 = *(_DWORD *)(a1 + 96);
  if ( !v2 )
    return sub_CD20((_QWORD *)a1, a2, 0);
  v3 = (unsigned int)(v2 - 1);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v3);
  if ( *(_WORD *)(v4 + 16) != 221 )
    return sub_CD20((_QWORD *)a1, a2, 0);
  *(_DWORD *)(a1 + 96) = v3;
  return sub_CD20((_QWORD *)a1, a2, v4);
}
