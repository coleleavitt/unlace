__int64 __fastcall sub_8B11E0(_QWORD *a1, __int64 a2, int **a3, __int64 a4)
{
  unsigned int v4; // r14d
  int *v8; // rax
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // r12
  int *v13; // rsi
  __int64 v14; // rdi
  int v15; // eax
  char *v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rbx
  char *v19; // rax
  void *v20; // rdi
  char *v22; // rsi
  __m128i si128; // xmm0
  __int64 v24; // rax
  int v25; // [rsp+Ch] [rbp-52Ch]
  void *ptr; // [rsp+10h] [rbp-528h] BYREF
  __int128 v27; // [rsp+18h] [rbp-520h]
  int v28; // [rsp+30h] [rbp-508h] BYREF
  __int16 v29; // [rsp+34h] [rbp-504h]
  __int64 v30; // [rsp+38h] [rbp-500h]
  __int64 v31; // [rsp+40h] [rbp-4F8h]
  int v32; // [rsp+50h] [rbp-4E8h]
  __int16 v33; // [rsp+54h] [rbp-4E4h]
  char s[1032]; // [rsp+F0h] [rbp-448h] BYREF
  unsigned __int64 v35; // [rsp+4F8h] [rbp-40h]

  v8 = *a3;
  v35 = __readfsqword(0x28u);
  v30 = 0;
  v31 = 0;
  v10 = *v8;
  LOWORD(v8) = *((_WORD *)v8 + 2);
  v32 = v10;
  v33 = (__int16)v8;
  v28 = v10;
  v29 = (__int16)v8;
  v11 = sub_8AD170((__int64)a1, (__int64)&v28);
  if ( v11 )
  {
    v12 = v11;
    LOBYTE(v4) = (*(_QWORD *)(v12 + 104) != -1) & (*(_QWORD *)(v12 + 104) > time(nullptr));
    if ( (_BYTE)v4 )
    {
      v4 = 0;
      qstrftime(s, 0x400u, "%F");
      sub_35A790((char **)a2);
    }
    else if ( a1[54] || (unsigned __int8)sub_8AE7E0((__int64)a1, (char **)a2, 0) )
    {
      if ( *(_QWORD *)(a2 + 8) > 1u )
        sub_368890();
      v13 = *a3;
      v14 = a1[54];
      ptr = nullptr;
      v27 = 0;
      v15 = sub_812870(v14, v13, a4, (__int64 *)&ptr, a2);
      if ( v15 == 2 )
        sub_8AF780();
      v25 = v15;
      sub_8ACB40((__int64)&ptr, 1);
      if ( !v25 )
      {
        sub_8B0E50(a1, a3);
        sub_8B0600((__int64)a1, v12, 1, 0, 0);
        v4 = 1;
      }
      v16 = (char *)ptr;
      if ( ptr )
      {
        v17 = v27;
        if ( (_QWORD)v27 )
        {
          v18 = 0;
          do
          {
            v19 = &v16[32 * v18];
            v20 = *((void **)v19 + 1);
            if ( v20 )
            {
              *((_QWORD *)v19 + 2) = 0;
              qfree(v20);
              v16 = (char *)ptr;
            }
            ++v18;
          }
          while ( v17 != v18 );
        }
        *(_QWORD *)&v27 = 0;
        qfree(v16);
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v22 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) <= 0x38u )
    {
      v24 = qvector_reserve(a2, v22, 57, 1);
      *(_QWORD *)a2 = v24;
      v22 = (char *)v24;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8A70);
    *(_QWORD *)(a2 + 8) = 57;
    v4 = 0;
    *((_QWORD *)v22 + 6) = 0x656C62616C696176LL;
    *(__m128i *)v22 = si128;
    *((__m128i *)v22 + 1) = _mm_load_si128((const __m128i *)&xmmword_23A8A80);
    *((__m128i *)v22 + 2) = _mm_load_si128((const __m128i *)&xmmword_23A8A90);
    *(_BYTE *)(*(_QWORD *)a2 + 56LL) = 0;
  }
  return v4;
}
