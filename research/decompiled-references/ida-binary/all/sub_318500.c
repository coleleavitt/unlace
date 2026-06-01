__int64 __fastcall rs_chooser_t::enter(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  v2 = sub_5313F0(unk_8CA550);
  if ( v2 )
    sub_5314B0(v2);
  if ( a1 )
  {
    v3 = a1[2];
    *a1 = &off_86FF78;
    qsem_free(v3);
    operator delete(a1, 0x18u);
  }
  return 0;
}
