/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053C80
// Address: 0x0000000100053C80

//----- (0000000100053C80) ----------------------------------------------------
bool __fastcall sub_100053C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // cl
  bool result; // al
  __int64 v8; // rax
  size_t v9; // r12
  bool v10; // cf
  size_t v11; // rax
  const void *v12; // r15
  bool v13; // bl
  __int128 v14; // [rsp+0h] [rbp-50h] BYREF
  __int64 v15; // [rsp+10h] [rbp-40h]

  v6 = sub_100053AC0(a1, a2, a3);
  result = 1;
  if ( !v6 )
  {
    v14 = 0;
    v15 = 0;
    if ( a4 != 0 && &v14 != (__int128 *)a4 )
    {
      v8 = *(_QWORD *)(a4 + 8);
      v9 = 0;
      v10 = v8 == 0;
      v11 = v8 - 1;
      if ( !v10 )
        v9 = v11;
      if ( !v10 && v11 != 0 )
      {
        v12 = *(const void **)a4;
        *(_QWORD *)&v14 = qvector_reserve((__int64)&v14, nullptr, v9 + 1, 1u);
        *((_QWORD *)&v14 + 1) = v9 + 1;
        memmove((void *)v14, v12, v9);
        *(_BYTE *)(v14 + v9) = 0;
      }
    }
    result = (int)sub_100053DA0(a2, a3, (__int64)&v14) >= 0;
    if ( (_QWORD)v14 )
    {
      *((_QWORD *)&v14 + 1) = 0;
      v13 = result;
      qfree((void *)v14);
      return v13;
    }
  }
  return result;
}
