__int64 __fastcall sub_B156E0(__int64 *a1, int a2, unsigned int *a3)
{
  __int64 v4; // rdi
  unsigned __int128 si128; // xmm0
  unsigned int *v6; // r15
  __int64 v7; // rbx
  unsigned int *v8; // r14
  __int64 *v9; // rsi
  int v10; // ecx
  __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned __int128 v13; // kr00_16
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ebp
  _QWORD *v28; // rax
  char **exception; // r14
  unsigned __int128 v30; // [rsp+8h] [rbp-98h] BYREF
  __int64 v31; // [rsp+18h] [rbp-88h]
  unsigned int v32; // [rsp+24h] [rbp-7Ch]
  __int64 v33[2]; // [rsp+28h] [rbp-78h] BYREF
  unsigned __int128 v34; // [rsp+38h] [rbp-68h] BYREF
  __int64 v35[11]; // [rsp+48h] [rbp-58h] BYREF

  v4 = a1[1];
  v33[0] = v4;
  si128 = (unsigned __int128)_mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v4);
  if ( a2 )
  {
    v6 = a3;
    v7 = 0;
    v8 = &a3[a2];
    while ( 1 )
    {
      v11 = *a1;
      v12 = *v6;
      v34 = si128;
      sub_894B80(v11, v12, (__int64 *)&v34);
      si128 = (unsigned __int128)_mm_load_si128((const __m128i *)&v34);
      v13 = v34;
      v14 = si128;
      if ( (_QWORD)si128 )
        ++*(_DWORD *)(si128 + 8);
      if ( !v7 )
        break;
      v15 = *(_DWORD *)(v7 - 4);
      if ( v15 == *(_DWORD *)(v7 - 8) )
      {
        v16 = (3 * v15 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B035D0(v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (3 * v15 + 1) >> 1;
        v31 = si128;
        v30 = si128;
        v18 = (unsigned int *)sub_186B300((void *)(v7 - 8), v17);
        v7 = (__int64)(v18 + 2);
        v19 = v31;
        ++v6;
        si128 = (unsigned __int128)_mm_load_si128((const __m128i *)&v30);
        *v18 = v32;
        v20 = v18[1];
        *(_QWORD *)&v18[2 * v20 + 2] = v19;
        v18[1] = v20 + 1;
        if ( v8 == v6 )
        {
LABEL_12:
          v4 = a1[1];
          goto LABEL_13;
        }
      }
      else
      {
        v9 = (__int64 *)(v7 + 8LL * v15);
        v10 = v15 + 1;
LABEL_4:
        ++v6;
        *v9 = v14;
        *(_DWORD *)(v7 - 4) = v10;
        if ( v8 == v6 )
          goto LABEL_12;
      }
    }
    v31 = si128;
    v30 = si128;
    v28 = (_QWORD *)sub_186B270(0x18u);
    v7 = (__int64)(v28 + 1);
    v14 = v31;
    v10 = 1;
    *v28 = 2;
    si128 = (unsigned __int128)_mm_load_si128((const __m128i *)&v30);
    v9 = v28 + 1;
    goto LABEL_4;
  }
  v7 = 0;
  v13 = __PAIR128__(v4, 0);
LABEL_13:
  v21 = sub_15E1AF0(v4);
  v22 = (unsigned int *)v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  sub_B035B0(v13, *((__int64 *)&v13 + 1));
  v23 = *(_QWORD *)(*a1 + 8832);
  if ( !v23
    || (v24 = *v22, (unsigned int)v24 >= *(_DWORD *)(v23 - 4))
    || (v25 = *(_DWORD *)(v23 + 4 * v24), v25 == 0x7FFFFFFF) )
  {
    v25 = sub_B67520(*a1, v22);
  }
  v26 = 2 * v25;
  sub_B035B0((__int64)v22, *((__int64 *)&v13 + 1));
  v33[1] = v7;
  sub_2334C0(v33);
  return v26;
}

