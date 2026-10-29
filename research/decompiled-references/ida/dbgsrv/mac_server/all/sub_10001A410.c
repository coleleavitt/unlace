/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A410
// Address: 0x000000010001A410

//----- (000000010001A410) ----------------------------------------------------
bool __fastcall sub_10001A410(__int64 a1, double a2, double a3)
{
  bool result; // al
  __int64 v4; // rsi
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 (__fastcall **v11)(); // [rsp+8h] [rbp-68h] BYREF
  char *v12; // [rsp+10h] [rbp-60h]
  __int64 v13; // [rsp+18h] [rbp-58h]
  __int64 v14; // [rsp+20h] [rbp-50h]
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-38h] BYREF

  result = 1;
  if ( !*(_QWORD *)(a1 + 152) )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 == -1 )
    {
      sub_100060FA0(
        *(_QWORD *)(a1 + 8),
        "parsing cache header: version=%d, shared_cache_base_address=%a, shared_cache_slide=%a\n",
        *(_DWORD *)(a1 + 88),
        a2,
        a3);
      v10 = *(_QWORD *)(a1 + 8);
      LODWORD(v12) = 1;
      v11 = &off_1000A80F0;
      v13 = v10;
      v14 = a1 + 144;
      sub_10001AB80(a1, (__int64)&v11, *(_QWORD *)(a1 + 136));
    }
    else
    {
      v17 = 0;
      v5 = *(int *)(a1 + 20);
      if ( (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *, __int64, _QWORD))(**(_QWORD **)(a1 + 8)
                                                                                           + 288LL))(
             *(_QWORD *)(a1 + 8),
             v4,
             &v17,
             v5,
             0) != v5 )
        return 0;
      if ( v17 )
      {
        v6 = *(_DWORD *)(a1 + 20);
        v7 = *(_QWORD *)(a1 + 80) + v6;
        v8 = 0;
        while ( 1 )
        {
          v16 = nullptr;
          if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 (__fastcall ***)(), _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
                 *(_QWORD *)(a1 + 8),
                 v7,
                 &v16,
                 v6,
                 0) != v6 )
            break;
          v15 = 0;
          v9 = *(int *)(a1 + 20);
          if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
                 *(_QWORD *)(a1 + 8),
                 v7 + v9,
                 &v15,
                 v9,
                 0) != v9 )
            break;
          v11 = v16;
          v12 = (char *)v16 + v15;
          sub_100005090(*(_QWORD *)(a1 + 8), "shared cache range: %a..%a\n", a2, a3);
          rangeset_t_add(a1 + 144, (__int64)&v11);
          ++v8;
          v6 = *(_DWORD *)(a1 + 20);
          v7 += 2 * v6;
          if ( v8 >= v17 )
            return *(_QWORD *)(a1 + 152) != 0;
        }
        return 0;
      }
    }
    return *(_QWORD *)(a1 + 152) != 0;
  }
  return result;
}
// 1000A80F0: using guessed type __int64 (__fastcall *off_1000A80F0)();
