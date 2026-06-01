void __fastcall sub_3F77A0(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v6 = a2[2];
      if ( *(_QWORD *)(v6 + 280) == -1 )
      {
        nullsub_347();
      }
      else if ( *(_QWORD *)(v6 + 112) )
      {
        v4 = (unsigned __int64 *)getseg(**(_QWORD **)(a4 + 8));
        if ( v4 )
        {
          v5 = *(_QWORD *)(v6 + 280);
          if ( v5 >= *v4 && v5 < v4[1] )
            JUMPOUT(0x3F7788);
        }
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
