void __fastcall sub_C13740(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d

  v8 = *a1;
  if ( *(_DWORD *)(v8 + 712) )
  {
    v9 = sub_15DE060(v8, a2, 0, a5, a6);
    sub_C13430(a1, a2, v9, a3, v10, v11, v12);
  }
  else
  {
    sub_C13430(a1, a2, 0, a3, a5, a6, a7);
  }
}

