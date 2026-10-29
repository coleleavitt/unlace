__int64 __fastcall sub_A89E80(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  char v5; // al
  void *v6; // r15
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // r13
  _DWORD *v14; // r15
  unsigned int v15; // eax
  __int64 v16; // r14
  unsigned int v17; // r13d
  _DWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r15
  unsigned int v21; // ebp
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 result; // rax
  __int64 v25; // [rsp+10h] [rbp-78h]
  _QWORD *v26; // [rsp+18h] [rbp-70h]
  char v27; // [rsp+2Fh] [rbp-59h] BYREF
  unsigned int *v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h] BYREF
  __int64 v31; // [rsp+48h] [rbp-40h]

  v26 = a1 + 2;
  v28 = nullptr;
  v29 = 0;
  v30 = 1;
  v31 = 0;
  v5 = sub_1666AE0(a1 + 2, a3, &v28, &v27);
  v6 = qword_1C7F2C0;
  if ( v5 && !(_DWORD)v28 )
  {
    sub_182CBA0(qword_1C7F2C0, &v28);
    return sub_182CBA0(v6, &v30);
  }
  else
  {
    sub_182CBA0(qword_1C7F2C0, &v28);
    sub_182CBA0(v6, &v30);
    v7 = *a1;
    v28 = nullptr;
    v25 = v7;
    v29 = 0;
    v30 = 1;
    v31 = 0;
    sub_182CBA0(qword_1C7F2C0, &v30);
    v11 = a1[3];
    BYTE4(v30) &= ~1u;
    LODWORD(v30) = 1;
    if ( !v11 )
    {
      sub_16669E0(v26);
      v11 = a1[3];
    }
    v12 = sub_166A700(v11, (unsigned int)&v28, 0, v8, v9, v10);
    v13 = qword_1C7F2C0;
    v14 = (_DWORD *)v12;
    sub_182CBA0(qword_1C7F2C0, &v28);
    sub_182CBA0(v13, &v30);
    v15 = sub_966380(v25, a3, v14);
    v16 = *a1;
    v17 = v15;
    sub_15E1B70(a1[2]);
    v18 = (_DWORD *)sub_15E1B70(a1[2]);
    v19 = sub_966380(v16, v18, a2);
    v20 = *a1;
    v21 = v19;
    v22 = *(_QWORD *)(*a1 + 24);
    if ( *(_QWORD *)(v22 + 912) )
    {
      v28 = nullptr;
      v23 = sub_186B270(0x10u);
      v28 = (unsigned int *)(v23 + 8);
      *(_QWORD *)v23 = 0x200000002LL;
      *(_QWORD *)(v23 + 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v21)).m128i_u64[0];
      sub_966E60(v20, &v28);
      if ( v28 )
        sub_186B220(v28 - 2);
    }
    result = sub_A7A430((__int64)a1, v17, v21);
    if ( *(_QWORD *)(v22 + 912) )
      return std::__ostream_insert<char,std::char_traits<char>>();
  }
  return result;
}

