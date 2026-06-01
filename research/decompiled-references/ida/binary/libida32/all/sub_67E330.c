unsigned __int64 __fastcall sub_67E330(_QWORD *a1, unsigned int a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rdi
  int v10; // eax
  unsigned int v11; // edx
  unsigned __int64 v12; // xmm0_8
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rbp
  void *v19; // rdi
  char *v20; // rbx
  char v21; // al
  char *v22; // rdx
  __int64 v23; // r14
  __int64 i; // r12
  char *v25; // rax
  void *v26; // rdi
  void *v28; // rdi
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+8h] [rbp-70h]
  unsigned __int64 v33; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int8 *v34[2]; // [rsp+20h] [rbp-58h] BYREF
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  __int128 v36; // [rsp+38h] [rbp-40h]
  unsigned __int64 v37; // [rsp+48h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  sub_67AAA0(a1, a2, (__int64)a3);
  v7 = a1[3];
  if ( v7 && a2 < *(_DWORD *)(a1[2] + 8 * v7 - 4) )
    return v37 - __readfsqword(0x28u);
  v34[0] = a3;
  v34[1] = &a3[a4];
  v36 = 0;
  ptr = nullptr;
  v8 = sub_67D4E0((__int64)a1, (__int64 *)&ptr, a2, v34);
  v9 = (char *)ptr;
  if ( !v8 )
    goto LABEL_17;
  if ( (_QWORD)v36 )
  {
    if ( *((_BYTE *)ptr + 89) == 1 && *((_QWORD *)ptr + 1) == 1 && !*((_QWORD *)ptr + 8) )
    {
      v10 = **(_DWORD **)ptr;
      if ( v10 != -1 )
      {
        v11 = *(_DWORD *)(*(_QWORD *)ptr + 4LL);
        v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v11)).m128i_u64[0];
        if ( v10 != v11 && v11 != -1 )
        {
          v13 = a1[3];
          v14 = a1[2];
          v15 = a1[4];
          v33 = v12;
          v16 = v13 + 1;
          if ( (unsigned __int64)&v33 < v14 || (unsigned __int64)&v33 >= v14 + 8 * v15 )
          {
            if ( v15 < v16 )
            {
              v30 = qvector_reserve(a1 + 2, v14, v13 + 1, 8);
              a1[2] = v30;
              v14 = v30;
              v13 = a1[3];
            }
            *(_QWORD *)(v14 + 8 * v13) = v33;
          }
          else
          {
            if ( v15 < v16 )
            {
              v32 = v12;
              v31 = qvector_reserve(a1 + 2, v14, v13 + 1, 8);
              a1[2] = v31;
              v14 = v31;
              v12 = v32;
              v13 = a1[3];
            }
            *(_QWORD *)(v14 + 8 * v13) = v12;
          }
          ++a1[3];
          v9 = (char *)ptr;
        }
      }
    }
LABEL_17:
    if ( v9 )
    {
      v17 = v36;
      if ( (_QWORD)v36 )
      {
        v18 = 0;
        do
        {
          v20 = &v9[96 * v18];
          v21 = v20[89];
          if ( v21 == 2 )
          {
            v22 = *((char **)v20 + 3);
            if ( v22 )
            {
              v23 = *((_QWORD *)v20 + 4);
              if ( v23 )
              {
                for ( i = 0; i != v23; ++i )
                {
                  v25 = &v22[40 * i];
                  v26 = *(void **)v25;
                  if ( *(_QWORD *)v25 )
                  {
                    *((_QWORD *)v25 + 1) = 0;
                    qfree(v26);
                    v22 = *((char **)v20 + 3);
                  }
                }
              }
              *((_QWORD *)v20 + 4) = 0;
              qfree(v22);
            }
          }
          else if ( v21 == 1 )
          {
            v28 = *((void **)v20 + 7);
            if ( v28 )
            {
              *((_QWORD *)v20 + 8) = 0;
              qfree(v28);
            }
            v29 = *((void **)v20 + 3);
            if ( v29 )
            {
              *((_QWORD *)v20 + 4) = 0;
              qfree(v29);
            }
          }
          v19 = *(void **)v20;
          v20[89] = 0;
          if ( v19 )
          {
            *((_QWORD *)v20 + 1) = 0;
            qfree(v19);
          }
          ++v18;
          v9 = (char *)ptr;
        }
        while ( v17 != v18 );
      }
      goto LABEL_33;
    }
    return v37 - __readfsqword(0x28u);
  }
  if ( ptr )
  {
LABEL_33:
    *(_QWORD *)&v36 = 0;
    qfree(v9);
  }
  return v37 - __readfsqword(0x28u);
}

