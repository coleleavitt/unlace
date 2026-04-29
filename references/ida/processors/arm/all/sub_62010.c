__int64 __fastcall sub_62010(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rbp
  _BYTE *v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char *v14; // rax
  char *v15; // r12
  size_t v16; // rax
  __int64 v17; // r13
  size_t v18; // r14
  size_t v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-78h] BYREF
  __int128 v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+50h] [rbp-58h] BYREF
  __m128i v28; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a3 == 73 )
  {
    v12 = netnode_altval();
    *(_QWORD *)a1 = 0;
    v13 = v12 >> 8;
    *(_OWORD *)(a1 + 8) = 0;
    if ( (_BYTE)v13 == 15 )
    {
      v22 = qvector_reserve(a1, 0, 4, 1);
      *(_QWORD *)a1 = v22;
      *(_QWORD *)(a1 + 8) = 4;
      *(_BYTE *)(v22 + 3) = 0;
      v23 = *(_QWORD *)a1;
      *(_WORD *)v23 = 20566;
      *(_BYTE *)(v23 + 2) = 84;
    }
    else if ( (unsigned __int8)v13 > 0xFu )
    {
      sub_1CD20((__int64 *)a1);
    }
    else
    {
      v14 = sub_39CA0(a5, (unsigned __int8)v13);
      v15 = v14;
      if ( v14 )
      {
        v16 = strlen(v14);
        v17 = *(_QWORD *)(a1 + 8);
        v18 = v16;
        v19 = v16;
        if ( v17 )
        {
          --v17;
          v19 = v16 + v17;
        }
        v20 = *(_QWORD *)a1;
        v21 = v19 + 1;
        if ( *(_QWORD *)(a1 + 16) < v19 + 1 )
        {
          v24 = qvector_reserve(a1, v20, v21, 1);
          *(_QWORD *)a1 = v24;
          v21 = v19 + 1;
          v20 = v24;
        }
        *(_QWORD *)(a1 + 8) = v21;
        *(_BYTE *)(v20 + v19) = 0;
        memmove((void *)(v17 + *(_QWORD *)a1), v15, v18);
      }
    }
    node2ea();
    sub_55D90((__int64 *)a1);
  }
  else
  {
    if ( a3 > 0x49u )
    {
      if ( a3 == 76 )
      {
        node2ea();
        get_ea_diffpos_name();
        v26 = 0;
        generate_disasm_line();
        v27 = 0;
        v28 = 0;
        sub_1CD20(&v27);
        v11 = _mm_loadu_si128(&v28);
        *(_QWORD *)a1 = v27;
        *(__m128i *)(a1 + 8) = v11;
        return a1;
      }
      if ( a3 == 115 )
      {
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v6 = node2ea();
        if ( get_func(v6) && get_ea_name() <= 0 )
          sub_1CD20((__int64 *)a1);
        return a1;
      }
LABEL_12:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v9 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = 1;
      *v9 = 0;
      return a1;
    }
    if ( a3 == 68 )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v10 = netnode_altval();
      if ( (unsigned __int64)(v10 - 1) <= 1 )
      {
        node2ea();
        sub_1CD20((__int64 *)a1);
      }
    }
    else
    {
      if ( a3 != 70 )
        goto LABEL_12;
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v7 = node2ea();
      if ( (unsigned __int8)sub_2F860(a5, (__int64)&v25, v7) )
      {
        sub_1CD20((__int64 *)a1);
        v28 = 0;
        v27 = 0;
        if ( get_ea_name() <= 0 )
          sub_1CD20(&v27);
        if ( v28.m128i_i64[0] > 1uLL )
          sub_55D90((__int64 *)a1);
        if ( v27 )
        {
          v28.m128i_i64[0] = 0;
          qfree(v27);
        }
      }
    }
  }
  return a1;
}
