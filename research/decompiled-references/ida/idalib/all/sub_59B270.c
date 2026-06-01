__int64 __fastcall sub_59B270(__int64 a1, unsigned int a2, const char *a3, const char *a4)
{
  unsigned __int64 v6; // r14
  size_t v7; // rbp
  __int64 v8; // rax
  const char *v9; // r15
  const char *v10; // r12
  const char *v11; // r15
  char *v12; // rax
  signed __int64 v13; // rbx
  size_t v14; // r10
  __int64 v15; // r14
  size_t v16; // r11
  _BYTE *v17; // rsi
  size_t v18; // rdx
  char *v19; // rax
  __int64 v20; // r15
  size_t v21; // r10
  char *v22; // r14
  _BYTE *v23; // rsi
  size_t v24; // rdx
  const void *v25; // rsi
  char *v26; // rax
  size_t v27; // rax
  __int64 v28; // rbx
  size_t v29; // r15
  size_t v30; // r9
  _BYTE *v31; // rsi
  size_t v32; // rdx
  size_t v33; // rax
  __int64 v34; // rbx
  size_t v35; // rbp
  size_t v36; // r12
  _BYTE *v37; // rsi
  unsigned __int8 v40; // [rsp+8h] [rbp-B0h]
  size_t v41; // [rsp+8h] [rbp-B0h]
  size_t v42; // [rsp+18h] [rbp-A0h]
  size_t v43; // [rsp+18h] [rbp-A0h]
  size_t v44; // [rsp+18h] [rbp-A0h]
  size_t v45; // [rsp+20h] [rbp-98h]
  size_t v46; // [rsp+20h] [rbp-98h]
  size_t v47; // [rsp+28h] [rbp-90h]
  void *v49; // [rsp+40h] [rbp-78h] BYREF
  __int128 v50; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __int128 v52; // [rsp+68h] [rbp-50h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v50 = 0;
  v49 = nullptr;
  if ( get_forced_operand(&v49, a1, a2) <= 0 )
  {
    v40 = 0;
  }
  else
  {
    v6 = 0;
    v40 = 0;
    v7 = strlen(a3);
    v52 = 0;
    ptr = nullptr;
LABEL_3:
    v8 = v50;
    v9 = (const char *)v49;
    if ( (_QWORD)v50 )
    {
      while ( v8 - 1 >= v6 )
      {
        v10 = v9;
LABEL_6:
        v11 = &v9[v6];
        v12 = strstr(&v10[v6], a3);
        if ( !v12 )
          goto LABEL_34;
        v13 = v12 - v10;
        if ( v12 - v10 == -1 )
          goto LABEL_34;
        v14 = v13 - v6;
        v15 = v52;
        v16 = v14;
        if ( (_QWORD)v52 )
        {
          v15 = v52 - 1;
          v16 = v14 + v52 - 1;
        }
        v17 = ptr;
        v18 = v16 + 1;
        if ( *((_QWORD *)&v52 + 1) < v16 + 1 )
        {
          v47 = v16;
          v45 = v14;
          v42 = v16 + 1;
          ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
          v16 = v47;
          v17 = ptr;
          v14 = v45;
          v18 = v42;
        }
        *(_QWORD *)&v52 = v18;
        v17[v16] = 0;
        memmove((char *)ptr + v15, v11, v14);
        if ( !v13 )
          goto LABEL_52;
        v19 = &byte_2CCB1E1;
        if ( (unsigned __int64)v50 | (v13 - 1) )
          v19 = (char *)v49 + v13 - 1;
        if ( !(unsigned __int8)is_valid_cp((unsigned __int8)*v19, 2, 0) )
        {
LABEL_52:
          v6 = v7 + v13;
          v26 = &byte_2CCB1E1;
          if ( (unsigned __int64)v50 | (v7 + v13) )
            v26 = (char *)v49 + v6;
          if ( !(unsigned __int8)is_valid_cp((unsigned __int8)*v26, 2, 0) )
          {
            if ( a4 )
            {
              v27 = strlen(a4);
              v28 = v52;
              v29 = v27;
              v30 = v27;
              if ( (_QWORD)v52 )
              {
                v28 = v52 - 1;
                v30 = v27 + v52 - 1;
              }
              v31 = ptr;
              v32 = v30 + 1;
              if ( *((_QWORD *)&v52 + 1) < v30 + 1 )
              {
                v44 = v30;
                v41 = v30 + 1;
                ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
                v30 = v44;
                v31 = ptr;
                v32 = v41;
              }
              *(_QWORD *)&v52 = v32;
              v31[v30] = 0;
              memmove((char *)ptr + v28, a4, v29);
            }
            v40 = 1;
            goto LABEL_3;
          }
        }
        v20 = v52;
        v21 = v7;
        v22 = (char *)v49 + v13;
        if ( (_QWORD)v52 )
        {
          v20 = v52 - 1;
          v21 = v7 + v52 - 1;
        }
        v23 = ptr;
        v24 = v21 + 1;
        if ( *((_QWORD *)&v52 + 1) < v21 + 1 )
        {
          v46 = v21;
          v43 = v21 + 1;
          ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
          v21 = v46;
          v23 = ptr;
          v24 = v43;
        }
        *(_QWORD *)&v52 = v24;
        v23[v21] = 0;
        v25 = v22;
        v6 = v7 + v13;
        memmove((char *)ptr + v20, v25, v7);
        v8 = v50;
        v9 = (const char *)v49;
        if ( !(_QWORD)v50 )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( !v6 )
      {
        v10 = haystack;
        goto LABEL_6;
      }
    }
    v11 = &v9[v6];
LABEL_34:
    if ( v11 )
    {
      v33 = strlen(v11);
      v34 = v52;
      v35 = v33;
      v36 = v33;
      if ( (_QWORD)v52 )
      {
        v34 = v52 - 1;
        v36 = v33 + v52 - 1;
      }
      v37 = ptr;
      if ( *((_QWORD *)&v52 + 1) < v36 + 1 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v36 + 1, 1);
        v37 = ptr;
      }
      *(_QWORD *)&v52 = v36 + 1;
      v37[v36] = 0;
      memmove((char *)ptr + v34, v11, v35);
    }
    if ( v40 )
    {
      if ( (_QWORD)v52 )
        set_forced_operand(a1, a2, ptr);
      else
        set_forced_operand(a1, a2, haystack);
    }
    if ( ptr )
    {
      *(_QWORD *)&v52 = 0;
      qfree(ptr);
    }
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  return v40;
}
