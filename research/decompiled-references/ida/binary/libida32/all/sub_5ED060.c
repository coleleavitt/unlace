__int64 __fastcall sub_5ED060(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1480);
  if ( *(_QWORD *)(v1 + 8) )
  {
    if ( (debug & 0x100) != 0 )
    {
      sub_62F340();
      sub_365330();
    }
    sub_674B50(a1);
    sub_5ECFA0(a1);
    sub_5297F0(a1);
    free_til(*(_QWORD *)(v1 + 8));
    sub_636040();
    *(_QWORD *)(v1 + 8) = 0;
    v2 = *(_QWORD **)(a1 + 1456);
    v3 = v2[6];
    while ( v3 )
    {
      sub_5EAA20(*(_QWORD **)(v3 + 24));
      v4 = (void *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      operator delete(v4, 0x28u);
    }
    v2[6] = 0;
    v2[7] = v2 + 5;
    v2[8] = v2 + 5;
    v2[9] = 0;
    return register_undo_handlers(&unk_2B08880, 3, 0, 0);
  }
  return result;
}

