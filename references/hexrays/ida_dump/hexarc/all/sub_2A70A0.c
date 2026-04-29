void __fastcall sub_2A70A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  bool (__fastcall *v5)(__int64); // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v4 = *(_QWORD *)(a1 + 40) + 56 * a3;
    v5 = **(bool (__fastcall ***)(__int64))v4;
    if ( v5 == sub_2A5DF0 )
    {
      if ( *(_QWORD *)(v4 + 8) == *(_QWORD *)(v4 + 40) )
        return;
LABEL_6:
      switch_dbctx(*(int *)(a1 + 8));
      return;
    }
    if ( ((unsigned __int8 (*)(void))v5)() )
      goto LABEL_6;
  }
}
