__int64 __fastcall sub_BAFC40(unsigned int *a1, unsigned int *a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdx
  __int64 v14; // rax
  unsigned int *v15; // rbx
  unsigned int *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i *v21; // rbx
  unsigned int v22; // eax
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  _QWORD *v24; // rdi
  unsigned int v25; // r12d
  __m128i **v26; // rdx
  int v27; // eax
  unsigned int v28; // r13d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  char **exception; // rbx
  __int64 v34; // [rsp+0h] [rbp-58h]
  int v35; // [rsp+8h] [rbp-50h]
  __int64 v36[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = sub_15D1F10(a2);
  v8 = sub_1625010(a1 + 14);
  v12 = *(_DWORD **)(v7 + 24);
  if ( !v12 || v8 != *v12 || v12[1] != 1 )
    return 0;
  v14 = a2[6];
  v15 = a2;
  v16 = &a2[2 * v14];
  if ( (_DWORD)v14 )
  {
    do
    {
      v17 = *((_QWORD *)v15 + 4);
      v15 += 2;
      sub_B6F780(
        *((_QWORD **)a1 + 2),
        v17,
        0,
        a3,
        a4,
        a5,
        v9,
        v10,
        v11,
        v34,
        v35,
        v36[0],
        v36[1],
        v36[2],
        v36[3],
        v36[4]);
    }
    while ( v16 != v15 );
  }
  v18 = *((_QWORD *)a1 + 2);
  v19 = *(_QWORD *)(v18 + 8656);
  if ( !v19 || (v20 = *a2, (unsigned int)v20 >= *(_DWORD *)(v19 - 4)) || (v21 = *(__m128i **)(v19 + 8 * v20)) == nullptr )
    v21 = sub_B68280(v18, a2, 0, 0, 1u, *(double *)a3.m128_u64, *(double *)a4.m128_u64, a5);
  v22 = sub_B39350((__int64)v21, a1[2]);
  if ( v22 != -1 && v21 == *(__m128i **)(*((_QWORD *)a1 + 4) + 8LL * v22) )
    return 0;
  v23 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
  if ( v23 == sub_902EE0 )
  {
    v24 = *((_QWORD **)a1 + 4);
    if ( v24 )
    {
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v28 = (3 * v25 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v29 || v25 >= v28 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (unsigned int *)sub_186B300(v24 - 1, v29);
        v31 = v30[1];
        v24 = v30 + 2;
        *v30 = v28;
        *((_QWORD *)a1 + 4) = v30 + 2;
        LODWORD(v30) = v31;
        v26 = (__m128i **)&v24[v31];
        v27 = (_DWORD)v30 + 1;
      }
      else
      {
        v26 = (__m128i **)&v24[v25];
        v27 = v25 + 1;
      }
    }
    else
    {
      v25 = 0;
      v32 = (_QWORD *)sub_186B270(0x18u);
      v24 = v32 + 1;
      *v32 = 2;
      v27 = 1;
      *((_QWORD *)a1 + 4) = v24;
      v26 = (__m128i **)v24;
    }
    *v26 = v21;
    *((_DWORD *)v24 - 1) = v27;
  }
  else
  {
    v25 = v23((__int64)a1, (__int64)v21);
  }
  sub_B66EF0(*((_QWORD **)a1 + 2), (__int64)v21, a1, v25);
  return 1;
}

