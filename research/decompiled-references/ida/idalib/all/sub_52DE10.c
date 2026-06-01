__int64 *__fastcall sub_52DE10(__int64 a1, double a2)
{
  __int64 v2; // r13
  __int64 *v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v7; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v7 = 210;
  v2 = sub_55C400(a1);
  v3 = (__int64 *)operator new(8u);
  v4 = operator new(0x58u);
  sub_52DB80(v4, a1, v2, "tiplace_t", 0);
  *(_DWORD *)(v4 + 76) = 0;
  *(_QWORD *)v4 = &off_2B2DFA8;
  *(_QWORD *)(v4 + 80) = -2;
  *(_QWORD *)(v4 + 48) = v4 + 64;
  *(_QWORD *)(v4 + 64) = &off_2B2E3D0;
  v5 = tiplace_t((int)v4 + 64, a2);
  if ( get_place_class(&v8, nullptr, v5) && (v8 & 1) != 0 )
    *(_DWORD *)(v4 + 8) |= 1u;
  *v3 = sub_428210((__int64)v3, v4, &v7);
  return v3;
}
