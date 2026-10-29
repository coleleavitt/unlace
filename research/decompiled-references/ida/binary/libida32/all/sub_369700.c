__int64 __fastcall sub_369700(__int64 a1, __int64 a2)
{
  int *first_seg; // rax
  int v3; // edx

  first_seg = (int *)get_first_seg();
  v3 = -1;
  if ( first_seg )
    v3 = *first_seg;
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

