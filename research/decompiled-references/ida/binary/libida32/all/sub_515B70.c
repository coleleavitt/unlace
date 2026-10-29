_QWORD *__fastcall sub_515B70(__int64 a1, double a2)
{
  __int64 v2; // r13
  _QWORD *v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v7; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v8[4]; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v7 = 210;
  v2 = sub_543260(a1);
  v3 = (_QWORD *)operator new(8u);
  v4 = operator new(0x58u);
  sub_5158E0(v4, a1, v2, "tiplace_t", 0);
  *(_DWORD *)(v4 + 76) = 0;
  *(_QWORD *)v4 = &off_2B03FE8;
  *(_QWORD *)(v4 + 80) = -2;
  *(_QWORD *)(v4 + 48) = v4 + 64;
  *(_QWORD *)(v4 + 64) = &off_2B04410;
  v5 = tiplace_t((int)v4 + 64, a2);
  if ( get_place_class(v8, 0, v5) && (v8[0] & 1) != 0 )
    *(_DWORD *)(v4 + 8) |= 1u;
  *v3 = sub_414870((__int64)v3, v4, &v7);
  return v3;
}

