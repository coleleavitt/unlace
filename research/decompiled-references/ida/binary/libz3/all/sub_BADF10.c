void __fastcall sub_BADF10(__int64 a1, unsigned int **a2, __m128 a3, __m128 a4, __m128 a5)
{
  unsigned int *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdx
  __int64 v13; // rax
  unsigned int *v14; // rbx
  unsigned int *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i *v20; // rbx
  unsigned int v21; // eax
  __int64 (__fastcall *v22)(__int64, __int64); // rax
  _QWORD *v23; // rdi
  unsigned int v24; // r12d
  __m128i **v25; // rdx
  int v26; // eax
  unsigned int v27; // r13d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  char **exception; // rbx
  __int64 v33; // [rsp+0h] [rbp-58h]
  int v34; // [rsp+8h] [rbp-50h]
  __int64 v35[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *a2;
  v7 = sub_15D1F10(*a2);
  v8 = sub_1625010(a1 + 56);
  v12 = *(_DWORD **)(v7 + 24);
  if ( v12 && v8 == *v12 && v12[1] == 1 )
  {
    v13 = v6[6];
    v14 = v6;
    v15 = &v6[2 * v13];
    if ( (_DWORD)v13 )
    {
      do
      {
        v16 = *((_QWORD *)v14 + 4);
        v14 += 2;
        sub_B6F780(
          *(_QWORD **)(a1 + 16),
          v16,
          0,
          a3,
          a4,
          a5,
          v9,
          v10,
          v11,
          v33,
          v34,
          v35[0],
          v35[1],
          v35[2],
          v35[3],
          v35[4]);
      }
      while ( v15 != v14 );
    }
    v17 = *(_QWORD *)(a1 + 16);
    v18 = *(_QWORD *)(v17 + 8656);
    if ( !v18
      || (v19 = *v6, (unsigned int)v19 >= *(_DWORD *)(v18 - 4))
      || (v20 = *(__m128i **)(v18 + 8 * v19)) == nullptr )
    {
      v20 = sub_B68280(v17, v6, 0, 0, 1u, *(double *)a3.m128_u64, *(double *)a4.m128_u64, a5);
    }
    v21 = sub_B39350((__int64)v20, *(_DWORD *)(a1 + 8));
    if ( v21 == -1 || v20 != *(__m128i **)(*(_QWORD *)(a1 + 32) + 8LL * v21) )
    {
      v22 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
      if ( v22 == sub_902EE0 )
      {
        v23 = *(_QWORD **)(a1 + 32);
        if ( v23 )
        {
          v24 = *((_DWORD *)v23 - 1);
          if ( v24 == *((_DWORD *)v23 - 2) )
          {
            v27 = (3 * v24 + 1) >> 1;
            v28 = 8 * v27 + 8;
            if ( 8 * v24 + 8 >= (unsigned int)v28 || v24 >= v27 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v35, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v35);
              sub_233E40((__int64)v35);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v29 = (unsigned int *)sub_186B300(v23 - 1, v28);
            v30 = v29[1];
            v23 = v29 + 2;
            *v29 = v27;
            *(_QWORD *)(a1 + 32) = v29 + 2;
            LODWORD(v29) = v30;
            v25 = (__m128i **)&v23[v30];
            v26 = (_DWORD)v29 + 1;
          }
          else
          {
            v25 = (__m128i **)&v23[v24];
            v26 = v24 + 1;
          }
        }
        else
        {
          v24 = 0;
          v31 = (_QWORD *)sub_186B270(0x18u);
          v23 = v31 + 1;
          *v31 = 2;
          v26 = 1;
          *(_QWORD *)(a1 + 32) = v23;
          v25 = (__m128i **)v23;
        }
        *v25 = v20;
        *((_DWORD *)v23 - 1) = v26;
      }
      else
      {
        v24 = v22(a1, (__int64)v20);
      }
      sub_B66EF0(*(_QWORD **)(a1 + 16), (__int64)v20, (unsigned int *)a1, v24);
    }
  }
}

