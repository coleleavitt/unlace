__int64 __fastcall sub_880D40(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v6; // rdi
  __int64 result; // rax
  _QWORD *v10; // rbp
  unsigned int v11; // eax
  unsigned int v12; // edx
  _QWORD *v13; // rdx
  __int64 v14; // rdi
  __int64 (*v15)(void); // rax
  __int64 v16; // rdi
  __m128i v17; // xmm0
  int v18; // edx
  __int64 v19; // rax
  int v20; // edx
  _QWORD *v21; // rax
  unsigned int v22; // r14d
  size_t v23; // rdi
  __int64 v24; // rax
  _BYTE *v25; // rdi
  _DWORD *v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rdx
  _BYTE *v29; // rsi
  _BYTE *i; // rax
  char v31; // cl
  _QWORD *v32; // rax
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 80);
  result = *(_QWORD *)(v6 + 24);
  if ( !result )
    return result;
  if ( !*(_BYTE *)(result + 352) )
    return 0;
  sub_7A4170(v6);
  sub_87F730((_DWORD *)(a1 + 960), *(_QWORD *)(a1 + 80), 3);
  sub_880690(a1, a2);
  v10 = *(_QWORD **)(a1 + 968);
  if ( !v10 )
  {
    v32 = (_QWORD *)sub_186B270(0x38u);
    v20 = 1;
    v10 = v32 + 1;
    *v32 = 2;
    *(_QWORD *)(a1 + 968) = v32 + 1;
    v21 = v32 + 1;
LABEL_13:
    *(_BYTE *)v21 = 0;
    v21[1] = a4;
    v21[2] = a3;
    *((_DWORD *)v10 - 1) = v20;
    v11 = *(_DWORD *)(a1 + 992);
    goto LABEL_8;
  }
  v11 = *(_DWORD *)(a1 + 992);
  v12 = *((_DWORD *)v10 - 1);
  if ( v11 >= v12 )
  {
    if ( v12 == *((_DWORD *)v10 - 2) )
    {
      v22 = (3 * v12 + 1) >> 1;
      v23 = 8 * (v22 + ((3 * v12 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v12 + 8 >= (unsigned int)v23 || v12 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v33, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = sub_186B270(v23);
      v25 = *(_BYTE **)(a1 + 968);
      v26 = (_DWORD *)v24;
      v10 = (_QWORD *)(v24 + 8);
      if ( v25 )
      {
        v27 = *((unsigned int *)v25 - 1);
        v28 = v10;
        v26[1] = v27;
        v29 = &v25[24 * v27];
        for ( i = v25; v29 != i; *(v28 - 1) = *((_QWORD *)i - 1) )
        {
          v31 = *i;
          i += 24;
          v28 += 3;
          *((_BYTE *)v28 - 24) = v31;
          *(v28 - 2) = *((_QWORD *)i - 2);
        }
        sub_186B220(v25 - 8);
        v21 = &v10[3 * (unsigned int)v26[1]];
        v20 = v26[1] + 1;
      }
      else
      {
        *(_DWORD *)(v24 + 4) = 0;
        v20 = 1;
        v21 = (_QWORD *)(v24 + 8);
      }
      *(_QWORD *)(a1 + 968) = v10;
      *v26 = v22;
    }
    else
    {
      v19 = v12;
      v20 = v12 + 1;
      v21 = &v10[3 * v19];
    }
    goto LABEL_13;
  }
  v13 = &v10[3 * v11];
  v13[2] = a3;
  v13[1] = a4;
  *(_BYTE *)v13 = 0;
LABEL_8:
  v14 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 992) = v11 + 1;
  v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 432LL);
  if ( (char *)v15 == (char *)sub_79EFF0 )
    v16 = v14 + 2144;
  else
    v16 = v15();
  result = sub_180C100(v16, 32);
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 980));
  v18 = *(_DWORD *)(a1 + 976);
  *(_QWORD *)result = off_1C55958;
  *(_DWORD *)(result + 8) = v18;
  *(__m128i *)(result + 12) = v17;
  return result;
}

