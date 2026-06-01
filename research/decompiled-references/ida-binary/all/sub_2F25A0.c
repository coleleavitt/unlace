__int64 __fastcall sub_2F25A0(char *a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char *v7; // rbx
  char *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 result; // rax
  char *v13; // rax
  struct _Unwind_Exception *v14; // rbp

  v7 = a1;
  *(_QWORD *)a1 = &stru_86F6A0;
  *((_QWORD *)a1 + 1) = 0x2080431000004LL;
  *((_OWORD *)a1 + 1) = -1;
  v8 = a1 + 80;
  v9 = _mm_loadl_epi64((const __m128i *)&off_862990);
  *((_QWORD *)a1 + 4) = 0;
  *((_QWORD *)a1 + 5) = a2;
  *((_DWORD *)a1 + 12) = 7;
  *((_DWORD *)a1 + 18) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&off_862940);
  do
  {
    *(_QWORD *)v8 = 0;
    v8 += 24;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( a1 + 176 != v8 );
  *((_DWORD *)a1 + 44) = 0;
  v10 = *((unsigned int *)a1 + 3);
  if ( ((*((_DWORD *)a1 + 3) >> 19) & 0x3F) != 0 )
  {
    if ( a1[11] != -1 )
    {
      if ( !under_debugger )
      {
        v14 = (struct _Unwind_Exception *)interr(3449, a2, v10, ((*((_DWORD *)a1 + 3) >> 19) & 0x3Fu) - 1, 0.0);
        v4 = *((_QWORD *)a1 + 26);
        if ( v4 )
        {
          *((_QWORD *)v7 + 27) = 0;
          qfree(v4, a2);
        }
        sub_2F24B0((__int64 *)v7 + 23, a2);
        *(_QWORD *)v7 = &unk_870D58;
        sub_1AB100(v7, a2);
        _Unwind_Resume(v14);
      }
      BUG();
    }
    v10 = (unsigned int)v10 & 0xFE07FFFF;
    a1[11] = ((*((_DWORD *)a1 + 3) >> 19) & 0x3F) - 1;
    *((_DWORD *)a1 + 3) = v10;
  }
  *((_QWORD *)a1 + 23) = 0;
  *((_QWORD *)a1 + 26) = 0;
  *((_OWORD *)a1 + 12) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  v11 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)a1 = apply_md_chooser_t___vtable;
  if ( v11 )
  {
    v13 = (char *)qalloc_or_throw(8 * v11);
    *((_QWORD *)a1 + 26) = v13;
    a2 = *(const char **)a3;
    a1 = v13;
    *((_QWORD *)v7 + 28) = v11;
    memcpy(v13, a2, 8 * v11);
    *((_QWORD *)v7 + 27) = v11;
  }
  *((_QWORD *)v7 + 29) = a4;
  result = *(unsigned int *)(get_eah(a1, a2, v10) + 24);
  *((_DWORD *)v7 + 60) = result;
  return result;
}
