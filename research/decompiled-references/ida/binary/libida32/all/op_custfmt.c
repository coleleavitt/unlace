__int64 __fastcall op_custfmt(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  _QWORD *v6; // r14
  _WORD v7[12]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  if ( a2 <= 7
    && (v6 = *(_QWORD **)(qword_2CA1698 + 1480),
        sub_3E33B0(v6, v7, a1),
        (unsigned __int8)is_attached_custom_data_format(v7[0], a3))
    && (v3 = sub_3CFA90(v6, a1, 0xDDDDDD0DD00000LL, a2), (_BYTE)v3) )
  {
    v7[a2 + 1] = a3;
    sub_3E3740(v6, a1, v7);
    sub_396090(0x11u, a1, a2);
  }
  else
  {
    return 0;
  }
  return v3;
}

