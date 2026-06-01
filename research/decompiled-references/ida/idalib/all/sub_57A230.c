__int64 __fastcall sub_57A230(__int64 *a1, __int64 a2, __int64 *a3, int a4, unsigned __int8 a5)
{
  unsigned int v7; // ebx
  unsigned __int64 v9; // r15
  unsigned int v10; // eax
  signed __int64 v11; // r13
  unsigned __int8 v12; // r14
  signed __int64 v13; // rax
  int *v14; // rsi
  char v15; // r15
  __int64 dtype_flag; // rax
  int v17[4]; // [rsp+0h] [rbp-68h] BYREF
  void (__fastcall *v18[3])(int *, int *, __int64); // [rsp+10h] [rbp-58h] BYREF
  int v19[2]; // [rsp+28h] [rbp-40h]

  *(_QWORD *)v19 = __readfsqword(0x28u);
  if ( a3 == (__int64 *)-1LL
    || a4 >= 0 && a3 != (__int64 *)sub_4CA6C0((__int64)a1, *(_QWORD *)(a2 + 16) + a4, (unsigned __int64)a3) )
  {
    return 0;
  }
  v9 = sub_3BE900(a1, (unsigned __int64)a3, 4);
  v10 = (unsigned __int8)sub_631AD0(*a1, 9);
  v11 = v10;
  if ( v10 && (unsigned __int8)is_spec_ea(a3) )
    goto LABEL_16;
  v12 = a5;
  v13 = sub_579D10(a5, v9);
  v11 = v13;
  if ( !v13 )
    return 0;
  if ( v13 >= 0 )
  {
LABEL_16:
    v14 = (int *)a3;
    if ( (unsigned __int8)sub_57A030((__int64)a1, (unsigned __int64)a3, v11) )
    {
      v12 = a5;
      goto LABEL_18;
    }
    return 0;
  }
  v11 = -v13;
  if ( sub_3C1F00(a1, (unsigned __int64)a3) - (__int64)a3 >= (unsigned __int64)-v13
    || !(unsigned __int8)sub_57A030((__int64)a1, (unsigned __int64)a3, v11) )
  {
    return 0;
  }
  v14 = (int *)a3;
  *(_QWORD *)v17 = sub_571930;
  *(_QWORD *)&v17[2] = 0;
  *(__m128i *)v18 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)&off_2B2E810),
                      (__m128i)(unsigned __int64)sub_571580);
  v15 = sub_3D19E0((_DWORD)a1, (_DWORD)a3);
  if ( v18[0] )
  {
    v14 = v17;
    v18[0](v17, v17, 3);
  }
  if ( !v15 )
    return 0;
LABEL_18:
  memset(v18, 0, 16);
  *(_OWORD *)v17 = 0;
  dtype_flag = get_dtype_flag(v12, (const char *)v14);
  v7 = sub_3D4400(a1, a3, dtype_flag, (char *)v11, (void *)0xFFFFFFFFFFFFFFFFLL, (const __m128i *)v17);
  if ( v18[0] )
    v18[0](v17, v17, 3);
  return v7;
}
