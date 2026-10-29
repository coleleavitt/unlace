__int64 __fastcall sub_BE1440(__int64 a1, _DWORD **a2, _DWORD **a3)
{
  char **exception; // rbx
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  _QWORD *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  unsigned int v13; // r13d
  size_t v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v23[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a3;
  v6 = a2;
  if ( **a3 >= **a2 )
  {
    v5 = a2;
    v6 = a3;
  }
  v7 = *(_QWORD *)(a1 + 16);
  v22[0] = v5;
  v22[1] = v6;
  result = sub_B70A50((__int64 *)(v7 + 8440), a1, 1, 2u, v22, 0);
  if ( result )
  {
    v9 = *(_QWORD **)(a1 + 96);
    if ( v9 )
    {
      v10 = *((_DWORD *)v9 - 1);
      if ( v10 == *((_DWORD *)v9 - 2) )
      {
        v13 = (3 * v10 + 1) >> 1;
        v14 = 16 * v13 + 8;
        if ( 16 * v10 + 8 >= (unsigned int)v14 || v10 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v23, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v23);
          sub_233E40((__int64)v23);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = sub_186B270(v14);
        v16 = *(_QWORD *)(a1 + 96);
        v17 = (_DWORD *)v15;
        v9 = (_QWORD *)(v15 + 8);
        if ( v16 )
        {
          v18 = *(unsigned int *)(v16 - 4);
          *(_DWORD *)(v15 + 4) = v18;
          v19 = 0;
          v20 = 16 * v18;
          if ( v20 )
          {
            do
            {
              *(__m128i *)&v17[v19 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v16 + v19));
              v19 += 16LL;
            }
            while ( v20 != v19 );
          }
          sub_186B220((void *)(v16 - 8));
          v12 = &v9[2 * (unsigned int)v17[1]];
          result = (unsigned int)(v17[1] + 1);
        }
        else
        {
          *(_DWORD *)(v15 + 4) = 0;
          v12 = (_QWORD *)(v15 + 8);
          result = 1;
        }
        *(_QWORD *)(a1 + 96) = v9;
        *v17 = v13;
      }
      else
      {
        v11 = v10;
        result = v10 + 1;
        v12 = &v9[2 * v11];
      }
    }
    else
    {
      v21 = (_QWORD *)sub_186B270(0x28u);
      v9 = v21 + 1;
      *v21 = 2;
      result = 1;
      *(_QWORD *)(a1 + 96) = v9;
      v12 = v9;
    }
    *v12 = v5;
    v12[1] = v6;
    *((_DWORD *)v9 - 1) = result;
  }
  return result;
}

