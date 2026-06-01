__int64 *__fastcall sub_DC2710(_QWORD *a1)
{
  __int64 *result; // rax
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 *v5; // rbp
  __int64 *v6; // [rsp+0h] [rbp-20h]

  result = (__int64 *)a1[202];
  if ( !result )
  {
    v2 = sub_186B270(0x10u);
    v3 = *a1;
    v6 = (__int64 *)v2;
    sub_DFBCB0(*a1);
    v4 = *(_QWORD *)(v3 + 296);
    result = v6;
    v5 = (__int64 *)a1[202];
    *v6 = v4;
    v6[1] = 0;
    if ( v6 != v5 )
    {
      if ( v5 )
      {
        sub_2334C0(v5);
        sub_186B220(v5);
        result = v6;
      }
      a1[202] = result;
    }
  }
  return result;
}

