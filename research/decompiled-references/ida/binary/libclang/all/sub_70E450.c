_QWORD *__fastcall sub_70E450(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  _QWORD *v4; // rax
  __int64 v5; // r12
  __int64 v7; // rax

  v3 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  sub_70D900((__int64)a1, a2, *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2160) + 1LL) & 8) == 0 )
    return a1;
  v4 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v4;
  if ( *(_BYTE *)(*v4 + 16LL) != 47 || *(char *)(sub_B14A40(*v4) + 28) < 0 )
    return a1;
  v7 = sub_B14A40(v5);
  *a1 = *(_QWORD *)(sub_AB4240(a2, v7) + 8);
  return a1;
}

