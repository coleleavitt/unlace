__int64 __fastcall dwarf_frame_constructor(_QWORD *a1, __int64 a2)
{
  size_t v3; // r12
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx

  if ( !a1 )
    return 1;
  if ( *a1 != 3959286781LL )
    return 1;
  v3 = a1[1040];
  *(_QWORD *)(a2 + 72) = v3;
  v4 = calloc(v3, 0x40u);
  *(_QWORD *)(a2 + 80) = v4;
  if ( !v4 )
    return 1;
  v5 = a1[1039];
  v6 = 0;
  if ( v3 )
  {
    do
    {
      ++v6;
      v4[1] = v5;
      v4 += 8;
      *((_WORD *)v4 - 32) = 0;
      *(v4 - 6) = 0;
      *(v4 - 3) = 0;
      *(_OWORD *)(v4 - 5) = 0;
    }
    while ( v3 != v6 );
  }
  return 0;
}

