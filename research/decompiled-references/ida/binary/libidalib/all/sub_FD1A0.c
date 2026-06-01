__int64 __fastcall sub_FD1A0(const __m128i *a1)
{
  __int32 v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rdi
  __int16 v5; // bp
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = a1[4].m128i_i32[2];
  v3 = sub_15D8D0(a1->m128i_i64[1] + 440);
  v4 = *(_QWORD *)(v3 + 40);
  v5 = *(_WORD *)(v3 + 30);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    sub_FCED0(a1, v6, v5);
    if ( v6 )
      qfree();
  }
  else
  {
    sub_FCED0(a1, 0, v5);
  }
  if ( v2 != a1[4].m128i_i32[2] )
  {
    v7 = a1->m128i_i64[1];
    v8 = sub_15D8F0(v7 + 440);
    sub_16B600(v7, v8, 0);
  }
  return 1;
}

