__int64 __fastcall sub_1AE9A00(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD), unsigned int a4)
{
  __int64 v4; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi

  v4 = *(unsigned int *)(a1 + 344);
  if ( (_DWORD)v4
    && (v6 = *(_QWORD *)(a1 + 336) + 6776 * v4 - 6776, *(_QWORD *)(v6 + 6768) == *(_QWORD *)(a1 + 328))
    && (v7 = *(unsigned int *)(v6 + 8), v8 = *(unsigned int *)(a1 + 27504), (unsigned int)v7 > (unsigned int)v8)
    && v7 - v8 > (unsigned __int64)a4 )
  {
    return a3(*(unsigned int *)(*(_QWORD *)v6 + 1688LL * a4 + 976));
  }
  else
  {
    return 0;
  }
}
