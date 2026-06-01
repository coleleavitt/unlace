__int64 __fastcall sub_592FC0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  char **v4; // r12
  char **v5; // r12
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  size_t v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // r13
  _QWORD *v16; // rdi
  unsigned int v17; // r14d
  unsigned __int64 v18; // rax
  int v19; // r15d
  unsigned int v20; // r12d
  _QWORD *v21; // rdx
  __int64 v22; // rax
  unsigned int *v23; // rax
  __int64 v24; // rax
  unsigned int *v25; // rax
  int v26; // edx
  __int64 result; // rax
  int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // edx
  size_t v31; // rsi
  unsigned int *v32; // rax
  unsigned int v33; // r10d
  size_t v34; // rsi
  unsigned int *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  char **v38; // r12
  unsigned int v39; // [rsp+0h] [rbp-78h]
  unsigned int v40; // [rsp+0h] [rbp-78h]
  __int64 v41; // [rsp+8h] [rbp-70h]
  __int64 v42[11]; // [rsp+20h] [rbp-58h] BYREF

  *(_QWORD *)a1 = qword_1C67518;
  v8 = *(_QWORD **)a3;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v8
    || (v9 = _mm_loadl_epi64((const __m128i *)(v8 - 1)),
        v10 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v9) + 8),
        v11 = *(_QWORD **)a3,
        *(_QWORD *)(a1 + 16) = v10 + 1,
        *v10 = v9.m128i_i64[0],
        !v11) )
  {
    v41 = a1 + 40;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 8);
    v28 = *(_DWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 32) = v28;
    *(_QWORD *)a1 = &off_1C68120;
    *(_QWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 56) = 0;
    *(_OWORD *)(a1 + 64) = 0;
LABEL_23:
    v29 = 1;
    return sub_186B510(v41, v29, 0);
  }
  v12 = 8LL * *((unsigned int *)v11 - 1);
  if ( v12 <= 8 )
  {
    if ( v12 == 8 )
      v10[1] = *v11;
  }
  else
  {
    memmove(v10 + 1, v11, v12);
  }
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 8);
  v13 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 32) = v13;
  *(_QWORD *)a1 = &off_1C68120;
  v41 = a1 + 40;
  v14 = *((_DWORD *)v11 - 1);
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = v14;
  *(_OWORD *)(a1 + 64) = 0;
  if ( !v14 )
    goto LABEL_23;
  v15 = 0;
  v16 = nullptr;
  v17 = 0;
  while ( 1 )
  {
    v18 = v11[v15];
    v19 = v18;
    if ( v18 > 0xFFFFFFFF || (v20 = v18 - 1, ((unsigned int)v18 & ((_DWORD)v18 - 1)) != 0) || !(_DWORD)v18 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v42, "bit-vector table is specialized to small domains that are powers of two");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v42);
      sub_233E40((__int64)v42);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v21 = *(_QWORD **)(a1 + 64);
    if ( !v21 )
    {
      v37 = (_QWORD *)sub_186B270(0x10u);
      v21 = v37 + 1;
      *v37 = 2;
      v16 = *(_QWORD **)(a1 + 72);
      *(_QWORD *)(a1 + 64) = v37 + 1;
      v23 = (unsigned int *)(v37 + 1);
LABEL_13:
      *v23 = v17;
      ++*((_DWORD *)v21 - 1);
      if ( v16 )
        goto LABEL_14;
      goto LABEL_31;
    }
    v22 = *((unsigned int *)v21 - 1);
    if ( (_DWORD)v22 != *((_DWORD *)v21 - 2) )
    {
      v23 = (unsigned int *)v21 + v22;
      goto LABEL_13;
    }
    v33 = (unsigned int)(3 * v22 + 1) >> 1;
    v34 = 4 * v33 + 8;
    if ( 4 * (int)v22 + 8 >= (unsigned int)v34 || (unsigned int)v22 >= v33 )
    {
      v5 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v42, "Overflow encountered when expanding vector");
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, v42);
      sub_233E40((__int64)v42);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v40 = (unsigned int)(3 * v22 + 1) >> 1;
    v35 = (unsigned int *)sub_186B300(v21 - 1, v34);
    v16 = *(_QWORD **)(a1 + 72);
    *(_QWORD *)(a1 + 64) = v35 + 2;
    *v35 = v40;
    v35[v35[1]++ + 2] = v17;
    if ( v16 )
    {
LABEL_14:
      v24 = *((unsigned int *)v16 - 1);
      if ( (_DWORD)v24 == *((_DWORD *)v16 - 2) )
      {
        v30 = (unsigned int)(3 * v24 + 1) >> 1;
        v31 = 4 * v30 + 8;
        if ( 4 * (int)v24 + 8 >= (unsigned int)v31 || (unsigned int)v24 >= v30 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v42, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v42);
          sub_233E40((__int64)v42);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v39 = (unsigned int)(3 * v24 + 1) >> 1;
        v32 = (unsigned int *)sub_186B300(v16 - 1, v31);
        v16 = v32 + 2;
        *(_QWORD *)(a1 + 72) = v32 + 2;
        *v32 = v39;
        v25 = &v32[v32[1] + 2];
      }
      else
      {
        v25 = (unsigned int *)v16 + v24;
      }
      goto LABEL_16;
    }
LABEL_31:
    v36 = (_QWORD *)sub_186B270(0x10u);
    v16 = v36 + 1;
    *v36 = 2;
    *(_QWORD *)(a1 + 72) = v36 + 1;
    v25 = (unsigned int *)(v36 + 1);
LABEL_16:
    *v25 = v20;
    v26 = 1;
    result = 1;
    ++*((_DWORD *)v16 - 1);
    while ( (v26 & v19) == 0 )
    {
      result = (unsigned int)(result + 1);
      v26 *= 2;
      if ( (_DWORD)result == 32 )
        goto LABEL_37;
    }
    v17 += result;
    if ( v17 > 0x1F )
    {
LABEL_37:
      v38 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v42, "bit-vector table is specialized to small domains that are powers of two");
      *v38 = (char *)off_1C63128;
      sub_2333C0(v38 + 1, v42);
      sub_233E40((__int64)v42);
      __cxa_throw(v38, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    if ( (unsigned int)++v15 >= *(_DWORD *)(a1 + 56) )
      break;
    v11 = *(_QWORD **)a3;
  }
  v29 = (unsigned int)(1 << v17);
  if ( *(_DWORD *)(a1 + 40) < (unsigned int)v29 )
    return sub_186B510(v41, v29, 0);
  return result;
}

