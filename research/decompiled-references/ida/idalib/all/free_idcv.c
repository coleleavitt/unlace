void __fastcall free_idcv(__int64 a1)
{
  void *v2; // rdi

  if ( !a1 )
  {
    if ( !under_debugger )
      interr(2656);
    BUG();
  }
  if ( *(_BYTE *)a1 == 5 )
  {
    sub_795DE0(*(_DWORD **)(a1 + 8));
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  else if ( *(_BYTE *)a1 == 7 && (v2 = *(void **)(a1 + 8)) != nullptr )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v2);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
}
