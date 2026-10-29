/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006AB70
// Address: 0x000000010006AB70

//----- (000000010006AB70) ----------------------------------------------------
__int64 __fastcall sub_10006AB70(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-30h]

  if ( a4 < 0 )
  {
    v8 = 0;
  }
  else
  {
    v6 = a3;
    v7 = qtime64();
    a3 = v6;
    v8 = -4293967296LL * HIDWORD(v7) + v7 + 1000LL * (unsigned int)a4;
  }
  v16 = a3;
  v9 = a3;
  while ( v9 )
  {
    v10 = v9;
    if ( v8 )
    {
      v11 = qtime64();
      v12 = v11 - 4293967296u * HIDWORD(v11);
      v13 = 0;
      if ( v8 > v12 )
        v13 = (v8 - v12) / 0x3E8;
    }
    else
    {
      v13 = 0xFFFFFFFFLL;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v13) > 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, v10);
      v9 = v10 - v14;
      a2 += v14;
      if ( v14 > 0 )
        continue;
    }
    return v16 - v10;
  }
  return v16;
}
