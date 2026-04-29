__int64 __fastcall sub_3FB1A0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+8h] [rbp-78h] BYREF
  const char *v5; // [rsp+10h] [rbp-70h] BYREF
  __int64 v6; // [rsp+18h] [rbp-68h] BYREF
  __int16 v7; // [rsp+20h] [rbp-60h]
  char v8; // [rsp+22h] [rbp-5Eh]
  _BYTE v9[40]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  qsnprintf(v9, 32, "svptrue_b%d", a2);
  v8 = 48;
  v4 = 0;
  v5 = "svbool_t";
  v6 = 0;
  v7 = -1;
  sub_3FB0A0(&v4, (__int64)&v5);
  v2 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v9, &v4, 0, 0, 1);
  *(_DWORD *)(*(_QWORD *)(v2 + 72) + 280LL) |= 0x14u;
  clear_tinfo_t(&v6);
  clear_tinfo_t(&v4);
  return v2;
}
