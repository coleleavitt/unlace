__int64 __fastcall sub_7EB1F0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char **exception; // rbp
  __int64 v7; // rax
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r13d
  unsigned int v14; // eax
  unsigned int v15; // r14d
  __int64 v16; // rax
  unsigned int *v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // esi
  __int64 v20; // rdi
  __m128 *v21; // rcx
  unsigned int *v22; // rdx
  __int64 v23; // rdi
  unsigned int v24; // esi
  __int64 result; // rax
  unsigned int v26; // r15d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  __m128 *v30; // rax
  _QWORD *v31; // rax
  unsigned int *v32; // [rsp+8h] [rbp-60h] BYREF
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( a2 )
    ++*(_DWORD *)(a1 + 2360);
  else
    ++*(_DWORD *)(a1 + 2356);
  v7 = *(_QWORD *)(a4 + 48);
  v32 = nullptr;
  v8 = *(_DWORD *)(v7 + 36) ^ 1;
  v9 = sub_186B270(0x10u);
  v10 = *(_QWORD *)(a4 + 48);
  v11 = v9 + 8;
  *(_DWORD *)(v9 + 8) = v8;
  v32 = (unsigned int *)(v9 + 8);
  *(_QWORD *)v9 = 0x100000002LL;
  v12 = *(_QWORD *)(v10 + 8);
  if ( v12 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= *(_DWORD *)(v12 - 4) )
        break;
      v14 = sub_7EABE0(a1, v10, *(_DWORD *)(a4 + 28), *(__int64 ***)(a4 + 56), (__int64 *)(v12 + 40LL * v13));
      v11 = (__int64)v32;
      v15 = v14;
      if ( v32 )
      {
        v16 = *(v32 - 1);
        if ( (_DWORD)v16 == *(v32 - 2) )
        {
          v26 = (unsigned int)(3 * v16 + 1) >> 1;
          v27 = 4 * v26 + 8;
          if ( 4 * (int)v16 + 8 >= (unsigned int)v27 || (unsigned int)v16 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v33, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v33);
            sub_233E40((__int64)v33);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(v32 - 2, v27);
          v11 = (__int64)(v28 + 2);
          *v28 = v26;
          v29 = v28[1];
          v32 = (unsigned int *)v11;
          v17 = (unsigned int *)(v11 + 4 * v29);
        }
        else
        {
          v17 = &v32[v16];
        }
      }
      else
      {
        v31 = (_QWORD *)sub_186B270(0x10u);
        v11 = (__int64)(v31 + 1);
        *v31 = 2;
        v32 = (unsigned int *)(v31 + 1);
        v17 = (unsigned int *)(v31 + 1);
      }
      v10 = *(_QWORD *)(a4 + 48);
      *v17 = v15;
      ++v13;
      ++*(_DWORD *)(v11 - 4);
      v12 = *(_QWORD *)(v10 + 8);
    }
    while ( v12 );
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_DWORD *)(v11 - 4);
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 16);
    v19 = 1;
  }
  sub_7D4840(v18, v19, v11, a4 + 8);
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(__m128 **)(v20 + 24);
  if ( v21 )
  {
    if ( v21[22].m128_i8[0] )
    {
      sub_7A4170(v20);
      v30 = (__m128 *)sub_7D48B0(
                        *(_QWORD *)(a1 + 8),
                        (__int64 *)(a1 + 2608),
                        *(_DWORD *)(a4 + 28),
                        (__int64 *)&v32,
                        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 48) + 16LL) + 20LL),
                        *(_QWORD *)(a4 + 56));
      v22 = v32;
      v23 = *(_QWORD *)(a1 + 16);
      v21 = v30;
      if ( v32 )
        goto LABEL_15;
      goto LABEL_24;
    }
    v21 = nullptr;
  }
  v22 = v32;
  v23 = *(_QWORD *)(a1 + 16);
  if ( v32 )
  {
LABEL_15:
    v24 = *(v22 - 1);
    goto LABEL_16;
  }
LABEL_24:
  v24 = 0;
LABEL_16:
  result = sub_7E56B0(v23, v24, v22, v21, 0);
  if ( v32 )
    return sub_186B220(v32 - 2);
  return result;
}

