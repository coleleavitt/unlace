__int64 __fastcall sub_101D1C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  size_t v6; // r12
  size_t v7; // rax
  __int64 v8; // rdi
  _QWORD v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 608);
  if ( !v4 )
  {
    v6 = j__strlen(&byte_22F0C30);
    v7 = j__strlen("<<<INVALID BUFFER>>");
    sub_2230330(v9, "<<<INVALID BUFFER>>", v7, &byte_22F0C30, v6, 1);
    v4 = v9[0];
    v8 = *(_QWORD *)(a2 + 608);
    v9[0] = 0;
    *(_QWORD *)(a2 + 608) = v4;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v9[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 8LL))(v9[0]);
      v4 = *(_QWORD *)(a2 + 608);
    }
  }
  sub_2231100(a1, v4);
  return a1;
}
