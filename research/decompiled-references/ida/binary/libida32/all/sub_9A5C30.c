void __fastcall sub_9A5C30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // r15
  __m128i v8[5]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(unsigned int *)(a3 + 40);
  if ( (_DWORD)v5 )
  {
    v6 = *(_QWORD *)(a3 + 48) + 8 * v5;
    v7 = *(_QWORD **)(a3 + 48);
    while ( 1 )
    {
      sub_9BCA30(v8, a1 + 104, *v7, a4, 0);
      if ( (v8[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_4;
      if ( *(_BYTE *)(v8[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 1 )
      {
        ++v7;
        sub_9A4920(*(_QWORD *)(a1 + 320), 0);
        if ( (_QWORD *)v6 == v7 )
          return;
      }
      else
      {
        sub_9A54A0(a2, v8);
LABEL_4:
        if ( (_QWORD *)v6 == ++v7 )
          return;
      }
    }
  }
  sub_9BCA30(v8, a1 + 104, 0, a4, 0);
  if ( (v8[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( *(_BYTE *)(v8[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 1 )
      sub_9A4920(*(_QWORD *)(a1 + 320), 0);
    else
      sub_9A54A0(a2, v8);
  }
}

