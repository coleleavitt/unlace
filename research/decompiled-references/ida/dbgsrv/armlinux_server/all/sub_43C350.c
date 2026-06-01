/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C350
// Address: 0x000000000043C350

//----- (000000000043C350) ----------------------------------------------------
__int64 __fastcall sub_43C350(__int64 *a1, __int64 a2, const char *a3, __int64 a4)
{
  __int64 v8; // x0
  unsigned __int8 (__fastcall *v9)(__int64 *, __int64, const char *, __int64); // x4
  __int64 v10; // x19
  __int64 result; // x0
  void *v12; // x0

  v8 = sub_43B700();
  if ( v8 )
  {
    v9 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64, const char *, __int64))(v8 + 64);
    v10 = v8;
    if ( v9 )
    {
      result = v9(a1, a2, a3, a4);
    }
    else
    {
      if ( a4 )
        sub_40CD68(a4, "the '%s' extlang des not implement the 'eval_expr' callback", *(const char **)(v8 + 16));
      result = 0;
    }
    --*(_DWORD *)(v10 + 12);
  }
  else
  {
    v12 = *(void **)a4;
    if ( *(_QWORD *)(a4 + 16) <= 0x15u )
    {
      v12 = sub_491288(a4, *(void **)a4, 0x16u, 1u);
      *(_QWORD *)a4 = v12;
    }
    *(_QWORD *)(a4 + 8) = 22;
    qmemcpy(v12, "no extlang registered", 21);
    *(_BYTE *)(*(_QWORD *)a4 + 21LL) = 0;
    return (unsigned __int8)sub_43BD20(a1, a2, a3, a4);
  }
  return result;
}
// 43C398: conditional instruction was optimized away because x19.8!=0
