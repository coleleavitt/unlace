__int64 __fastcall sub_369720(__int64 a1, __int64 a2)
{
  int *segm_by_sel; // rax
  int v3; // edx

  segm_by_sel = (int *)get_segm_by_sel(*(unsigned int *)(a1 + 8));
  v3 = -1;
  if ( segm_by_sel )
    v3 = *segm_by_sel;
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

