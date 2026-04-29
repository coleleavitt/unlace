__int64 __fastcall sub_2B6E20(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 (***v4)(void); // rdi
  unsigned __int8 (*v5)(void); // rax

  if ( a3 < *(_QWORD *)(a2 + 48) )
  {
    v4 = (unsigned __int8 (***)(void))(*(_QWORD *)(a2 + 40) + 88 * a3);
    v5 = **v4;
    if ( (char *)v5 == (char *)sub_2A8A60 )
    {
      if ( !(unsigned int)sub_253040((__int64)(v4 + 1), (__int64)(v4 + 8)) )
        goto LABEL_4;
    }
    else if ( !v5() )
    {
      goto LABEL_4;
    }
    switch_dbctx(*(int *)(a2 + 8));
  }
LABEL_4:
  sub_7D4C0(a1, (const char *)&unk_3F3793);
  return a1;
}
