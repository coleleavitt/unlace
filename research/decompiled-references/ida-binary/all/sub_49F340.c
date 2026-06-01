void __fastcall sub_49F340(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 (*v3)(); // rax

  *(_OWORD *)(a1 + 2408) = 0;
  *(_OWORD *)(a1 + 2424) = 0;
  v2 = *(_BYTE **)(a1 + 2392);
  if ( v2[8] > 1u )
  {
    v3 = *(__int64 (**)())(*(_QWORD *)v2 + 152LL);
    if ( (v2[12] & 4) != 0 )
    {
      if ( v3 == exc_chooser_t__::vfunc_19 )
        goto LABEL_4;
    }
    else if ( v3 == addon_chooser_t__::vfunc_19 )
    {
LABEL_4:
      *(_OWORD *)(a1 + 2408) = 0;
      *(_OWORD *)(a1 + 2424) = 0;
      return;
    }
    if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v3)(v2, a1 + 2408) )
      return;
    goto LABEL_4;
  }
}
