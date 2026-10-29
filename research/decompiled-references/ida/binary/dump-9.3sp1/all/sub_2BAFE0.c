unsigned __int64 __fastcall sub_2BAFE0(__int64 a1)
{
  unsigned __int64 v2; // [rsp+48h] [rbp-40h]

  v2 = __readfsqword(0x28u);
  switch_dbctx();
  if ( sub_2B6080(a1, 0) != -1 )
  {
    switch_dbctx();
    sub_2B6080(a1, 1);
    switch_dbctx();
    netnode_copy2();
  }
  return v2 - __readfsqword(0x28u);
}
