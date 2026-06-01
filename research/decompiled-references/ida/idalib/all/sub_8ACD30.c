void __fastcall sub_8ACD30(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // r8d
  int v4; // r9d

  v2 = *(_QWORD *)(a1 + 416);
  if ( v2 )
  {
    if ( *(_QWORD *)(a1 + 408) )
    {
      qsem_post(v2);
      callui(87, 3, *(_QWORD *)(a1 + 408), 2, v3, v4);
    }
    if ( !under_debugger )
      interr(3156);
    BUG();
  }
}
