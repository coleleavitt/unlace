void __fastcall sub_193E70(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 (*v3)(); // rax

  *(_OWORD *)(a1 + 2536) = 0;
  *(_OWORD *)(a1 + 2552) = 0;
  v2 = *(_BYTE **)(a1 + 2520);
  if ( v2[8] > 1u )
  {
    v3 = *(__int64 (**)())(*(_QWORD *)v2 + 152LL);
    if ( (v2[12] & 4) != 0 )
    {
      if ( v3 == sub_B7440 )
        goto LABEL_4;
    }
    else if ( v3 == sub_91C80 )
    {
LABEL_4:
      *(_OWORD *)(a1 + 2536) = 0;
      *(_OWORD *)(a1 + 2552) = 0;
      return;
    }
    if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v3)(v2, a1 + 2536) )
      return;
    goto LABEL_4;
  }
}

