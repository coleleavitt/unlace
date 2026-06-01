bool __fastcall define_stkvar(int *a1, __int64 a2, unsigned int a3, _QWORD *a4, const __m128i *a5)
{
  const __m128i *v5; // r15
  unsigned int v6; // r14d
  _QWORD *v7; // r13
  const void *v8; // r12
  int v10; // eax
  __int64 *v16; // rdi

  v16 = *(__int64 **)(qword_2CA1698 + 1480);
  if ( !a1 )
    return 0;
  v5 = a5;
  v6 = a3;
  v7 = a4;
  v8 = (const void *)a2;
  if ( sub_4BD270((__int64)v16, (__int64)a1, a2, 3, 0xFFFFFFFF, 0xFFFFFFFF) )
    return 0;
  if ( a1[4] == -1 )
  {
    sub_375980(0x3Bu, a1);
    if ( a1[4] == -1 )
      add_frame(a1, 0, 0, 0);
  }
  v10 = sub_59F150(v16, (__int64)a1, 0, 0, v6);
  return sub_5A32A0(v16, a1, v10, v8, v7, v5, 0, 0) != -1;
}

