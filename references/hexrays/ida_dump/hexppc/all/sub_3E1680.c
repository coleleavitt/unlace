__int64 __fastcall sub_3E1680(__int64 *a1, int a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 *v5; // rbp
  const char *v6; // rdx
  __int64 v7; // rbx
  const char *v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  char *v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v18; // r13
  const void *v19; // rbp
  void *v20; // rdi
  __int64 v21; // rax
  _QWORD v22[3]; // [rsp+0h] [rbp-188h] BYREF
  char v23; // [rsp+18h] [rbp-170h]
  __int64 (__fastcall **v24)(); // [rsp+20h] [rbp-168h] BYREF
  __int64 v25; // [rsp+28h] [rbp-160h]
  __int64 v26; // [rsp+30h] [rbp-158h]
  __int64 (__fastcall **v27)(); // [rsp+40h] [rbp-148h] BYREF
  char v28; // [rsp+90h] [rbp-F8h] BYREF
  char v29; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v30; // [rsp+F8h] [rbp-90h]
  __m128i v31; // [rsp+108h] [rbp-80h]
  __int64 v32; // [rsp+118h] [rbp-70h]
  unsigned __int64 v33; // [rsp+120h] [rbp-68h]
  const char *v34; // [rsp+130h] [rbp-58h] BYREF
  __int64 v35; // [rsp+138h] [rbp-50h]
  _BYTE v36[16]; // [rsp+148h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+158h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  sub_3E0200((__int64)&v24, a2, 1u);
  v22[0] = 0;
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, &v27, v22, &callui, v3);
  if ( v4 < 0 )
  {
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  if ( v4 >= v33 || (v5 = (unsigned __int64 *)(v32 + 32 * v4)) == nullptr )
  {
    sub_2B11F0((__int64)"Stock comments: could not get chosen item %llX", v4);
LABEL_10:
    netnode_kill(v36);
    v8 = s1;
    if ( v35 )
      v8 = v34;
    netnode_check(v36, v8, 0, 1);
    goto LABEL_13;
  }
  sub_3E1430((__int64)v22, (__int64)&v34, *v5);
  if ( v23 )
  {
    v6 = s1;
    if ( v5[2] )
      v6 = (const char *)v5[1];
    v7 = v22[0];
    sub_2B11F0((__int64)"Stock comments: detected corruption when moving chosen comment %llX \"%s\" to front", *v5, v6);
    if ( v7 )
      qfree(v7);
    goto LABEL_10;
  }
  if ( a1 != (__int64 *)(v5 + 1) )
  {
    v18 = v5[2];
    if ( v18 < 2 )
    {
      a1[1] = 0;
    }
    else
    {
      v19 = (const void *)v5[1];
      v20 = (void *)*a1;
      if ( a1[2] < v18 )
      {
        v21 = qvector_reserve(a1, *a1, v18, 1);
        *a1 = v21;
        v20 = (void *)v21;
      }
      a1[1] = v18;
      memmove(v20, v19, v18 - 1);
      *(_BYTE *)(*a1 + v18 - 1) = 0;
    }
  }
  v9 = 1;
LABEL_14:
  v24 = off_4D6870;
  v27 = off_4D68D0;
  v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4D69F8), (__m128i)(unsigned __int64)&off_4D69A8);
  v31 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4D6A00), (__m128i)(unsigned __int64)&off_4D69D8);
  if ( v34 )
  {
    v35 = 0;
    qfree(v34);
  }
  v10 = v32;
  v24 = (__int64 (__fastcall **)())&unk_4D9920;
  v27 = (__int64 (__fastcall **)())&unk_4D9958;
  v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4D6A08), (__m128i)(unsigned __int64)&off_4D9A30);
  v31 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4D6A10), (__m128i)(unsigned __int64)&off_4D9A60);
  if ( v32 )
  {
    v11 = v33;
    if ( v33 )
    {
      v12 = 0;
      do
      {
        v13 = v10 + 32 * v12;
        v14 = *(_QWORD *)(v13 + 8);
        if ( v14 )
        {
          *(_QWORD *)(v13 + 16) = 0;
          qfree(v14);
          v10 = v32;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    v33 = 0;
    qfree(v10);
  }
  v15 = &v29;
  v27 = (__int64 (__fastcall **)())&unk_4D8D28;
  do
  {
    v16 = *((_QWORD *)v15 - 3);
    v15 -= 24;
    if ( v16 )
    {
      *((_QWORD *)v15 + 1) = 0;
      qfree(v16);
    }
  }
  while ( v15 != &v28 );
  v24 = &off_4D4688;
  if ( v25 )
  {
    v26 = 0;
    qfree(v25);
  }
  return v9;
}
