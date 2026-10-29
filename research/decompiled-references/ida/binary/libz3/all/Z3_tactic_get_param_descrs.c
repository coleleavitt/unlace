_QWORD *__fastcall Z3_tactic_get_param_descrs(__int64 a1, __int64 a2)
{
  char v2; // r13
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  void (*v5)(); // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29D290();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v3, a1);
  *v3 = &off_1C4C8A0;
  sub_1857380(v3 + 3);
  sub_24FBE0(a1, v3);
  if ( !a2 )
    BUG();
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(void (**)())(*(_QWORD *)v4 + 120LL);
  if ( v5 != nullsub_94 )
  {
    ((void (__fastcall *)(__int64, _QWORD *))v5)(v4, v3 + 3);
    if ( !v2 )
      return v3;
LABEL_8:
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
    return v3;
  }
  if ( v2 )
    goto LABEL_8;
  return v3;
}

