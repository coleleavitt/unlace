__int64 __fastcall sub_4FC8A0(__int64 a1, int a2, const __m128i *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (*v5)(); // rax
  __int64 result; // rax
  int dtype_size; // eax
  int v9; // r12d
  __int64 v10; // r13
  char v11; // dl
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // [rsp+8h] [rbp-70h] BYREF
  _OWORD v16[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a2 == (_DWORD)&stru_10000 )
  {
    if ( !under_debugger )
      interr(3107);
LABEL_25:
    BUG();
  }
  v17 = a3[2].m128i_i64[0];
  v4 = *(_QWORD *)a1;
  v16[0] = _mm_loadu_si128(a3);
  v5 = *(__int64 (**)())(v4 + 64);
  v16[1] = _mm_loadu_si128(a3 + 1);
  if ( v5 == sub_4F3CC0
    || !((unsigned __int8 (__fastcall *)(__int64, _OWORD *, __int64, _QWORD))v5)(a1, v16, a4, *(_QWORD *)(a1 + 24)) )
  {
    return 2;
  }
  if ( a2 >= 0 )
  {
    if ( BYTE1(v16[0]) == 1 )
      return 2 * (unsigned int)(WORD3(v16[0]) != (unsigned __int16)a2);
    return 2;
  }
  if ( BYTE1(v16[0]) == 1 )
    return 2;
  dtype_size = get_dtype_size(BYTE5(v16[0]));
  v9 = dtype_size;
  if ( BYTE1(v16[0]) != 4 || !dtype_size )
  {
    if ( !under_debugger )
      interr(3217);
    goto LABEL_25;
  }
  v10 = a2 & 0x7FFFFFF;
  if ( (a2 & 0x8000000) != 0 )
    v10 = -(__int64)(a2 & 0x7FFFFFF);
  v11 = sub_4FC450(a1, &v15, (__int64)v16, a4, *(__int64 **)(a1 + 24));
  result = 1;
  if ( v11 )
  {
    v12 = v15;
    v13 = v15 + v9;
    v14 = (1 << (((unsigned int)a2 >> 29) & 3)) + v10;
    if ( (unsigned __int8)getinf_flag(3, 32) )
    {
      if ( v14 == v13 )
        return 0;
      return 2 - (unsigned int)(v12 < v14 && v13 > v10);
    }
    result = 0;
    if ( v12 != v10 )
      return 2 - (unsigned int)(v12 < v14 && v13 > v10);
  }
  return result;
}
