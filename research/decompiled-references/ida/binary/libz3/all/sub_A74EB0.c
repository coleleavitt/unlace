__int64 __fastcall sub_A74EB0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbp
  char **v4; // rbp
  __int64 result; // rax
  unsigned int *v8; // r14
  unsigned int *i; // r12
  int v10; // ebx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // edx
  _QWORD *v14; // rsi
  const __m128i *v15; // rbx
  unsigned int v16; // r9d
  int v17; // edx
  unsigned int v18; // r15d
  size_t v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  _DWORD *v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // r15d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _DWORD *v32; // [rsp+8h] [rbp-60h]
  char *v33[11]; // [rsp+10h] [rbp-58h] BYREF

  result = sub_1005490(a1[63], a2);
  v8 = *(unsigned int **)result;
  if ( *(_QWORD *)result )
  {
    result = *(v8 - 1);
    for ( i = &v8[result]; i != v8; *((_DWORD *)v14 - 1) = v17 )
    {
      while ( 1 )
      {
        result = *v8;
        if ( (_DWORD)result != -1 )
          break;
LABEL_10:
        if ( i == ++v8 )
          return result;
      }
      v13 = *(_DWORD *)(a1[18] + 4 * result);
      if ( v13 != 1 )
      {
        if ( v13 != 2 )
        {
          if ( v13 )
          {
            sub_1872CE0("");
            sub_1873130(114, 3437);
          }
          v10 = *(_DWORD *)(a1[19] + 4 * result);
          v11 = (_QWORD *)*a3;
          if ( *a3 )
          {
            v12 = *((unsigned int *)v11 - 1);
            if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
            {
              v26 = (unsigned int)(3 * v12 + 1) >> 1;
              v27 = 4 * v26 + 8;
              if ( 4 * (int)v12 + 8 >= (unsigned int)v27 || (unsigned int)v12 >= v26 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_137C7A(v33);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v33);
                sub_233E40((__int64)v33);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v28 = (unsigned int *)sub_186B300(v11 - 1, v27);
              v11 = v28 + 2;
              *v28 = v26;
              v29 = v28[1];
              *a3 = v11;
              result = (__int64)v11 + 4 * v29;
            }
            else
            {
              result = (__int64)v11 + 4 * v12;
            }
          }
          else
          {
            v30 = (_QWORD *)sub_186B270(0x10u);
            v11 = v30 + 1;
            *v30 = 2;
            *a3 = v30 + 1;
            result = (__int64)(v30 + 1);
          }
          *(_DWORD *)result = v10;
          ++*((_DWORD *)v11 - 1);
        }
        goto LABEL_10;
      }
      v14 = (_QWORD *)a1[107];
      v15 = (const __m128i *)(a1[20] + 16 * result);
      if ( v14 )
      {
        v16 = *((_DWORD *)v14 - 1);
        if ( v16 == *((_DWORD *)v14 - 2) )
        {
          v18 = (3 * v16 + 1) >> 1;
          v19 = 16 * v18 + 8;
          if ( 16 * v16 + 8 >= (unsigned int)v19 || v16 >= v18 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_137C7A(v33);
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v33);
            sub_233E40((__int64)v33);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = sub_186B270(v19);
          v21 = a1[107];
          v17 = 1;
          v22 = (_DWORD *)v20;
          v14 = (_QWORD *)(v20 + 8);
          if ( v21 )
          {
            v23 = *(unsigned int *)(v21 - 4);
            *(_DWORD *)(v20 + 4) = v23;
            v24 = 0;
            v25 = 16 * v23;
            if ( v25 )
            {
              do
              {
                *(__m128i *)&v22[v24 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v21 + v24));
                v24 += 16LL;
              }
              while ( v25 != v24 );
            }
            v32 = v22;
            sub_186B220((void *)(v21 - 8));
            v22 = v32;
            result = (__int64)&v14[2 * (unsigned int)v32[1]];
            v17 = v32[1] + 1;
          }
          else
          {
            *(_DWORD *)(v20 + 4) = 0;
            result = v20 + 8;
          }
          a1[107] = v14;
          *v22 = v18;
        }
        else
        {
          v17 = v16 + 1;
          result = (__int64)&v14[2 * v16];
        }
      }
      else
      {
        v31 = (_QWORD *)sub_186B270(0x28u);
        v17 = 1;
        v14 = v31 + 1;
        *v31 = 2;
        a1[107] = v31 + 1;
        result = (__int64)(v31 + 1);
      }
      ++v8;
      *(__m128i *)result = _mm_loadu_si128(v15);
    }
  }
  return result;
}

