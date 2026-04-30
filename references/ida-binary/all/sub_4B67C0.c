void __fastcall apply_tree_layout(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax

  v3 = a3[1];
  if ( v3 )
  {
    v4 = *a3;
    v5 = 0;
    while ( !*(_QWORD *)(v4 + 8) || strcmp(*(const char **)v4, "hidden") )
    {
      ++v5;
      v4 += 40;
      if ( v3 == v5 )
        return;
    }
    if ( *(_DWORD *)(v4 + 24) == 5 )
    {
      if ( *(_BYTE *)(v4 + 32) )
      {
        v6 = sub_47A690((__int64)QT::QCoreApplication::self);
        sub_4C9900(v6, a2);
      }
    }
  }
}
