__int64 __fastcall sub_2134DA0(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  _QWORD v5[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v6; // [rsp+20h] [rbp-38h]

  *a2 = 0;
  v5[0] = 0;
  if ( sub_2133530(a1, a2, (__int64)v5) )
    return 1;
  *a3 = sub_2124B60(*(_QWORD *)(a1 + 48));
  v5[0] = "expected ')'";
  v6 = 259;
  if ( (unsigned __int8)sub_2154510(a1, 18, v5) )
    return 1;
  else
    return sub_2133180(a1, 1u, (__int64 *)a2, (__int64)a3);
}
