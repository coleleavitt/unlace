unsigned __int64 __fastcall gen_use_arg_tinfos(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // rbp
  __int64 func; // rbx
  unsigned __int64 v9; // rsi
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  __int64 spd; // r12
  _QWORD v14[4]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+38h] [rbp-40h]
  unsigned __int64 v18; // [rsp+48h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a4 != 0 && a3 != nullptr && a1 )
  {
    v14[1] = a1;
    v14[3] = a4;
    v14[2] = a3;
    v7 = *(_QWORD *)(qword_2CCB598 + 1648);
    v14[0] = v7;
    func = get_func(a2);
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)func, (__m128i)(unsigned __int64)func);
    lock_func_range(func, 1);
    v9 = a3[1];
    if ( v9 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      do
      {
        ++v10;
        v11 += *(_DWORD *)(*a3 + 80 * v12) != 1;
        v12 = v10;
      }
      while ( v10 < v9 );
    }
    else
    {
      v11 = 0;
    }
    v17 = v11;
    spd = get_spd(func, a2);
    v16 = spd + (int)sub_6076C0(*(_QWORD *)(*(_QWORD *)v7 + 1672LL), a2);
    sub_60DEC0((__int64)v14, a2);
    lock_func_range(func, 0);
  }
  return v18 - __readfsqword(0x28u);
}
