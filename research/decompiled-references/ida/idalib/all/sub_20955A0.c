__int64 __fastcall sub_20955A0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r14
  signed __int64 v3; // rbp
  _QWORD *v4; // rax
  _BYTE *v5; // r14
  signed __int64 v6; // rbp
  _QWORD *v7; // rax
  __m128i v8; // xmm0
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-68h] BYREF
  void *v12; // [rsp+20h] [rbp-58h]
  signed __int64 v13; // [rsp+28h] [rbp-50h]
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __m128i v15; // [rsp+40h] [rbp-38h]

  v2 = *(_BYTE **)a2;
  v3 = *(_QWORD *)(a2 + 8);
  v10.m128i_i64[0] = (__int64)v11;
  if ( &v2[v3] && !v2 )
LABEL_26:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v3 > 0xF )
  {
    if ( v3 < 0 )
      goto LABEL_27;
    v4 = (_QWORD *)operator new(v3 + 1);
    v11[0] = v3;
    v10.m128i_i64[0] = (__int64)v4;
    goto LABEL_22;
  }
  if ( v3 != 1 )
  {
    v4 = v11;
    if ( !v3 )
      goto LABEL_6;
LABEL_22:
    memcpy(v4, v2, v3);
    v4 = (_QWORD *)v10.m128i_i64[0];
    goto LABEL_6;
  }
  LOBYTE(v11[0]) = *v2;
  v4 = v11;
LABEL_6:
  v5 = *(_BYTE **)(a2 + 32);
  v10.m128i_i64[1] = v3;
  *((_BYTE *)v4 + v3) = 0;
  v6 = *(_QWORD *)(a2 + 40);
  v12 = v14;
  if ( &v5[v6] && !v5 )
    goto LABEL_26;
  if ( (unsigned __int64)v6 > 0xF )
  {
    if ( v6 >= 0 )
    {
      v7 = (_QWORD *)operator new(v6 + 1);
      v14[0] = v6;
      v12 = v7;
LABEL_25:
      memcpy(v7, v5, v6);
      v7 = v12;
      goto LABEL_11;
    }
LABEL_27:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v6 == 1 )
  {
    LOBYTE(v14[0]) = *v5;
    v7 = v14;
    goto LABEL_11;
  }
  v7 = v14;
  if ( v6 )
    goto LABEL_25;
LABEL_11:
  v13 = v6;
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *((_BYTE *)v7 + v6) = 0;
  v15 = v8;
  sub_208CC30(a1, &v10);
  if ( v12 != v14 )
    operator delete(v12);
  if ( (_QWORD *)v10.m128i_i64[0] != v11 )
    operator delete((void *)v10.m128i_i64[0]);
  return a1;
}
