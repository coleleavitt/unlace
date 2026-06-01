void __fastcall sub_745040(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v4; // rax

  if ( *(_DWORD *)a2 != a3 )
    sub_744F90(a1, ((__int64)(a2 - (a1 + 1640)) >> 5) + 1);
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v4 = (__int64 *)sub_73AFA0(a1, a3, 1u);
    if ( !v4 || *((__int16 *)v4 + 4) < 0 )
      sub_743130();
    if ( *(_QWORD *)(a2 + 8) )
    {
      if ( !under_debugger )
        interr(836);
      BUG();
    }
    *(_QWORD *)(a2 + 8) = v4;
    *(_QWORD *)(a2 + 16) = *(__int16 *)(*v4 + 4);
    *(_DWORD *)a2 = *((_DWORD *)v4 + 3);
    sub_7385E0(*(_QWORD *)(a1 + 8), *v4);
  }
}
