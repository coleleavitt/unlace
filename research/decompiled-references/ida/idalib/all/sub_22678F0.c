__m128i *__fastcall sub_22678F0(__m128i *a1, _DWORD *a2, const char **a3)
{
  __int32 v5; // eax
  __int64 v6; // rdx
  _BYTE *v7; // r15
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  std::_V2 *v11; // rdi
  __int32 v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-348h]
  __int32 v17; // [rsp+Ch] [rbp-33Ch]
  __int32 v18; // [rsp+Ch] [rbp-33Ch]
  _QWORD *v19; // [rsp+10h] [rbp-338h] BYREF
  __int64 v20; // [rsp+18h] [rbp-330h]
  __int16 v21; // [rsp+30h] [rbp-318h]
  __m128i v22; // [rsp+40h] [rbp-308h] BYREF
  __int64 v23; // [rsp+50h] [rbp-2F8h] BYREF
  __int16 v24; // [rsp+60h] [rbp-2E8h]
  char v25; // [rsp+98h] [rbp-2B0h]
  _BYTE ptr[24]; // [rsp+A0h] [rbp-2A8h] BYREF
  _BYTE v27[264]; // [rsp+B8h] [rbp-290h] BYREF
  __m128i v28; // [rsp+1C0h] [rbp-188h] BYREF
  __int64 v29; // [rsp+1D0h] [rbp-178h] BYREF
  char v30; // [rsp+218h] [rbp-130h]
  __int64 v31; // [rsp+2D0h] [rbp-78h]
  char v32; // [rsp+300h] [rbp-48h]

  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  *(_QWORD *)ptr = v27;
  sub_22538C0(a3, (__int64)ptr);
  v5 = (*(__int64 (__fastcall **)(_DWORD *, _BYTE *))(*(_QWORD *)a2 + 112LL))(a2, ptr);
  if ( v5 )
  {
    a1[5].m128i_i8[8] |= 1u;
    v7 = *(_BYTE **)ptr;
    a1->m128i_i32[0] = v5;
    a1->m128i_i64[1] = v6;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)&ptr[8];
  v10 = *(_BYTE **)ptr;
  if ( a2[30] == 1 )
  {
    v22 = *(__m128i *)ptr;
    v24 = 261;
    sub_225BEC0(&v28, (__int64)a2, (__int64)&v22, (_QWORD **)a3);
    if ( (v30 & 1) == 0 )
    {
      sub_225F0D0(a1, &v28);
      if ( (v30 & 1) == 0 && (__int64 *)v28.m128i_i64[0] != &v29 )
        operator delete((void *)v28.m128i_i64[0]);
      goto LABEL_27;
    }
    v9 = *(_QWORD *)&ptr[8];
    v10 = *(_BYTE **)ptr;
  }
  sub_22668A0((__int64)&v28, (__int64)a2, v10, v9);
  if ( (v32 & 1) != 0 )
  {
    v11 = (std::_V2 *)(unsigned int)a2[30];
    v12 = v28.m128i_i32[0];
    v13 = v28.m128i_i64[1];
    v7 = *(_BYTE **)ptr;
    if ( (_DWORD)v11
      || (v17 = v28.m128i_i32[0],
          v16 = v28.m128i_i64[1],
          v14 = std::_V2::generic_category(v11),
          v13 = v16,
          v12 = v17,
          v16 != v14)
      || v17 != 2 )
    {
      a1[5].m128i_i8[8] |= 1u;
      a1->m128i_i32[0] = v12;
      a1->m128i_i64[1] = v13;
      goto LABEL_3;
    }
    v24 = 261;
    v22.m128i_i64[0] = (__int64)v7;
    v22.m128i_i64[1] = *(_QWORD *)&ptr[8];
    sub_225BEC0(a1, (__int64)a2, (__int64)&v22, (_QWORD **)a3);
  }
  else
  {
    v21 = 261;
    v19 = *(_QWORD **)ptr;
    v20 = *(_QWORD *)&ptr[8];
    sub_2265A10(&v22, (__int64)a2, &v19, (__int64)a3, &v28);
    if ( (v25 & 1) != 0
      && !a2[30]
      && (!v31 || *(_DWORD *)(v31 + 8) == 1)
      && (v18 = v22.m128i_i32[0], v15 = std::_V2::generic_category((std::_V2 *)&v22), v22.m128i_i64[1] == v15)
      && v18 == 2 )
    {
      v21 = 261;
      v19 = *(_QWORD **)ptr;
      v20 = *(_QWORD *)&ptr[8];
      sub_225BEC0(a1, (__int64)a2, (__int64)&v19, (_QWORD **)a3);
    }
    else
    {
      sub_225F0D0(a1, &v22);
    }
    if ( (v25 & 1) == 0 && (__int64 *)v22.m128i_i64[0] != &v23 )
      operator delete((void *)v22.m128i_i64[0]);
  }
  if ( (v32 & 1) == 0 )
    sub_225BE70((__int64)&v28);
LABEL_27:
  v7 = *(_BYTE **)ptr;
LABEL_3:
  if ( v7 != v27 )
    free(v7);
  return a1;
}
