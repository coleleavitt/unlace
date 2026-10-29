__int64 __fastcall sub_DCD1F0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 **v4; // rax
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v6[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v4 = (unsigned __int8 **)sub_E33BA0(a1, v6, 4981, 0);
  if ( v4 )
    sub_AE9DF0(v4, a3, 3u);
  return 0;
}
