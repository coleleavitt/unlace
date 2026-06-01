__m128i *__fastcall sub_87AA10(int a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, int a6)
{
  char **exception; // r12
  int v7; // r8d
  __int64 v8; // r12
  __int64 v10; // rax
  __int64 *v11; // r13
  __int64 *v12; // r15
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned int v19; // edx
  size_t v20; // rsi
  unsigned int *v21; // rax
  unsigned __int64 v22; // rbx
  int v23; // edx
  __int64 v24; // rax
  _QWORD *v26; // rax
  int v27; // [rsp+0h] [rbp-98h]
  int v28; // [rsp+8h] [rbp-90h]
  unsigned int v29; // [rsp+Ch] [rbp-8Ch]
  __m128i *v30; // [rsp+10h] [rbp-88h]
  int v32; // [rsp+20h] [rbp-78h]
  char v33; // [rsp+28h] [rbp-70h]
  __m128i v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = (_DWORD)a3 + 176;
  v8 = a2;
  v10 = 2LL * a3[38];
  v11 = (__int64 *)&a3[v10 + 44];
  if ( v10 * 4 )
  {
    v12 = (__int64 *)(a3 + 44);
    while ( 1 )
    {
      sub_87A220(&v34, v8, *v12);
      v16 = *(_QWORD **)(a4 + 8);
      v17 = v34.m128i_i64[0];
      if ( !v16 )
        break;
      v18 = *((_DWORD *)v16 - 1);
      if ( v18 == *((_DWORD *)v16 - 2) )
      {
        v19 = (3 * v18 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v20 || v18 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (3 * v18 + 1) >> 1;
        v21 = (unsigned int *)sub_186B300(v16 - 1, v20);
        v16 = v21 + 2;
        ++v12;
        *(_QWORD *)(a4 + 8) = v21 + 2;
        *v21 = v29;
        LODWORD(v21) = v21[1];
        v16[(unsigned int)v21] = v17;
        *((_DWORD *)v16 - 1) = (_DWORD)v21 + 1;
        if ( v11 == v12 )
        {
LABEL_10:
          LODWORD(a2) = 0;
          v22 = *(_QWORD *)(v8 + 72);
          if ( !*(_WORD *)(*(_QWORD *)a3 + 4LL) )
            a2 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
          goto LABEL_12;
        }
      }
      else
      {
        v13 = v18;
        v14 = v18 + 1;
        v15 = &v16[v13];
LABEL_4:
        ++v12;
        *v15 = v17;
        *((_DWORD *)v16 - 1) = v14;
        if ( v11 == v12 )
          goto LABEL_10;
      }
    }
    v26 = (_QWORD *)sub_186B270(0x18u);
    v16 = v26 + 1;
    *v26 = 2;
    v14 = 1;
    *(_QWORD *)(a4 + 8) = v16;
    v15 = v16;
    goto LABEL_4;
  }
  v22 = *(_QWORD *)(a2 + 72);
  LODWORD(a2) = 0;
  v16 = *(_QWORD **)(a4 + 8);
  if ( !*(_WORD *)(*(_QWORD *)a3 + 4LL) )
    a2 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
  v23 = 0;
  if ( v16 )
LABEL_12:
    v23 = *((_DWORD *)v16 - 1);
  v24 = sub_15DC610(
          v22,
          a2,
          v23,
          (int)v16,
          v7,
          a6,
          v27,
          v28,
          a1,
          (int)a3,
          v32,
          v33,
          v34.m128i_i32[0],
          v34.m128i_i32[2],
          v35[0],
          (void *)v35[1]);
  *v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)v22);
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  sub_14B9B80(*(_QWORD *)(v8 + 80) + 2192LL, v30);
  return v30;
}

