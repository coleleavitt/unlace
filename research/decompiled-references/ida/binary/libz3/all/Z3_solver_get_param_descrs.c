_QWORD *__fastcall Z3_solver_get_param_descrs(__int64 a1, __int64 a2)
{
  char v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdi
  _DWORD *v8; // r14

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29D6E0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v4 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v4, a1);
  *v4 = &off_1C4C8A0;
  sub_1857380(v4 + 3);
  sub_24FBE0(a1, (__int64)v4);
  v5 = *(_QWORD *)(a2 + 32);
  v6 = v5;
  if ( !v5 )
  {
    sub_2A74C0(a1, a2);
    v6 = *(_QWORD *)(a2 + 32);
  }
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 112LL))(v6, v4 + 3);
  sub_15B1320(v4 + 3);
  if ( v5 )
  {
    if ( !v3 )
      return v4;
LABEL_12:
    sub_2BB620(v4);
    byte_1C7EBA0 = 1;
    return v4;
  }
  v8 = *(_DWORD **)(a2 + 32);
  if ( v8 )
  {
    if ( v8[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v8)(v8);
      sub_186B220(v8);
    }
  }
  *(_QWORD *)(a2 + 32) = 0;
  if ( v3 )
    goto LABEL_12;
  return v4;
}

