/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_undefine_macro_0
// Address: 0x000000000007EDBC

//----- (000000000007EDBC) ----------------------------------------------------
void __fastcall lex_undefine_macro_0(
        __int64 a1,
        char *s,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v8; // x20
  size_t v11; // x0
  size_t v12; // x22
  char *v13; // x23
  size_t v14; // x24
  __int64 *v15; // x20
  __int64 v17; // [xsp+0h] [xbp-60h] BYREF
  size_t v18; // [xsp+8h] [xbp-58h]
  void *ptr; // [xsp+10h] [xbp-50h]
  __int64 v20; // [xsp+18h] [xbp-48h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 672) )
  {
    if ( under_debugger )
    {
      __break(1u);
      if ( (v17 & 1) != 0 )
        operator delete(ptr);
      Unwind_Resume((_QWORD *)a1, (__int64)s, a3, a4, a5, a6, a7, a8, v17);
    }
    interr(303);
LABEL_15:
    sub_86648();
  }
  v8 = *(_QWORD **)(a1 + 624);
  v17 = 0;
  v18 = 0;
  ptr = nullptr;
  v11 = strlen(s);
  if ( v11 >= 0xFFFFFFFFFFFFFFF0LL )
    goto LABEL_15;
  v12 = v11;
  if ( v11 >= 0x17 )
  {
    v14 = (v11 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v13 = (char *)operator new(v14);
    v18 = v12;
    ptr = v13;
    v17 = v14 | 1;
    goto LABEL_7;
  }
  v13 = (char *)&v17 + 1;
  LOBYTE(v17) = 2 * v11;
  if ( v11 )
LABEL_7:
    memcpy(v13, s, v12);
  v13[v12] = 0;
  v15 = (__int64 *)sub_86E98(v8, (unsigned __int8 *)&v17);
  if ( (v17 & 1) != 0 )
    operator delete(ptr);
  if ( v15 )
    sub_87AE0(*(__int64 **)(a1 + 624), v15);
}
// 7EEF8: variable 's' is possibly undefined
// 7EEF8: variable 'a3' is possibly undefined
// 7EEF8: variable 'a4' is possibly undefined
// 7EEF8: variable 'a5' is possibly undefined
// 7EEF8: variable 'a6' is possibly undefined
// 7EEF8: variable 'a7' is possibly undefined
// 7EEF8: variable 'a8' is possibly undefined
// 168DF0: using guessed type char under_debugger;
