_QWORD *__fastcall sub_15BCE50(_QWORD *a1)
{
  __int64 v2[4]; // [rsp+8h] [rbp-20h] BYREF

  v2[0] = (sub_B8C330(a1[1]) + 18280) | 6;
  sub_15BBDA0(a1, v2, 1, 1);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(sub_15BAC80((__int64)a1) + 48) & 0xFFFFFFFFFFFFFFF0LL) + 48LL) == 1 )
    sub_15BBDA0(a1, v2, 0, 1);
  return a1;
}
