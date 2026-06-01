unsigned __int64 __fastcall sub_A50470(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // r13
  __m128i v13[10]; // [rsp+0h] [rbp-A8h] BYREF

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *v5;
  v8 = *(_BYTE *)(*v5 + 16);
  if ( v8 == 25 )
    goto LABEL_2;
  v11 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 25 )
  {
    v7 = sub_F3F310(*v5, v5, v11, a4, a5);
    if ( v7 )
    {
LABEL_2:
      v9 = *(_QWORD *)(a1 + 8);
      v13[0].m128i_i16[0] = *(_WORD *)(v7 + 20) >> 2;
      return sub_A4D8D0(v9, **(_QWORD **)a1, (unsigned __int16 *)v13);
    }
    v7 = *v5;
    v8 = *(_BYTE *)(*v5 + 16);
  }
  if ( v8 != 26 )
    v7 = sub_F3F310(v7, v5, v11, a4, a5);
  v12 = *(_QWORD *)(a1 + 8);
  sub_A3A3D0((__m128 *)v13, v7);
  return sub_A4F8D0(v12, **(_QWORD **)a1, (__int64 *)(v7 + 48), *(unsigned __int16 *)(v7 + 22), v13, 0);
}

