__int64 *__fastcall sub_75F3C0(__int64 a1, unsigned int a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rax
  int v5; // esi
  __int64 *v6; // rbx
  __int64 v7; // r13
  _DWORD *v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r12
  __int64 *v13; // r15
  _BYTE *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  int v20; // r8d
  char *v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *result; // rax
  _BYTE *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rcx
  char *v36; // rdi
  unsigned __int64 v37; // rcx
  __int64 v38; // r10
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  __int64 v42; // r11
  __int64 *v44; // [rsp+8h] [rbp-870h]
  _BYTE *ptr; // [rsp+20h] [rbp-858h]
  __int64 v47; // [rsp+28h] [rbp-850h]
  _BYTE v48[1024]; // [rsp+30h] [rbp-848h] BYREF
  void *v49; // [rsp+430h] [rbp-448h]
  __int64 v50; // [rsp+438h] [rbp-440h]
  _BYTE v51[1080]; // [rsp+440h] [rbp-438h] BYREF

  v4 = a2;
  v49 = v51;
  v5 = *(_DWORD *)(a1 + 8);
  ptr = v48;
  v47 = 0x8000000000LL;
  v50 = 0x8000000000LL;
  if ( (_DWORD)v4 )
  {
    v6 = a3;
    v44 = &a3[v4];
    do
    {
      LODWORD(v50) = 0;
      v7 = *v6;
      if ( !*(_WORD *)(*v6 + 4)
        && (v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) != nullptr
        && *v8 == v5
        && v8[1] == 37 )
      {
        v10 = *(unsigned int *)(v7 + 24);
        if ( !(_DWORD)v10 )
          goto LABEL_36;
        v32 = v7 + 8 * v10;
        LODWORD(v33) = HIDWORD(v50);
        LODWORD(v10) = 0;
        do
        {
          if ( (unsigned int)v10 < (unsigned int)v33 )
          {
            v9 = (__int64 *)v49;
          }
          else
          {
            v33 = (unsigned int)(2 * v33);
            v9 = (__int64 *)sub_186B270(8 * v33);
            LODWORD(v10) = v50;
            v36 = (char *)v49;
            if ( (_DWORD)v50 )
            {
              if ( (unsigned int)(v50 - 1) <= 2 || v9 == (__int64 *)((char *)v49 + 8) )
              {
                v41 = 0;
                v42 = 8LL * (unsigned int)v50;
                do
                {
                  v9[v41 / 8] = *(_QWORD *)&v36[v41];
                  v41 += 8LL;
                }
                while ( v42 != v41 );
              }
              else
              {
                v37 = 0;
                v38 = 16LL * ((unsigned int)v50 >> 1);
                do
                {
                  *(__m128i *)&v9[v37 / 8] = _mm_loadu_si128((const __m128i *)&v36[v37]);
                  v37 += 16LL;
                }
                while ( v37 != v38 );
                if ( (v10 & 1) != 0 )
                  v9[(unsigned int)v10 & 0xFFFFFFFE] = *(_QWORD *)&v36[8 * (v10 & 0xFFFFFFFE)];
              }
            }
            if ( v36 != v51 && v36 )
            {
              sub_186B220(v36);
              LODWORD(v10) = v50;
            }
            v49 = v9;
            HIDWORD(v50) = v33;
          }
          v34 = *(_QWORD *)(v7 + 32);
          v35 = (unsigned int)v10;
          v7 += 8;
          v10 = (unsigned int)(v10 + 1);
          v9[v35] = v34;
          LODWORD(v50) = v10;
        }
        while ( v7 != v32 );
      }
      else
      {
        if ( HIDWORD(v50) )
        {
          v9 = (__int64 *)v49;
          v10 = 1;
          *(_QWORD *)v49 = v7;
          LODWORD(v50) = 1;
LABEL_8:
          v11 = v47;
          LODWORD(v12) = HIDWORD(v47);
          v13 = &v9[v10];
          do
          {
            if ( v11 < (unsigned int)v12 )
            {
              v14 = ptr;
            }
            else
            {
              v12 = (unsigned int)(2 * v12);
              v17 = sub_186B270(8 * v12);
              v11 = v47;
              v14 = (_BYTE *)v17;
              if ( (_DWORD)v47 )
              {
                if ( (unsigned int)(v47 - 1) <= 2 || (_BYTE *)v17 == ptr + 8 )
                {
                  v31 = 0;
                  do
                  {
                    *(_QWORD *)&v14[v31] = *(_QWORD *)&ptr[v31];
                    v31 += 8;
                  }
                  while ( v31 != 8LL * (unsigned int)v47 );
                }
                else
                {
                  v18 = 0;
                  do
                  {
                    *(__m128i *)&v14[v18] = _mm_loadu_si128((const __m128i *)&ptr[v18]);
                    v18 += 16;
                  }
                  while ( 16LL * ((unsigned int)v47 >> 1) != v18 );
                  if ( (v47 & 1) != 0 )
                    *(_QWORD *)&v14[8 * (v47 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[8 * (v47 & 0xFFFFFFFE)];
                }
              }
              if ( ptr && ptr != v48 )
              {
                sub_186B220(ptr);
                v11 = v47;
              }
              ptr = v14;
              HIDWORD(v47) = v12;
            }
            v15 = *v9;
            v16 = v11;
            ++v9;
            ++v11;
            *(_QWORD *)&v14[8 * v16] = v15;
            LODWORD(v47) = v11;
          }
          while ( v9 != v13 );
          goto LABEL_35;
        }
        v19 = (__int64 *)sub_186B270(0);
        v20 = v50;
        v21 = (char *)v49;
        v9 = v19;
        if ( (_DWORD)v50 )
        {
          if ( (unsigned int)(v50 - 1) <= 2 || v19 == (__int64 *)((char *)v49 + 8) )
          {
            v39 = 0;
            v40 = 8LL * (unsigned int)v50;
            do
            {
              v9[v39 / 8] = *(_QWORD *)&v21[v39];
              v39 += 8LL;
            }
            while ( v40 != v39 );
          }
          else
          {
            v22 = 0;
            v23 = 16LL * ((unsigned int)v50 >> 1);
            do
            {
              *(__m128i *)&v9[v22 / 8] = _mm_loadu_si128((const __m128i *)&v21[v22]);
              v22 += 16LL;
            }
            while ( v22 != v23 );
            if ( (v20 & 1) != 0 )
              v9[v20 & 0xFFFFFFFE] = *(_QWORD *)&v21[8 * (v20 & 0xFFFFFFFE)];
          }
        }
        if ( v21 != v51 && v21 )
        {
          sub_186B220(v21);
          v20 = v50;
        }
        v10 = (unsigned int)(v20 + 1);
        v49 = v9;
        HIDWORD(v50) = 0;
        v9[v20] = v7;
        LODWORD(v50) = v20 + 1;
      }
      if ( (_DWORD)v10 )
        goto LABEL_8;
LABEL_35:
      v5 = *(_DWORD *)(a1 + 8);
LABEL_36:
      ++v6;
    }
    while ( v44 != v6 );
  }
  v24 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v26 = *a4;
  if ( *a4 )
  {
    v27 = a4[1];
    if ( (*(_DWORD *)(v26 + 8))-- == 1 )
      sub_15D7BC0(v27, v26);
  }
  result = a4;
  v30 = v49;
  *a4 = v25;
  if ( v30 )
  {
    result = (__int64 *)v51;
    if ( v30 != v51 )
      result = (__int64 *)sub_186B220(v30);
  }
  if ( ptr != v48 )
  {
    if ( ptr )
      return (__int64 *)sub_186B220(ptr);
  }
  return result;
}

