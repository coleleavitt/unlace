unsigned __int64 __fastcall til_chooser_t__::vfunc_6(
        __int64 a1,
        const __m128i **a2,
        int *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  char *v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int v9; // ecx
  int v11; // eax

  v7 = *(char **)(a1 + 184);
  v8 = *((_QWORD *)v7 + 2);
  if ( v8 )
  {
    v9 = 0;
    if ( a5 < v8 )
      v9 = *(_DWORD *)(*((_QWORD *)v7 + 1) + 4 * a5);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 32LL))(*(_QWORD *)(a1 + 184));
    v9 = a5 + 1;
    v7 = *(char **)(a1 + 184);
    if ( a5 >= v11 )
      v9 = 0;
  }
  return sub_3A4A30(a2, a3, v7, v9);
}
