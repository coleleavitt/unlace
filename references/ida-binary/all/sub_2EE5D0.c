__int64 __fastcall fh_entries_chooser_t__::vfunc_5(__int64 a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 184);
  if ( v1
    && (v2 = *(int *)(a1 + 232), (v2 & 0x80000000) == 0LL)
    && v2 < v1[3]
    && (v3 = *(int *)(v1[2] + 4 * v2), (v3 & 0x80000000) == 0LL)
    && v3 < v1[6] )
  {
    v4 = v1[5] + 24 * v3;
    *(_QWORD *)(a1 + 192) = v4;
    return *(_QWORD *)(v4 + 8) + 1LL;
  }
  else
  {
    *(_QWORD *)(a1 + 192) = 0;
    return 0;
  }
}
