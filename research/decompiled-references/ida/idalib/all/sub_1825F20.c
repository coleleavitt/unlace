void __fastcall sub_1825F20(__int64 a1, __int64 a2, const __m128i *a3, double a4)
{
  unsigned int v5; // eax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __m128i *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  if ( (unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) && (unsigned __int8)sub_15EB980((__int64)a3, a1, 3u) )
  {
    v5 = a3[3].m128i_u16[4];
    if ( v5 > 2 )
    {
      v6 = a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    }
    else
    {
      v6 = 0;
      v7 = 0;
      if ( v5 != 2 )
        goto LABEL_6;
    }
    v7 = a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
LABEL_6:
    v8 = sub_1825BB0(a1, a3, (_DWORD *)(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL), v7, v6, a4);
    if ( v8 )
      sub_B8CC60(a2, (__int64)v8, v9, v10, v11, v12);
  }
}
