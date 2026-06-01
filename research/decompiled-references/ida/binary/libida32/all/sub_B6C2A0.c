void __fastcall sub_B6C2A0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  double v9[2]; // [rsp+8h] [rbp-10h] BYREF

  if ( a2 == a3 )
  {
    *(_QWORD *)(a1 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  }
  else
  {
    v6 = a4[294];
    a4[304] += 16LL;
    *(_QWORD *)&v9[0] = a3;
    v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a4[295] >= v7 + 16 && v6 )
    {
      a4[294] = v7 + 16;
      v8 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v8 = sub_962430((__int64)(a4 + 294), 16, 16, 3, a5, a6);
      v7 = v8 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(__m128 *)v8 = _mm_loadh_ps(v9);
    *(_QWORD *)(a1 + 16) = v7 | 4;
  }
}

