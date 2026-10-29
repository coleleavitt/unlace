void __fastcall sub_46E730(__int64 a1, int a2, int a3, __int64 a4)
{
  void (*v4)(); // rax

  if ( !a2 )
  {
    if ( a3 == 1 )
    {
      v4 = *(void (**)())(*(_QWORD *)a1 + 808LL);
      if ( v4 == nullsub_231 )
        return;
    }
    else
    {
      if ( a3 != 2 )
      {
        if ( !a3 )
          sub_38C310(a1, **(_QWORD **)(a4 + 8));
        return;
      }
      v4 = *(void (**)())(*(_QWORD *)a1 + 816LL);
      if ( v4 == nullsub_232 )
        return;
    }
    v4();
  }
}
