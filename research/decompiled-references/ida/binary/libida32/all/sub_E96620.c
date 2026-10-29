__int64 __fastcall sub_E96620(__int64 *a1, unsigned int *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned int v7; // esi
  __int64 v8; // r12
  __int64 v9; // rdi
  const char *v10; // rax
  const char *v12; // rax
  const char *v13; // rsi

  sub_971800(*a1, "depend(");
  v4 = *(_QWORD *)&a2[2 * a2[4] + 10];
  if ( v4 )
  {
    v5 = sub_E90F10();
    sub_EE3EC0(v4, *a1, 0, a1[1], 0, 0, v6, v5);
    sub_971800(*a1, ", ");
  }
  v7 = a2[5];
  v8 = *a1;
  v9 = a2[2];
  if ( v7 == 8 || v7 == 9 )
  {
    v12 = (const char *)sub_FDA030(v9);
    sub_971800(v8, v12);
    sub_971800(*a1, " :");
    sub_E96500((const __m128i **)a1, (__int64)a2, 32);
    v13 = " ";
    if ( a2[4] )
      v13 = ",";
    sub_971800(*a1, v13);
    sub_971800(*a1, "omp_all_memory");
  }
  else
  {
    v10 = (const char *)sub_FDA030(v9);
    sub_971800(v8, v10);
    if ( a2[4] )
      sub_971800(*a1, " :");
    sub_E96500((const __m128i **)a1, (__int64)a2, 32);
  }
  return sub_971800(*a1, ")");
}

