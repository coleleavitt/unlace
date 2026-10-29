/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063044
// Address: 0x0000000100063044

//----- (0000000100063044) ----------------------------------------------------
__int64 __usercall sub_100063044@<X0>(unsigned __int64 *a1@<X8>)
{
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 v4; // x0
  const void *v5; // x22
  size_t v6; // x21
  _BYTE *v7; // x0
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x10
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x9
  const void *v13; // [xsp+0h] [xbp-40h] BYREF

  v2 = (*(__int64 (**)(void))(qword_10009DAD8 + 48))();
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_10009DAD8 + 24))(v2);
  (*(void (**)(void))(qword_10009DAD8 + 72))();
  v13 = nullptr;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, const void **))(qword_10009DAD8 + 8))(v3, 3, 0, &v13);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v5 = v13;
  if ( v13 )
  {
    v6 = v4;
    if ( v4 >= 1 )
    {
      v7 = qvector_reserve(a1, nullptr, v4 + 1, 1u);
      *a1 = (unsigned __int64)v7;
      a1[1] = v6 + 1;
      v7[v6] = 0;
      memmove((void *)*a1, v5, v6);
      v8 = a1[1];
      v9 = v8 - 2;
      if ( v8 >= 2 )
      {
        v10 = *a1;
        do
        {
          v11 = v9;
          if ( v10 + v9 + 1 <= v10 )
            break;
          --v9;
        }
        while ( *(_BYTE *)(v10 + v11) == 10 );
        sub_10001115C((_QWORD **)a1, v11 + 1);
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64))(qword_10009DAD8 + 16))(v3);
}
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
