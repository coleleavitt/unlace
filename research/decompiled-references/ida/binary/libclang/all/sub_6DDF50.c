unsigned __int64 __fastcall sub_6DDF50(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rbx
  char v5; // al
  __int64 v6; // rdi
  __int64 v8; // r12
  __m128i v9[10]; // [rsp+0h] [rbp-A8h] BYREF

  v2 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *v2;
  v5 = *(_BYTE *)(*v2 + 16);
  if ( v5 == 25 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 25 )
  {
    v4 = sub_B0D320(*v2);
    if ( v4 )
    {
LABEL_2:
      v6 = *(_QWORD *)(a1 + 8);
      v9[0].m128i_i16[0] = *(_WORD *)(v4 + 18) >> 3;
      return sub_6C7100(v6, **(_QWORD **)a1, (unsigned __int16 *)v9);
    }
    v4 = *v2;
    v5 = *(_BYTE *)(*v2 + 16);
  }
  if ( v5 != 26 )
    v4 = sub_B0D320(v4);
  v8 = *(_QWORD *)(a1 + 8);
  sub_6B29F0((__int64)v9, v4);
  return sub_6DB070(v8, **(_QWORD **)a1, v4 + 48, (unsigned __int16)(*(_DWORD *)(v4 + 20) >> 6), v9, 0);
}

