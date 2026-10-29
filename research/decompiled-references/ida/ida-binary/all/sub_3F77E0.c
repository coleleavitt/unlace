void __fastcall sub_3F77E0(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v9 = a2[2];
      v10 = **(_QWORD **)(a4 + 8);
      if ( *(_QWORD *)(v9 + 280) == -1 )
      {
        nullsub_347();
      }
      else if ( *(_QWORD *)(v9 + 112) )
      {
        v4 = (unsigned __int64 *)getseg(v10);
        if ( v4 )
        {
          v8 = *(_QWORD *)(v9 + 280);
          if ( v8 >= *v4 && v8 < v4[1] )
            sub_3F7660(v9, v10, v8, v5, v6, v7);
        }
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
