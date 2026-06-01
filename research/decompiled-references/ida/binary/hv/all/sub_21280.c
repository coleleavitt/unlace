__int64 __fastcall sub_21280(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  const char *v5; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  char *v13; // rdx
  unsigned int v14; // r12d
  void *v15; // rbp
  void *v16; // rbx
  char *v17; // rax
  void *v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // r12d
  __int64 v21; // rbp
  __int64 v22; // rbp
  void *v23; // rdx
  char *v24; // rsi
  char *v25; // rax
  size_t v26; // r15
  void *v27; // r13
  __int64 v28; // rsi
  unsigned int v29; // eax
  char *v30; // rdx
  __int64 v31; // rbx
  char *v32; // rax
  void *v33; // rdi
  void *v34; // [rsp+0h] [rbp-98h] BYREF
  __int128 v35; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  void *v37[2]; // [rsp+28h] [rbp-70h] BYREF
  void **v38; // [rsp+38h] [rbp-60h]
  void **v39; // [rsp+40h] [rbp-58h]
  __int64 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v2 = a1[5];
  v41 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(v2 + 28);
  if ( (_DWORD)v3 == 45 )
    return sub_1E770((__int64)a1);
  if ( (unsigned int)v3 > 0x2D )
  {
    if ( (_DWORD)v3 == 70 )
      return sub_1EB50((__int64)a1);
    v7 = *a1;
    v8 = 72 * a1[1];
    v9 = *a1 + v8;
    goto LABEL_13;
  }
  if ( (_DWORD)v3 == 16 )
    return sub_1B930((__int64)a1);
  if ( (_DWORD)v3 != 44 )
  {
    if ( (unsigned int)v3 > 0x21 )
    {
      v7 = *a1;
      v10 = (unsigned int)(v3 - 10);
      v8 = 72 * a1[1];
      v9 = *a1 + v8;
LABEL_14:
      v11 = 0x5000001200C60103LL;
      if ( _bittest64(&v11, v10) )
      {
LABEL_15:
        ptr = nullptr;
        *(_OWORD *)v37 = 0;
        if ( v8 )
        {
          do
          {
            v26 = *(_QWORD *)(v7 + 8);
            v27 = nullptr;
            if ( v26 )
            {
              v27 = (void *)sub_96030(*(_QWORD *)(v7 + 8));
              memcpy(v27, *(const void **)v7, v26);
            }
            v23 = v37[0];
            v24 = (char *)ptr;
            if ( v37[1] < (char *)v37[0] + 1 )
            {
              ptr = (void *)sub_96080(&ptr, ptr, (char *)v37[0] + 1, 24);
              v23 = v37[0];
              v24 = (char *)ptr;
            }
            v7 += 72;
            v25 = &v24[24 * (_QWORD)v23];
            *(_QWORD *)v25 = v27;
            *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
            ++v37[0];
          }
          while ( v9 != v7 );
        }
        v12 = sub_1F340((__int64)a1, (__int64)&ptr);
        v13 = (char *)ptr;
        v14 = v12;
        if ( ptr )
        {
          v15 = v37[0];
          if ( v37[0] )
          {
            v16 = nullptr;
            do
            {
              v17 = &v13[24 * (_QWORD)v16];
              v18 = *(void **)v17;
              if ( *(_QWORD *)v17 )
              {
                *((_QWORD *)v17 + 1) = 0;
                j__free(v18);
                v13 = (char *)ptr;
              }
              v16 = (char *)v16 + 1;
            }
            while ( v15 != v16 );
          }
          v37[0] = nullptr;
          j__free(v13);
        }
        return v14;
      }
LABEL_40:
      while ( v9 != v7 )
      {
        v28 = v7;
        v7 += 72;
        sub_1B070(a1, v28);
      }
      return 0;
    }
    v19 = 0x208040000LL;
    if ( _bittest64(&v19, v3) )
    {
      v20 = -3;
      LODWORD(v37[0]) = 0;
      v37[1] = nullptr;
      v38 = v37;
      v39 = v37;
      v40 = 0;
      if ( *(_DWORD *)(v2 + 28) == 18 )
        v20 = -1;
      if ( (unsigned int)sub_1C7E0(a1, &ptr, v20) )
      {
        v14 = 7;
      }
      else
      {
        v21 = v40;
        if ( v40 )
        {
          v22 = (__int64)v38;
          if ( v38 == v37 )
          {
LABEL_43:
            v14 = 0;
          }
          else
          {
            while ( 1 )
            {
              v14 = sub_1F8F0((__int64)a1, v22 + 40, *(_DWORD *)(v22 + 32));
              if ( v14 )
                break;
              v22 = std::_Rb_tree_increment();
              if ( (void **)v22 == v37 )
                goto LABEL_43;
            }
          }
        }
        else
        {
          v34 = nullptr;
          v35 = 0;
          v29 = sub_1F8F0((__int64)a1, (__int64)&v34, v20);
          v30 = (char *)v34;
          v14 = v29;
          if ( v34 )
          {
            v31 = v35;
            if ( (_QWORD)v35 )
            {
              do
              {
                v32 = &v30[24 * v21];
                v33 = *(void **)v32;
                if ( *(_QWORD *)v32 )
                {
                  *((_QWORD *)v32 + 1) = 0;
                  j__free(v33);
                  v30 = (char *)v34;
                }
                ++v21;
              }
              while ( v31 != v21 );
            }
            *(_QWORD *)&v35 = 0;
            j__free(v30);
          }
        }
      }
      sub_18C40(v37[1]);
      return v14;
    }
    v7 = *a1;
    v8 = 72 * a1[1];
    v9 = *a1 + v8;
    if ( (_DWORD)v3 == 4 )
      goto LABEL_15;
LABEL_13:
    v10 = (unsigned int)(v3 - 10);
    if ( (unsigned int)v10 > 0x3E )
      goto LABEL_40;
    goto LABEL_14;
  }
  v4 = *a2;
  v5 = haystack;
  if ( *(_QWORD *)(v4 + 32) )
    v5 = *(const char **)(v4 + 24);
  return sub_20DB0((__int64)a1, v5);
}

