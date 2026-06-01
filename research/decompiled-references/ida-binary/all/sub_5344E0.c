void __fastcall sub_5344E0(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( !*a1 )
  {
    v2 = sub_534430(a2);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 192);
      if ( v3 )
        *a1 = v3;
    }
  }
}
