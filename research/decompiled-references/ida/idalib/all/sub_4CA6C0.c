__int64 __fastcall sub_4CA6C0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  char v5; // dl
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 *v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __m128i si128; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v3 = a3;
  if ( a3 != -1 && !*(_QWORD *)(a1 + 776) )
  {
    v12 = 0;
    v14 = 0;
    v15 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    if ( (unsigned __int8)get_fixup(&v12, a2) )
    {
      v5 = BYTE4(v12);
      if ( (v12 & 0x400000000LL) == 0 )
      {
        if ( (v12 & 0x100000000LL) != 0 )
        {
          v6 = si128.m128i_i64[0];
        }
        else
        {
          v6 = 0;
          if ( si128.m128i_i64[1] != -1 )
          {
            v11 = sel2para(si128.m128i_i64[1]);
            v5 = BYTE4(v12);
            v6 = 16 * v11;
          }
        }
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v14 + v6);
        if ( (v5 & 2) != 0 )
          return v7;
        v8 = (unsigned __int64 *)sub_510420(a1, si128.m128i_i64[1]);
        if ( !v8 )
          return v3;
        v9 = sub_505D70(a1 + 1624, v3);
        if ( v9 )
        {
          if ( v8[6] == *(_QWORD *)(v9 + 48) )
            return v3;
        }
        v10 = v8[1];
        if ( v10 == v3 )
          return --v3;
        if ( *v8 == v7 )
          return v7;
        if ( v3 < *v8 )
        {
          return *v8;
        }
        else if ( v3 >= v10 )
        {
          return v10 - 1;
        }
      }
    }
  }
  return v3;
}
