void __fastcall sub_46E790(__int64 a1, int a2, int a3, __int64 a4)
{
  void (*v4)(); // rax

  if ( !a2 )
  {
    if ( a3 == 1 )
    {
      v4 = *(void (**)())(*(_QWORD *)a1 + 824LL);
      if ( v4 == nullsub_229 )
        return;
    }
    else
    {
      if ( a3 != 2 )
      {
        if ( !a3 )
          sub_38C240(a1, **(_QWORD **)(a4 + 8));
        return;
      }
      v4 = *(void (**)())(*(_QWORD *)a1 + 832LL);
      if ( v4 == nullsub_230 )
        return;
    }
    v4();
  }
}
