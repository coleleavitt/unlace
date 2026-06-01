_QWORD *__fastcall sub_7A66E0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  __int64 v6; // [rsp+10h] [rbp-28h]

  v5 = 0;
  v2 = sub_7943D0(184, a1, a2, 0);
  v4 = 0;
  v6 = 0;
  sub_77D6F0((__int64)v2, 0x22u, (__int64)a1, 0, 0, &v4, 0, 0, 0, 0, 0, 0, 0);
  *((_BYTE *)v2 + 29) &= ~2u;
  *(_OWORD *)(v2 + 21) = 0;
  *v2 = &off_49F5518;
  return v2;
}

