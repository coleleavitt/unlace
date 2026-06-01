__int64 *__fastcall sub_52DF10(__int64 a1, double a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6 = 207;
  v2 = (__int64 *)operator new(8u);
  v3 = operator new(0x58u);
  sub_52DB80(v3, a1, 0, "idaplace_t", 4);
  *(_QWORD *)v3 = &off_2B2DF60;
  *(_QWORD *)(v3 + 64) = off_2B25850;
  *(_QWORD *)(v3 + 48) = v3 + 64;
  v4 = idaplace_t((int)v3 + 64, a2);
  if ( get_place_class(&v7, nullptr, v4) && (v7 & 1) != 0 )
    *(_DWORD *)(v3 + 8) |= 1u;
  *v2 = sub_428210((__int64)v2, v3, &v6);
  return v2;
}
