__int64 __fastcall sub_2129170(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbp
  void (__fastcall *v3)(_QWORD *, _QWORD, __int64); // r12
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // [rsp+0h] [rbp-48h] BYREF
  __int16 v8; // [rsp+20h] [rbp-28h]

  result = 0;
  v2 = *(_QWORD **)(a1 + 24);
  if ( !v2[36] )
  {
    v3 = *(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v2 + 192LL);
    v4 = sub_2154A60(*(_QWORD *)(a1 + 8));
    v3(v2, 0, v4);
    v7 = "expected section directive before assembly directive";
    v8 = 259;
    v5 = sub_2153C00(a1);
    v6 = sub_2124B50(v5);
    return sub_2153E90(a1, v6, &v7, 0, 0);
  }
  return result;
}
