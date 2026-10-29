__int64 __fastcall sub_608F20(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1672);
  if ( *(_QWORD *)(v1 + 8) )
  {
    if ( (debug & 0x100) != 0 )
    {
      sub_64C940();
      sub_368890();
    }
    sub_694830(a1);
    sub_608E60(a1);
    sub_5424F0(a1);
    free_til(*(_QWORD *)(v1 + 8));
    sub_653650();
    *(_QWORD *)(v1 + 8) = 0;
    v2 = *(_QWORD **)(a1 + 1648);
    v3 = v2[6];
    while ( v3 )
    {
      sub_6068F0(*(_QWORD **)(v3 + 24));
      v4 = (void *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      operator delete(v4, 0x28u);
    }
    v2[6] = 0;
    v2[7] = v2 + 5;
    v2[8] = v2 + 5;
    v2[9] = 0;
    return register_undo_handlers(&unk_2B32840, 3, 0, 0);
  }
  return result;
}
