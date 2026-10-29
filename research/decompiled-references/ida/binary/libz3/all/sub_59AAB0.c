__int64 __fastcall sub_59AAB0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  char **exception; // r12
  char *v7; // rbp
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  __int64 v10; // r14
  __int64 i; // rbx
  _QWORD *v12; // rdx
  _QWORD *v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, __int64, unsigned int); // r8
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // r9
  unsigned int v24; // r9d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  unsigned int v31; // [rsp+1Ch] [rbp-7Ch]
  char *v32; // [rsp+30h] [rbp-68h] BYREF
  _DWORD *v33; // [rsp+38h] [rbp-60h] BYREF
  __int64 v34[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = (char *)*a3;
  if ( *a3 )
  {
    v8 = *((_DWORD *)v7 - 1);
    v7 = nullptr;
    if ( v8 )
    {
      v28 = (_QWORD *)sub_186B270(v8 + 8LL);
      v7 = (char *)(v28 + 1);
      *v28 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v8), 224).m128i_u64[0];
      memset(v28 + 1, 0, v8);
    }
  }
  v32 = v7;
  sub_5971E0(a1, a3, a4, &v32);
  v33 = nullptr;
  if ( *a3 )
  {
    v9 = *(_DWORD *)(*a3 - 4);
    if ( v9 )
    {
      v10 = v9;
      for ( i = 0; i != v10; ++i )
      {
        while ( !v7[i] )
        {
          if ( ++i == v10 )
            goto LABEL_13;
        }
        v12 = v33;
        v13 = (_QWORD *)(*a3 + 8 * i);
        if ( v33 )
        {
          v14 = *(v33 - 1);
          if ( v14 == *(v33 - 2) )
          {
            v24 = (3 * v14 + 1) >> 1;
            v25 = 8 * v24 + 8;
            if ( 8 * v14 + 8 >= (unsigned int)v25 || v14 >= v24 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v34, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v34);
              sub_233E40((__int64)v34);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v31 = (3 * v14 + 1) >> 1;
            v26 = (unsigned int *)sub_186B300(v33 - 2, v25);
            v27 = v26[1];
            v12 = v26 + 2;
            v33 = v26 + 2;
            *v26 = v31;
            LODWORD(v26) = v27;
            v17 = &v12[v27];
            v16 = (_DWORD)v26 + 1;
          }
          else
          {
            v15 = v14;
            v16 = v14 + 1;
            v17 = &v33[2 * v15];
          }
        }
        else
        {
          v29 = (_QWORD *)sub_186B270(0x18u);
          v12 = v29 + 1;
          *v29 = 2;
          v16 = 1;
          v33 = v12;
          v17 = v12;
        }
        *v17 = *v13;
        *((_DWORD *)v12 - 1) = v16;
      }
    }
  }
LABEL_13:
  v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*(_QWORD *)a4 + 72LL);
  if ( v18 == sub_4EA4F0 )
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD **))(*(_QWORD *)a4 + 64LL))(a4, a2, &v33);
  else
    v19 = v18(a4, a2, (__int64)&v33, 0xFFFFFFFF);
  v20 = v19;
  v21 = sub_186B270(0x48u);
  sub_59A080(v21, a1, a3, v7, v20, v22);
  if ( v33 )
    sub_186B220(v33 - 2);
  if ( v7 )
    sub_186B220(v7 - 8);
  return v21;
}

