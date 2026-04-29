__int64 __fastcall sub_32A510(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi

  v4 = compare_tinfo(*a2, *a3, 2);
  if ( !(_BYTE)v4
    && (unsigned __int8)compare_tinfo(*a2, *(_QWORD *)(a1 + 248), 2)
    && (v6 = *(_QWORD *)(a1 + 256), (_BYTE)v6) )
  {
    return compare_tinfo(v6, *a3, 0);
  }
  else
  {
    return v4;
  }
}
