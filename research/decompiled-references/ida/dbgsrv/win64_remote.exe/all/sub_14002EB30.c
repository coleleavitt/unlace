/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002EB30
// Address: 0x000000014002EB30

//----- (000000014002EB30) ----------------------------------------------------
char __fastcall sub_14002EB30(__int64 a1, __int64 a2, char *a3, void **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rdi
  char result; // al
  __int64 (__fastcall *v11)(__int64, __int64, char *, void **, __int64); // rax
  _QWORD v12[6]; // [rsp+28h] [rbp-30h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)qword_1400CB020;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CB020);
  if ( qword_1400CB040 >= (unsigned __int64)qword_1400CB030 )
  {
    v9 = 0;
  }
  else
  {
    v9 = *((_QWORD *)qword_1400CB028 + qword_1400CB040);
    if ( v9 )
      ++*(_DWORD *)(v9 + 12);
  }
  sub_14005D6D0(v8);
  if ( v9 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, __int64, char *, void **, __int64))(v9 + 64);
    if ( v11 )
    {
      result = v11(a1, a2, a3, a4, v9);
    }
    else
    {
      if ( a4 )
        sub_140002FB0(
          (__int64)a4,
          "the '%s' extlang des not implement the 'eval_expr' callback",
          *(const char **)(v9 + 16));
      result = 0;
    }
  }
  else
  {
    sub_140001810((__int64)a4, "no extlang registered", 0x15u);
    if ( a1 )
    {
      sub_140029390(a1);
      *(_BYTE *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
    }
    v12[0] = &off_140094B80;
    v12[1] = a2;
    result = sub_14002E8D0((char *)a1, a3, a4, (__int64)v12);
  }
  if ( v9 )
    --*(_DWORD *)(v9 + 12);
  return result;
}
// 140094B80: using guessed type _UNKNOWN *off_140094B80;
// 1400CB030: using guessed type __int64 qword_1400CB030;
// 1400CB040: using guessed type __int64 qword_1400CB040;
