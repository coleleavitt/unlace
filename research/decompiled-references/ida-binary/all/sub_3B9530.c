__int64 __fastcall sub_3B9530(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  unsigned int v8; // r15d
  unsigned int v9; // eax
  unsigned int v11; // ebx
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  unsigned __int64 v17; // rsi
  __int64 tinfo_property; // rax
  const char *v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+8h] [rbp-58h] BYREF
  const char *v22; // [rsp+10h] [rbp-50h] BYREF
  __int128 v23; // [rsp+18h] [rbp-48h]
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]

  v8 = 0;
  v24 = __readfsqword(0x28u);
  v9 = sub_331180(1u, 0, 1);
  if ( v9 == -1 )
    return v8;
  v11 = v9;
  v23 = 0;
  v12 = xmmword_8CC810;
  v22 = nullptr;
  v20 = 0;
  if ( (unsigned __int8)get_op_tinfo(&v20, xmmword_8CC810, v9) )
    print_tinfo(&v22, 0, 0, 0, 0, &v20, 0, 0);
  v17 = 6;
  if ( (unsigned __int8)sub_196F50(
                          (int)&v22,
                          6,
                          (int)"@0:1601[]\nPlease enter type declaration for the operand %d",
                          v11,
                          v13,
                          v14,
                          (__m128)0LL,
                          a2,
                          a3,
                          a4,
                          v15,
                          v16,
                          a7,
                          a8,
                          v20) )
  {
    if ( (unsigned __int64)v23 > 1 )
    {
      v21 = 0;
      tinfo_property = get_tinfo_property(v20, 22);
      v19 = &s1;
      if ( (_QWORD)v23 )
        v19 = v22;
      v17 = 0;
      v8 = 0;
      if ( (unsigned __int8)parse_decl(&v21, 0, 0, v19, tinfo_property == 0 ? 49412 : 49540) )
      {
        v17 = v11;
        v8 = (unsigned __int8)set_op_tinfo(v12, v11, &v21);
      }
      clear_tinfo_t(&v21);
      goto LABEL_12;
    }
    v17 = v11;
    set_op_tinfo(v12, v11, 0);
  }
  v8 = 1;
LABEL_12:
  clear_tinfo_t(&v20);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, (const char *)v17);
  }
  return v8;
}
