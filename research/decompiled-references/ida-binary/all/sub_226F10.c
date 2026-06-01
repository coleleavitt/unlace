__int64 __fastcall mr_chooser_t__::vfunc_13(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 *v3; // rax

  v2 = *(_QWORD **)(a1 + 192);
  if ( a2 < v2[1] )
  {
    v3 = (__int64 *)(*v2 + 80 * a2);
    if ( v3 )
      sub_192AA0(0, *v3, -1, 1u);
  }
  return -1;
}
