__int64 __fastcall sub_3696E0(__int64 a1, __int64 a2)
{
  int *next_seg; // rax
  int v3; // edx

  next_seg = (int *)get_next_seg(*(unsigned int *)(a1 + 8));
  v3 = -1;
  if ( next_seg )
    v3 = *next_seg;
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

