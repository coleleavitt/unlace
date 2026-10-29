__int64 __fastcall sub_87D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r14

  v2 = *(_QWORD *)(a2 + 32);
  if ( !v2 )
    return 0;
  v3 = qalloc(*(_QWORD *)(a2 + 32));
  if ( !v3 )
    sub_5B40((__int64)"%s (0x%lX bytes)", (const char *)a2, v2);
  v4 = qlseek(a1, 0, 1);
  qlseek(a1, *(_QWORD *)(a2 + 40), 0);
  lread(a1, v3, v2);
  qlseek(a1, v4, 0);
  return v3;
}

