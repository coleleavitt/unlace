_QWORD *__fastcall sub_515C70(__int64 a1, double a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v6; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v7[4]; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6 = 207;
  v2 = (_QWORD *)operator new(8u);
  v3 = operator new(0x50u);
  sub_5158E0(v3, a1, 0, "idaplace_t", 4);
  *(_QWORD *)v3 = &off_2B03FA0;
  *(_QWORD *)(v3 + 64) = off_2AFC770;
  *(_QWORD *)(v3 + 48) = v3 + 64;
  v4 = idaplace_t((int)v3 + 64, a2);
  if ( get_place_class(v7, 0, v4) && (v7[0] & 1) != 0 )
    *(_DWORD *)(v3 + 8) |= 1u;
  *v2 = sub_414870((__int64)v2, v3, &v6);
  return v2;
}

