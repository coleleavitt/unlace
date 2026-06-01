bool __fastcall sub_14F7720(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int16 v6; // ax
  unsigned __int64 v7; // rax

  if ( *(_WORD *)(a1 + 32) != 1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD *)(v2 + 2944);
    v4 = *(unsigned int *)(v2 + 2912);
    if ( v3 >= v4 )
    {
      if ( *(_WORD *)(sub_14180A0(v2, 1u) + 16) != 5 )
        return 0;
      v6 = *(_WORD *)(a1 + 32);
      if ( v6 == 1 )
        return v6 == 5;
      v2 = *(_QWORD *)(a1 + 8);
      v3 = *(_QWORD *)(v2 + 2944);
      v4 = *(unsigned int *)(v2 + 2912);
    }
    else if ( *(_WORD *)(*(_QWORD *)(v2 + 2904) + 24 * v3 + 16) != 5 )
    {
      return 0;
    }
    v7 = v3 + 1;
    if ( v7 >= v4 )
      v6 = *(_WORD *)(sub_14180A0(v2, 2u) + 16);
    else
      v6 = *(_WORD *)(*(_QWORD *)(v2 + 2904) + 24 * v7 + 16);
    return v6 == 5;
  }
  return 0;
}
