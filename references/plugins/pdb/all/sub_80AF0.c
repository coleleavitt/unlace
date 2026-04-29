__int64 __fastcall sub_80AF0(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v5; // rdi
  char v7; // al
  __int64 *v8; // r12
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rax
  __int64 v11; // rsi
  __m128i *v13; // rsi
  __m128i si128; // xmm0
  __int64 v15; // rax
  int v16; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 (__fastcall **v17[2])(_QWORD, int *, _QWORD *, __int64); // [rsp+10h] [rbp-48h] BYREF
  int v18; // [rsp+20h] [rbp-38h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v5 = (_QWORD *)*a2;
  v19 = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(_QWORD *, int *, __int64))(*v5 + 48LL))(v5, &v16, 4);
  v8 = *(__int64 **)(a1 + 64);
  if ( v7 && v16 == 4 )
  {
    v9 = (_QWORD *)*a2;
    v18 = a3;
    v17[0] = (__int64 (__fastcall **)(_QWORD, int *, _QWORD *, __int64))&off_B23E0;
    v17[1] = (__int64 (__fastcall **)(_QWORD, int *, _QWORD *, __int64))(a1 + 472);
    v10 = *(__int64 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 == (char *)sub_7E980 )
      v11 = v9[6];
    else
      LODWORD(v11) = v10();
    return sub_55CF0(a2, v11, v17, (__int64)v8);
  }
  else
  {
    v13 = (__m128i *)*v8;
    if ( (unsigned __int64)v8[2] <= 0x21 )
    {
      v15 = qvector_reserve(*(_QWORD *)(a1 + 64), v13, 34, 1);
      *v8 = v15;
      v13 = (__m128i *)v15;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_94340);
    v8[1] = 34;
    v13[2].m128i_i8[0] = 110;
    *v13 = si128;
    v13[1] = _mm_load_si128((const __m128i *)&xmmword_94350);
    *(_BYTE *)(*v8 + 33) = 0;
    return 0;
  }
}
