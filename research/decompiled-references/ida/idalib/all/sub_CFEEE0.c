__int64 __fastcall sub_CFEEE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 result; // rax
  unsigned __int8 **v6; // rax
  unsigned __int8 **v7; // rbx
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(unsigned int *)(sub_E32240(a1) + 136);
  result = 1;
  if ( v4 < a3 )
  {
    v8[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v6 = (unsigned __int8 **)sub_E33BA0(a1, v8, 2447, 0);
    v7 = v6;
    if ( v6 )
    {
      sub_AE9DF0(v6, a3, 3u);
      sub_AE9DF0(v7, v4, 3u);
    }
    return 0;
  }
  return result;
}
