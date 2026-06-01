unsigned __int64 __fastcall gen_use_arg_tinfos(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // rbp
  __int64 func; // rbx
  unsigned __int64 v9; // rsi
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  int spd; // r12d
  _QWORD v14[4]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+34h] [rbp-34h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a4 != 0 && a3 != nullptr && a1 )
  {
    v14[1] = a1;
    v14[3] = a4;
    v14[2] = a3;
    v7 = *(_QWORD *)(qword_2CA1698 + 1456);
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
    v16 = sub_5EB800(*(_QWORD *)(*(_QWORD *)v7 + 1480LL), a2) + spd;
    sub_5F1E80((__int64)v14, a2);
    lock_func_range(func, 0);
  }
  return v18 - __readfsqword(0x28u);
}

