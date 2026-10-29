__int64 __fastcall sub_1EAD20(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rdx
  __int64 v4; // rax
  __m128i v5; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+10h] [rbp-38h]
  char v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v1 = 0;
  v8 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 4LL) & 8) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    v5 = (__m128i)*(unsigned __int64 *)(a1 + 64);
    v6 = 0;
    v7 = 1;
    sub_1EA870(a1, &v5, v3, 0);
    v1 = 0;
    if ( !sub_1E0CA0((__int64)&v5, a1 + 448) )
    {
      v1 = 1;
      sub_13FCB0((unsigned __int64 **)(a1 + 424));
      *(_BYTE *)(a1 + 440) = 1;
      sub_13FCB0((unsigned __int64 **)(a1 + 456));
      v4 = *(_QWORD *)(a1 + 64);
      *(_BYTE *)(a1 + 472) = 1;
      *(_DWORD *)(v4 + 4) &= ~8u;
    }
    if ( v5.m128i_i64[1] )
    {
      sub_13FCB0((unsigned __int64 **)&v5.m128i_i64[1]);
      if ( v5.m128i_i64[1] )
        qfree(v5.m128i_i64[1]);
    }
  }
  return v1;
}
