__int64 __fastcall sub_E991A0(const __m128i **a1, __int64 a2)
{
  const __m128i *v3; // r12
  const void *v5; // rax
  size_t v6; // rdx
  void *v7; // rdi
  size_t v8; // r13
  int v9; // eax
  _BOOL4 v10; // r13d
  const __m128i *v11; // rdi
  _BYTE *v12; // rax
  const __m128i *v13; // r12
  const char *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const char *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE *v22; // rax
  const __m128i *v24; // r12
  const __m128i *v25; // r13
  _BYTE *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  _BYTE *v30; // rdx
  const __m128i *v31; // r12
  const __m128i *v32; // r14
  _BYTE *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  _BYTE *v37; // rdx

  v3 = *a1;
  v5 = (const void *)sub_20C7A20(*(unsigned int *)(a2 + 8), 0);
  v7 = (void *)v3[2].m128i_i64[0];
  v8 = v6;
  if ( v3[1].m128i_i64[1] - (__int64)v7 < v6 )
  {
    sub_22581D0(v3, v5, v6);
  }
  else if ( v6 )
  {
    memcpy(v7, v5, v6);
    v3[2].m128i_i64[0] += v8;
  }
  v9 = *(_DWORD *)(a2 + 84);
  v10 = v9 != 2;
  if ( *(_DWORD *)(a2 + 80) == 2 && (v10 = 0, v9 == 2) )
  {
    sub_E99070(a1, a2, 40);
  }
  else
  {
    v11 = *a1;
    v12 = (_BYTE *)(*a1)[2].m128i_i64[0];
    if ( (unsigned __int64)v12 >= (*a1)[1].m128i_i64[1] )
    {
      sub_2257CD0(v11, 40);
    }
    else
    {
      v11[2].m128i_i64[0] = (__int64)(v12 + 1);
      *v12 = 40;
    }
    v13 = *a1;
    if ( *(_DWORD *)(a2 + 80) != 2 )
    {
      v14 = (const char *)sub_FDA030(*(unsigned int *)(a2 + 8));
      sub_971800((__int64)v13, v14);
      if ( !*(_DWORD *)(a2 + 80) )
      {
        v31 = *a1;
        v32 = a1[1];
        v33 = (_BYTE *)(*a1)[2].m128i_i64[0];
        if ( (unsigned __int64)v33 >= (*a1)[1].m128i_i64[1] )
        {
          v14 = (const char *)&qword_28;
          sub_2257CD0(*a1, 40);
        }
        else
        {
          v34 = (__int64)(v33 + 1);
          v31[2].m128i_i64[0] = (__int64)(v33 + 1);
          *v33 = 40;
        }
        v35 = *(_QWORD *)(a2 + 40);
        if ( v35 )
        {
          v14 = (const char *)v31;
          sub_E6C510(v35, (__int64)v31, v32, 0, 1);
        }
        v36 = sub_B62D60((__int64)v31, (__int64)v14, v34, v15, v16, v17, *(_QWORD *)(a2 + 56));
        v37 = *(_BYTE **)(v36 + 32);
        if ( (unsigned __int64)v37 >= *(_QWORD *)(v36 + 24) )
        {
          sub_2257CD0(v36, 41);
        }
        else
        {
          *(_QWORD *)(v36 + 32) = v37 + 1;
          *v37 = 41;
        }
      }
      v13 = *a1;
      if ( v10 )
      {
        sub_971800((__int64)*a1, ", ");
        v13 = *a1;
      }
    }
    if ( *(_DWORD *)(a2 + 84) != 2 )
    {
      v18 = (const char *)sub_FDA030(*(unsigned int *)(a2 + 8));
      sub_971800((__int64)v13, v18);
      if ( !*(_DWORD *)(a2 + 84) )
      {
        v24 = *a1;
        v25 = a1[1];
        v26 = (_BYTE *)(*a1)[2].m128i_i64[0];
        if ( (unsigned __int64)v26 >= (*a1)[1].m128i_i64[1] )
        {
          v18 = (const char *)&qword_28;
          sub_2257CD0(*a1, 40);
        }
        else
        {
          v27 = (__int64)(v26 + 1);
          v24[2].m128i_i64[0] = (__int64)(v26 + 1);
          *v26 = 40;
        }
        v28 = *(_QWORD *)(a2 + 40);
        if ( v28 )
        {
          v18 = (const char *)v24;
          sub_E6C510(v28, (__int64)v24, v25, 0, 1);
        }
        v29 = sub_B62D60((__int64)v24, (__int64)v18, v27, v19, v20, v21, *(_QWORD *)(a2 + 56));
        v30 = *(_BYTE **)(v29 + 32);
        if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 24) )
        {
          sub_2257CD0(v29, 41);
        }
        else
        {
          *(_QWORD *)(v29 + 32) = v30 + 1;
          *v30 = 41;
        }
      }
      v13 = *a1;
    }
    v22 = (_BYTE *)v13[2].m128i_i64[0];
    if ( (unsigned __int64)v22 >= v13[1].m128i_i64[1] )
    {
      sub_2257CD0(v13, 58);
    }
    else
    {
      v13[2].m128i_i64[0] = (__int64)(v22 + 1);
      *v22 = 58;
    }
    sub_E99070(a1, a2, 32);
  }
  return sub_971800((__int64)*a1, ")");
}

