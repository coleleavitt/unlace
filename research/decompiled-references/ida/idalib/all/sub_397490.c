__int64 __fastcall sub_397490(char **a1)
{
  _BYTE *v1; // rax
  const char *v2; // rdi
  const char *v3; // rsi
  void *v4; // rdi
  const char **v5; // rbx
  const char *v6; // rsi
  __int64 v7; // rdx
  char *v8; // rsi
  char *v9; // rax
  void *v10; // r8
  void *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rsi
  char *v14; // rcx
  __m128i v15; // kr00_16
  __m128i v16; // xmm0
  char *v17; // rdi
  __int64 v18; // rbp
  char *v19; // rbx
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  char *v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rbx
  char *v26; // rdx
  void *v27; // rdi
  const char **v29; // [rsp+0h] [rbp-150h]
  unsigned __int8 v30; // [rsp+17h] [rbp-139h]
  void *v32; // [rsp+28h] [rbp-128h] BYREF
  __int128 v33; // [rsp+30h] [rbp-120h]
  void *v34; // [rsp+48h] [rbp-108h] BYREF
  __int128 v35; // [rsp+50h] [rbp-100h]
  void *v36; // [rsp+68h] [rbp-E8h] BYREF
  __m128i v37; // [rsp+70h] [rbp-E0h]
  void *ptr; // [rsp+88h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+90h] [rbp-C0h]
  void *v40; // [rsp+A8h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-A0h]
  __int16 v42; // [rsp+C0h] [rbp-90h]
  char v43; // [rsp+C2h] [rbp-8Eh]
  char v44; // [rsp+C8h] [rbp-88h]
  void *v45; // [rsp+D0h] [rbp-80h]
  __int128 v46; // [rsp+D8h] [rbp-78h]
  void *v47; // [rsp+E8h] [rbp-68h]
  __int128 v48; // [rsp+F0h] [rbp-60h]
  int v49; // [rsp+100h] [rbp-50h]
  __int16 v50; // [rsp+104h] [rbp-4Ch]
  int v51; // [rsp+10Ah] [rbp-46h]
  __int16 v52; // [rsp+10Eh] [rbp-42h]
  unsigned __int64 v53; // [rsp+110h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v33 = 0;
  v32 = nullptr;
  ptr = nullptr;
  v39 = 0;
  v1 = (_BYTE *)qvector_reserve(&ptr, 0, 4, 1);
  ptr = v1;
  *(_QWORD *)&v39 = 4;
  *(_WORD *)v1 = 11833;
  v1[2] = 51;
  *((_BYTE *)ptr + 3) = 0;
  sub_35A790((char **)&v32);
  if ( ptr )
  {
    *(_QWORD *)&v39 = 0;
    qfree(ptr);
  }
  sub_396E70();
  v2 = haystack;
  if ( (_QWORD)v33 )
    v2 = (const char *)v32;
  v30 = reg_subkey_exists(v2, "Licenses\\%s.%s%s%s");
  if ( v30 )
  {
    v34 = nullptr;
    v3 = haystack;
    v35 = 0;
    if ( (_QWORD)v33 )
      v3 = (const char *)v32;
    reg_read_strlist(&v34, v3);
    v4 = v34;
    if ( (_QWORD)v35 )
    {
      v36 = nullptr;
      v37 = 0;
      v29 = (const char **)((char *)v34 + 24 * v35);
      if ( v29 == v34 )
      {
        v14 = nullptr;
        v15 = 0u;
      }
      else
      {
        v5 = (const char **)v34;
        do
        {
          v6 = haystack;
          ptr = nullptr;
          v40 = nullptr;
          v42 = 0;
          v43 = 1;
          v44 = 0;
          v45 = nullptr;
          v47 = nullptr;
          v49 = 0;
          v50 = 0;
          v39 = 0;
          v41 = 0;
          v46 = 0;
          v48 = 0;
          if ( v5[1] )
            v6 = *v5;
          if ( (unsigned __int8)sub_395F40((__int64)&v40, (__int64)v6, (char **)&ptr) )
          {
            v7 = v37.m128i_i64[0];
            v8 = (char *)v36;
            if ( v37.m128i_i64[1] < (unsigned __int64)(v37.m128i_i64[0] + 1) )
            {
              v36 = (void *)qvector_reserve(&v36, v36, v37.m128i_i64[0] + 1, 96);
              v7 = v37.m128i_i64[0];
              v8 = (char *)v36;
            }
            v9 = &v8[96 * v7];
            *(_QWORD *)v9 = 0;
            v10 = v40;
            *(_OWORD *)(v9 + 8) = 0;
            *((_WORD *)v9 + 46) = 0;
            ++v37.m128i_i64[0];
            v11 = *(void **)v9;
            *(_QWORD *)v9 = v10;
            v12 = v41;
            *((_WORD *)v9 + 12) = 0;
            v13 = *((_QWORD *)v9 + 1);
            *((_QWORD *)v9 + 1) = v12;
            *(_QWORD *)&v41 = v13;
            *((_QWORD *)v9 + 2) = *((_QWORD *)&v41 + 1);
            LOWORD(v13) = v42;
            v9[26] = 1;
            *((_WORD *)v9 + 12) = v13;
            LOBYTE(v13) = v43;
            v9[32] = 0;
            v9[26] = v13;
            LOBYTE(v13) = v44;
            *((_QWORD *)v9 + 5) = 0;
            v9[32] = v13;
            *((_QWORD *)v9 + 8) = 0;
            *((_DWORD *)v9 + 22) = 0;
            v40 = v11;
            *((_QWORD *)&v41 + 1) = 0;
            v42 = 0;
            v43 = 1;
            *((_OWORD *)v9 + 3) = 0;
            *(_OWORD *)(v9 + 72) = 0;
            v44 = 0;
            v51 = 0;
            *((_QWORD *)v9 + 5) = v45;
            v45 = nullptr;
            *((_QWORD *)v9 + 6) = v46;
            v52 = 0;
            *((_QWORD *)v9 + 7) = *((_QWORD *)&v46 + 1);
            v46 = 0;
            *((_DWORD *)v9 + 22) = v49;
            *((_WORD *)v9 + 46) = v50;
            v49 = 0;
            v50 = 0;
          }
          else if ( (debug & 0x200) != 0 )
          {
            sub_3879F0();
          }
          if ( v47 )
          {
            *(_QWORD *)&v48 = 0;
            qfree(v47);
          }
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree(v45);
          }
          if ( v40 )
          {
            *(_QWORD *)&v41 = 0;
            qfree(v40);
          }
          if ( ptr )
          {
            *(_QWORD *)&v39 = 0;
            qfree(ptr);
          }
          v5 += 3;
        }
        while ( v29 != v5 );
        v14 = (char *)v36;
        v15 = v37;
      }
      v16 = _mm_loadu_si128((const __m128i *)(a1 + 1));
      v17 = *a1;
      a1[1] = (char *)v15.m128i_i64[0];
      *a1 = v14;
      a1[2] = (char *)v15.m128i_i64[1];
      v36 = v17;
      v37 = v16;
      if ( v17 )
      {
        if ( v16.m128i_i64[0] )
        {
          v18 = 0;
          do
          {
            v19 = &v17[96 * v18];
            v20 = *((void **)v19 + 8);
            if ( v20 )
            {
              *((_QWORD *)v19 + 9) = 0;
              qfree(v20);
            }
            v21 = *((void **)v19 + 5);
            if ( v21 )
            {
              *((_QWORD *)v19 + 6) = 0;
              qfree(v21);
            }
            v22 = *(void **)v19;
            if ( *(_QWORD *)v19 )
            {
              *((_QWORD *)v19 + 1) = 0;
              qfree(v22);
            }
            ++v18;
            v17 = (char *)v36;
          }
          while ( v18 != v16.m128i_i64[0] );
        }
        v37.m128i_i64[0] = 0;
        qfree(v17);
      }
      v23 = (char *)v34;
      v4 = v34;
      if ( v34 )
      {
        v24 = v35;
        if ( (_QWORD)v35 )
        {
          v25 = 0;
          do
          {
            v26 = &v23[24 * v25];
            v27 = *(void **)v26;
            if ( *(_QWORD *)v26 )
            {
              *((_QWORD *)v26 + 1) = 0;
              qfree(v27);
              v23 = (char *)v34;
            }
            ++v25;
            v4 = v23;
          }
          while ( v24 != v25 );
        }
        goto LABEL_46;
      }
    }
    else
    {
      v30 = 0;
      if ( v34 )
      {
LABEL_46:
        *(_QWORD *)&v35 = 0;
        qfree(v4);
      }
    }
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return v30;
}
