void __fastcall sub_293930(_QWORD **a1, const char *a2)
{
  _QWORD *v2; // r13
  __int64 v3; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    v3 = v2[2];
    while ( v3 )
    {
      v5 = (_QWORD *)v3;
      sub_2919A0(*(_QWORD **)(v3 + 24), a2);
      v6 = *(_QWORD *)(v3 + 56);
      v3 = *(_QWORD *)(v3 + 16);
      if ( v6 )
      {
        v5[8] = 0;
        qfree(v6, a2);
      }
      a2 = (_BYTE *)off_50;
      operator delete(v5, 0x50u);
    }
    operator delete(v2, 0x30u);
    *a1 = nullptr;
  }
}
