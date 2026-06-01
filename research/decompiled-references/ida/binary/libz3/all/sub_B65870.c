__int64 __fastcall sub_B65870(__int64 a1, unsigned int *a2, char a3, _QWORD *a4, _BYTE *a5)
{
  char **exception; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 result; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  unsigned int v19; // ebp
  size_t v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rdi
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // [rsp+8h] [rbp-60h]
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = (__int64 *)(a1 + 9512);
  v8 = (__int64 *)(a1 + 9520);
  if ( a3 )
    v8 = v7;
  result = *v8;
  if ( !*v8 || (v13 = *a2, (unsigned int)v13 >= *(_DWORD *)(result - 4)) )
  {
    v14 = (_QWORD *)*a4;
    if ( *a4 )
      goto LABEL_6;
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(result + v13) )
  {
    v14 = (_QWORD *)*a4;
    if ( *a4 )
    {
LABEL_6:
      v15 = *((_DWORD *)v14 - 1);
      if ( v15 == *((_DWORD *)v14 - 2) )
      {
        v19 = (3 * v15 + 1) >> 1;
        v20 = 16 * v19 + 8;
        if ( 16 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(v28, "Overflow encountered when expanding vector", v6);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = sub_186B270(v20);
        v22 = (_QWORD *)*a4;
        v23 = (_DWORD *)v21;
        v14 = (_QWORD *)(v21 + 8);
        if ( *a4 )
        {
          v24 = *((unsigned int *)v22 - 1);
          *(_DWORD *)(v21 + 4) = v24;
          v25 = 0;
          v26 = 16 * v24;
          if ( v26 )
          {
            do
            {
              *(__m128i *)&v23[v25 / 4 + 2] = _mm_loadu_si128((const __m128i *)&v22[v25 / 8]);
              v25 += 16LL;
            }
            while ( v26 != v25 );
          }
          v27 = v23;
          sub_186B220(v22 - 1);
          v23 = v27;
          v17 = (__int64)&v14[2 * (unsigned int)v27[1]];
          result = (unsigned int)(v27[1] + 1);
        }
        else
        {
          *(_DWORD *)(v21 + 4) = 0;
          v17 = v21 + 8;
          result = 1;
        }
        *a4 = v14;
        *v23 = v19;
      }
      else
      {
        v16 = v15;
        result = v15 + 1;
        v17 = (__int64)&v14[2 * v16];
      }
      goto LABEL_8;
    }
LABEL_12:
    v18 = (_QWORD *)sub_186B270(0x28u);
    v14 = v18 + 1;
    *v18 = 2;
    result = 1;
    *a4 = v14;
    v17 = (__int64)v14;
LABEL_8:
    *(_QWORD *)v17 = a2;
    *(_BYTE *)(v17 + 8) = a3;
    *((_DWORD *)v14 - 1) = result;
    *a5 = 0;
  }
  return result;
}

