__int64 __fastcall merge_progress_chooser_t__::vfunc_13(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v5; // rax

  v2 = sub_277DF0();
  v3 = *(_QWORD *)(**(_QWORD **)(a1 + 216) + 8 * a2);
  if ( v3 != *(_QWORD *)(v2 + 112) && *(__int64 *)(v3 + 128) >= 0 )
  {
    *(_QWORD *)(v2 + 120) = -1;
    *(_DWORD *)(v2 + 128) = 0;
    *(_QWORD *)(v2 + 112) = v3;
    sub_464450(v2);
    v5 = sub_2780D0(v2, *(_QWORD *)(v2 + 120), 17);
    if ( v5 != -1 )
      sub_278850(v2, v5, 17, 0, 1);
  }
  return a2;
}
