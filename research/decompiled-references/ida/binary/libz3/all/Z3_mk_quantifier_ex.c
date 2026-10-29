__int64 __fastcall Z3_mk_quantifier_ex(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        unsigned int a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 *a12,
        __int64 a13)
{
  char v13; // bl
  __int64 result; // rax
  int v15; // [rsp+Ch] [rbp-54h]
  __int64 v16; // [rsp+10h] [rbp-50h]
  __int64 v17; // [rsp+18h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+28h] [rbp-38h]

  v13 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  a2 = (unsigned __int8)a2;
  if ( v13 )
  {
    v15 = a6;
    v16 = a5;
    v17 = a4;
    v18 = a3;
    sub_298F20(a1, (unsigned __int8)a2, a3, a4, a5, a6, a7);
    a2 = (unsigned __int8)a2;
    LODWORD(a3) = v18;
    a4 = v17;
    a5 = v16;
    LODWORD(a6) = v15;
  }
  result = sub_253CA0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( v13 )
  {
    v19 = result;
    sub_2BB620(result);
    byte_1C7EBA0 = 1;
    return v19;
  }
  return result;
}

