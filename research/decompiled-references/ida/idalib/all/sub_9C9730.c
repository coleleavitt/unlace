void __fastcall sub_9C9730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // [rsp+8h] [rbp-70h]
  __m128i v10[5]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(unsigned int *)(a3 + 40);
  if ( (_DWORD)v7 )
  {
    v8 = *(_QWORD **)(a3 + 48);
    v9 = &v8[v7];
    while ( 1 )
    {
      sub_9E0770(v10, a1 + 104, *v8, a5, a4);
      if ( (v10[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_4;
      if ( *(_BYTE *)(v10[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 1 )
      {
        ++v8;
        sub_9C8660(*(_QWORD *)(a1 + 320), a4);
        if ( v9 == v8 )
          return;
      }
      else
      {
        sub_9C91E0(a2, v10);
LABEL_4:
        if ( v9 == ++v8 )
          return;
      }
    }
  }
  sub_9E0770(v10, a1 + 104, 0, a5, a4);
  if ( (v10[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( *(_BYTE *)(v10[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 1 )
      sub_9C8660(*(_QWORD *)(a1 + 320), a4);
    else
      sub_9C91E0(a2, v10);
  }
}
