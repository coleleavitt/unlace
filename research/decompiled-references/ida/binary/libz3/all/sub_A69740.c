__int64 __fastcall sub_A69740(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 *v7; // r12
  __int64 v8; // r14

  v6 = 16 * (((((__int64)a2 - a1) >> 4) + 1) / 2);
  v7 = (__int64 *)(a1 + v6);
  v8 = v6 >> 4;
  if ( ((((__int64)a2 - a1) >> 4) + 1) / 2 <= a4 )
  {
    sub_990D20(a1, v7, a3);
    sub_990D20((__int64)v7, a2, a3);
    return sub_9923C0(a1, v7, (__int64)a2, v8, ((char *)a2 - (char *)v7) >> 4, a3);
  }
  else
  {
    sub_A69740(a1, v7, a3);
    sub_A69740(v7, a2, a3);
    return sub_A69550(a1, (__int64)v7, (__int64)a2, v8, ((char *)a2 - (char *)v7) >> 4, a3, a4);
  }
}

