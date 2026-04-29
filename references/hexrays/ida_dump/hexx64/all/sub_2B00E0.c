void __fastcall sub_2B00E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  bool (__fastcall ***v4)(__int64); // rdi
  bool (__fastcall *v5)(__int64); // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v4 = (bool (__fastcall ***)(__int64))(*(_QWORD *)(a1 + 40) + 56 * a3);
    v5 = **v4;
    if ( v5 == sub_2AD640 )
    {
      if ( !(unsigned int)sub_257C40((__int64)(v4 + 1), (__int64)(v4 + 4)) )
        return;
LABEL_6:
      switch_dbctx(*(int *)(a1 + 8));
      return;
    }
    if ( ((unsigned __int8 (*)(void))v5)() )
      goto LABEL_6;
  }
}
