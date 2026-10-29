void __fastcall sub_EED5D0(__int64 a1, __int64 a2, double a3)
{
  int v4; // r14d
  int i; // ebx
  __int64 v6; // r13
  size_t v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rsi
  __m128i v12; // xmm0
  __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i v19; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = *(_QWORD *)a1;
      v7 = j__strlen("  ");
      sub_9717A0(v6, "  ", v7);
    }
  }
  sub_971800(*(_QWORD *)a1, "for (");
  v11 = *(char **)(a2 + 8);
  if ( v11 )
    sub_EE8460(a1, v11, 5, v8, v9, v10, a3);
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v19 = v12;
  v19.m128i_i8[2] = v12.m128i_i8[2] | 1;
  v13 = sub_ECE670(a2);
  sub_B93BC0(v13, *(_QWORD *)a1, &v19, *(_DWORD *)(a1 + 8), 0);
  sub_971800(*(_QWORD *)a1, " : ");
  v14 = (char *)sub_ECE610(a2);
  if ( v14 )
    sub_EE16F0((_QWORD *)a1, v14, v15, v16, v17, v18, *(double *)v12.m128i_i64);
  else
    sub_EE0C80((__int64 *)a1);
  sub_971800(*(_QWORD *)a1, ")");
  sub_EE95C0((__int64 *)a1, *(char **)(a2 + 64), *(double *)v12.m128i_i64);
}

