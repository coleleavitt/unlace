__int64 __fastcall sub_A6C340(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 *v7; // r12
  __int64 v8; // r14

  v6 = 16 * (((((__int64)a2 - a1) >> 4) + 1) / 2);
  v7 = (__int64 *)(a1 + v6);
  v8 = v6 >> 4;
  if ( ((((__int64)a2 - a1) >> 4) + 1) / 2 <= a4 )
  {
    sub_9906A0(a1, v7, a3);
    sub_9906A0((__int64)v7, a2, a3);
    return sub_98F8A0(a1, v7, (__int64)a2, v8, ((char *)a2 - (char *)v7) >> 4, a3);
  }
  else
  {
    sub_A6C340(a1, v7, a3);
    sub_A6C340(v7, a2, a3);
    return sub_A6C150(a1, (__int64)v7, (__int64)a2, v8, ((char *)a2 - (char *)v7) >> 4, a3, a4);
  }
}

