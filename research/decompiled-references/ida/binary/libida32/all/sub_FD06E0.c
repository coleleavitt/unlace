void __fastcall sub_FD06E0(__int64 a1, _BYTE *a2, __int64 a3, char a4, unsigned __int8 *a5, __int64 a6)
{
  _QWORD *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __m128i *v16; // rax
  __m128i *v17; // rdx
  _QWORD *v18; // rdi
  char v19; // al
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v23; // [rsp+8h] [rbp-70h]
  void *v24[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v25[2]; // [rsp+20h] [rbp-58h] BYREF
  char v26; // [rsp+30h] [rbp-48h]

  v24[0] = v25;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v11 = (_QWORD *)operator new(a3 + 1);
    v25[0] = a3;
    v24[0] = v11;
LABEL_21:
    memcpy(v11, a2, a3);
    v11 = v24[0];
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    LOBYTE(v25[0]) = *a2;
    v11 = v25;
    goto LABEL_6;
  }
  v11 = v25;
  if ( a3 )
    goto LABEL_21;
LABEL_6:
  v24[1] = (void *)a3;
  *((_BYTE *)v11 + a3) = 0;
  v12 = *(unsigned int *)(a1 + 808);
  v13 = *(unsigned int *)(a1 + 812);
  v26 = a4;
  v14 = v12 + 1;
  if ( v12 + 1 > v13 )
  {
    v20 = *(_QWORD *)(a1 + 800);
    v21 = a1 + 800;
    if ( v20 > (unsigned __int64)v24 || (unsigned __int64)v24 >= v20 + 40 * v12 )
    {
      sub_FD05C0(v21, v14);
      v15 = *(_QWORD *)(a1 + 800);
      v12 = *(unsigned int *)(a1 + 808);
      v16 = (__m128i *)v24;
    }
    else
    {
      v23 = *(_QWORD *)(a1 + 800);
      sub_FD05C0(v21, v14);
      v15 = *(_QWORD *)(a1 + 800);
      v12 = *(unsigned int *)(a1 + 808);
      v16 = (__m128i *)((char *)v24 + v15 - v23);
    }
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 800);
    v16 = (__m128i *)v24;
  }
  v17 = (__m128i *)(v15 + 40 * v12);
  v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
  if ( (__m128i *)v16->m128i_i64[0] == &v16[1] )
  {
    v17[1] = _mm_loadu_si128(v16 + 1);
  }
  else
  {
    v17->m128i_i64[0] = v16->m128i_i64[0];
    v17[1].m128i_i64[0] = v16[1].m128i_i64[0];
  }
  v17->m128i_i64[1] = v16->m128i_i64[1];
  v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
  v18 = v24[0];
  v16->m128i_i64[1] = 0;
  v16[1].m128i_i8[0] = 0;
  v17[2].m128i_i8[0] = v16[2].m128i_i8[0];
  ++*(_DWORD *)(a1 + 808);
  if ( v18 != v25 )
    operator delete(v18);
  if ( sub_FC9700(a2, a3, a5, a6) != a4 )
  {
    v19 = *(_BYTE *)(a1 + 904);
    if ( (v19 & 4) != 0 || (v19 & 1) == 0 )
      sub_FC9350(a1, 1);
  }
}

