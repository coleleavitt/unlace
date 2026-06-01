__int64 *__fastcall sub_4CCE80(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbp
  __int64 v4; // rax
  _QWORD v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_4C50F0(*(_QWORD *)(a2[1] + 24LL), a1 + 8);
  v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 40LL))(v2, a1 + 8);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a2 + 24LL))(a2) )
  {
    v4 = *v3;
    v6[0] = 0;
    (*(void (__fastcall **)(__int64 *, _QWORD *))(v4 + 40))(v3, v6);
    if ( v6[0] )
      sub_186B220((void *)(v6[0] - 8LL));
  }
  return v3;
}

