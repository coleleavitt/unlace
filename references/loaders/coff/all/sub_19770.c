__int64 __fastcall sub_19770(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  if ( *(_WORD *)(a3 + 12) != 4 )
    return sub_143F0(a1, a2, a3);
  v4 = getseg(a1[5]);
  a1[7] -= get_segm_base(v4);
  return sub_143F0(a1, a2, a3);
}
