__int64 __fastcall srcdbg_place_t__::vfunc_8(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = simpleline_place_t__next(a1, *(_QWORD *)(a2 + 80));
  if ( (_BYTE)v2 )
    *(_QWORD *)(a1 + 16) = sub_384C20(a2, *(_DWORD *)(a1 + 12));
  return v2;
}
