/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A96E0
// Address: 0x00000000000A96E0

//----- (00000000000A96E0) ----------------------------------------------------
__int64 __fastcall sub_A96E0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax

  v4 = a3;
  if ( a4 >= 0 )
  {
    v7 = qtime64();
    v8 = 1000000 * HIDWORD(v7) + (unsigned int)v7 + 1000LL * a4;
    if ( v4 )
      goto LABEL_3;
    return 0;
  }
  v8 = 0;
  if ( !a3 )
    return 0;
LABEL_3:
  v9 = v4;
  while ( 1 )
  {
    if ( v8 )
    {
      v10 = qtime64();
      v11 = 1000000 * HIDWORD(v10) + (unsigned int)v10;
      v12 = 0;
      if ( v8 > v11 )
        v12 = (v8 - v11) / 0x3E8;
    }
    else
    {
      v12 = 0xFFFFFFFFLL;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v12) <= 0 )
      break;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, v9);
    if ( v13 <= 0 )
      break;
    a2 += v13;
    v9 -= v13;
    if ( !v9 )
      return v4;
  }
  v4 -= v9;
  return v4;
}
