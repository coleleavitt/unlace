__int64 __fastcall op_custfmt(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  __int64 *v6; // r14
  _WORD v7[12]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  if ( a2 <= 7
    && (v6 = *(__int64 **)(qword_2CCB598 + 1672),
        sub_3E9640(v6, v7, a1),
        (unsigned __int8)is_attached_custom_data_format(v7[0], a3))
    && (v3 = sub_3D55E0(v6, a1, 0xDDDDDD0DD00000LL, a2), (_BYTE)v3) )
  {
    v7[a2 + 1] = a3;
    sub_3E99E0(v6, a1, v7);
    sub_39ADA0(0x11u, a1, a2);
  }
  else
  {
    return 0;
  }
  return v3;
}
