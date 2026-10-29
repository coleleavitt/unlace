__int64 __fastcall sub_152A20(__int64 a1, __int64 a2)
{
  void (*v2)(); // rax
  void (*v3)(); // rax

  if ( (*(_BYTE *)(a2 + 114) & 2) != 0 && (*(_BYTE *)(get_ph() + 9) & 2) != 0 )
  {
    sub_F9340(1204);
    return 1;
  }
  if ( a1 )
  {
    v2 = *(void (**)())(*(_QWORD *)a1 + 688LL);
    if ( v2 != nullsub_41 )
      ((void (__fastcall *)(__int64, _QWORD, __int64))v2)(a1, 0, a2);
  }
  if ( *(_QWORD *)(a2 + 48) )
  {
    if ( !(unsigned __int8)sub_15D9A0(*(_QWORD *)(a2 + 40)) )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( (unsigned __int8)sub_15D9A0(s1) )
LABEL_11:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
LABEL_7:
  sub_15D8A0(1);
  if ( a1 )
  {
    v3 = *(void (**)())(*(_QWORD *)a1 + 688LL);
    if ( v3 != nullsub_41 )
      ((void (__fastcall *)(__int64, __int64, __int64))v3)(a1, 2, a2);
  }
  return 0;
}

