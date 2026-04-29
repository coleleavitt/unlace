unsigned __int64 __fastcall sub_8A660(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int128 v4; // rt0
  char *v5; // rsi

  sub_88FC0((__int64)a2, 4, "mcallarg.mop_t");
  sub_8A210((unsigned __int8 *)a1, (__int64)a2);
  sub_88FC0((__int64)a2, 4, "mcallarg.ea");
  v3 = a2[5] - *(_QWORD *)(a1 + 16);
  if ( v3 < 0 )
    v3 = *(_QWORD *)(a1 + 16) - a2[5];
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 16) - a2[5];
  *((_QWORD *)&v4 + 1) = v3;
  sub_79340(a2, v4 >> 63);
  sub_88FC0((__int64)a2, 4, "mcallarg.type");
  sub_79750(a2, (_BYTE *)(a1 + 24));
  sub_88FC0((__int64)a2, 4, "mcallarg.name");
  v5 = (char *)s1;
  if ( *(_QWORD *)(a1 + 40) )
    v5 = *(char **)(a1 + 32);
  sub_79640(a2, v5);
  sub_88FC0((__int64)a2, 4, "mcallarg.argloc");
  return sub_7B350(a2);
}
