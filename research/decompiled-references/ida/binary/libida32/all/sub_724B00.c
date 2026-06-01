void __fastcall sub_724B00(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v4; // rax

  if ( *(_DWORD *)a2 != a3 )
    sub_724A50(a1, ((__int64)(a2 - (a1 + 1640)) >> 5) + 1);
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v4 = (__int64 *)sub_71AA60(a1, a3, 1u);
    if ( !v4 || *((__int16 *)v4 + 4) < 0 )
      sub_722BF0();
    if ( *(_QWORD *)(a2 + 8) )
    {
      if ( !under_debugger )
        interr(836);
      BUG();
    }
    *(_QWORD *)(a2 + 8) = v4;
    *(_QWORD *)(a2 + 16) = *(__int16 *)(*v4 + 4);
    *(_DWORD *)a2 = *((_DWORD *)v4 + 3);
    sub_7180A0(*(_QWORD *)(a1 + 8), *v4);
  }
}

