__int64 __fastcall sub_5A0CB6(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 *a6)
{
  _BYTE v12[32]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-40h] BYREF
  __int64 v14; // [rsp+58h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-30h]
  unsigned __int64 v16; // [rsp+68h] [rbp-28h]
  __int64 v17; // [rsp+70h] [rbp-20h]
  __int64 v18; // [rsp+78h] [rbp-18h]

  *a6 = 0;
  *((_QWORD *)a2 + 3) = a3;
  a2[8] = 0;
  a2[9] = sub_5A40EE(a1 + 40);
  if ( (unsigned __int8)sub_59B1AC(*(_QWORD *)(a1 + 32), &v14, (__int64 *)&v13, a3) )
  {
    if ( a5 >= 0 && (unsigned int)a5 < v13 )
    {
      v13 = a5;
      v18 = v14;
      if ( a5 > 0 )
      {
        while ( a3 > a5 + v18 )
          v18 += a5;
      }
      v14 = v18;
    }
    *a6 = sub_5A304E(a1, (unsigned int)v13);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, unsigned __int64))(**(_QWORD **)(a1 + 32) + 64LL))(
      *(_QWORD *)(a1 + 32),
      *a6,
      *a2,
      v14,
      v13);
    v17 = a3 - v14;
    if ( *(_BYTE *)(a1 + 144) )
    {
      if ( !*(_QWORD *)(a1 + 160) )
        return 1;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL);
      if ( (a4 < v16 || a4 > v15)
        && (unsigned __int8)sub_59B600(*(_QWORD *)(a1 + 32), *a6, v13, v17, *(_QWORD *)(a1 + 160)) != 1 )
      {
        return 1;
      }
    }
    if ( *(_BYTE *)(a1 + 168) )
      sub_59B256(*(_QWORD *)(a1 + 32), *a6, v13, a3, v17);
    sub_5A4100(v12, a1 + 40);
    if ( (unsigned __int8)sub_5A8344(v12, v13) != 1 )
      return 0;
    sub_5A4176(v12, *a6, v13);
    *((_QWORD *)a2 + 3) = v14;
    *((_QWORD *)a2 + 4) = sub_5A4152(v12);
    sub_5A472C(a1 + 80, a2 + 6);
  }
  return 1;
}
