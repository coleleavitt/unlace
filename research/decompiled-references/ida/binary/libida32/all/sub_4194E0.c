unsigned __int64 __fastcall sub_4194E0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rax
  int v7[2]; // [rsp+0h] [rbp-B0h] BYREF
  __m128i v8; // [rsp+8h] [rbp-A8h] BYREF
  int v9[4]; // [rsp+18h] [rbp-98h]
  int v10[2]; // [rsp+28h] [rbp-88h] BYREF
  int v11[2]; // [rsp+30h] [rbp-80h] BYREF
  int v12[4]; // [rsp+38h] [rbp-78h]
  int v13[4]; // [rsp+48h] [rbp-68h]
  __int64 v14[2]; // [rsp+58h] [rbp-58h]
  int v15[4]; // [rsp+68h] [rbp-48h]
  int v16[2]; // [rsp+80h] [rbp-30h]

  v3 = *(_QWORD **)(a2 + 1480);
  *(_QWORD *)v16 = __readfsqword(0x28u);
  *(_OWORD *)v12 = 0;
  *(_OWORD *)v13 = 0;
  *(_OWORD *)v14 = 0;
  *(_OWORD *)v15 = 0;
  *(_QWORD *)v10 = v3;
  *(_QWORD *)v11 = 0;
  sub_6141A0(*v3, 26, v11, 8);
  v5 = *(_QWORD **)(a2 + 1480);
  *(_QWORD *)v7 = 0;
  sub_6141A0(*v5, 26, v7, 8);
  v8.m128i_i64[0] = a3;
  v8.m128i_i64[1] = (__int64)v10;
  *(__m128i *)v9 = _mm_unpacklo_epi64(
                     _mm_loadl_epi64((const __m128i *)&off_2AFE660),
                     (__m128i)(unsigned __int64)sub_41B860);
  sub_418C60(a2, v7, &v8);
  if ( *(_QWORD *)v9 )
    (*(void (__fastcall **)(__m128i *, __m128i *, __int64))v9)(&v8, &v8, 3);
  return *(_QWORD *)v16 - __readfsqword(0x28u);
}

