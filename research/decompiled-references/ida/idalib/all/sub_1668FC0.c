void __fastcall sub_1668FC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdx
  __m128i si128; // xmm0
  _QWORD *i; // rbp
  const void *v6; // r13
  size_t v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r15d
  __int64 *v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  _QWORD *v18; // [rsp+8h] [rbp-60h]
  _QWORD *v19; // [rsp+18h] [rbp-50h]
  __int64 *v20[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = 2 * a3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  *(_QWORD *)a1 = 0;
  v18 = &a2[v3];
  *(__m128i *)(a1 + 8) = si128;
  if ( a2 != &a2[v3] )
  {
    for ( i = a2; v18 != i; i += 2 )
    {
      while ( 1 )
      {
        v6 = (const void *)*i;
        v7 = i[1];
        v8 = sub_2244B30(*i, v7);
        v9 = sub_2244CB0(a1, v6, v7, v8);
        v13 = v9;
        v14 = (__int64 *)(*(_QWORD *)a1 + 8LL * v9);
        if ( *v14 )
          break;
LABEL_7:
        v15 = sub_22300B0(v7 + 9, 8, v9, v10, v11, v12);
        v16 = (_QWORD *)v15;
        if ( v7 )
        {
          v19 = (_QWORD *)v15;
          memcpy((void *)(v15 + 8), v6, v7);
          v16 = v19;
        }
        *((_BYTE *)v16 + v7 + 8) = 0;
        i += 2;
        *v16 = v7;
        *v14 = (__int64)v16;
        ++*(_DWORD *)(a1 + 12);
        v17 = sub_22450D0(a1, v13);
        sub_A45C10(v20, (__int64 *)(*(_QWORD *)a1 + 8LL * v17), 0);
        if ( v18 == i )
          return;
      }
      if ( *v14 == -8 )
      {
        --*(_DWORD *)(a1 + 16);
        goto LABEL_7;
      }
      sub_A45C10(v20, v14, 0);
    }
  }
}
