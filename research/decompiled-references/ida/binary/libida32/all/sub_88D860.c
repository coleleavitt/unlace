__int64 __fastcall sub_88D860(_QWORD *a1, __int64 a2, int **a3, __int64 a4)
{
  unsigned int v4; // r14d
  int *v8; // rax
  int v10; // edx
  __int64 v11; // rax
  _QWORD *v12; // r12
  int *v13; // rsi
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rbx
  char *v23; // rax
  void *v24; // rdi
  char *v26; // rsi
  __m128i si128; // xmm0
  __int64 v28; // rax
  int v29; // [rsp+Ch] [rbp-52Ch]
  void *ptr; // [rsp+10h] [rbp-528h] BYREF
  __int128 v31; // [rsp+18h] [rbp-520h]
  int v32; // [rsp+30h] [rbp-508h] BYREF
  __int16 v33; // [rsp+34h] [rbp-504h]
  __int64 v34; // [rsp+38h] [rbp-500h]
  __int64 v35; // [rsp+40h] [rbp-4F8h]
  int v36; // [rsp+50h] [rbp-4E8h]
  __int16 v37; // [rsp+54h] [rbp-4E4h]
  char s[1032]; // [rsp+F0h] [rbp-448h] BYREF
  unsigned __int64 v39; // [rsp+4F8h] [rbp-40h]

  v8 = *a3;
  v39 = __readfsqword(0x28u);
  v34 = 0;
  v35 = 0;
  v10 = *v8;
  LOWORD(v8) = *((_WORD *)v8 + 2);
  v36 = v10;
  v37 = (__int16)v8;
  v32 = v10;
  v33 = (__int16)v8;
  v11 = sub_889800((__int64)a1, (__int64)&v32);
  if ( v11 )
  {
    v12 = (_QWORD *)v11;
    LOBYTE(v4) = (v12[13] != -1) & (v12[13] > time(nullptr));
    if ( (_BYTE)v4 )
    {
      v4 = 0;
      qstrftime(s, 0x400u, "%F");
      sub_3573A0((char **)a2);
    }
    else if ( a1[54] || (unsigned __int8)sub_88AE60((__int64)a1, (char **)a2, 0) )
    {
      if ( *(_QWORD *)(a2 + 8) > 1u )
        sub_365330();
      v13 = *a3;
      v14 = a1[54];
      ptr = nullptr;
      v31 = 0;
      v15 = sub_7EF6B0(v14, v13, a4, (__int64 *)&ptr, a2);
      if ( v15 == 2 )
        sub_88BE00();
      v29 = v15;
      sub_8891D0((__int64)&ptr, 1);
      if ( !v29 )
      {
        sub_88D4D0(a1, a3, v16, v17, v18, v19);
        sub_88CC80((__int64)a1, v12, 1, 0, 0);
        v4 = 1;
      }
      v20 = (char *)ptr;
      if ( ptr )
      {
        v21 = v31;
        if ( (_QWORD)v31 )
        {
          v22 = 0;
          do
          {
            v23 = &v20[32 * v22];
            v24 = *((void **)v23 + 1);
            if ( v24 )
            {
              *((_QWORD *)v23 + 2) = 0;
              qfree(v24);
              v20 = (char *)ptr;
            }
            ++v22;
          }
          while ( v21 != v22 );
        }
        *(_QWORD *)&v31 = 0;
        qfree(v20);
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v26 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) <= 0x38u )
    {
      v28 = qvector_reserve(a2, v26, 57, 1);
      *(_QWORD *)a2 = v28;
      v26 = (char *)v28;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384A30);
    *(_QWORD *)(a2 + 8) = 57;
    v4 = 0;
    *((_QWORD *)v26 + 6) = 0x656C62616C696176LL;
    *(__m128i *)v26 = si128;
    *((__m128i *)v26 + 1) = _mm_load_si128((const __m128i *)&xmmword_2384A40);
    *((__m128i *)v26 + 2) = _mm_load_si128((const __m128i *)&xmmword_2384A50);
    *(_BYTE *)(*(_QWORD *)a2 + 56LL) = 0;
  }
  return v4;
}

