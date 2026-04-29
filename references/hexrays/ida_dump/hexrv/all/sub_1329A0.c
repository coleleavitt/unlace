__int64 __fastcall sub_1329A0(__int64 a1, __int64 a2, char a3)
{
  __m128i *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx

  sub_5FB00((__int64 *)(*(_QWORD *)(a1 + 64) + 296LL), *(_DWORD *)(a2 + 40), *(_DWORD *)(a2 + 36));
  v4 = sub_CDCE0(*(_QWORD *)(a1 + 64));
  v5 = (__int64)v4;
  if ( a3 )
  {
    v6 = j__qalloc_or_throw(80);
    *(_OWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 72) = 0;
    sub_120EE0(v6, a2);
    sub_9ECA0(v5, (_QWORD *)v6, 0);
  }
  else
  {
    if ( (__m128i *)a1 != v4 || *(_QWORD *)(a2 + 16) )
    {
      sub_9EF00(a1, a2);
      sub_9ECA0(v5, (_QWORD *)a2, 0);
    }
    v6 = a2;
  }
  return sub_118550((char *)(v6 + 32), (char *)(v6 + 64));
}
