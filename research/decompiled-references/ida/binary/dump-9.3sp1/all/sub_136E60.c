__int64 __fastcall sub_136E60(__int64 a1, __int64 a2, char a3)
{
  int v5; // edx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m128i *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rbx

  v5 = *(_DWORD *)(a2 + 36);
  v6 = *(unsigned int *)(a2 + 40);
  sub_63E80((__int64 *)(*(_QWORD *)(a1 + 64) + 296LL), v6, v5);
  v9 = sub_D21A0(*(_QWORD *)(a1 + 64), v6, v7, v8);
  v12 = (__int64)v9;
  if ( a3 )
  {
    v13 = j__qalloc_or_throw(80, v6, v10, v11);
    *(_OWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 56) = 0;
    *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 72) = 0;
    sub_1253A0(v13, a2);
    sub_A3160(v12, (_QWORD *)v13, 0);
  }
  else
  {
    if ( (__m128i *)a1 != v9 || *(_QWORD *)(a2 + 16) )
    {
      sub_A33C0(a1, a2);
      sub_A3160(v12, (_QWORD *)a2, 0);
    }
    v13 = a2;
  }
  return sub_11CA10((char *)(v13 + 32), (char *)(v13 + 64));
}
