__int64 __fastcall sub_86D800(__int64 a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, const __m128i a8)
{
  char **exception; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rsi
  int v20; // eax
  __int64 *v21; // rsi
  unsigned __int64 v22; // r13
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 result; // rax
  __m128i v26; // xmm0
  int v27; // ebx
  int v28; // ebx
  unsigned int v29; // r9d
  size_t v30; // rsi
  unsigned int *v31; // rax
  unsigned int v32; // r9d
  __int64 v33; // rsi
  _QWORD *v34; // rax
  __m128i v35; // [rsp+0h] [rbp-88h] BYREF
  int v36; // [rsp+14h] [rbp-74h]
  int v37; // [rsp+18h] [rbp-70h]
  unsigned int v38; // [rsp+1Ch] [rbp-6Ch]
  __int64 v39[11]; // [rsp+30h] [rbp-58h] BYREF

  v12 = *(_QWORD *)(a1 + 624);
  v36 = a5;
  v37 = a6;
  if ( !v12 || a2 >= *(_DWORD *)(v12 - 4) || (v13 = *(_QWORD *)(v12 + 8LL * a2)) == 0 )
    v13 = sub_86D5A0(a1, a2);
  v14 = *(_QWORD *)(a1 + 80);
  v15 = (_QWORD *)sub_180C100(v14 + 2144, 16);
  v16 = *(_QWORD **)(v14 + 2128);
  v17 = (__int64)v15;
  *v15 = off_1C55688;
  v15[1] = v13;
  if ( v16 )
  {
    v18 = *((_DWORD *)v16 - 1);
    if ( v18 == *((_DWORD *)v16 - 2) )
    {
      v29 = (3 * v18 + 1) >> 1;
      v30 = 8 * v29 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v30 || v18 >= v29 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v39, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v39);
        sub_233E40((__int64)v39);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (3 * v18 + 1) >> 1;
      v35.m128i_i64[0] = v17;
      v31 = (unsigned int *)sub_186B300(v16 - 1, v30);
      v32 = v38;
      v17 = v35.m128i_i64[0];
      v33 = v31[1];
      v16 = v31 + 2;
      *(_QWORD *)(v14 + 2128) = v31 + 2;
      *v31 = v32;
      LODWORD(v31) = v33;
      v21 = &v16[v33];
      v20 = (_DWORD)v31 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v16[v19];
    }
  }
  else
  {
    v35.m128i_i64[0] = (__int64)v15;
    v34 = (_QWORD *)sub_186B270(0x18u);
    v17 = v35.m128i_i64[0];
    v16 = v34 + 1;
    *v34 = 2;
    v20 = 1;
    *(_QWORD *)(v14 + 2128) = v16;
    v21 = v16;
  }
  v22 = *(_QWORD *)(v13 + 8);
  *v21 = v17;
  v23 = _mm_loadl_epi64(&a8);
  *((_DWORD *)v16 - 1) = v20;
  v35 = _mm_unpacklo_epi64(v23, (__m128i)v22);
  v24 = sub_7E4EC0(a1);
  result = sub_180C100(v24, 48);
  v26 = _mm_load_si128(&v35);
  *(_DWORD *)result = a2;
  v27 = v36;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 12) = v27;
  v28 = v37;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 16) = v28;
  *(_DWORD *)(result + 20) = a7;
  *(_QWORD *)(result + 40) = 0;
  *(__m128i *)(result + 24) = v26;
  *(_QWORD *)(v13 + 8) = result;
  if ( v22 )
    *(_QWORD *)(v22 + 40) = result;
  return result;
}

