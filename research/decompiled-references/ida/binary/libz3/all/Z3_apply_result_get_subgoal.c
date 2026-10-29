_QWORD *__fastcall Z3_apply_result_get_subgoal(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  char v4; // r13
  _QWORD *v5; // r12
  __int64 v7; // rax

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29D520(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( *(_DWORD *)(a2 + 32) < (unsigned int)v3 )
  {
    sub_24EA30(a1, 2, 0);
    if ( !v4 )
      return nullptr;
    sub_2BB620(0);
    v5 = nullptr;
LABEL_12:
    byte_1C7EBA0 = 1;
    return v5;
  }
  v5 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v5, a1);
  v5[3] = 0;
  *v5 = &off_1C4C8C0;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v3);
  if ( v7 )
    ++*(_DWORD *)(v7 + 32);
  v5[3] = v7;
  sub_24FBE0(a1, v5);
  if ( v4 )
  {
    sub_2BB620(v5);
    goto LABEL_12;
  }
  return v5;
}

