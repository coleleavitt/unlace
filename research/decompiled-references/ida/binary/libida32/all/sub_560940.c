__int64 __fastcall sub_560940(__int64 *a1, __int64 a2, unsigned int a3, int a4, unsigned __int8 a5)
{
  unsigned int v7; // ebx
  unsigned __int64 v9; // r15
  signed __int64 v10; // r13
  unsigned int v11; // r14d
  signed __int64 v12; // rax
  char v13; // r15
  void *dtype_flag; // rax
  int v15[4]; // [rsp+0h] [rbp-68h] BYREF
  void (__fastcall *v16[3])(int *, int *, __int64); // [rsp+10h] [rbp-58h] BYREF
  int v17[2]; // [rsp+28h] [rbp-40h]

  *(_QWORD *)v17 = __readfsqword(0x28u);
  if ( a3 == -1 || a4 >= 0 && a3 != (unsigned int)sub_4B39D0((__int64)a1, (unsigned int)(*(_DWORD *)(a2 + 8) + a4), a3) )
    return 0;
  v9 = sub_3B9AA0((__int64)a1, a3, 4);
  LODWORD(v10) = (unsigned __int8)sub_614FB0(*a1, 9);
  if ( (_DWORD)v10 && (unsigned __int8)is_spec_ea(a3) )
    goto LABEL_22;
  v11 = a5;
  v12 = sub_560450(a5, v9);
  LODWORD(v10) = v12;
  if ( !v12 )
    return 0;
  if ( v12 >= 0 )
  {
LABEL_22:
    if ( (unsigned __int8)sub_560780((__int64)a1, a3, v10) )
    {
      v11 = a5;
      goto LABEL_18;
    }
    return 0;
  }
  v10 = -v12;
  if ( (unsigned int)sub_3BCF60((__int64)a1, a3) - a3 >= (unsigned __int64)-v12
    || !(unsigned __int8)sub_560780((__int64)a1, a3, v10) )
  {
    return 0;
  }
  *(_QWORD *)v15 = sub_557E20;
  *(_QWORD *)&v15[2] = 0;
  *(__m128i *)v16 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)&off_2B04850),
                      (__m128i)(unsigned __int64)sub_557A70);
  v13 = sub_3CC010((_DWORD)a1, a3, 24);
  if ( v16[0] )
    v16[0](v15, v15, 3);
  if ( !v13 )
    return 0;
LABEL_18:
  memset(v16, 0, 16);
  *(_OWORD *)v15 = 0;
  dtype_flag = (void *)get_dtype_flag(v11);
  v7 = sub_3CE970(a1, a3, dtype_flag, v10, -1, (const __m128i *)v15);
  if ( v16[0] )
    v16[0](v15, v15, 3);
  return v7;
}

