__int64 __fastcall sub_20CE2F0(__int64 a1, void *a2, unsigned __int64 a3, __int64 a4)
{
  size_t v6; // rbx
  int v7; // eax
  size_t v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r14
  __int64 result; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  _QWORD *v17; // r13
  unsigned int v18; // eax
  char *v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-170h]
  unsigned int v21; // [rsp+8h] [rbp-170h]
  __int64 *v22; // [rsp+18h] [rbp-160h] BYREF
  void *ptr; // [rsp+20h] [rbp-158h] BYREF
  __m128i si128; // [rsp+28h] [rbp-150h]
  _BYTE v25[320]; // [rsp+38h] [rbp-140h] BYREF

  v6 = a3;
  v7 = *(_DWORD *)(a1 + 24);
  if ( v7 >= 0 )
  {
    v8 = v7;
    if ( v7 < a3 )
    {
      v6 = 1;
      if ( v7 > 1 )
      {
        if ( a3 <= v7 )
          v8 = a3;
        v6 = v8;
      }
    }
  }
  ptr = a2;
  si128.m128i_i64[0] = v6;
  v9 = sub_2244B30(a2, v6);
  v10 = (unsigned int)sub_2244CB0(a1, a2, v6, v9);
  v13 = (__int64 *)(*(_QWORD *)a1 + 8 * v10);
  if ( *v13 )
  {
    if ( *v13 != -8 )
    {
      sub_20CDE30(&v22, v13, 0);
      ptr = v25;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      if ( v6 > 0x100 )
      {
        sub_2236E10(&ptr, v25, v6, 1);
        v19 = (char *)ptr + si128.m128i_i64[0];
      }
      else
      {
        if ( !v6 )
          goto LABEL_7;
        v19 = v25;
      }
      memcpy(v19, a2, v6);
      v6 += si128.m128i_i64[0];
LABEL_7:
      si128.m128i_i64[0] = v6;
      result = sub_20CDE70(a1, a4, (__int64 **)&ptr);
      if ( ptr != v25 )
      {
        v20 = result;
        free(ptr);
        return v20;
      }
      return result;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v21 = v10;
  v15 = sub_22300B0(v6 + 17, 8, v10, v10, v11, v12);
  v16 = v21;
  v17 = (_QWORD *)v15;
  if ( v6 )
  {
    memcpy((void *)(v15 + 16), a2, v6);
    v16 = v21;
  }
  *((_BYTE *)v17 + v6 + 16) = 0;
  *v17 = v6;
  v17[1] = a4;
  *v13 = (__int64)v17;
  ++*(_DWORD *)(a1 + 12);
  v18 = sub_22450D0(a1, v16);
  sub_20CDE30(&v22, (__int64 *)(*(_QWORD *)a1 + 8LL * v18), 0);
  return *v22;
}
