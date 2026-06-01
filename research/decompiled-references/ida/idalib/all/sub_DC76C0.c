__int64 __fastcall sub_DC76C0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  unsigned __int8 **v7; // rax
  __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !a4 )
    return sub_DC2620(a1, a2, *(unsigned int **)(a3 + 16));
  v8[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v6 = *(_QWORD *)(a3 + 16);
  v7 = (unsigned __int8 **)sub_E33BA0(a1, v8, 2501, 1);
  if ( v7 )
    sub_AE9DF0(v7, v6, 0xAu);
  sub_E33DB0(a1, *(unsigned int *)(v6 + 24), 103);
  return 0;
}
