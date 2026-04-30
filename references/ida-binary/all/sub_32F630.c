__int64 __fastcall custom_data_type_ah_t__::vfunc_0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // edx
  unsigned int v11; // ebp
  _QWORD *custom_data_type; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rsi
  unsigned __int64 v20; // r13
  __int64 v21; // rdi
  unsigned __int64 v22; // r12
  unsigned __int8 (__fastcall *v23)(_QWORD, __int64, unsigned __int64); // rax
  __int64 result; // rax
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  char v29; // [rsp+0h] [rbp-68h]
  unsigned int v30; // [rsp+Ch] [rbp-5Ch]
  __int64 v31; // [rsp+10h] [rbp-58h] BYREF
  __int64 v32; // [rsp+18h] [rbp-50h] BYREF
  _DWORD *v33; // [rsp+20h] [rbp-48h] BYREF
  __int128 v34; // [rsp+28h] [rbp-40h]
  unsigned __int64 v35; // [rsp+38h] [rbp-30h]

  v10 = *(_DWORD *)(a2 + 8);
  v35 = __readfsqword(0x28u);
  if ( v10 == 25 || v10 == 58 )
    return (unsigned __int8)sub_3BCD40(a2, *(unsigned int *)(a1 + 12));
  v33 = nullptr;
  v11 = *(_DWORD *)(a1 + 12);
  v34 = 0;
  custom_data_type = (_QWORD *)get_custom_data_type(v11);
  if ( (int)get_custom_data_formats(&v33, v11) <= 0 )
  {
    v19 = (__int64)"?";
    if ( custom_data_type )
      v19 = custom_data_type[3];
    sub_169630(
      (int)"No data formats are defined for %s",
      v19,
      v13,
      v14,
      v15,
      v16,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v17,
      v18,
      a9,
      a10,
      v29);
    goto LABEL_10;
  }
  v19 = (__int64)&v31;
  v20 = custom_data_type[7];
  if ( (unsigned __int8)sub_1F09E0(0, &v31, &v32) )
  {
    v21 = v31;
    v22 = v32 - v31;
    if ( v32 - v31 < v20 )
      goto LABEL_10;
  }
  else
  {
    v25 = custom_data_type[9] == 0;
    v21 = xmmword_8CC810;
    v31 = xmmword_8CC810;
    if ( v25 )
    {
      v22 = v20;
    }
    else
    {
      v26 = calc_max_item_end(xmmword_8CC810, 15);
      v27 = custom_data_type[1];
      v32 = v26;
      v28 = ((__int64 (__fastcall *)(__int64, __int64, __int64))custom_data_type[9])(v27, v31, v26 - v31);
      v21 = v31;
      v22 = v28;
    }
  }
  v23 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, unsigned __int64))custom_data_type[8];
  if ( !v23 )
    goto LABEL_9;
  v19 = v21;
  if ( !v23(custom_data_type[1], v21, v22) )
  {
LABEL_10:
    result = 0;
    goto LABEL_11;
  }
  v21 = v31;
LABEL_9:
  v19 = v22;
  if ( (unsigned int)sub_32F3B0(
                       v21,
                       v22,
                       (__int64)"ICON WARNING\nHIDECANCEL\nDirectly convert to data?",
                       -573570048,
                       nullptr,
                       nullptr) != 1 )
    goto LABEL_10;
  v19 = 3489660928LL;
  result = (unsigned __int8)create_data(v31, 3489660928LL, v22, (int)(v11 | (*v33 << 16)));
LABEL_11:
  if ( v33 )
  {
    v30 = result;
    *(_QWORD *)&v34 = 0;
    qfree(v33, (const char *)v19);
    return v30;
  }
  return result;
}
