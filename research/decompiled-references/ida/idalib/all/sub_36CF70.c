__int64 __fastcall sub_36CF70(__int64 a1, __int64 a2)
{
  __int64 *segm_by_sel; // rax
  __int64 v3; // rdx

  segm_by_sel = (__int64 *)get_segm_by_sel(*(_QWORD *)(a1 + 8));
  v3 = -1;
  if ( segm_by_sel )
    v3 = *segm_by_sel;
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
