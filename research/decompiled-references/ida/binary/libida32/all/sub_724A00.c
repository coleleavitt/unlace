void *__fastcall sub_724A00(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_WORD *)(a1 + 1634) == 1 )
    return &unk_2CA27C0;
  v1 = *(_QWORD *)(a1 + 2664);
  if ( !*(_QWORD *)(v1 - 24) )
  {
    if ( !under_debugger )
      interr(850);
    BUG();
  }
  return (void *)(v1 - 32);
}

