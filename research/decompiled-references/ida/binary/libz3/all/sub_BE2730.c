__int64 __fastcall sub_BE2730(__int64 a1, _DWORD **a2, _DWORD **a3)
{
  char **exception; // rbx
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rdx
  unsigned int v14; // r13d
  size_t v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  _DWORD *v18; // r15
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v24[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a3;
  v6 = a2;
  if ( **a3 >= **a2 )
  {
    v5 = a2;
    v6 = a3;
  }
  v7 = *(_QWORD *)(a1 + 16);
  v23[0] = v5;
  v23[1] = v6;
  if ( !sub_B70A50((__int64 *)(v7 + 8440), a1, 0, 2u, v23, 0)
    || (unsigned __int8)sub_BDDF10(a1, (__int64)v5, (__int64)v6) )
  {
    return 0;
  }
  v9 = *(_QWORD **)(a1 + 88);
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v14 = (3 * v10 + 1) >> 1;
      v15 = 16 * v14 + 8;
      if ( 16 * v10 + 8 >= (unsigned int)v15 || v10 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v24, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v24);
        sub_233E40((__int64)v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = sub_186B270(v15);
      v17 = *(_QWORD *)(a1 + 88);
      v18 = (_DWORD *)v16;
      v9 = (_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v19 = *(unsigned int *)(v17 - 4);
        *(_DWORD *)(v16 + 4) = v19;
        v20 = 0;
        v21 = 16 * v19;
        if ( v21 )
        {
          do
          {
            *(__m128i *)&v18[v20 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v17 + v20));
            v20 += 16LL;
          }
          while ( v21 != v20 );
        }
        sub_186B220((void *)(v17 - 8));
        v13 = &v9[2 * (unsigned int)v18[1]];
        v12 = v18[1] + 1;
      }
      else
      {
        *(_DWORD *)(v16 + 4) = 0;
        v13 = (_QWORD *)(v16 + 8);
        v12 = 1;
      }
      *(_QWORD *)(a1 + 88) = v9;
      *v18 = v14;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v9[2 * v11];
    }
  }
  else
  {
    v22 = (_QWORD *)sub_186B270(0x28u);
    v9 = v22 + 1;
    *v22 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 88) = v9;
    v13 = v9;
  }
  *v13 = v5;
  v13[1] = v6;
  *((_DWORD *)v9 - 1) = v12;
  return 1;
}

