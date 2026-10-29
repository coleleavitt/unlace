__int64 __fastcall sub_3CFDE0(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  _WORD v8[12]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  if ( a3 <= 7
    && (sub_3E33B0(a1, v8, a2), (unsigned __int8)is_attached_custom_data_format(v8[0], a4))
    && (v4 = sub_3CFA90(a1, a2, 0xDDDDDD0DD00000LL, a3), (_BYTE)v4) )
  {
    v8[a3 + 1] = a4;
    sub_3E3740(a1, a2, v8);
    sub_396090(0x11u, a2, a3);
  }
  else
  {
    return 0;
  }
  return v4;
}

