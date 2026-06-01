unsigned __int64 __fastcall srcitem_node_t__::vfunc_2(__int64 a1, __int64 a2, const char *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  const char *v7; // r9
  const char *v8; // r8
  double v9; // xmm0_8
  const char *v11; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD **)(a1 + 376);
  v13 = __readfsqword(0x28u);
  v11 = nullptr;
  v12 = 0;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 128LL))(v3);
    v6 = *(_QWORD *)(a1 + 376);
    v3 = (_QWORD *)v5;
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, const char **))(*(_QWORD *)v6 + 16LL))(v6, &v11);
      v7 = v11;
    }
    else
    {
      v7 = "(none)";
    }
    v8 = "(none)";
    if ( v3 )
      v8 = (const char *)v3[3];
  }
  else
  {
    v7 = "(none)";
    v8 = "(none)";
  }
  v9 = qsnprintf(a2, a3, "provider=%p (%s), source_item=%p", v3, v8, v7);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11, a3, v9);
  }
  return v13 - __readfsqword(0x28u);
}
