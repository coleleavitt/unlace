unsigned __int64 __fastcall sub_3E1920(__m128i *a1, __int64 a2)
{
  _DWORD *v2; // rax
  _DWORD *exception; // rax
  _DWORD *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  _QWORD *v10; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  int v15; // ebp
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 *v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r15d
  __int16 v23; // ax
  int v24; // r15d
  __int16 v25; // ax
  int v26; // r15d
  int v27; // eax
  __int16 v28; // ax
  int v29; // r15d
  __int16 v30; // ax
  int v31; // ebp
  __int16 v32; // ax
  __int64 v33; // rbp
  int v34; // r15d
  __int16 v35; // ax
  __int64 v36; // rax
  int v37; // r15d
  __int16 v38; // ax
  __int64 v39; // rax
  int v40; // eax
  __int16 v41; // ax
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // xmm1
  __m128 v45; // xmm0
  __int64 v46; // rdi
  int v48; // [rsp+4h] [rbp-6Ch]
  int v49; // [rsp+4h] [rbp-6Ch]
  __int64 v50; // [rsp+10h] [rbp-60h] BYREF
  __int64 v51; // [rsp+18h] [rbp-58h] BYREF
  __m128i v52; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+30h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v52 = 0;
  v50 = 0;
  v51 = 0;
  v15 = sub_3E0EC0(a1);
  if ( v15 )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = v15;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v16 = a1[67].m128i_i16[2];
  if ( v16 == 4 )
  {
    a1[67].m128i_i16[2] = 2;
  }
  else if ( v16 != 2 )
  {
    sub_5ADD6(0.0);
  }
  if ( a1[2].m128i_i8[0] )
    sub_3E13A0((__int64)a1, &v50, (__int64)&v51);
  v17 = qalloc_or_throw(24);
  *(_QWORD *)v17 = 0;
  v18 = (__int64 *)v17;
  v19 = 0;
  *(_OWORD *)(v17 + 8) = 0;
  v20 = 0;
  v21 = 0;
  while ( 1 )
  {
    if ( v20 < v21 + 1 )
    {
      v36 = qvector_reserve(v18, v19, v21 + 1, 24);
      *v18 = v36;
      v21 = v18[1];
      v19 = v36;
    }
    v33 = v19 + 24 * v21;
    *(_QWORD *)v33 = 0;
    *(_QWORD *)(v33 + 8) = 0;
    *(_DWORD *)(v33 + 16) = 0xFFFF;
    ++v18[1];
    v34 = sub_3E0EC0(a1);
    if ( v34 )
    {
      v12 = __cxa_allocate_exception(4u);
      *v12 = v34;
      __cxa_throw(v12, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v35 = a1[67].m128i_i16[2];
    if ( v35 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_68:
      sub_5ADD6(0.0);
    }
    if ( v35 != 3 )
      goto LABEL_68;
    *(_WORD *)(v33 + 16) = a1[66].m128i_i64[0];
    v22 = sub_3E0EC0(a1);
    if ( v22 )
    {
      v13 = __cxa_allocate_exception(4u);
      *v13 = v22;
      __cxa_throw(v13, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v23 = a1[67].m128i_i16[2];
    if ( v23 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_67:
      sub_5ADD6(0.0);
    }
    if ( v23 != 58 )
      goto LABEL_67;
    v24 = sub_3E0EC0(a1);
    if ( v24 )
    {
      v11 = __cxa_allocate_exception(4u);
      *v11 = v24;
      __cxa_throw(v11, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v25 = a1[67].m128i_i16[2];
    switch ( v25 )
    {
      case 4:
        a1[67].m128i_i16[2] = 2;
        break;
      case 94:
        v37 = sub_3E0EC0(a1);
        if ( v37 )
        {
          v5 = __cxa_allocate_exception(4u);
          *v5 = v37;
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
        }
        v38 = a1[67].m128i_i16[2];
        if ( v38 == 4 )
        {
          a1[67].m128i_i16[2] = 2;
LABEL_54:
          sub_5ADD6(0.0);
        }
        if ( v38 != 3 )
          goto LABEL_54;
        v39 = a1[66].m128i_i64[0];
        *(_DWORD *)v33 = 1;
        *(_QWORD *)(v33 + 8) = v39;
        goto LABEL_20;
      case 2:
        break;
      default:
        goto LABEL_64;
    }
    v26 = sub_11E5A0(*(_DWORD **)(a1->m128i_i64[0] + 112), (__int64)a1[2].m128i_i64, nullptr);
    if ( v26 == -1 )
    {
LABEL_64:
      v10 = __cxa_allocate_exception(8u);
      *v10 = "Illegal scattered operand";
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'char const*, nullptr);
    }
    v27 = sub_3E0EC0(a1);
    if ( v27 )
    {
      v49 = v27;
      v9 = __cxa_allocate_exception(4u);
      *v9 = v49;
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v28 = a1[67].m128i_i16[2];
    if ( v28 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
    }
    else if ( v28 == 94 )
    {
      v40 = sub_3E0EC0(a1);
      if ( v40 )
      {
        v48 = v40;
        v4 = __cxa_allocate_exception(4u);
        *v4 = v48;
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'int, nullptr);
      }
      v41 = a1[67].m128i_i16[2];
      if ( v41 == 4 )
      {
        a1[67].m128i_i16[2] = 2;
LABEL_56:
        sub_5ADD6(0.0);
      }
      if ( v41 != 3 )
        goto LABEL_56;
      v26 += a1[66].m128i_i32[0];
    }
    *(_DWORD *)v33 = 3;
    *(_DWORD *)(v33 + 8) = v26;
LABEL_20:
    if ( a1[67].m128i_i16[2] != 46 )
    {
      v8 = __cxa_allocate_exception(4u);
      *v8 = 47;
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v29 = sub_3E0EC0(a1);
    if ( v29 )
    {
      v7 = __cxa_allocate_exception(4u);
      *v7 = v29;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v30 = a1[67].m128i_i16[2];
    if ( v30 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_60:
      sub_5ADD6(0.0);
    }
    if ( v30 != 3 )
      goto LABEL_60;
    *(_WORD *)(v33 + 18) = a1[66].m128i_i64[0];
    v31 = sub_3E0EC0(a1);
    if ( v31 )
    {
      v6 = __cxa_allocate_exception(4u);
      *v6 = v31;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v32 = a1[67].m128i_i16[2];
    if ( v32 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_50:
      v2 = __cxa_allocate_exception(4u);
      *v2 = 47;
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    if ( v32 != 44 )
      break;
    v21 = v18[1];
    v20 = v18[2];
    v19 = *v18;
  }
  if ( v32 != 62 )
    goto LABEL_50;
  *(_BYTE *)a2 = 15;
  v42 = qalloc_or_throw(56);
  *(_DWORD *)v42 = 0;
  *(_QWORD *)(v42 + 8) = 0;
  v43 = v50;
  v50 = 0;
  v44 = _mm_loadu_si128(&v52);
  v45 = _mm_loadh_ps((const double *)&v51);
  *(_QWORD *)(v42 + 48) = v43;
  *(__m128 *)(v42 + 16) = v45;
  *(__m128i *)(v42 + 32) = v44;
  v51 = 0;
  *(_QWORD *)(a2 + 8) = v42;
  v52 = 0;
  if ( v18 )
  {
    *(_DWORD *)v42 = 2;
    v46 = v51;
    *(_QWORD *)(v42 + 8) = v18;
    if ( v46 )
    {
      v52.m128i_i64[0] = 0;
      qfree(v46);
    }
  }
  clear_tinfo_t(&v50);
  return v53 - __readfsqword(0x28u);
}
