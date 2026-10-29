_QWORD *__fastcall sub_1AEE640(_QWORD *a1, int a2, unsigned int a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  int v10; // ebx
  __int64 v11; // r13
  _DWORD *v12; // rax
  unsigned int v13; // r15d
  _DWORD *v14; // r14
  _DWORD *v15; // rdx
  _DWORD *v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rax
  __int64 (__fastcall ***v19)(); // r12
  char *v20; // rax
  size_t v21; // rax
  _BYTE *v22; // rdi
  char *v23; // rsi
  size_t v24; // r10
  __int64 (__fastcall **v25)(); // rax
  int v26; // eax
  _BYTE *v27; // rsi
  void *v28; // rdx
  _DWORD *v30; // [rsp+8h] [rbp-1E0h]
  _DWORD *v31; // [rsp+10h] [rbp-1D8h]
  char *src; // [rsp+30h] [rbp-1B8h]
  void *srca; // [rsp+30h] [rbp-1B8h]
  __int64 v36; // [rsp+48h] [rbp-1A0h]
  __int64 (__fastcall **v37)(); // [rsp+50h] [rbp-198h] BYREF
  int v38; // [rsp+58h] [rbp-190h]
  __int128 v39; // [rsp+60h] [rbp-188h]
  _WORD *v40; // [rsp+70h] [rbp-178h]
  char v41; // [rsp+78h] [rbp-170h]
  int v42; // [rsp+7Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+80h] [rbp-168h]
  void *ptr; // [rsp+90h] [rbp-158h] BYREF
  __m128i si128; // [rsp+98h] [rbp-150h]
  _BYTE v46[320]; // [rsp+A8h] [rbp-140h] BYREF

  ptr = v46;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  p_ptr = &ptr;
  v38 = 2;
  v41 = 0;
  v42 = 1;
  v40 = nullptr;
  v39 = 0;
  v37 = &off_2BEBEE0;
  sub_227B8B0(&v37, 0, 0, 0);
  if ( a3 < a4 )
  {
    v10 = a6;
    v11 = (4 * a6) >> 4;
    v36 = (4 * a6) >> 2;
    v31 = &a5[a6];
    v30 = &a5[4 * v11];
    v12 = a5;
    v13 = a3;
    v14 = v12;
    do
    {
      v15 = v14;
      if ( v11 > 0 )
      {
        if ( v13 == *v14 )
        {
          v16 = v14;
        }
        else
        {
          v16 = v14 + 1;
          if ( v13 != v14[1] )
          {
            v16 = v14 + 2;
            if ( v13 != v14[2] )
            {
              v16 = v14 + 3;
              if ( v14[3] != v13 )
              {
                while ( 1 )
                {
                  v16 = v15 + 4;
                  if ( v15 + 4 == v30 )
                  {
                    v17 = v31 - v30;
                    goto LABEL_16;
                  }
                  if ( v15[4] == v13 )
                    goto LABEL_35;
                  if ( v15[5] == v13 )
                  {
                    v16 = v15 + 5;
                    goto LABEL_35;
                  }
                  if ( v15[6] == v13 )
                  {
                    v16 = v15 + 6;
                    goto LABEL_35;
                  }
                  if ( v15[7] == v13 )
                    break;
                  v15 += 4;
                }
                v16 = v15 + 7;
              }
            }
          }
        }
LABEL_35:
        if ( v31 != v16 )
        {
          --v10;
          goto LABEL_30;
        }
LABEL_19:
        v18 = v40;
        if ( *((_WORD **)&v39 + 1) == v40 )
          goto LABEL_20;
        goto LABEL_45;
      }
      v17 = v36;
      v16 = v14;
LABEL_16:
      if ( v17 != 2 )
      {
        if ( v17 != 3 )
        {
          if ( v17 != 1 )
            goto LABEL_19;
          goto LABEL_43;
        }
        if ( *v16 == v13 )
          goto LABEL_35;
        ++v16;
      }
      if ( *v16 == v13 )
        goto LABEL_35;
      ++v16;
LABEL_43:
      if ( *v16 == v13 )
        goto LABEL_35;
      v18 = v40;
      if ( *((_WORD **)&v39 + 1) == v40 )
      {
LABEL_20:
        v19 = (__int64 (__fastcall ***)())sub_227BF10(&v37, "'", 1);
        goto LABEL_21;
      }
LABEL_45:
      *v18 = 39;
      v19 = &v37;
      v40 = (_WORD *)((char *)v40 + 1);
LABEL_21:
      v20 = sub_FFDD70(a2, v13);
      if ( v20 )
      {
        src = v20;
        v21 = strlen(v20);
        v22 = v19[4];
        v23 = src;
        v24 = v21;
        v25 = v19[3];
        if ( v24 <= (char *)v25 - v22 )
        {
          if ( v24 )
          {
            srca = (void *)v24;
            memcpy(v22, v23, v24);
            v25 = v19[3];
            v22 = (char *)v19[4] + (_QWORD)srca;
            v19[4] = (__int64 (__fastcall **)())v22;
          }
          goto LABEL_25;
        }
        v19 = (__int64 (__fastcall ***)())sub_227BF10(v19, src, v24);
      }
      v25 = v19[3];
      v22 = v19[4];
LABEL_25:
      if ( v22 == (_BYTE *)v25 )
      {
        sub_227BF10(v19, "'", 1);
        v26 = v13 + v10;
        if ( v13 + v10 + 2 != a4 )
          goto LABEL_27;
      }
      else
      {
        v26 = v13 + v10;
        *v22 = 39;
        v19[4] = (__int64 (__fastcall **)())((char *)v19[4] + 1);
        if ( v13 + v10 + 2 != a4 )
        {
LABEL_27:
          if ( v26 + 1 != a4 )
          {
            if ( *((_QWORD *)&v39 + 1) - (_QWORD)v40 > 1u )
              *v40++ = 8236;
            else
              sub_227BF10(&v37, ", ", 2);
          }
          goto LABEL_30;
        }
      }
      if ( *((_QWORD *)&v39 + 1) - (_QWORD)v40 > 3u )
      {
        *(_DWORD *)v40 = 544370464;
        v40 += 2;
      }
      else
      {
        sub_227BF10(&v37, " or ", 4);
      }
LABEL_30:
      ++v13;
    }
    while ( v13 != a4 );
  }
  v27 = *p_ptr;
  v28 = p_ptr[1];
  *a1 = a1 + 2;
  sub_1AEB960(a1, v27, (__int64)v28 + (_QWORD)v27);
  v37 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v37);
  if ( ptr != v46 )
    free(ptr);
  return a1;
}
