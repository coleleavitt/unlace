__int64 __fastcall sub_2180FA0(__int64 a1, const __m128i *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  __m128i v14[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2[1].m128i_i64[0];
  if ( a3[1] == 8 )
  {
    *(_QWORD *)a1 = v3;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
  else
  {
    v5 = (unsigned int)a3[5];
    v7 = v3 + (unsigned int)a3[4];
    sub_215DED0(v14, a2);
    v9 = __CFADD__(v7, v5);
    if ( (__CFADD__(v7, v5)
       || __CFADD__(v7, v5)
       || (v9 = v14[0].m128i_i64[0],
           v8 = v14[0].m128i_i64[0] + v14[0].m128i_i64[1],
           v7 + v5 > v14[0].m128i_i64[0] + v14[0].m128i_i64[1])
       || v14[0].m128i_i64[0] > v7)
      && (v10 = sub_2195B10(v14, a2, v9, v8), sub_2220500(&v13, 4, v10), v13) )
    {
      *(_QWORD *)a1 = v13;
      *(_BYTE *)(a1 + 16) |= 1u;
      return a1;
    }
    else
    {
      v11 = (unsigned int)a3[5];
      v12 = a2[1].m128i_i64[0] + (unsigned int)a3[4];
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v12;
      *(_QWORD *)(a1 + 8) = v11;
      return a1;
    }
  }
}
