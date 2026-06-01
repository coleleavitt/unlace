__int64 __fastcall sub_43F6D0(__int64 a1)
{
  __int64 i; // rbp
  __int64 v3; // rbx
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rax
  __int64 *v7; // rdi

  for ( i = *(_QWORD *)(a1 + 88); i; i = *(_QWORD *)(i + 48) )
  {
    v3 = *(_QWORD *)(i + 24);
    v4 = *(_DWORD *)v3 - 1;
    v5 = *(_DWORD *)v3 == 1;
    *(_DWORD *)v3 = v4;
    if ( v4 < 0 || v5 )
    {
      v6 = *(_QWORD *)(v3 + 24);
      if ( v6 && *(_QWORD *)(v6 + 8) )
      {
        sub_47B120(v3);
      }
      else
      {
        v7 = *(__int64 **)(v3 + 8);
        if ( v7 )
        {
          if ( v7 != off_656088 )
            Tcl_Free((__int64)v7);
        }
        *(_DWORD *)(v3 + 16) = -1;
        sub_496830(v3);
      }
    }
  }
  sub_457CE0(a1);
  return Tcl_Free(a1);
}

