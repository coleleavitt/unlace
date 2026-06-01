_QWORD *__fastcall Z3_mk_parser_context(__int64 a1)
{
  char v1; // r13
  _QWORD *v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r12
  void (__fastcall ***v5)(_QWORD); // r15

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_29C140();
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v2, a1);
  v2[3] = 0;
  v3 = *(_QWORD *)(a1 + 232);
  *v2 = &off_1C4CA40;
  v4 = sub_186B270(0x3A0u);
  sub_E059D0(v4, 0, v3, &qword_18D6CD0);
  v5 = (void (__fastcall ***)(_QWORD))v2[3];
  if ( (void (__fastcall ***)(_QWORD))v4 != v5 )
  {
    if ( v5 )
    {
      (**v5)(v2[3]);
      sub_186B220(v5);
    }
    v2[3] = v4;
    v5 = (void (__fastcall ***)(_QWORD))v4;
  }
  sub_393520(v5);
  sub_2CFBE0(v2[3]);
  sub_304ED0(v2[3], 0);
  sub_981E90(v2[3]);
  sub_DFB140(v2[3]);
  *(_BYTE *)(v2[3] + 273LL) = 1;
  sub_24FBE0(a1, (__int64)v2);
  if ( v1 )
  {
    sub_2BB620(v2);
    byte_1C7EBA0 = 1;
  }
  return v2;
}

