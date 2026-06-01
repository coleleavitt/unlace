__int64 __fastcall sub_8859E0(__int64 a1, __int64 a2, char a3, char **a4, __int64 a5)
{
  size_t v8; // r12
  const void *v9; // r15
  const char *v11; // rsi
  unsigned int v12; // ebx
  __int64 *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // r14
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  int v23; // r8d
  int v24; // r9d
  int v25; // ecx
  char *v26; // r15
  __int64 v27; // r14
  char *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rax
  void *v31; // rdi
  void *v32; // rdi
  size_t v33; // rdx
  char v34; // al
  int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rsi
  __m128i si128; // xmm0
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-D8h]
  void **v43; // [rsp+0h] [rbp-D8h]
  __int64 *v44; // [rsp+8h] [rbp-D0h]
  __int64 v45; // [rsp+10h] [rbp-C8h] BYREF
  __int64 *v46; // [rsp+18h] [rbp-C0h]
  void *v47; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v48; // [rsp+28h] [rbp-B0h]
  void *v49; // [rsp+40h] [rbp-98h] BYREF
  __int64 v50; // [rsp+48h] [rbp-90h]
  void *v51; // [rsp+60h] [rbp-78h] BYREF
  __int128 v52; // [rsp+68h] [rbp-70h]
  void *v53; // [rsp+80h] [rbp-58h] BYREF
  __int128 v54; // [rsp+88h] [rbp-50h]
  unsigned __int64 v55; // [rsp+98h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(const void **)a2;
  v55 = __readfsqword(0x28u);
  v48 = 0;
  v45 = 0;
  v46 = nullptr;
  v47 = nullptr;
  if ( !v8 )
    goto LABEL_2;
  v32 = nullptr;
  v33 = v8 + 1;
  if ( v8 != -1 )
  {
    v47 = (void *)qvector_reserve(&v47, 0, v33, 1);
    v33 = v8 + 1;
    v32 = v47;
  }
  *(_QWORD *)&v48 = v33;
  memmove(v32, v9, v8);
  *((_BYTE *)v47 + v8) = 0;
  if ( (_QWORD)v48 )
    v11 = (const char *)v47;
  else
LABEL_2:
    v11 = haystack;
  if ( (unsigned int)parse_json_string(&v45, v11, a4, a5) || (_DWORD)v45 != 3 )
    goto LABEL_4;
  v14 = v46;
  if ( (a3 & 2) != 0 )
  {
    if ( !a1 )
      goto LABEL_53;
    goto LABEL_52;
  }
  v15 = v46[1];
  if ( !v15 )
    goto LABEL_58;
  v16 = *v46;
  v17 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v16 + 8) )
    {
      v42 = v15;
      v18 = strcmp(*(const char **)v16, "signature");
      v15 = v42;
      if ( !v18 )
        break;
    }
    ++v17;
    v16 += 40;
    if ( v15 == v17 )
      goto LABEL_58;
  }
  if ( *(_DWORD *)(v16 + 24) != 2 )
  {
LABEL_58:
    v39 = (__int64)*a4;
    if ( (unsigned __int64)a4[2] <= 0x17 )
    {
      v41 = qvector_reserve(a4, v39, 24, 1);
      *a4 = (char *)v41;
      v39 = v41;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384950);
    a4[1] = (char *)&qword_18;
    *(__m128i *)v39 = si128;
    *(_QWORD *)(v39 + 15) = 0x79656B2022657275LL;
    (*a4)[23] = 0;
    goto LABEL_4;
  }
  sub_885080((__int64)&v49, v14);
  v19 = *(_DWORD *)(v16 + 24) == 2;
  v51 = nullptr;
  v52 = 0;
  if ( !v19 )
    sub_8843A0();
  v44 = *(__int64 **)(v16 + 32);
  v20 = v44[1];
  if ( v20 )
  {
    v21 = v20 - 1;
    v22 = v21 >> 1;
    if ( v21 >> 1 )
    {
      v51 = (void *)qvector_reserve(&v51, 0, v21 >> 1, 1);
      memset((char *)v51 + v52, 0, v22 - v52);
      v25 = (int)v51;
      *(_QWORD *)&v52 = v22;
      v26 = (char *)v51 + v22;
      v27 = *v44;
      if ( v51 == v26 )
      {
        v30 = v44[1];
        if ( !v30 )
          goto LABEL_35;
        v29 = *v44;
      }
      else
      {
        v28 = (char *)v51;
        v43 = &v53;
        do
        {
          LODWORD(v53) = 0;
          if ( (unsigned int)qsscanf(v27, (int)"%02X", (int)v43, v25, v23, v24, (char)v43) != 1 )
            break;
          if ( (unsigned int)v53 > 0xFF )
            break;
          *v28++ = (char)v53;
          v27 += 2;
        }
        while ( v26 != v28 );
        v29 = *v44;
        v30 = v44[1];
        if ( !v30 )
        {
LABEL_27:
          if ( v27 != v29 )
          {
            if ( v51 )
            {
              *(_QWORD *)&v52 = 0;
              qfree(v51);
              v31 = v49;
              if ( !v49 )
              {
LABEL_4:
                v12 = 0;
                goto LABEL_5;
              }
            }
            else
            {
              v31 = v49;
              if ( !v49 )
                goto LABEL_4;
            }
            v50 = 0;
            qfree(v31);
            goto LABEL_4;
          }
          goto LABEL_35;
        }
      }
      v21 = v30 - 1;
    }
    else
    {
      v29 = *v44;
      v27 = *v44;
    }
    v29 += v21;
    goto LABEL_27;
  }
LABEL_35:
  v53 = nullptr;
  v54 = 0;
  v34 = sub_8857E0((__int64)&v53, (__int64)&v51, a4);
  v35 = 10;
  if ( v34 && v50 == (_QWORD)v54 )
  {
    if ( v50 )
    {
      v36 = 0;
      while ( *((_BYTE *)v49 + v36) == *((_BYTE *)v53 + v36) )
      {
        if ( v50 == ++v36 )
          goto LABEL_61;
      }
      v35 = 10;
    }
    else
    {
LABEL_61:
      v35 = 0;
    }
  }
  if ( v53 )
    qfree(v53);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  if ( v49 )
  {
    v50 = 0;
    qfree(v49);
  }
  if ( v35 )
    goto LABEL_4;
  if ( a1 )
  {
    if ( (_DWORD)v45 != 3 )
    {
      if ( !under_debugger )
        interr(1282);
      BUG();
    }
    v14 = v46;
LABEL_52:
    v37 = *(_QWORD *)a1;
    v38 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    *(_QWORD *)a1 = *v14;
    *(_QWORD *)(a1 + 8) = v14[1];
    *(_QWORD *)(a1 + 16) = v14[2];
    *v14 = v37;
    *(__m128i *)(v14 + 1) = v38;
  }
LABEL_53:
  v12 = 1;
LABEL_5:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  jvalue_t_clear(&v45);
  return v12;
}

