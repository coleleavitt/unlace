/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003A350
// Address: 0x000000014003A350

//----- (000000014003A350) ----------------------------------------------------
__int8 *__fastcall sub_14003A350(__int64 a1, CHAR *a2, __int64 a3, char *a4, char a5, char a6)
{
  int v7; // esi
  char v10; // di
  __int8 *result; // rax
  __int8 *v13; // rbx
  char *String2; // rbp
  __int64 v15; // rdi
  __int64 v16; // rsi
  char v17; // al
  __m128i *v18; // rcx
  __int64 *v19; // rax
  __int8 *v20; // rax
  char v21; // [rsp+30h] [rbp-178h]
  __m128i v22[17]; // [rsp+40h] [rbp-168h] BYREF

  v7 = *(_DWORD *)(a1 + 364) & 4;
  v10 = v7 != 0;
  v21 = v7 != 0;
  if ( sub_14005DC40((unsigned __int8 *)a4) )
  {
    result = sub_1400621E0(a2, a4, a3);
    v13 = result;
    if ( !v7 )
      return result;
    if ( !sub_14003D660(a2, a3) )
      return nullptr;
  }
  else
  {
    String2 = nullptr;
    v13 = nullptr;
    if ( a6 )
    {
      v17 = sub_14005DA20(v22, 0x104u, *(__m128i **)(a1 + 304));
      v18 = v22;
      if ( !v17 )
        v18 = nullptr;
      String2 = (char *)v18;
    }
    else if ( a5 == 34 )
    {
      result = sub_140039980(a2, a3, *(__m128i **)(a1 + 304), (__int64)a4, v10);
      v13 = result;
      if ( result )
        return result;
      v15 = *(_DWORD *)(a1 + 280) - 1;
      v16 = 40 * v15;
      while ( v15 >= 0 )
      {
        result = sub_140039980(a2, a3, *(__m128i **)(*(_QWORD *)(a1 + 272) + v16), (__int64)a4, v21);
        --v15;
        v16 -= 40;
        v13 = result;
        if ( result )
          return result;
      }
      v10 = v21;
    }
    v19 = off_1400C6AE8();
    v20 = sub_14003A6F0(v19, a2, a3, (__int64)a4, String2, v10);
    if ( v20 )
      return v20;
  }
  return v13;
}
// 14003A478: conditional instruction was optimized away because al.1==0
// 1400C6AE8: using guessed type __int64 *(*off_1400C6AE8)();
